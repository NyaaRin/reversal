// 0x180043dc0  FUN_180043dc0
// size=374 thunk=false
// signature: undefined FUN_180043dc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180043dc0(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  HMODULE hModule;
  INT_PTR IVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 ***pppuVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  undefined8 **local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    uVar6 = 0;
  }
  else {
    dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar7 = (uint)dVar1;
    if ((((0 < (int)uVar7) && (DAT_1803ff8a8 != 0)) &&
        (uVar4 = (ulonglong)(uVar7 & 0xf), (uVar7 & 0xf) < 8)) &&
       (((&DAT_1803ff7e0)[uVar4 * 0x18] != '\0' &&
        (*(uint *)(&DAT_1803ff7e4 + uVar4 * 0x18) == uVar7 >> 4)))) {
      dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
      lVar2 = DAT_1803ff8a8;
      if (DAT_1803fcfa0 == (FARPROC)0x0) {
        hModule = GetModuleHandleA("lua_shared.dll");
        DAT_1803fcfa0 = GetProcAddress(hModule,"lua_gettop");
      }
      IVar5 = (*DAT_1803fcfa0)(lVar2);
      iVar9 = (int)dVar1;
      if (iVar9 != 0) {
        if (iVar9 < 0) {
          iVar9 = iVar9 + 1 + (int)IVar5;
        }
        if ((*(int *)(&DAT_1803ff7e8 + uVar4 * 0x18) < iVar9) && (iVar9 <= (int)IVar5)) {
          FUN_180041990(local_68,plVar3);
          pppuVar8 = local_68;
          if (0xf < local_50) {
            pppuVar8 = (undefined8 ***)local_68[0];
          }
          (**(code **)(*plVar3 + 0xe8))(plVar3,pppuVar8,0);
          FUN_18020e450(local_68);
          return 1;
        }
      }
    }
    (**(code **)(*plVar3 + 0xe0))(plVar3);
    uVar6 = 1;
  }
  return uVar6;
}


