// 0x1800433b0  FUN_1800433b0
// size=328 thunk=false
// signature: undefined FUN_1800433b0()
// status: ok


undefined8 FUN_1800433b0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  HMODULE hModule;
  uint uVar5;
  double dVar6;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  dVar6 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar5 = (uint)dVar6;
  if ((((0 < (int)uVar5) && (DAT_1803ff8a8 != 0)) && (uVar2 = uVar5 & 0xf, uVar2 < 8)) &&
     (((&DAT_1803ff7e0)[(ulonglong)uVar2 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + (ulonglong)uVar2 * 0x18) == uVar5 >> 4)))) {
    if ((DAT_1803ff8a8 != 0) && (DAT_1803fb038 != (code *)0x0)) {
      iVar3 = (*DAT_1803fb038)(DAT_1803ff8a8,2);
      lVar1 = DAT_1803ff8a8;
      if (iVar3 != 0) {
        if (DAT_1803ff2a8 == (FARPROC)0x0) {
          hModule = GetModuleHandleA("lua_shared.dll");
          DAT_1803ff2a8 = GetProcAddress(hModule,"lua_pushnil");
        }
        (*DAT_1803ff2a8)(lVar1);
        (**(code **)(*plVar4 + 0xf8))(plVar4,1);
        return 1;
      }
    }
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
    return 1;
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  return 1;
}


