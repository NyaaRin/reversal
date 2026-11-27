// 0x180097ec0  FUN_180097ec0
// size=433 thunk=false
// signature: undefined FUN_180097ec0()
// status: ok


undefined8 FUN_180097ec0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = (**(code **)*param_1)();
  FUN_180023e60(param_1,0);
  FUN_18002db10(param_1[1],0xffffffff,"weapons");
  cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
  if (cVar1 == '\0') {
    iVar3 = (**(code **)*param_1)(param_1);
    if (iVar2 < iVar3) {
      (**(code **)(*param_1 + 0x10))(param_1,iVar3 - iVar2);
    }
    uVar4 = 0;
  }
  else {
    FUN_18002d9c0(param_1[1],0xffffffff,"GetStored");
    cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x10))(param_1,1);
      FUN_18002d9c0(param_1[1],0xffffffff,&DAT_180346c44);
    }
    cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
    if (cVar1 == '\0') {
      iVar3 = (**(code **)*param_1)();
      if (iVar2 < iVar3) {
        (**(code **)(*param_1 + 0x10))(param_1,iVar3 - iVar2);
      }
      uVar4 = 0;
    }
    else {
      (*(code *)((undefined8 *)*param_1)[0x1d])(param_1,param_2,0);
      iVar3 = FUN_180023180(param_1[1],1,1);
      if ((iVar3 == 0) &&
         (cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5), cVar1 != '\0')) {
        uVar4 = FUN_18008db50(param_1,0xffffffff,param_3);
        iVar3 = (**(code **)*param_1)(param_1);
        if (iVar2 < iVar3) {
          (**(code **)(*param_1 + 0x10))(param_1,iVar3 - iVar2);
        }
      }
      else {
        iVar3 = (**(code **)*param_1)(param_1);
        if (iVar2 < iVar3) {
          (**(code **)(*param_1 + 0x10))(param_1,iVar3 - iVar2);
        }
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


