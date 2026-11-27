// 0x180105970  FUN_180105970
// size=781 thunk=false
// signature: undefined FUN_180105970()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180105970(float param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  uint local_140;
  uint local_138;
  double local_130;
  uint local_128;
  undefined1 local_118 [192];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  if (0 < DAT_180409be4) {
    DAT_180409bc8 = DAT_180409bc8 + 1;
    if (DAT_180409bc8 < 0x15) {
      if (DAT_1803e85ac <= DAT_1803812f8) {
        local_128 = (uint)DAT_180409bc5;
        fVar7 = 0.0;
        if (DAT_180409bc4 != '\0') {
          fVar7 = DAT_180409bd4;
        }
        local_138 = (uint)DAT_180409bf4;
        local_140 = (uint)DAT_180409c20;
        local_148 = (double)DAT_1803e85ac;
        local_158 = (double)param_1;
        dVar1 = (double)(param_1 + DAT_180380d30);
        local_160 = (double)DAT_180409be8;
        if (DAT_1803fa608 == 0) {
          uVar8 = (undefined4)DAT_180380bc8;
          uVar9 = (undefined4)((ulonglong)DAT_180380bc8 >> 0x20);
        }
        else {
          uVar8 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x28);
          uVar9 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x28) >> 0x20);
        }
        local_130 = (double)fVar7;
        local_168 = (double)(float)((uint)DAT_180409bfc & _DAT_1803817c0) *
                    (double)CONCAT44(uVar9,uVar8);
        local_150 = dVar1;
        FUN_180014410("[JUMPBUG] fall #%d: %d tick(s), vz %.0f, step %.1fu/tick, closest gap %.1fu (window %.0f..%.0fu, miss %.1fu), fired=%d, unduck refused=%d, lockout=%.0fms inDuckJump=%d\n"
                      ,DAT_180409bc8,DAT_180409be4,(double)DAT_180409bfc);
      }
      else {
        dVar1 = (double)(param_1 + DAT_180380d30);
        local_168 = (double)param_1;
        local_160 = dVar1;
        FUN_180014410("[JUMPBUG] fall #%d: %d tick(s), vz %.0f, ground never came within %.0f..%.0fu of the ducked feet -- no attempt\n"
                      ,DAT_180409bc8,DAT_180409be4,(double)DAT_180409bfc);
      }
      if (0 < DAT_180409bec) {
        iVar3 = 0;
        iVar4 = 8;
        if (DAT_180409bec < 8) {
          iVar4 = DAT_180409bec;
        }
        uVar5 = DAT_180409bec - iVar4;
        if ((int)uVar5 < DAT_180409bec) {
          do {
            if (0xb3 < iVar3) break;
            puVar6 = &DAT_18033e5ea;
            if (iVar3 != 0) {
              puVar6 = &DAT_18034fefc;
            }
            local_168 = (double)*(float *)(&DAT_180409c00 + (ulonglong)(uVar5 & 7) * 4);
            iVar2 = FUN_180012ac0(local_118 + iVar3,0xc0 - (longlong)iVar3,"%s%.1f",puVar6);
            iVar3 = iVar3 + iVar2;
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < DAT_180409bec);
        }
        local_168 = dVar1;
        FUN_180014410("[JUMPBUG]   ladder (last %d ticks, feet->floor): %s | window %.0f..%.0f\n",
                      iVar4,local_118,(double)param_1);
      }
    }
    DAT_180409bec = 0;
    DAT_180409be4 = 0;
    DAT_1803e85ac = 1e+09;
    DAT_180409be8 = 0.0;
    DAT_180409bfc = 0.0;
    DAT_180409c20 = 0;
    DAT_180409bf4 = 0;
    DAT_180409bc4 = '\0';
    DAT_180409bc5 = 0;
    DAT_180409bd4 = 0.0;
  }
  return;
}


