// 0x180016410  FUN_180016410
// size=948 thunk=false
// signature: undefined FUN_180016410()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180016410(longlong *param_1,LPCSTR param_2,longlong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  HMODULE pHVar4;
  HANDLE pvVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  HMODULE pHVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  HMODULE local_80;
  longlong *local_78;
  uint *local_70;
  uint *puStack_68;
  uint *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  uVar13 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_88 = 1;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(LPCSTR *)param_2;
  }
  local_78 = param_1;
  pHVar4 = GetModuleHandleA(param_2);
  if (pHVar4 != (HMODULE)0x0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    pvVar5 = GetCurrentProcess();
    iVar2 = K32GetModuleInformation(pvVar5,pHVar4,&local_58,0x18);
    if (iVar2 != 0) {
      local_70 = (uint *)0x0;
      puStack_68 = (uint *)0x0;
      local_60 = (uint *)0x0;
      puVar12 = (uint *)0x0;
      uVar10 = uVar13;
      if (param_3[2] != 0) {
        do {
          uVar8 = param_3[3];
          plVar7 = param_3;
          if (0xf < uVar8) {
            plVar7 = (longlong *)*param_3;
          }
          if (*(char *)((longlong)plVar7 + uVar10) == ' ') {
            uVar10 = uVar10 + 1;
          }
          else {
            plVar7 = param_3;
            if (0xf < uVar8) {
              plVar7 = (longlong *)*param_3;
            }
            if (*(char *)((longlong)plVar7 + uVar10) == '?') {
              local_80 = (HMODULE)CONCAT44(local_80._4_4_,0xffffffff);
              if (puVar12 == local_60) {
                FUN_180229d20(&local_70,puVar12,&local_80);
              }
              else {
                *puVar12 = 0xffffffff;
                puStack_68 = puStack_68 + 1;
              }
              if (uVar10 + 1 < (ulonglong)param_3[2]) {
                plVar7 = param_3;
                if (0xf < (ulonglong)param_3[3]) {
                  plVar7 = (longlong *)*param_3;
                }
                lVar6 = 2;
                if (*(char *)((longlong)plVar7 + uVar10 + 1) != '?') goto LAB_18001656c;
              }
              else {
LAB_18001656c:
                lVar6 = 1;
              }
              uVar10 = uVar10 + lVar6;
              puVar12 = puStack_68;
            }
            else {
              plVar7 = param_3;
              if (0xf < uVar8) {
                plVar7 = (longlong *)*param_3;
              }
              iVar2 = 0;
              if ((char)(*(byte *)((longlong)plVar7 + uVar10) & 0xdf) < 'A') {
LAB_1800165bb:
                plVar7 = param_3;
                if (0xf < uVar8) {
                  plVar7 = (longlong *)*param_3;
                }
                if ('/' < *(char *)((longlong)plVar7 + uVar10)) {
                  plVar7 = param_3;
                  if (0xf < uVar8) {
                    plVar7 = (longlong *)*param_3;
                  }
                  if (*(char *)((longlong)plVar7 + uVar10) < ':') {
                    plVar7 = param_3;
                    if (0xf < uVar8) {
                      plVar7 = (longlong *)*param_3;
                    }
                    iVar2 = *(char *)((longlong)plVar7 + uVar10) + -0x30;
                  }
                }
              }
              else {
                plVar7 = param_3;
                if (0xf < uVar8) {
                  plVar7 = (longlong *)*param_3;
                }
                if ('F' < (char)(*(byte *)((longlong)plVar7 + uVar10) & 0xdf)) goto LAB_1800165bb;
                plVar7 = param_3;
                if (0xf < uVar8) {
                  plVar7 = (longlong *)*param_3;
                }
                iVar2 = ((int)*(char *)((longlong)plVar7 + uVar10) & 0xffffffdfU) - 0x37;
              }
              plVar7 = param_3;
              if (0xf < uVar8) {
                plVar7 = (longlong *)*param_3;
              }
              if ((char)(*(byte *)((longlong)plVar7 + uVar10 + 1) & 0xdf) < 'A') {
LAB_18001664e:
                plVar7 = param_3;
                if (0xf < uVar8) {
                  plVar7 = (longlong *)*param_3;
                }
                if ('/' < *(char *)((longlong)plVar7 + uVar10 + 1)) {
                  plVar7 = param_3;
                  if (0xf < uVar8) {
                    plVar7 = (longlong *)*param_3;
                  }
                  if (*(char *)((longlong)plVar7 + uVar10 + 1) < ':') {
                    if (uVar8 < 0x10) {
                      uVar3 = (int)*(char *)((longlong)param_3 + uVar10 + 1) - 0x30;
                    }
                    else {
                      uVar3 = (int)*(char *)(*param_3 + 1 + uVar10) - 0x30;
                    }
                    goto LAB_180016697;
                  }
                }
                uVar3 = 0;
              }
              else {
                plVar7 = param_3;
                if (0xf < uVar8) {
                  plVar7 = (longlong *)*param_3;
                }
                if ('F' < (char)(*(byte *)((longlong)plVar7 + uVar10 + 1) & 0xdf))
                goto LAB_18001664e;
                if (uVar8 < 0x10) {
                  uVar3 = ((int)*(char *)((longlong)param_3 + uVar10 + 1) & 0xffffffdfU) - 0x37;
                }
                else {
                  uVar3 = ((int)*(char *)(*param_3 + 1 + uVar10) & 0xffffffdfU) - 0x37;
                }
              }
LAB_180016697:
              uVar3 = uVar3 | iVar2 << 4;
              local_80 = (HMODULE)CONCAT44(local_80._4_4_,uVar3);
              if (puVar12 == local_60) {
                FUN_180229d20(&local_70,puVar12,&local_80);
              }
              else {
                *puVar12 = uVar3;
                puStack_68 = puStack_68 + 1;
              }
              uVar10 = uVar10 + 2;
              puVar12 = puStack_68;
            }
          }
        } while (uVar10 < (ulonglong)param_3[2]);
      }
      if (local_70 != puVar12) {
        pHVar9 = (HMODULE)(((uStack_50 & 0xffffffff) - ((longlong)puVar12 - (longlong)local_70 >> 2)
                           ) + (longlong)pHVar4);
        puVar11 = local_70;
        for (; local_80 = pHVar4, pHVar4 < pHVar9; pHVar4 = (HMODULE)((longlong)&pHVar4->unused + 1)
            ) {
          uVar8 = (longlong)puVar12 - (longlong)puVar11 >> 2;
          uVar10 = uVar13;
          if (uVar8 != 0) {
            do {
              if ((-1 < (int)puVar11[uVar10]) &&
                 (*(char *)((longlong)&pHVar4->unused + uVar10) != (char)puVar11[uVar10]))
              goto LAB_18001677f;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar8);
          }
          if (uVar10 == (longlong)puVar12 - (longlong)puVar11 >> 2) {
            puVar1 = (ulonglong *)param_1[1];
            if (puVar1 == (ulonglong *)param_1[2]) {
              FUN_180221c00(param_1,puVar1,&local_80);
            }
            else {
              *puVar1 = (ulonglong)pHVar4;
              param_1[1] = param_1[1] + 8;
            }
            puVar11 = local_70;
            puVar12 = puStack_68;
            if (param_4 <= (ulonglong)(param_1[1] - *param_1 >> 3)) break;
          }
LAB_18001677f:
        }
      }
      local_88 = 0;
      FUN_18021e060(&local_70);
    }
  }
  return param_1;
}


