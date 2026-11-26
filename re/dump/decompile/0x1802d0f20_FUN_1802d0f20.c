// 0x1802d0f20  FUN_1802d0f20
// size=1565 thunk=false
// signature: undefined FUN_1802d0f20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d0f20(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  int local_88;
  ushort local_84;
  byte local_82;
  byte local_81;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (*(char *)(lVar1 + 0x31) != '\0') {
    bVar5 = false;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    if (*(code **)(lVar1 + 0x40) != (code *)0x0) {
      iVar3 = (**(code **)(lVar1 + 0x40))(0,1,&local_78);
      bVar5 = iVar3 == 0;
    }
    *(bool *)(lVar1 + 0x30) = bVar5;
    *(undefined1 *)(lVar1 + 0x31) = 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  if (((*(char *)(lVar1 + 0x30) != '\0') && (*(code **)(lVar1 + 0x48) != (code *)0x0)) &&
     (iVar3 = (**(code **)(lVar1 + 0x48))(0,&local_88), iVar3 == 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    fVar2 = DAT_180380bb0;
    if ((*(int *)(lVar1 + 0x50) == 0) || (*(int *)(lVar1 + 0x50) != local_88)) {
      *(int *)(lVar1 + 0x50) = local_88;
      if (*(char *)(param_1 + 0xba5) != '\0') {
        bVar4 = (byte)local_84 >> 4 & 1;
        fVar9 = fVar2;
        if (bVar4 == 0) {
          fVar9 = 0.0;
        }
        FUN_180267b90(param_1,0x278,bVar4,fVar9);
        if (*(char *)(param_1 + 0xba5) != '\0') {
          bVar4 = (byte)local_84 >> 5 & 1;
          fVar9 = fVar2;
          if (bVar4 == 0) {
            fVar9 = 0.0;
          }
          FUN_180267b90(param_1,0x279,bVar4,fVar9);
          if (*(char *)(param_1 + 0xba5) != '\0') {
            bVar4 = (byte)(local_84 >> 0xe);
            fVar9 = fVar2;
            if ((bVar4 & 1) == 0) {
              fVar9 = 0.0;
            }
            FUN_180267b90(param_1,0x27a,bVar4 & 1,fVar9);
            if (*(char *)(param_1 + 0xba5) != '\0') {
              bVar4 = (byte)(local_84 >> 0xd);
              fVar9 = fVar2;
              if ((bVar4 & 1) == 0) {
                fVar9 = 0.0;
              }
              FUN_180267b90(param_1,0x27b,bVar4 & 1,fVar9);
              if (*(char *)(param_1 + 0xba5) != '\0') {
                fVar9 = fVar2;
                if (-1 < (short)local_84) {
                  fVar9 = 0.0;
                }
                FUN_180267b90(param_1,0x27c,local_84 >> 0xf,fVar9);
                if (*(char *)(param_1 + 0xba5) != '\0') {
                  bVar4 = (byte)(local_84 >> 0xc);
                  fVar9 = fVar2;
                  if ((bVar4 & 1) == 0) {
                    fVar9 = 0.0;
                  }
                  FUN_180267b90(param_1,0x27d,bVar4 & 1,fVar9);
                  if (*(char *)(param_1 + 0xba5) != '\0') {
                    bVar4 = (byte)local_84 >> 2 & 1;
                    fVar9 = fVar2;
                    if (bVar4 == 0) {
                      fVar9 = 0.0;
                    }
                    FUN_180267b90(param_1,0x27e,bVar4,fVar9);
                    if (*(char *)(param_1 + 0xba5) != '\0') {
                      bVar4 = (byte)local_84 >> 3 & 1;
                      fVar9 = fVar2;
                      if (bVar4 == 0) {
                        fVar9 = 0.0;
                      }
                      FUN_180267b90(param_1,0x27f,bVar4,fVar9);
                      if (*(char *)(param_1 + 0xba5) != '\0') {
                        fVar9 = fVar2;
                        if ((local_84 & 1) == 0) {
                          fVar9 = 0.0;
                        }
                        FUN_180267b90(param_1,0x280,(byte)local_84 & 1,fVar9);
                        if (*(char *)(param_1 + 0xba5) != '\0') {
                          bVar4 = (byte)local_84 >> 1 & 1;
                          fVar9 = fVar2;
                          if (bVar4 == 0) {
                            fVar9 = 0.0;
                          }
                          FUN_180267b90(param_1,0x281,bVar4,fVar9);
                          if (*(char *)(param_1 + 0xba5) != '\0') {
                            fVar9 = fVar2;
                            if ((local_84 & 0x100) == 0) {
                              fVar9 = 0.0;
                            }
                            FUN_180267b90(param_1,0x282,(byte)(local_84 >> 8) & 1,fVar9);
                            if (*(char *)(param_1 + 0xba5) != '\0') {
                              bVar4 = (byte)(local_84 >> 9);
                              fVar9 = fVar2;
                              if ((bVar4 & 1) == 0) {
                                fVar9 = 0.0;
                              }
                              FUN_180267b90(param_1,0x283,bVar4 & 1,fVar9);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      fVar7 = DAT_1803811b0;
      fVar9 = DAT_1803809ec;
      fVar6 = (float)(int)(local_82 - 0x1e) / DAT_1803811b0;
      if (0.0 <= fVar6) {
        fVar8 = fVar2;
        if (fVar6 <= fVar2) {
          fVar8 = fVar6;
        }
      }
      else {
        fVar8 = 0.0;
      }
      FUN_180267b90(param_1,0x284,DAT_1803809ec < fVar6,fVar8);
      fVar7 = (float)(int)(local_81 - 0x1e) / fVar7;
      if (0.0 <= fVar7) {
        fVar6 = fVar2;
        if (fVar7 <= fVar2) {
          fVar6 = fVar7;
        }
      }
      else {
        fVar6 = 0.0;
      }
      FUN_180267b90(param_1,0x285,fVar9 < fVar7,fVar6);
      if (*(char *)(param_1 + 0xba5) != '\0') {
        bVar4 = (byte)local_84 >> 6 & 1;
        fVar7 = fVar2;
        if (bVar4 == 0) {
          fVar7 = 0.0;
        }
        FUN_180267b90(param_1,0x286,bVar4,fVar7);
        if (*(char *)(param_1 + 0xba5) != '\0') {
          fVar7 = fVar2;
          if ((char)-((char)(byte)local_84 >> 7) == '\0') {
            fVar7 = 0.0;
          }
          FUN_180267b90(param_1,0x287,-((char)(byte)local_84 >> 7),fVar7);
        }
      }
      fVar7 = DAT_180381440;
      fVar6 = (float)(local_80 + 0x1ea9) / DAT_180381440;
      if (0.0 <= fVar6) {
        fVar8 = fVar2;
        if (fVar6 <= fVar2) {
          fVar8 = fVar6;
        }
      }
      else {
        fVar8 = 0.0;
      }
      FUN_180267b90(param_1,0x288,fVar9 < fVar6,fVar8);
      fVar6 = DAT_1803812c0;
      fVar8 = (float)(local_80 + -0x1ea9) / DAT_1803812c0;
      if (0.0 <= fVar8) {
        fVar10 = fVar2;
        if (fVar8 <= fVar2) {
          fVar10 = fVar8;
        }
      }
      else {
        fVar10 = 0.0;
      }
      FUN_180267b90(param_1,0x289,fVar9 < fVar8,fVar10);
      fVar8 = (float)(local_7e + -0x1ea9) / fVar6;
      if (0.0 <= fVar8) {
        fVar10 = fVar2;
        if (fVar8 <= fVar2) {
          fVar10 = fVar8;
        }
      }
      else {
        fVar10 = 0.0;
      }
      FUN_180267b90(param_1,0x28a,fVar9 < fVar8,fVar10);
      fVar8 = (float)(local_7e + 0x1ea9) / fVar7;
      if (0.0 <= fVar8) {
        fVar10 = fVar2;
        if (fVar8 <= fVar2) {
          fVar10 = fVar8;
        }
      }
      else {
        fVar10 = 0.0;
      }
      FUN_180267b90(param_1,0x28b,fVar9 < fVar8,fVar10);
      fVar8 = (float)(local_7c + 0x1ea9) / fVar7;
      if (0.0 <= fVar8) {
        fVar10 = fVar2;
        if (fVar8 <= fVar2) {
          fVar10 = fVar8;
        }
      }
      else {
        fVar10 = 0.0;
      }
      FUN_180267b90(param_1,0x28c,fVar9 < fVar8,fVar10);
      fVar8 = (float)(local_7c + -0x1ea9) / fVar6;
      if (0.0 <= fVar8) {
        fVar10 = fVar2;
        if (fVar8 <= fVar2) {
          fVar10 = fVar8;
        }
      }
      else {
        fVar10 = 0.0;
      }
      FUN_180267b90(param_1,0x28d,fVar9 < fVar8,fVar10);
      fVar6 = (float)(local_7a + -0x1ea9) / fVar6;
      if (0.0 <= fVar6) {
        fVar8 = fVar2;
        if (fVar6 <= fVar2) {
          fVar8 = fVar6;
        }
      }
      else {
        fVar8 = 0.0;
      }
      FUN_180267b90(param_1,0x28e,fVar9 < fVar6,fVar8);
      fVar7 = (float)(local_7a + 0x1ea9) / fVar7;
      fVar6 = 0.0;
      if ((0.0 <= fVar7) && (fVar6 = fVar2, fVar7 <= fVar2)) {
        fVar6 = fVar7;
      }
      FUN_180267b90(param_1,0x28f,fVar9 < fVar7,fVar6);
    }
  }
  return;
}


