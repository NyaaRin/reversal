// 0x18008e6d0  FUN_18008e6d0
// size=329 thunk=false
// signature: undefined FUN_18008e6d0()
// status: ok


ulonglong FUN_18008e6d0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                       float *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  
  iVar2 = (**(code **)*param_1)();
  FUN_18002d9c0(param_1[1],param_2,"GetModVal");
  cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if (cVar1 == '\0') {
    uVar4 = (**(code **)*param_1)();
    if (iVar2 < (int)uVar4) {
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,(int)uVar4 - iVar2);
    }
  }
  else {
    (*(code *)((undefined8 *)*param_1)[1])(param_1,param_2);
    (**(code **)(*param_1 + 0xe8))(param_1,"chance_double_shot",0);
    iVar3 = FUN_180023180(param_1[1],2,1);
    if ((iVar3 == 0) &&
       (cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3), cVar1 != '\0')) {
      dVar5 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
      *param_5 = (float)dVar5;
      iVar3 = (**(code **)*param_1)(param_1);
      if (iVar2 < iVar3) {
        (**(code **)(*param_1 + 0x10))(param_1,iVar3 - iVar2);
      }
      return (ulonglong)(((uint)(float)dVar5 & 0x7f800000) != 0x7f800000);
    }
    uVar4 = (**(code **)*param_1)(param_1);
    if (iVar2 < (int)uVar4) {
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,(int)uVar4 - iVar2);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}


