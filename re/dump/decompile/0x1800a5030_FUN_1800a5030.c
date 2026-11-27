// 0x1800a5030  FUN_1800a5030
// size=284 thunk=false
// signature: undefined FUN_1800a5030()
// status: ok


ulonglong FUN_1800a5030(longlong *param_1,undefined4 param_2,undefined8 param_3,float *param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  double dVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar1 = param_1[1];
    FUN_180023010(&local_48,lVar1);
    (*DAT_1803faee8)(lVar1,param_2,"Primary");
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
  if (cVar2 == '\0') {
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,1);
    return uVar4 & 0xffffffffffffff00;
  }
  (**(code **)(*param_1 + 0xe8))(param_1,param_3,0);
  (**(code **)(*param_1 + 0xa8))(param_1,0xfffffffe);
  bVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
  if (bVar3 != 0) {
    dVar5 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
    *param_4 = (float)dVar5;
  }
  (**(code **)(*param_1 + 0x10))(param_1,2);
  return (ulonglong)bVar3;
}


