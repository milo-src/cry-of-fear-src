// Authored vehicle ORM.A = inverse glass coverage; normal.A = 253/255.
// Coated dark glass approximation using the tracer's existing reflective BRDF.
// Absorb the painted cabin instead of reflecting over a bright static picture.
#ifndef COF_VEHICLE_GLASS_GLSL
#define COF_VEHICLE_GLASS_GLSL
float cofVehicleGlass(vec4 orm, float marker, inout vec3 albedo,
                      inout float roughness, inout float metallic)
{
    if(abs(marker-253.0/255.0)>.001)return 0.0;
    float glass=clamp(1.0-orm.a,0.0,1.0);
    // This is reflectance, not emitted light. The metallic BRDF is an artistic
    // tinted coating approximation: no diffuse cabin or invented transparency.
    albedo=mix(albedo,vec3(.10,.12,.13),glass);
    metallic=mix(metallic,1.0,glass);
    roughness=mix(roughness,.055,glass);
    return glass;
}
#endif
