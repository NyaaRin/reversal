// 0x180090d50  FUN_180090d50
// size=470 thunk=false
// signature: undefined FUN_180090d50()
// status: ok


ulonglong FUN_180090d50(longlong *param_1,undefined8 param_2,float param_3,float param_4,
                       float *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  
  iVar2 = (**(code **)*param_1)();
  FUN_180023e60(param_1,0);
  FUN_18002db10(param_1[1],0xffffffff,&DAT_180340e34);
  cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
  if (cVar1 == '\0') {
    uVar4 = (**(code **)*param_1)(param_1);
    if (iVar2 < (int)uVar4) {
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,(int)uVar4 - iVar2);
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    FUN_18002db10(param_1[1],0xffffffff,"SharedRandom");
    cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
    if (cVar1 == '\0') {
      uVar4 = (**(code **)*param_1)();
      if (iVar2 < (int)uVar4) {
        uVar4 = (**(code **)(*param_1 + 0x10))(param_1,(int)uVar4 - iVar2);
      }
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      (*(code *)((undefined8 *)*param_1)[0x1d])(param_1,param_2,0);
      (**(code **)(*param_1 + 0xf0))(param_1,SUB84((double)param_3,0));
      (**(code **)(*param_1 + 0xf0))(param_1,SUB84((double)param_4,0));
      iVar3 = FUN_180023180(param_1[1],3,1);
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
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
  }
  return uVar4;
}


