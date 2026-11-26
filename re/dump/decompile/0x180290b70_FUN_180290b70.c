// 0x180290b70  FUN_180290b70
// size=633 thunk=false
// signature: undefined FUN_180290b70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180290b70(longlong param_1,int param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar10;
  undefined1 auStack_58 [32];
  byte local_38 [8];
  ulonglong local_30;
  ulonglong uVar9;
  
  uVar3 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  iVar6 = param_2 - param_5;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  iVar10 = 0;
  if (0 < param_3) {
    local_30 = uVar3;
    do {
      memset(local_38,0,(ulonglong)param_5);
      uVar9 = 0;
      uVar8 = 0;
      if (param_5 == 2) {
        uVar2 = 0;
        uVar3 = 0;
        if (-1 < iVar6) {
          do {
            lVar4 = (longlong)(int)uVar2;
            bVar1 = *(byte *)(lVar4 + param_1);
            uVar5 = uVar2 + 2;
            uVar7 = (int)uVar9 + ((uint)bVar1 - (uint)local_38[uVar2 & 7]);
            uVar9 = (ulonglong)uVar7;
            uVar2 = uVar2 + 1;
            local_38[uVar5 & 7] = bVar1;
            uVar7 = uVar7 >> 1;
            uVar3 = (ulonglong)uVar7;
            *(char *)(lVar4 + param_1) = (char)uVar7;
            uVar8 = uVar9;
          } while ((int)uVar2 <= iVar6);
        }
      }
      else if (param_5 == 3) {
        uVar2 = 0;
        uVar3 = 0;
        if (-1 < iVar6) {
          do {
            lVar4 = (longlong)(int)uVar2;
            bVar1 = *(byte *)(lVar4 + param_1);
            uVar5 = uVar2 + 3;
            uVar9 = (ulonglong)((int)uVar9 + ((uint)bVar1 - (uint)local_38[uVar2 & 7]));
            uVar2 = uVar2 + 1;
            local_38[uVar5 & 7] = bVar1;
            uVar3 = uVar9 * 0xaaaaaaab & 0xffffffff;
            *(char *)(lVar4 + param_1) = (char)(uVar9 / 3);
            uVar8 = uVar9;
          } while ((int)uVar2 <= iVar6);
        }
      }
      else {
        uVar2 = param_5 - 4;
        uVar3 = (ulonglong)uVar2;
        if (uVar2 == 0) {
          uVar2 = 0;
          if (-1 < iVar6) {
            do {
              lVar4 = (longlong)(int)uVar2;
              bVar1 = *(byte *)(lVar4 + param_1);
              uVar5 = uVar2 - 4;
              uVar7 = (int)uVar9 + ((uint)bVar1 - (uint)local_38[uVar2 & 7]);
              uVar9 = (ulonglong)uVar7;
              uVar2 = uVar2 + 1;
              local_38[uVar5 & 7] = bVar1;
              uVar7 = uVar7 >> 2;
              uVar3 = (ulonglong)uVar7;
              *(char *)(lVar4 + param_1) = (char)uVar7;
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
                lVar4 = (longlong)(int)uVar5;
                bVar1 = *(byte *)(lVar4 + param_1);
                uVar2 = uVar5 - 3;
                uVar9 = (ulonglong)((int)uVar9 + ((uint)bVar1 - (uint)local_38[uVar5 & 7]));
                uVar5 = uVar5 + 1;
                local_38[uVar2 & 7] = bVar1;
                uVar3 = uVar9 * 0xcccccccd & 0xffffffff;
                *(char *)(lVar4 + param_1) = (char)(uVar9 / 5);
                uVar8 = uVar9;
                uVar2 = uVar5;
              } while ((int)uVar5 <= iVar6);
            }
          }
          else {
            uVar2 = uVar5;
            if (-1 < iVar6) {
              do {
                lVar4 = (longlong)(int)uVar5;
                bVar1 = *(byte *)(lVar4 + param_1);
                uVar2 = param_5 + uVar5;
                uVar7 = (int)uVar9 + ((uint)bVar1 - (uint)local_38[uVar5 & 7]);
                uVar9 = (ulonglong)uVar7;
                uVar5 = uVar5 + 1;
                local_38[uVar2 & 7] = bVar1;
                uVar3 = (ulonglong)uVar7 / (ulonglong)param_5;
                *(char *)(lVar4 + param_1) = (char)uVar3;
                uVar8 = uVar9;
                uVar2 = uVar5;
              } while ((int)uVar5 <= iVar6);
            }
          }
        }
      }
      for (; (int)uVar2 < param_2; uVar2 = uVar2 + 1) {
        uVar8 = (ulonglong)((int)uVar8 - (uint)local_38[uVar2 & 7]);
        uVar3 = uVar8 / param_5;
        *(char *)((int)uVar2 + param_1) = (char)uVar3;
      }
      param_1 = param_1 + param_4;
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_3);
  }
  return uVar3;
}


