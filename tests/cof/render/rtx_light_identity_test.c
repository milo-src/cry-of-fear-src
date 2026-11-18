#include <assert.h>
#include <stdio.h>
#include "../../../src/cof/render/rtx_light_identity.h"

int main(void)
{
    CofRTLightIdentity state = {0}, other = {0};
    uint64_t id = CofRTLightId(&state, 1, 3, 42, 1, 1.0);
    /* A persistent emitter refreshed on every frame must keep its history. */
    for (int frame=1; frame<=1000; ++frame)
        assert(CofRTLightId(&state, 1, 3, 42, 1, 1.0+frame*.016) == id);
    assert(CofRTLightId(&other, 2, 3, 42, 1, 17) != id);
    assert(CofRTLightId(&state, 1, 3, 43, 1, 18) != id);
    id = CofRTLightId(&state, 1, 3, 43, 1, 18);
    assert(CofRTLightId(&state, 1, 3, 43, 0, 19) == 0);
    assert(CofRTLightId(&state, 1, 3, 43, 1, 20) != id);
    id = CofRTLightId(&state, 1, 3, 43, 1, 20);
    assert(CofRTLightId(&state, 1, 3, 43, 1, 0) != id);
    id = CofRTLightId(&state, 1, 3, 0, 1, 1);
    assert(CofRTLightId(&state, 1, 3, 0, 1, 2) == id);
    puts("PASS: persistent, expired, replaced, unkeyed and map-rewind RT lights");
    return 0;
}
