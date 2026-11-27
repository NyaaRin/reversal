// 0x18008fca0  FUN_18008fca0
// size=296 thunk=false
// signature: undefined FUN_18008fca0()
// status: ok


ulonglong FUN_18008fca0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                       undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  FUN_18002db10(param_1[1],param_2,&DAT_180346dac);
  cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  lVar5 = *param_1;
  if (cVar1 != '\0') {
    (**(code **)(lVar5 + 0xf0))(param_1,param_3);
    (**(code **)(*param_1 + 0xf0))(param_1,param_4);
    iVar2 = FUN_180023180(param_1[1],2,1);
    if (iVar2 != 0) {
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,1);
      return uVar4 & 0xffffffffffffff00;
    }
    cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    lVar5 = *param_1;
    if (cVar1 != '\0') {
      uVar6 = (**(code **)(lVar5 + 0xc0))(param_1,0xffffffff);
      *param_5 = uVar6;
      (**(code **)(*param_1 + 0x10))(param_1,1);
      uVar3 = (uint)((ulonglong)*param_5 >> 0x34) & 0x7ff;
      return (ulonglong)CONCAT31((int3)(uVar3 >> 8),uVar3 != 0x7ff);
    }
  }
  uVar4 = (**(code **)(lVar5 + 0x10))(param_1,1);
  return uVar4 & 0xffffffffffffff00;
}


