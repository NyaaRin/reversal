// 0x18023a6d0  FUN_18023a6d0
// size=264 thunk=false
// signature: undefined FUN_18023a6d0()
// status: ok


void FUN_18023a6d0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(param_3 - 1) >> 1;
  lVar3 = param_2;
  while (lVar3 < lVar4) {
    cVar1 = FUN_180201cf0(param_1 + 0x40 + lVar3 * 0x40,param_1 + 0x20 + lVar3 * 0x40);
    lVar2 = lVar3 * 0x20;
    lVar3 = lVar3 * 2 + ((longlong)cVar1 >> 0x3f) + 2;
    FUN_18020e8a0(param_1 + lVar2,lVar3 * 0x20 + param_1);
  }
  if ((lVar3 == lVar4) && ((param_3 & 1) == 0)) {
    FUN_18020e8a0(param_1 + lVar3 * 0x20,param_1 + -0x20 + param_3 * 0x20);
    lVar3 = param_3 - 1;
  }
  while (param_2 < lVar3) {
    lVar2 = lVar3 + -1 >> 1;
    lVar4 = lVar2 * 0x20 + param_1;
    cVar1 = FUN_180201cf0(lVar4,param_4);
    if (-1 < cVar1) break;
    FUN_18020e8a0(param_1 + lVar3 * 0x20,lVar4);
    lVar3 = lVar2;
  }
  FUN_18020e8a0(param_1 + lVar3 * 0x20,param_4);
  return;
}


