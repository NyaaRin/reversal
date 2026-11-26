// 0x180024400  FUN_180024400
// size=315 thunk=false
// signature: undefined FUN_180024400()
// status: ok


undefined8 FUN_180024400(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (**(code **)*param_1)();
  iVar2 = (**(code **)*param_1)(param_1);
  iVar3 = (**(code **)(*param_1 + 0x140))(param_1,uVar1);
  if (iVar3 == 5) {
    iVar2 = iVar2 + -1;
    iVar3 = (**(code **)(*param_1 + 0x140))(param_1,iVar2);
    if (iVar3 == 5) {
      if (param_3 == '\0') {
        FUN_180014410("create cache\n");
        (**(code **)(*param_1 + 0x30))(param_1);
        FUN_180023fc0(param_1);
      }
      FUN_180024250(param_1,uVar1,iVar2);
      (**(code **)(*param_1 + 0xe0))(param_1);
      iVar3 = (**(code **)(*param_1 + 0x80))(param_1,uVar1);
      while (iVar3 != 0) {
        FUN_1800242d0(param_1);
        FUN_1800242d0(param_1);
        (**(code **)(*param_1 + 0x38))(param_1,iVar2);
        (**(code **)(*param_1 + 0x10))(param_1,1);
        iVar3 = (**(code **)(*param_1 + 0x80))(param_1,uVar1);
      }
      (**(code **)(*param_1 + 0x10))(param_1,1);
      if (param_3 == '\0') {
        FUN_180014410("remove cache\n");
        (**(code **)(*param_1 + 0xe0))(param_1);
        FUN_180023fc0(param_1);
      }
      return 1;
    }
  }
  return 0;
}


