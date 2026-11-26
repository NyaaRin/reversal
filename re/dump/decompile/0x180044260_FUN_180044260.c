// 0x180044260  FUN_180044260
// size=502 thunk=false
// signature: undefined FUN_180044260()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180044260(undefined8 param_1,longlong param_2)

{
  double dVar1;
  longlong *plVar2;
  ulonglong uVar3;
  HMODULE pHVar4;
  INT_PTR IVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_2)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  uVar7 = (uint)dVar1;
  if ((((0 < (int)uVar7) && (DAT_1803ff8a8 != 0)) &&
      (uVar3 = (ulonglong)(uVar7 & 0xf), (uVar7 & 0xf) < 8)) &&
     (((&DAT_1803ff7e0)[uVar3 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + uVar3 * 0x18) == uVar7 >> 4)))) {
    dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,2);
    lVar6 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar4,"lua_gettop");
    }
    IVar5 = (*DAT_1803fcfa0)(lVar6);
    lVar6 = DAT_1803ff8a8;
    uVar7 = (uint)dVar1;
    if (uVar7 != 0) {
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 1 + (int)IVar5;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar3 * 0x18) < (int)uVar7) && ((int)uVar7 <= (int)IVar5)) {
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar4 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar4,"lua_type");
        }
        IVar5 = (*DAT_1803fe490)(lVar6,(ulonglong)uVar7);
        if ((int)IVar5 != 4) {
          (**(code **)(*plVar2 + 0xe0))(plVar2);
          return 1;
        }
        local_28 = 0;
        lVar6 = (*DAT_1803fb008)(DAT_1803ff8a8,uVar7,&local_28);
        if (lVar6 != 0) {
          if (0x4000 < local_28) {
            local_28 = 0x4000;
          }
          (**(code **)(*plVar2 + 0xe8))(plVar2,lVar6);
          return 1;
        }
      }
    }
  }
  (**(code **)(*plVar2 + 0xe0))(plVar2);
  return 1;
}


