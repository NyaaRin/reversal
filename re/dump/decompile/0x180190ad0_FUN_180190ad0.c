// 0x180190ad0  FUN_180190ad0
// size=1055 thunk=false
// signature: undefined FUN_180190ad0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_180190ad0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_178 [32];
  int local_158;
  int local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  int local_130;
  int local_12c;
  undefined1 local_128 [64];
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined2 local_d4;
  undefined1 local_c8 [64];
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  int local_78;
  undefined2 local_74;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  if (DAT_1803fa668 != (longlong *)0x0) {
    local_12c = 0;
    local_130 = 0;
    (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_12c,&local_130);
    if ((1 < local_12c) && (1 < local_130)) {
      local_dc = 0x42b40000;
      local_d8 = 0xffffffff;
      local_d4 = 0;
      AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
      FUN_1802d4780(local_128,&DAT_1805707c0);
      local_d8 = DAT_1803e7498;
      local_e8 = DAT_1805c7c00;
      local_e4 = DAT_1805c7c04;
      local_d4._0_1_ = DAT_180425428;
      local_d4._1_1_ = DAT_1803fe650;
      local_e0 = DAT_1805c7c08;
      local_dc = DAT_1803da5c0;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
      iVar8 = local_12c;
      local_158 = local_130;
      if (local_d4._1_1_ != '\0') {
        fVar10 = *param_2;
        fVar1 = param_2[3];
        fVar2 = param_2[6];
        fVar3 = param_2[9];
        fVar4 = param_2[0xc];
        fVar5 = param_2[0xf];
        fVar6 = param_2[0x12];
        fVar7 = param_2[0x15];
        fVar9 = fVar10;
        if (fVar1 <= fVar10) {
          fVar9 = fVar1;
        }
        if (fVar2 <= fVar9) {
          fVar9 = fVar2;
        }
        if (fVar3 <= fVar9) {
          fVar9 = fVar3;
        }
        if (fVar4 <= fVar9) {
          fVar9 = fVar4;
        }
        if (fVar5 <= fVar9) {
          fVar9 = fVar5;
        }
        if (fVar6 <= fVar9) {
          fVar9 = fVar6;
        }
        if (fVar7 <= fVar9) {
          fVar9 = fVar7;
        }
        if (fVar9 <= local_e8) {
          if (fVar10 <= fVar1) {
            fVar10 = fVar1;
          }
          if (fVar10 <= fVar2) {
            fVar10 = fVar2;
          }
          if (fVar10 <= fVar3) {
            fVar10 = fVar3;
          }
          if (fVar10 <= fVar4) {
            fVar10 = fVar4;
          }
          if (fVar10 <= fVar5) {
            fVar10 = fVar5;
          }
          if (fVar10 <= fVar6) {
            fVar10 = fVar6;
          }
          if (fVar10 <= fVar7) {
            fVar10 = fVar7;
          }
          if (local_e8 <= fVar10) {
            fVar10 = param_2[1];
            fVar1 = param_2[4];
            fVar2 = param_2[7];
            fVar3 = param_2[10];
            fVar4 = param_2[0xd];
            fVar5 = param_2[0x10];
            fVar6 = param_2[0x13];
            fVar7 = param_2[0x16];
            fVar9 = fVar10;
            if (fVar1 <= fVar10) {
              fVar9 = fVar1;
            }
            if (fVar2 <= fVar9) {
              fVar9 = fVar2;
            }
            if (fVar3 <= fVar9) {
              fVar9 = fVar3;
            }
            if (fVar4 <= fVar9) {
              fVar9 = fVar4;
            }
            if (fVar5 <= fVar9) {
              fVar9 = fVar5;
            }
            if (fVar6 <= fVar9) {
              fVar9 = fVar6;
            }
            if (fVar7 <= fVar9) {
              fVar9 = fVar7;
            }
            if (fVar9 <= local_e4) {
              if (fVar10 <= fVar1) {
                fVar10 = fVar1;
              }
              if (fVar10 <= fVar2) {
                fVar10 = fVar2;
              }
              if (fVar10 <= fVar3) {
                fVar10 = fVar3;
              }
              if (fVar10 <= fVar4) {
                fVar10 = fVar4;
              }
              if (fVar10 <= fVar5) {
                fVar10 = fVar5;
              }
              if (fVar10 <= fVar6) {
                fVar10 = fVar6;
              }
              if (fVar10 <= fVar7) {
                fVar10 = fVar7;
              }
              if (local_e4 <= fVar10) {
                fVar10 = param_2[2];
                fVar1 = param_2[5];
                fVar2 = param_2[8];
                fVar3 = param_2[0xb];
                fVar4 = param_2[0xe];
                fVar5 = param_2[0x11];
                fVar6 = param_2[0x14];
                fVar7 = param_2[0x17];
                fVar9 = fVar10;
                if (fVar1 <= fVar10) {
                  fVar9 = fVar1;
                }
                if (fVar2 <= fVar9) {
                  fVar9 = fVar2;
                }
                if (fVar3 <= fVar9) {
                  fVar9 = fVar3;
                }
                if (fVar4 <= fVar9) {
                  fVar9 = fVar4;
                }
                if (fVar5 <= fVar9) {
                  fVar9 = fVar5;
                }
                if (fVar6 <= fVar9) {
                  fVar9 = fVar6;
                }
                if (fVar7 <= fVar9) {
                  fVar9 = fVar7;
                }
                if (fVar9 <= local_e0) {
                  if (fVar10 <= fVar1) {
                    fVar10 = fVar1;
                  }
                  if (fVar10 <= fVar2) {
                    fVar10 = fVar2;
                  }
                  if (fVar10 <= fVar3) {
                    fVar10 = fVar3;
                  }
                  if (fVar10 <= fVar4) {
                    fVar10 = fVar4;
                  }
                  if (fVar10 <= fVar5) {
                    fVar10 = fVar5;
                  }
                  if (fVar10 <= fVar6) {
                    fVar10 = fVar6;
                  }
                  if (fVar10 <= fVar7) {
                    fVar10 = fVar7;
                  }
                  if (local_e0 <= fVar10) goto LAB_180190eb0;
                }
              }
            }
          }
        }
      }
      local_7c = 0x42b40000;
      local_78 = 0xffffffff;
      local_74 = 0;
      AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
      FUN_1802d4780(local_c8,&DAT_1805707c0);
      local_78 = DAT_1803e7498;
      local_88 = DAT_1805c7c00;
      local_84 = DAT_1805c7c04;
      local_74._0_1_ = DAT_180425428;
      local_74._1_1_ = DAT_1803fe650;
      local_80 = DAT_1805c7c08;
      local_7c = DAT_1803da5c0;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
      if (((((char)local_74 != '\0') && (local_74._1_1_ != '\0')) && (DAT_1803fa608 != 0)) &&
         ((uint)(*(int *)(DAT_1803fa608 + 4) - local_78) < 3)) {
        FUN_18018d9b0(&local_148,param_2,local_c8,iVar8);
        if (((local_148 == 3) && (DAT_180380ac0 <= local_13c - local_144)) &&
           (DAT_180380ac0 <= local_138 - local_140)) {
          *param_1 = local_144;
          param_1[1] = local_140;
          param_1[2] = local_13c;
          param_1[3] = local_138;
          *(undefined1 *)(param_1 + 4) = 1;
          return param_1;
        }
      }
    }
  }
LAB_180190eb0:
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}


