// 0x1800a70a0  FUN_1800a70a0
// size=277 thunk=false
// signature: undefined FUN_1800a70a0()
// status: ok


int FUN_1800a70a0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar4 = param_1[1];
    FUN_180023010(&local_48,lVar4);
    (*DAT_1803faee8)(lVar4,param_2,"LookupBone");
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  iVar3 = -1;
  cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  lVar4 = *param_1;
  if (cVar1 != '\0') {
    (**(code **)(lVar4 + 8))(param_1,param_2);
    (**(code **)(*param_1 + 0xe8))(param_1,param_3,0);
    iVar2 = FUN_180023180(param_1[1],2,1);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x10))(param_1,1);
      return -1;
    }
    cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (cVar1 != '\0') {
      dVar5 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
      iVar3 = (int)dVar5;
    }
    lVar4 = *param_1;
  }
  (**(code **)(lVar4 + 0x10))(param_1,1);
  return iVar3;
}


