// 0x180258950  FUN_180258950
// size=232 thunk=false
// signature: undefined FUN_180258950()
// status: ok


undefined1 FUN_180258950(undefined8 param_1,char *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  uVar5 = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar3 = *param_2;
  lVar4 = 0xf30;
  if (cVar3 == '\0') {
    lVar4 = 0x10b0;
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar4 = lVar4 + lVar1;
  FUN_18026a810(0x16,lVar4);
  FUN_18026a810(0x17,lVar4);
  uVar2 = 0x10b0;
  if (cVar3 == '\0') {
    uVar2 = 0xf30;
  }
  FUN_18026a810(0x18,(ulonglong)uVar2 + lVar1);
  FUN_1802abf60(param_1,param_3,0);
  cVar3 = FUN_18027bce0(0,0,0);
  if (cVar3 != '\0') {
    cVar3 = FUN_18026ee60(0);
    if (cVar3 != '\0') {
      uVar5 = 1;
      *param_2 = *param_2 == '\0';
    }
  }
  FUN_18026a890(3);
  return uVar5;
}


