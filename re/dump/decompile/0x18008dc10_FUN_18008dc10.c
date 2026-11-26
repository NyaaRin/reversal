// 0x18008dc10  FUN_18008dc10
// size=384 thunk=false
// signature: undefined FUN_18008dc10()
// status: ok


undefined8 FUN_18008dc10(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = (**(code **)*param_2)(param_2);
  FUN_180023e60(param_2,0);
  FUN_18002db10(param_2[1],0xffffffff,"baseclass");
  cVar1 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,5);
  if (cVar1 == '\0') {
    iVar3 = (**(code **)*param_2)(param_2);
    if (iVar2 < iVar3) {
      (**(code **)(*param_2 + 0x10))(param_2,iVar3 - iVar2);
    }
    uVar4 = 0;
  }
  else {
    FUN_18002d9c0(param_2[1],0xffffffff,&DAT_180346c44);
    cVar1 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,6);
    if (cVar1 == '\0') {
      iVar3 = (**(code **)*param_2)();
      if (iVar2 < iVar3) {
        (**(code **)(*param_2 + 0x10))(param_2,iVar3 - iVar2);
      }
      uVar4 = 0;
    }
    else {
      (*(code *)((undefined8 *)*param_2)[0x1d])(param_2,"weapon_zs_base",0);
      iVar3 = FUN_180023180(param_2[1],1,1);
      if ((iVar3 == 0) &&
         (cVar1 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,5), cVar1 != '\0')) {
        uVar4 = FUN_18008db50(param_2,0xffffffff,param_3);
        iVar3 = (**(code **)*param_2)(param_2);
        if (iVar2 < iVar3) {
          (**(code **)(*param_2 + 0x10))(param_2,iVar3 - iVar2);
        }
      }
      else {
        iVar3 = (**(code **)*param_2)(param_2);
        if (iVar2 < iVar3) {
          (**(code **)(*param_2 + 0x10))(param_2,iVar3 - iVar2);
        }
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


