// 0x1800dd770  FUN_1800dd770
// size=202 thunk=false
// signature: undefined FUN_1800dd770()
// status: ok


undefined1 FUN_1800dd770(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar3 = (**(code **)*param_2)(param_2);
  FUN_18002db10(param_1,0xffffd8ee,"LeyHitreg");
  cVar1 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,5);
  if (cVar1 != '\0') {
    FUN_18002db10(param_1,0xffffffff,param_3);
    cVar1 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,1);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_2 + 200))(param_2,0xffffffff);
    }
  }
  iVar4 = (**(code **)*param_2)(param_2);
  while (iVar3 < iVar4) {
    (**(code **)(*param_2 + 0x10))(param_2,1);
    iVar4 = (**(code **)*param_2)(param_2);
  }
  return uVar2;
}


