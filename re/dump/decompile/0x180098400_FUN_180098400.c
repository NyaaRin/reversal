// 0x180098400  FUN_180098400
// size=474 thunk=false
// signature: undefined FUN_180098400()
// status: ok


void FUN_180098400(longlong *param_1,longlong param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  if (((param_1 != (longlong *)0x0) && (param_1[1] != 0)) && (param_2 != 0)) {
    plVar5 = param_1;
    iVar2 = (**(code **)*param_1)();
    iVar3 = iVar2;
    FUN_18002d9c0(param_1[1],param_3,"GetOwner");
    cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6,*param_1,iVar3,plVar5);
    if (((cVar1 != '\0') && (cVar1 = FUN_18001e2b0(param_2,param_1), cVar1 != '\0')) &&
       ((iVar3 = FUN_180023180(param_1[1],1,1), iVar3 == 0 &&
        (cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,9), cVar1 != '\0')))) {
      uVar4 = (**(code **)*param_1)(param_1);
      FUN_18002ed20(param_1[1],param_1,uVar4);
      FUN_18002d9c0(param_1[1],uVar4,"FakeRagdoll");
      cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,9);
      if (cVar1 != '\0') {
        uVar4 = (**(code **)*param_1)(param_1);
        FUN_18002ed20(param_1[1],param_1,uVar4);
      }
    }
    iVar3 = (**(code **)*param_1)(param_1);
    if (iVar2 < iVar3) {
      (**(code **)(*param_1 + 0x10))(param_1,iVar3 - iVar2);
    }
    if (param_4 != '\0') {
      FUN_18002d9c0(param_1[1],param_3,"GetWeaponEntity");
      cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
      if (((cVar1 != '\0') && (cVar1 = FUN_18001e2b0(param_2,param_1), cVar1 != '\0')) &&
         (iVar3 = FUN_180023180(param_1[1],1,1), iVar3 == 0)) {
        uVar4 = (**(code **)*param_1)(param_1);
        FUN_18002ed20(param_1[1],param_1,uVar4);
      }
      iVar3 = (**(code **)*param_1)(param_1);
      if (iVar2 < iVar3) {
        (**(code **)(*param_1 + 0x10))(param_1,iVar3 - iVar2);
      }
    }
  }
  return;
}


