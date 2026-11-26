// 0x1800160e0  FUN_1800160e0
// size=795 thunk=false
// signature: undefined FUN_1800160e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800160e0(LPCSTR param_1,longlong *param_2)

{
  int iVar1;
  HMODULE pHVar2;
  HANDLE pvVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  HMODULE pHVar10;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  uint *local_60;
  uint *puStack_58;
  uint *local_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(LPCSTR *)param_1;
  }
  pHVar2 = GetModuleHandleA(param_1);
  if (pHVar2 != (HMODULE)0x0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    pvVar3 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar3,pHVar2,&local_48,0x18);
    if (iVar1 != 0) {
      local_60 = (uint *)0x0;
      puStack_58 = (uint *)0x0;
      local_50 = (uint *)0x0;
      uVar8 = 0;
      puVar9 = (uint *)0x0;
      if (param_2[2] != 0) {
        do {
          uVar6 = param_2[3];
          plVar5 = param_2;
          if (0xf < uVar6) {
            plVar5 = (longlong *)*param_2;
          }
          if (*(char *)((longlong)plVar5 + uVar8) == ' ') {
            uVar8 = uVar8 + 1;
          }
          else {
            plVar5 = param_2;
            if (0xf < uVar6) {
              plVar5 = (longlong *)*param_2;
            }
            if (*(char *)((longlong)plVar5 + uVar8) == '?') {
              local_68[0] = 0xffffffff;
              if (puVar9 == local_50) {
                FUN_180229d20(&local_60,puVar9,local_68);
              }
              else {
                *puVar9 = 0xffffffff;
                puStack_58 = puStack_58 + 1;
              }
              if (uVar8 + 1 < (ulonglong)param_2[2]) {
                plVar5 = param_2;
                if (0xf < (ulonglong)param_2[3]) {
                  plVar5 = (longlong *)*param_2;
                }
                lVar4 = 2;
                if (*(char *)((longlong)plVar5 + uVar8 + 1) != '?') goto LAB_1800161fc;
              }
              else {
LAB_1800161fc:
                lVar4 = 1;
              }
              uVar8 = uVar8 + lVar4;
              puVar9 = puStack_58;
            }
            else {
              plVar5 = param_2;
              if (0xf < uVar6) {
                plVar5 = (longlong *)*param_2;
              }
              if ((char)(*(byte *)((longlong)plVar5 + uVar8) & 0xdf) < 'A') {
LAB_18001624d:
                plVar5 = param_2;
                if (0xf < uVar6) {
                  plVar5 = (longlong *)*param_2;
                }
                if ('/' < *(char *)((longlong)plVar5 + uVar8)) {
                  plVar5 = param_2;
                  if (0xf < uVar6) {
                    plVar5 = (longlong *)*param_2;
                  }
                  if (*(char *)((longlong)plVar5 + uVar8) < ':') {
                    plVar5 = param_2;
                    if (0xf < uVar6) {
                      plVar5 = (longlong *)*param_2;
                    }
                    iVar1 = *(char *)((longlong)plVar5 + uVar8) + -0x30;
                    goto LAB_180016288;
                  }
                }
                iVar1 = 0;
              }
              else {
                plVar5 = param_2;
                if (0xf < uVar6) {
                  plVar5 = (longlong *)*param_2;
                }
                if ('F' < (char)(*(byte *)((longlong)plVar5 + uVar8) & 0xdf)) goto LAB_18001624d;
                plVar5 = param_2;
                if (0xf < uVar6) {
                  plVar5 = (longlong *)*param_2;
                }
                iVar1 = ((int)*(char *)((longlong)plVar5 + uVar8) & 0xffffffdfU) - 0x37;
              }
LAB_180016288:
              uVar6 = param_2[3];
              plVar5 = param_2;
              if (0xf < uVar6) {
                plVar5 = (longlong *)*param_2;
              }
              if ((char)(*(byte *)((longlong)plVar5 + uVar8 + 1) & 0xdf) < 'A') {
LAB_1800162e3:
                plVar5 = param_2;
                if (0xf < uVar6) {
                  plVar5 = (longlong *)*param_2;
                }
                if ('/' < *(char *)((longlong)plVar5 + uVar8 + 1)) {
                  plVar5 = param_2;
                  if (0xf < uVar6) {
                    plVar5 = (longlong *)*param_2;
                  }
                  if (*(char *)((longlong)plVar5 + uVar8 + 1) < ':') {
                    if (uVar6 < 0x10) {
                      local_68[0] = (int)*(char *)((longlong)param_2 + uVar8 + 1) - 0x30;
                    }
                    else {
                      local_68[0] = (int)*(char *)(*param_2 + 1 + uVar8) - 0x30;
                    }
                    goto LAB_18001632b;
                  }
                }
                local_68[0] = 0;
              }
              else {
                plVar5 = param_2;
                if (0xf < uVar6) {
                  plVar5 = (longlong *)*param_2;
                }
                if ('F' < (char)(*(byte *)((longlong)plVar5 + uVar8 + 1) & 0xdf))
                goto LAB_1800162e3;
                if (uVar6 < 0x10) {
                  local_68[0] = ((int)*(char *)((longlong)param_2 + uVar8 + 1) & 0xffffffdfU) - 0x37
                  ;
                }
                else {
                  local_68[0] = ((int)*(char *)(*param_2 + 1 + uVar8) & 0xffffffdfU) - 0x37;
                }
              }
LAB_18001632b:
              local_68[0] = iVar1 << 4 | local_68[0];
              if (puVar9 == local_50) {
                FUN_180229d20(&local_60,puVar9,local_68);
              }
              else {
                *puVar9 = local_68[0];
                puStack_58 = puStack_58 + 1;
              }
              uVar8 = uVar8 + 2;
              puVar9 = puStack_58;
            }
          }
        } while (uVar8 < (ulonglong)param_2[2]);
      }
      uVar8 = 0;
      if (local_60 != puVar9) {
        pHVar10 = (HMODULE)(((uStack_40 & 0xffffffff) - ((longlong)puVar9 - (longlong)local_60 >> 2)
                            ) + (longlong)pHVar2);
        for (; pHVar2 < pHVar10; pHVar2 = (HMODULE)((longlong)&pHVar2->unused + 1)) {
          uVar6 = 0;
          uVar7 = (longlong)puVar9 - (longlong)local_60 >> 2;
          if (uVar7 != 0) {
            do {
              if ((-1 < (int)local_60[uVar6]) &&
                 (*(char *)((longlong)&pHVar2->unused + uVar6) != (char)local_60[uVar6]))
              goto LAB_1800163ce;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar7);
          }
          if ((uVar6 == (longlong)puVar9 - (longlong)local_60 >> 2) &&
             (uVar8 = uVar8 + 1, 0xf < uVar8)) break;
LAB_1800163ce:
        }
      }
      FUN_18021e060(&local_60);
      return uVar8;
    }
  }
  return 0;
}


