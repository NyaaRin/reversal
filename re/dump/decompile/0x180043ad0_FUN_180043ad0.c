// 0x180043ad0  FUN_180043ad0
// size=395 thunk=false
// signature: undefined FUN_180043ad0()
// status: ok


undefined8 FUN_180043ad0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  HMODULE hModule;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar4 = (uint)dVar6;
    if (((((int)uVar4 < 1) || (DAT_1803ff8a8 == 0)) || (uVar1 = uVar4 & 0xf, 7 < uVar1)) ||
       ((((&DAT_1803ff7e0)[(ulonglong)uVar1 * 0x18] == '\0' ||
         (*(uint *)(&DAT_1803ff7e4 + (ulonglong)uVar1 * 0x18) != uVar4 >> 4)) ||
        ((DAT_1803ff8a8 == 0 || (DAT_1803fb038 == (code *)0x0)))))) {
      lVar5 = *plVar3;
    }
    else {
      iVar2 = (*DAT_1803fb038)(DAT_1803ff8a8,2);
      lVar5 = *plVar3;
      if (iVar2 != 0) {
        dVar6 = (double)(**(code **)(lVar5 + 0x160))(plVar3,2);
        lVar5 = DAT_1803ff8a8;
        if ((int)dVar6 != 0) {
          (**(code **)(*plVar3 + 0xf8))(plVar3,0);
          (**(code **)(*plVar3 + 0xe8))
                    (plVar3,"only SPECIAL.GLOB is reachable from a private stack",0);
          return 2;
        }
        if (DAT_180423ad0 == (FARPROC)0x0) {
          hModule = GetModuleHandleA("lua_shared.dll");
          DAT_180423ad0 = GetProcAddress(hModule,"lua_pushvalue");
        }
        (*DAT_180423ad0)(lVar5,0xffffd8ee);
        (**(code **)(*plVar3 + 0xf8))(plVar3,1);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xf8))(plVar3,0);
    return 1;
  }
  return 0;
}


