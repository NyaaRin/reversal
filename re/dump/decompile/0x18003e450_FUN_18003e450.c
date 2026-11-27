// 0x18003e450  FUN_18003e450
// size=529 thunk=false
// signature: undefined FUN_18003e450()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18003e450(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  HMODULE hModule;
  INT_PTR IVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_48 [32];
  uint local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    return 0;
  }
  dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar9 = (uint)dVar3;
  if (((((0 < (int)uVar9) && (uVar6 = (ulonglong)(uVar9 & 0xf), (uVar9 & 0xf) < 8)) &&
       ((&DAT_1803e75c0)[uVar6 * 0x30] != '\0')) &&
      ((*(uint *)(&DAT_1803e75c4 + uVar6 * 0x30) == uVar9 >> 4 && ((&DAT_1803e75d0)[uVar6 * 6] != 0)
       ))) && ((&DAT_1803e75d8)[uVar6 * 6] != 0)) {
    dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,2);
    puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar6 * 6];
    if (puVar1 == (undefined8 *)0x0) {
      iVar4 = 0;
    }
    else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
      iVar4 = (**(code **)*puVar1)();
    }
    else {
      iVar4 = (*DAT_1803fb088)(puVar1[1]);
    }
    uVar9 = (uint)dVar3;
    if (uVar9 != 0) {
      if ((int)uVar9 < 0) {
        uVar9 = uVar9 + 1 + iVar4;
      }
      if ((*(int *)(&DAT_1803e75e0 + uVar6 * 0x30) < (int)uVar9) && ((int)uVar9 <= iVar4)) {
        uVar2 = (&DAT_1803e75d8)[uVar6 * 6];
        if (DAT_1803fe490 == (FARPROC)0x0) {
          hModule = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(hModule,"lua_type");
        }
        IVar7 = (*DAT_1803fe490)(uVar2,(ulonglong)uVar9);
        if ((int)IVar7 != 4) {
          (**(code **)(*plVar5 + 0xe0))(plVar5);
          return 1;
        }
        local_28[0] = 0;
        lVar8 = (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar6 * 6] + 0xb8))
                          ((longlong *)(&DAT_1803e75d0)[uVar6 * 6],uVar9,local_28);
        if (lVar8 != 0) {
          if (0x4000 < local_28[0]) {
            local_28[0] = 0x4000;
          }
          (**(code **)(*plVar5 + 0xe8))(plVar5,lVar8);
          return 1;
        }
      }
    }
    (**(code **)(*plVar5 + 0xe0))(plVar5);
    return 1;
  }
  (**(code **)(*plVar5 + 0xe0))(plVar5);
  return 1;
}


