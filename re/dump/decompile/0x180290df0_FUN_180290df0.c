// 0x180290df0  FUN_180290df0
// size=614 thunk=false
// signature: undefined FUN_180290df0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180290df0(longlong param_1,int param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar10;
  undefined1 auStack_68 [32];
  byte local_48 [8];
  ulonglong local_40;
  ulonglong uVar9;
  
  uVar4 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  iVar6 = param_3 - param_5;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  iVar10 = 0;
  local_40 = uVar4;
  if (0 < param_2) {
    do {
      memset(local_48,0,(ulonglong)param_5);
      uVar9 = 0;
      uVar8 = 0;
      if (param_5 == 2) {
        uVar2 = 0;
        uVar4 = 0;
        if (-1 < iVar6) {
          do {
            iVar3 = param_4 * uVar2;
            bVar1 = *(byte *)(iVar3 + param_1);
            uVar7 = (int)uVar9 + ((uint)bVar1 - (uint)local_48[uVar2 & 7]);
            uVar9 = (ulonglong)uVar7;
            uVar5 = uVar2 + 2;
            uVar2 = uVar2 + 1;
            local_48[uVar5 & 7] = bVar1;
            uVar7 = uVar7 >> 1;
            uVar4 = (ulonglong)uVar7;
            *(char *)(iVar3 + param_1) = (char)uVar7;
            uVar8 = uVar9;
          } while ((int)uVar2 <= iVar6);
        }
      }
      else if (param_5 == 3) {
        uVar2 = 0;
        uVar4 = 0;
        if (-1 < iVar6) {
          do {
            iVar3 = param_4 * uVar2;
            bVar1 = *(byte *)(iVar3 + param_1);
            uVar9 = (ulonglong)((int)uVar9 + ((uint)bVar1 - (uint)local_48[uVar2 & 7]));
            uVar5 = uVar2 + 3;
            uVar2 = uVar2 + 1;
            local_48[uVar5 & 7] = bVar1;
            uVar4 = uVar9 * 0xaaaaaaab & 0xffffffff;
            *(char *)(iVar3 + param_1) = (char)(uVar9 / 3);
            uVar8 = uVar9;
          } while ((int)uVar2 <= iVar6);
        }
      }
      else {
        uVar2 = param_5 - 4;
        uVar4 = (ulonglong)uVar2;
        if (uVar2 == 0) {
          uVar2 = 0;
          if (-1 < iVar6) {
            do {
              iVar3 = param_4 * uVar2;
              bVar1 = *(byte *)(iVar3 + param_1);
              uVar7 = (int)uVar9 + ((uint)bVar1 - (uint)local_48[uVar2 & 7]);
              uVar9 = (ulonglong)uVar7;
              uVar5 = uVar2 - 4;
              uVar2 = uVar2 + 1;
              local_48[uVar5 & 7] = bVar1;
              uVar7 = uVar7 >> 2;
              uVar4 = (ulonglong)uVar7;
              *(char *)(iVar3 + param_1) = (char)uVar7;
              uVar8 = uVar9;
            } while ((int)uVar2 <= iVar6);
          }
        }
        else {
          uVar5 = 0;
          uVar8 = uVar9;
          if (uVar2 == 1) {
            uVar2 = 0;
            if (-1 < iVar6) {
              do {
                iVar3 = param_4 * uVar5;
                bVar1 = *(byte *)(iVar3 + param_1);
                uVar9 = (ulonglong)((int)uVar9 + ((uint)bVar1 - (uint)local_48[uVar5 & 7]));
                uVar2 = uVar5 - 3;
                uVar5 = uVar5 + 1;
                local_48[uVar2 & 7] = bVar1;
                uVar4 = uVar9 * 0xcccccccd & 0xffffffff;
                *(char *)(iVar3 + param_1) = (char)(uVar9 / 5);
                uVar8 = uVar9;
                uVar2 = uVar5;
              } while ((int)uVar5 <= iVar6);
            }
          }
          else {
            uVar2 = uVar5;
            if (-1 < iVar6) {
              do {
                iVar3 = param_4 * uVar5;
                bVar1 = *(byte *)(iVar3 + param_1);
                uVar9 = (ulonglong)((int)uVar9 + ((uint)bVar1 - (uint)local_48[uVar5 & 7]));
                uVar2 = param_5 + uVar5;
                uVar5 = uVar5 + 1;
                local_48[uVar2 & 7] = bVar1;
                uVar4 = uVar9 / param_5;
                *(char *)(iVar3 + param_1) = (char)uVar4;
                uVar8 = uVar9;
                uVar2 = uVar5;
              } while ((int)uVar5 <= iVar6);
            }
          }
        }
      }
      for (; (int)uVar2 < param_3; uVar2 = uVar2 + 1) {
        uVar8 = (ulonglong)((int)uVar8 - (uint)local_48[uVar2 & 7]);
        uVar4 = uVar8 / param_5;
        *(char *)((int)(param_4 * uVar2) + param_1) = (char)uVar4;
      }
      param_1 = param_1 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_2);
  }
  return uVar4;
}


