// 0x1800b4450  FUN_1800b4450
// size=112 thunk=false
// signature: undefined FUN_1800b4450()
// status: ok


undefined8 FUN_1800b4450(longlong param_1)

{
  void *pvVar1;
  char cVar2;
  BOOL BVar3;
  undefined8 uVar4;
  void *local_res8;
  
  if (param_1 != 0) {
    local_res8 = (void *)0x0;
    cVar2 = FUN_1800b4440(param_1,&local_res8);
    pvVar1 = local_res8;
    if ((((cVar2 != '\0') && (local_res8 != (void *)0x0)) &&
        (BVar3 = IsBadReadPtr(local_res8,0x80), BVar3 == 0)) &&
       (*(code **)((longlong)pvVar1 + 0x78) != (code *)0x0)) {
      uVar4 = (**(code **)((longlong)pvVar1 + 0x78))(param_1);
      return uVar4;
    }
  }
  return 0;
}


