
/* public: void __thiscall CEnvFog::ResumeThink(void) */

void __thiscall CEnvFog::ResumeThink(CEnvFog *this)

{
                    /* 0x9aad0  249  ?ResumeThink@CEnvFog@@QAEXXZ */
  *(code **)(this + 0x78) = FadeInDone;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

