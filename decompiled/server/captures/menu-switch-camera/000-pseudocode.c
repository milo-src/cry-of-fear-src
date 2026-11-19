
void FUN_10113b60(int *param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  float10 fVar7;
  float fVar8;
  int local_18;
  int *local_14;
  
  iVar2 = FUN_100183a0(param_3,in_ECX[0x49]);
  if (iVar2 != 0) {
    if (param_4 == 666.0) {
      local_14 = (int *)0x1;
      *(undefined4 *)(in_ECX[1] + 0x248) = 0;
      in_ECX[0x49] = 0;
      if (0 < (int)DAT_10223188[0x24]) {
        do {
          piVar3 = (int *)FUN_10119680(local_14);
          if (piVar3 != (int *)0x0) {
            iVar2 = (**(code **)(*piVar3 + 0xbc))();
            if (iVar2 != 0) {
              FUN_10117180(*(undefined4 *)(piVar3[1] + 0x20c),*(undefined4 *)(piVar3[1] + 0x20c));
              FUN_10017740(0);
              *(undefined4 *)(in_ECX[1] + 0x248) = 0;
              *(uint *)(piVar3[1] + 0x1a8) = *(uint *)(piVar3[1] + 0x1a8) & 0xffffff7f;
              *(undefined4 *)(piVar3[1] + 0x170) = 0x40000000;
              FUN_100deff0(1);
            }
            iVar2 = in_ECX[1];
            if (((*(byte *)(iVar2 + 0x1a4) & 0x10) != 0) && (in_ECX[0x4c] == 0)) {
              piVar3[0x940] = piVar3[0x940] & 0xfffffff7;
              iVar2 = in_ECX[1];
            }
            if (((*(byte *)(iVar2 + 0x1a4) & 0x20) != 0) && (in_ECX[0x4b] == 0)) {
              piVar3[0x7ad] = 0;
              iVar2 = in_ECX[1];
            }
            if (*(int *)(iVar2 + 0x24c) != 0) {
              piVar3[0x940] = piVar3[0x940] & 0xffffffef;
              iVar2 = in_ECX[1];
            }
            if ((*(uint *)(iVar2 + 0x1a4) & 0x100) != 0) {
              (*DAT_10223000)(1,DAT_102265f4,0,*(undefined4 *)(piVar3[1] + 0x20c));
              (*DAT_10223008)(0);
              (*DAT_10223008)(0);
              (*DAT_10223020)(&DAT_101a2496);
              (*DAT_10223008)(0);
              (*DAT_10223004)();
            }
            FUN_10017740(0);
          }
          local_14 = (int *)((int)local_14 + 1);
        } while ((int)local_14 <= (int)DAT_10223188[0x24]);
        return;
      }
    }
    else {
      iVar2 = in_ECX[0x49];
      in_ECX[0x49] = (uint)(iVar2 == 0);
      if (iVar2 != 0) {
        in_ECX[0x42] = (int)*DAT_10223188;
        return;
      }
      local_14 = param_1;
      if ((param_1 == (int *)0x0) || (iVar2 = (**(code **)(*param_1 + 0xd0))(), iVar2 == 0)) {
        iVar2 = (*DAT_10223068)(1);
        if ((iVar2 == 0) && (iVar2 = (*DAT_1022305c)(0), iVar2 == 0)) {
          local_14 = (int *)0x0;
        }
        else {
          local_14 = *(int **)(iVar2 + 0x7c);
        }
      }
      FUN_10017740(local_14);
      if ((local_14 != (int *)0x0) && (iVar2 = (**(code **)(*local_14 + 0xd0))(), iVar2 != 0)) {
        FUN_100f5d50();
      }
      in_ECX[0x42] = (int)((float)in_ECX[0x41] + *DAT_10223188);
      *(int *)(in_ECX[1] + 0x1fc) = in_ECX[0x46];
      in_ECX[0x45] = in_ECX[0x46];
      if ((local_14[0x94b] != 0) && (*(char *)(local_14[0x94b] + 0x178) != '\0')) {
        (*DAT_10223000)(1,DAT_10226668,0,*(undefined4 *)(local_14[1] + 0x20c));
        (*DAT_1022301c)(0);
        (*DAT_1022301c)(0);
        (*DAT_1022301c)(0);
        (*DAT_10223008)(0);
        (*DAT_10223008)(1);
        (*DAT_10223004)();
        (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(local_14[1] + 0x20c));
        (*DAT_1022301c)(0x43af0000);
        (*DAT_10223008)(0);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        *(undefined4 *)(local_14[1] + 0x274) = 0x42b40000;
      }
      if ((*(byte *)(in_ECX[1] + 0x1a4) & 2) == 0) {
        uVar6 = (**(code **)(*in_ECX + 0xdc))();
        FUN_10017740(uVar6);
      }
      else {
        in_ECX[0x3d] = in_ECX[0x3b];
        in_ECX[0x3e] = in_ECX[0x3c];
      }
      iVar2 = FUN_10017780();
      if (iVar2 == 0) {
        FUN_10119810(local_14,&DAT_101e4300,5,0);
        return;
      }
      iVar2 = in_ECX[1];
      if ((*(uint *)(iVar2 + 0x1a4) & 0x200) != 0) {
        FUN_100f4050(0xa6);
        iVar2 = in_ECX[1];
      }
      if ((*(byte *)(iVar2 + 0x1a4) & 4) != 0) {
        FUN_100deff0(0);
      }
      if (in_ECX[0x40] == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_10118590(0,(int)DAT_10223188[0x26] + in_ECX[0x40]);
      }
      in_ECX[0x3f] = iVar2;
      piVar3 = (int *)in_ECX[0x3f];
      in_ECX[0x43] = (int)*DAT_10223188;
      if (piVar3 != (int *)0x0) {
        if (*(float *)(piVar3[1] + 0x1fc) != 0.0) {
          in_ECX[0x45] = (int)*(float *)(piVar3[1] + 0x1fc);
        }
        fVar7 = (float10)(**(code **)(*piVar3 + 0x98))();
        in_ECX[0x43] = (int)((float)fVar7 + (float)in_ECX[0x43]);
      }
      iVar2 = in_ECX[1];
      if ((*(byte *)(iVar2 + 0x1a4) & 1) == 0) {
        uVar6 = 0;
        *(undefined8 *)(iVar2 + 0x20) = 0;
      }
      else {
        FUN_10119fe0();
        *(uint *)(in_ECX[1] + 0x50) = *(uint *)(local_14[1] + 0x50) ^ 0x80000000;
        *(undefined4 *)(in_ECX[1] + 0x54) = *(undefined4 *)(local_14[1] + 0x54);
        if (in_ECX[0x51] == 0) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = (float)in_ECX[0x51];
        }
        *(float *)(in_ECX[1] + 0x58) = fVar8;
        iVar4 = local_14[1];
        iVar2 = in_ECX[1];
        *(undefined8 *)(iVar2 + 0x20) = *(undefined8 *)(iVar4 + 0x20);
        uVar6 = *(undefined4 *)(iVar4 + 0x28);
      }
      *(undefined4 *)(iVar2 + 0x28) = uVar6;
      if (in_ECX[0x4a] == 0) {
        local_18 = 1;
        if (0 < (int)DAT_10223188[0x24]) {
          do {
            piVar3 = (int *)FUN_10119680(local_18);
            if (piVar3 != (int *)0x0) {
              FUN_10117180(*(undefined4 *)(piVar3[1] + 0x20c),*(undefined4 *)(in_ECX[1] + 0x20c));
              FUN_10017740(in_ECX);
              *(undefined4 *)(in_ECX[1] + 0x248) = 1;
              *(uint *)(piVar3[1] + 0x1a8) = *(uint *)(piVar3[1] + 0x1a8) | 0x80;
              *(undefined4 *)(piVar3[1] + 0x170) = 0;
              iVar2 = in_ECX[1];
              if ((*(byte *)(iVar2 + 0x1a4) & 4) != 0) {
                FUN_100deff0(0);
                iVar2 = in_ECX[1];
              }
              if ((((*(uint *)(iVar2 + 0x1a4) & 0x800) != 0) && (piVar3[0x16b] != 0)) &&
                 (iVar2 = (**(code **)(*piVar3 + 0xbc))(), iVar2 != 0)) {
                FUN_10119900(piVar3[0x16b]);
                piVar3[0x16b] = 0;
                FUN_10017740(0);
                (*DAT_10223000)(1,DAT_1022664c,0,*(undefined4 *)(piVar3[1] + 0x20c));
                (*DAT_10223010)(0);
                (*DAT_10223008)(0);
                (*DAT_10223004)();
                (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(piVar3[1] + 0x20c));
                (*DAT_1022301c)(0x42480000);
                (*DAT_10223008)(0);
                (*DAT_10223008)(0);
                (*DAT_10223004)();
                *(undefined4 *)(piVar3[1] + 0x274) = 0x42b40000;
              }
              iVar2 = in_ECX[1];
              if ((*(byte *)(iVar2 + 0x1a4) & 0x10) != 0) {
                piVar3[0x940] = piVar3[0x940] | 8;
                iVar2 = in_ECX[1];
              }
              if ((*(byte *)(iVar2 + 0x1a4) & 0x20) != 0) {
                piVar3[0x7ad] = 1;
                iVar2 = in_ECX[1];
              }
              if (*(int *)(iVar2 + 0x24c) != 0) {
                piVar3[0x940] = piVar3[0x940] | 0x10;
              }
              if ((*(uint *)(in_ECX[1] + 0x1a4) & 0x100) != 0) {
                (*DAT_10223000)(1,DAT_102265f4,0,*(undefined4 *)(piVar3[1] + 0x20c));
                (*DAT_10223008)(1);
                (*DAT_10223008)(1);
                (*DAT_10223020)(&DAT_101a2496);
                (*DAT_10223008)(0);
                (*DAT_10223004)();
              }
              FUN_10017740(in_ECX);
              if ((char)piVar3[0x89e] != '\0') {
                FUN_100f5c90();
              }
            }
            local_18 = local_18 + 1;
          } while (local_18 <= (int)DAT_10223188[0x24]);
        }
      }
      else {
        iVar2 = FUN_10118590(0,(int)DAT_10223188[0x26] + in_ECX[0x4a]);
        if ((iVar2 != 0) && (local_18 = 1, 0 < (int)DAT_10223188[0x24])) {
          do {
            iVar4 = FUN_10119680(local_18);
            if (iVar4 != 0) {
              FUN_10117180(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),
                           *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
              FUN_10017740(in_ECX);
              *(undefined4 *)(in_ECX[1] + 0x248) = 1;
              puVar1 = (uint *)(*(int *)(iVar4 + 4) + 0x1a8);
              *puVar1 = *puVar1 | 0x80;
              *(undefined4 *)(*(int *)(iVar4 + 4) + 0x170) = 0;
              iVar5 = in_ECX[1];
              if ((*(byte *)(iVar5 + 0x1a4) & 4) != 0) {
                FUN_100deff0(0);
                iVar5 = in_ECX[1];
              }
              if ((*(byte *)(iVar5 + 0x1a4) & 0x10) != 0) {
                *(uint *)(iVar4 + 0x2500) = *(uint *)(iVar4 + 0x2500) | 8;
                iVar5 = in_ECX[1];
              }
              if ((*(uint *)(iVar5 + 0x1a4) & 0x100) != 0) {
                (*DAT_10223000)(1,DAT_102265f4,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
                (*DAT_10223008)(1);
                (*DAT_10223008)(1);
                (*DAT_10223020)(&DAT_101a2496);
                (*DAT_10223008)(0);
                (*DAT_10223004)();
              }
              FUN_10017740(in_ECX);
              if (*(char *)(iVar4 + 0x2278) != '\0') {
                FUN_100f5c90();
              }
            }
            local_18 = local_18 + 1;
          } while (local_18 <= (int)DAT_10223188[0x24]);
        }
      }
      if ((in_ECX[0x53] != 0) &&
         (iVar2 = FUN_10118590(0,(int)DAT_10223188[0x26] + in_ECX[0x53]), iVar2 != 0)) {
        piVar3 = (int *)FUN_100177a0();
        iVar4 = (**(code **)(*piVar3 + 0xd0))();
        if (iVar4 != 0) {
          iVar4 = FUN_100177a0();
          (*DAT_10223000)(1,DAT_10226618,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
          uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
          (*DAT_10223014)(uVar6);
          (*DAT_10223008)(in_ECX[0x54]);
          (*DAT_10223004)();
        }
      }
      (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),
                      *(int *)(local_14[1] + 0xb8) + (int)DAT_10223188[0x26]);
      *(undefined4 *)(in_ECX[1] + 0x248) = 1;
      in_ECX[0x1e] = (int)CTriggerCamera::FollowTarget;
      (**(code **)(*in_ECX + 8))(0);
      iVar2 = FUN_100177a0();
      iVar2 = *(int *)(iVar2 + 4);
      *(undefined8 *)(in_ECX + 0x4e) = *(undefined8 *)(iVar2 + 0x74);
      in_ECX[0x50] = *(int *)(iVar2 + 0x7c);
      in_ECX[0x44] = 0;
      FUN_1010e570();
    }
  }
  return;
}

