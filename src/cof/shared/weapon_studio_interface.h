/* Optional CoF extension to the SDK studio draw interface. Include after
 * r_studioint.h. The base prefix is unchanged; engines that do not recognize
 * the version tag still call its standard StudioDrawModel/StudioDrawPlayer.
 * RTX recognizes the tag and lends its native draw callback for each hand,
 * preserving its own skeletal/mesh submission pipeline. */
#ifndef COF_WEAPON_STUDIO_INTERFACE_H
#define COF_WEAPON_STUDIO_INTERFACE_H

#define COF_WEAPON_STUDIO_VERSION 0x434F4601
#define COF_WEAPON_HAND_LEFT 0x434F4801
#define COF_WEAPON_HAND_RIGHT 0x434F4802

typedef struct CofWeaponStudioInterface
{
    r_studio_interface_t base;
    /* Returns -1 when no dual viewmodel is active. nativeDraw must draw the
     * current engine entity and must not dispatch this extension recursively. */
    int (*DrawHands)(int flags, int (*nativeDraw)(int flags));
    int (*MirrorHand)(void);
    void (*HandEvent)(int begin);
} CofWeaponStudioInterface;

#endif
