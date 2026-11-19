// Test-only observations of the actual weather/lens state; no forced exposure.
static void CofLensClientTest() {
    if(!std::getenv("COF_RTX_LENSTEST")) return;
    static double began=-1;
    static int sample, failures;
    double now=gEngfuncs.GetClientTime();
    if(began<0) began=now;
    double t=now-began;
    const int moments[]={4,11,12,17,22,26,30};
    if(sample<7 && t>=moments[sample]) {
        float wet=gEngfuncs.pfnGetCvarFloat("cof_lens_wetness");
        bool pass=sample==0?wet<.001f:sample==1||sample==2?wet>.8f:
            sample==3?wet>.02f&&wet<.4f:sample==4?wet<.06f:wet<.02f;
        if(!pass)++failures;
        gEngfuncs.Con_Printf("COF_LENS_CAPTURE %d %s wet=%.4f exposure=%.4f visible=%.0f\n",
            sample,pass?"PASS":"FAIL",wet,rainExposure,gEngfuncs.pfnGetCvarFloat("cof_lens_visible"));
        ++sample;
    }
    if(t>33) {
        gEngfuncs.Con_Printf("COF_LENS_COMPLETE failures=%d\n",failures);
        gEngfuncs.pfnClientCmd("quit\n");
    }
}
