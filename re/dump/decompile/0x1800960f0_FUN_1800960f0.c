// 0x1800960f0  FUN_1800960f0
// size=205 thunk=false
// signature: undefined FUN_1800960f0()
// status: ok


undefined8 FUN_1800960f0(longlong *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  FUN_18002db10(param_1[1]);
  cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return DAT_1803813b0;
  }
  iVar3 = FUN_180023180(param_1[1],0,1);
  if (iVar3 == 0) {
    cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (cVar1 != '\0') {
      uVar5 = (**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
      uVar4 = (undefined4)uVar5;
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      goto LAB_18009618c;
    }
  }
  uVar4 = (undefined4)DAT_1803813b0;
  uVar6 = (undefined4)((ulonglong)DAT_1803813b0 >> 0x20);
LAB_18009618c:
  (**(code **)(*param_1 + 0x10))(param_1,1);
  sVar2 = _dclass(CONCAT44(uVar6,uVar4));
  if (0 < sVar2) {
    uVar4 = (undefined4)DAT_1803813b0;
    uVar6 = (undefined4)((ulonglong)DAT_1803813b0 >> 0x20);
  }
  return CONCAT44(uVar6,uVar4);
}


