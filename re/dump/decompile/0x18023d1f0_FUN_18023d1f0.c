// 0x18023d1f0  FUN_18023d1f0
// size=174 thunk=false
// signature: undefined FUN_18023d1f0()
// status: ok


void FUN_18023d1f0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_1[0x14];
  lVar1 = param_1[0x13];
  if ((ulonglong)param_1[0x16] < (ulonglong)(lVar3 - lVar1 >> 6)) {
    lVar3 = param_1[0x16] * 0x40;
    *(undefined8 *)(lVar3 + lVar1) = *param_1;
    FUN_18023ca00(lVar1 + 8 + lVar3,param_1 + 1);
    plVar2 = (longlong *)(lVar1 + 0x28 + lVar3);
    if (plVar2 != param_1 + 5) {
      lVar3 = param_1[5];
      FUN_18023d0b0(plVar2,lVar3,param_1[6] - lVar3 >> 4);
    }
  }
  else if (lVar3 == param_1[0x15]) {
    FUN_180240100(param_1 + 0x13,lVar3,param_1);
  }
  else {
    FUN_180240e30(lVar3,param_1);
    param_1[0x14] = param_1[0x14] + 0x40;
  }
  param_1[0x16] = param_1[0x16] + 1;
  return;
}


