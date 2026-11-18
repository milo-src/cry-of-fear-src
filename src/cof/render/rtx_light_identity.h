/* A light's lifetime is refreshed every client tick; it is not its identity.
 * Preserve temporal correspondence while a slot is live, including key == 0.
 * Invalidate on disappearance, owner change or a map-time rewind. */
#ifndef COF_RTX_LIGHT_IDENTITY_H
#define COF_RTX_LIGHT_IDENTITY_H
#include <stdint.h>

typedef struct CofRTLightIdentity {
    uint32_t generation;
    int active, key;
    double time;
} CofRTLightIdentity;

static uint64_t CofRTLightId(CofRTLightIdentity *state, unsigned domain,
                           unsigned slot, int key, int active, double time)
{
    if (!active) {
        state->active = 0;
        return 0;
    }
    if (!state->active || state->key != key || time < state->time) {
        ++state->generation;
        if (!state->generation) ++state->generation;
    }
    state->active = 1;
    state->key = key;
    state->time = time;
    /* Separate from upstream's small static/particle/flashlight identifiers. */
    return ((uint64_t)domain << 56) | ((uint64_t)slot << 32) | state->generation;
}
#endif
