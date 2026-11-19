// Local rain-only video, reconstructed from the shipped menu's additive layer.
// CRN1 is our bounded RGB delta-run container, not a proprietary video decoder.
namespace {
struct MenuRainFilm {
    byte* data=nullptr;
    int length=0, texture=0, decoded=-1;
    unsigned width=0,height=0,frames=0,fps=0,key=0,base=0;
    bool attempted=false;
    std::vector<byte> rgba;
    unsigned word(unsigned pos) const {
        return unsigned(data[pos]) | (unsigned(data[pos+1])<<8) |
            (unsigned(data[pos+2])<<16) | (unsigned(data[pos+3])<<24);
    }
    void reset() {
        if(data)gEngfuncs.COM_FreeFile(data);
        // VidInit invalidates renderer handles; do not free stale texture IDs.
        data=nullptr;length=0;texture=0;decoded=-1;attempted=false;
        std::vector<byte>().swap(rgba);
    }
    bool load() {
        if(attempted)return data!=nullptr;
        attempted=true;
        data=gEngfuncs.COM_LoadFile(const_cast<char*>("rtx_menu/rain.crn"),5,&length);
        if(!data)return false;
        bool valid=length>=24 && length<=256*1024*1024 && !std::memcmp(data,"CRN1",4);
        if(valid) {
            width=word(4);height=word(8);frames=word(12);fps=word(16);key=word(20);
            valid=width>=16 && width<=1280 && height>=16 && height<=720 &&
                frames>0 && frames<=2500 && fps>0 && fps<=60 && key>0 && key<=125;
        }
        if(valid) {
            base=24+(frames+1)*4;
            valid=base<unsigned(length) && word(24)==0;
            for(unsigned i=0;valid && i<frames;++i)
                valid=word(24+i*4)<word(28+i*4) && word(28+i*4)<=unsigned(length)-base;
            valid=valid && word(24+frames*4)==unsigned(length)-base;
        }
        if(!valid) {
            gEngfuncs.Con_Printf("COF_MENU_RAIN invalid cache; using procedural fallback\n");
            gEngfuncs.COM_FreeFile(data);data=nullptr;return false;
        }
        rgba.resize(width*height*4,255);
        gEngfuncs.Con_Printf("COF_MENU_RAIN loaded frames=%u fps=%u size=%ux%u bytes=%d\n",frames,fps,width,height,length);
        return true;
    }
    bool decode(unsigned frame) {
        unsigned pos=base+word(24+frame*4),end=base+word(28+frame*4),pixel=0;
        const unsigned count=width*height;
        while(pos<end && pixel<count) {
            if(end-pos<2)return false;
            unsigned run=unsigned(data[pos])|(unsigned(data[pos+1])<<8);pos+=2;
            unsigned n=(run&32767)+1;
            if(n>count-pixel)return false;
            if(run&32768) {
                if(n*3>end-pos)return false;
                for(unsigned j=0;j<n;++j) {
                    const unsigned red=data[pos++],green=data[pos++],blue=data[pos++];
                    const byte grey=byte((red*54+green*183+blue*19+128)>>8);
                    rgba[(pixel+j)*4]=rgba[(pixel+j)*4+1]=rgba[(pixel+j)*4+2]=grey;
                }
            } else if(frame%key==0) return false; // independent keyframes must fill every pixel
            pixel+=n;
        }
        return pixel==count && pos==end;
    }
} menuRainFilm;
}

bool CofDrawMenuRain(float time,float lookX,float lookY) {
    if(!renderer.GL_CreateTexture || !renderer.GL_FreeTexture || !renderer.GL_FindTexture ||
       !gEngfuncs.pTriAPI || !menuRainFilm.load())return false;
    auto& film=menuRainFilm;
    const int frame=int(std::fmod(std::fmax(0.f,time)*film.fps,float(film.frames)));
    if(frame!=film.decoded) {
        int first=film.decoded+1;
        if(film.decoded<0 || frame<film.decoded || frame-film.decoded>int(film.key))
            first=frame/int(film.key)*int(film.key);
        for(int f=first;f<=frame;++f)if(!film.decode(unsigned(f))) {
            gEngfuncs.Con_Printf("COF_MENU_RAIN corrupt frame=%d; fallback\n",f);
            gEngfuncs.COM_FreeFile(film.data);film.data=nullptr;return false;
        }
        // Pinned RTGL prefers existing materials: TF_UPDATE alone silently
        // keeps the first frame. Delete this owned name before re-uploading;
        // RTGL defers destruction of in-flight images by frame index.
        const int existing=renderer.GL_FindTexture("#cof/menu_rain_film");
        if(existing)renderer.GL_FreeTexture(existing);
        const int flags=TF_CLAMP|TF_NOMIPMAP;
        film.texture=renderer.GL_CreateTexture("#cof/menu_rain_film",film.width,film.height,
                                               film.rgba.data(),texFlags_t(flags));
        film.decoded=frame;
    }
    if(!film.texture)return false;
    // Preserve 16:9 drop shapes; cover wide/tall viewports without stretching.
    const float scale=std::fmax(ScreenWidth/960.f,ScreenHeight/540.f)*1.04f;
    const float width=960*scale,height=540*scale;
    const float x=(ScreenWidth-width)*.5f-lookX*ScreenWidth*.006f;
    const float y=(ScreenHeight-height)*.5f-lookY*ScreenHeight*.006f;
    const float fade=.42f*std::fmax(0.f,std::fmin(1.f,(time-2.f)*.5f));
    auto* tri=gEngfuncs.pTriAPI;
    tri->RenderMode(kRenderTransAdd);tri->CullFace(TRI_NONE);
    renderer.GL_Bind(0,film.texture);tri->Color4f(1,1,1,fade);
    tri->Begin(TRI_QUADS);
    tri->TexCoord2f(0,0);tri->Vertex3f(x,y,0);
    tri->TexCoord2f(1,0);tri->Vertex3f(x+width,y,0);
    tri->TexCoord2f(1,1);tri->Vertex3f(x+width,y+height,0);
    tri->TexCoord2f(0,1);tri->Vertex3f(x,y+height,0);
    tri->End();tri->Color4f(1,1,1,1);tri->RenderMode(kRenderNormal);
    gEngfuncs.Cvar_SetValue("cof_menu_rain_frame",float(frame));
    return true;
}
