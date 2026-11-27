// 0x180118a90  FUN_180118a90
// size=184 thunk=false
// signature: undefined FUN_180118a90()
// status: ok


ulonglong FUN_180118a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  HMODULE hModule;
  byte bVar5;
  
  puVar4 = (undefined8 *)FUN_1800ebf80(0);
  if (puVar4 != (undefined8 *)0x0) {
    if (puVar4[1] != 0) {
      uVar3 = (**(code **)*puVar4)(puVar4);
      bVar2 = FUN_180118800(puVar4);
      lVar1 = puVar4[1];
      bVar5 = bVar2;
      if (DAT_180425540 == (FARPROC)0x0) {
        hModule = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(hModule,"lua_settop");
      }
      (*DAT_180425540)(lVar1,(ulonglong)uVar3,param_3,param_4,bVar5);
      return (ulonglong)bVar2;
    }
  }
  return (ulonglong)puVar4 & 0xffffffffffffff00;
}


