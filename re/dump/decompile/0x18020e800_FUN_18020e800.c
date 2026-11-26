// 0x18020e800  FUN_18020e800
// size=94 thunk=false
// signature: undefined FUN_18020e800()
// status: ok


longlong * FUN_18020e800(longlong *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  if (uVar2 <= uVar1) {
    FUN_18021abd0(param_1,param_2,uVar2,param_2);
    return param_1;
  }
  param_1[2] = uVar1 + 1;
  if (0xf < uVar2) {
    lVar3 = *param_1;
    *(undefined1 *)(uVar1 + lVar3) = param_2;
    *(undefined1 *)(uVar1 + 1 + lVar3) = 0;
    return param_1;
  }
  *(undefined1 *)(uVar1 + (longlong)param_1) = param_2;
  *(undefined1 *)(uVar1 + 1 + (longlong)param_1) = 0;
  return param_1;
}


