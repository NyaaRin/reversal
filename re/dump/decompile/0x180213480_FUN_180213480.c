// 0x180213480  FUN_180213480
// size=454 thunk=false
// signature: undefined FUN_180213480()
// status: ok


void FUN_180213480(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_58;
  longlong local_50;
  
  lVar1 = param_2 - param_1;
  while( true ) {
    if (lVar1 < 0xa50) {
      FUN_180221190(param_1,param_2);
      return;
    }
    if (param_3 < 1) break;
    lVar1 = param_2 + -0x50;
    lVar4 = ((param_2 - param_1 >> 4) * -0x3333333333333333 >> 1) * 0x50 + param_1;
    lVar2 = (lVar1 - param_1 >> 4) * -0x3333333333333333;
    if (lVar2 < 0x29) {
      FUN_18023ad10(param_1,lVar4,lVar1);
    }
    else {
      lVar3 = lVar2 + 1 >> 3;
      lVar2 = lVar3 * 0x50 + param_1;
      FUN_18023ad10(param_1,lVar2,lVar3 * 0xa0 + param_1);
      FUN_18023ad10(lVar4 + lVar3 * -0x50,lVar4,lVar3 * 0x50 + lVar4);
      lVar1 = lVar1 + lVar3 * -0x50;
      FUN_18023ad10(param_2 + -0x50 + lVar3 * -0xa0,lVar1);
      FUN_18023ad10(lVar2,lVar4,lVar1);
    }
    FUN_180230cd0(&local_58,param_1,lVar4,param_2);
    lVar1 = local_50;
    lVar2 = local_58;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((local_58 - param_1 >> 4) * -0x3333333333333333 <
        (param_2 - local_50 >> 4) * -0x3333333333333333) {
      FUN_180213480(param_1,local_58,param_3,param_4);
      param_1 = lVar1;
      lVar2 = param_2;
    }
    else {
      FUN_180213480(local_50,param_2,param_3,param_4);
    }
    lVar1 = lVar2 - param_1;
    param_2 = lVar2;
  }
  FUN_180221450(param_1,param_2,param_4);
  FUN_1802215d0(param_1,param_2,param_4);
  return;
}


