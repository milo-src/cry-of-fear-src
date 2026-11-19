"""Compile real foliage geometry code with Waf; exercise bounds and seam continuity."""
import os
from pathlib import Path
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]
source=ROOT/'build/foliage-contract-source'
output=ROOT/'build/foliage-contract'
source.mkdir(parents=True,exist_ok=True)
(source/'wscript').write_text('''def options(opt):
    opt.load('compiler_c')
def configure(conf):
    conf.load('compiler_c')
def build(bld):
    bld.program(source='contract.c',target='contract')
''')
code='''#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "SDK"
#include "MESH"
int main(void) {
    RgPrimitiveVertex v[4]={0},out[24],again[24];
    unsigned indices[6]={0,1,2,0,2,3};
    float uv[4][2]={{0,0},{1,0},{1,1},{0,1}};
    for(int i=0;i<4;++i){
        for(int j=0;j<2;++j){v[i].texCoord[j]=uv[i][j];v[i].position[j]=uv[i][j]*200;}
        v[i].normal[2]=1;v[i].color=0xff123456;
    }
    assert(CofLeafSubdivide(v,4,indices,6,out,24)==24);
    assert(CofLeafSubdivide(v,4,indices,6,again,24)==24);
    assert(!memcmp(out,again,sizeof(out))); /* no time/view-dependent geometry */
    float maxHeight=0;
    for(int i=0;i<24;++i){
        assert(out[i].position[2]>=-0.0001f && out[i].position[2]<=6.001f);
        assert(fabsf(CofLeafDot(out[i].normal,out[i].normal)-1)<.0001f);
        assert(out[i].color==0xff123456);
        for(int j=0;j<2;++j)assert(fabsf(out[i].position[j]-out[i].texCoord[j]*200)<.0001f);
        if(out[i].position[2]>maxHeight)maxHeight=out[i].position[2];
        for(int k=0;k<i;++k)if(!memcmp(out[i].texCoord,out[k].texCoord,sizeof(out[i].texCoord))) {
            for(int j=0;j<3;++j)assert(fabsf(out[i].position[j]-out[k].position[j])<.0001f);
        }
    }
    assert(maxHeight>5); /* actual geometry, not only altered normals */
    assert(CofLeafSubdivide(v,4,indices,6,out,23)==0);
    assert(!memcmp(out,again,sizeof(out))); /* capacity failure is atomic */
    indices[2]=100;
    assert(CofLeafSubdivide(v,4,indices,6,out,24)==0);
    assert(!memcmp(out,again,sizeof(out))); /* invalid index cannot write */
    indices[2]=2;
    for(int i=0;i<4;++i)v[i].texCoord[0]=v[i].texCoord[1]=0;
    assert(CofLeafSubdivide(v,4,indices,6,out,24)==24);
    for(int i=0;i<24;++i)assert(isfinite(out[i].position[2]) && out[i].position[2]==0);
    puts("PASS: foliage geometry bounds, deterministic deformation, shared UV seams, normals, capacity and degenerate UVs");
    return 0;
}
'''
code=code.replace('SDK',(ROOT/'deps/rtx/sdk/Include/RTGL1/RTGL1.h').as_posix())
code=code.replace('MESH',(ROOT/'src/cof/render/rtx_foliage_mesh.h').as_posix())
(source/'contract.c').write_text(code)
for args in (['configure','-o',str(output)],['build']):
    subprocess.run([sys.executable,str(ROOT/'external/hlsdk-portable/waf'),*args,'--top='+str(source)],
        cwd=source,check=True,env=dict(os.environ,PYTHONUTF8='1',PYTHONIOENCODING='utf-8',VSLANG='1033'))
subprocess.run([str(output/'contract.exe')],check=True)
