// 0x180204e10  FUN_180204e10
// size=244 thunk=false
// signature: undefined FUN_180204e10()
// status: ok


longlong * FUN_180204e10(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = DAT_1805c3998;
  uVar4 = (((((ulonglong)*(byte *)(param_3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_3 + 0x11)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_3 + 0x12)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_3 + 0x13)) * 0x100000001b3 & DAT_1805c39c0;
  plVar1 = (longlong *)(DAT_1805c39a8 + uVar4 * 0x10);
  lVar2 = DAT_1805c39a8 + uVar4 * 0x10;
  if (*(longlong **)(lVar2 + 8) == param_3) {
    if ((longlong *)*plVar1 == param_3) {
      *plVar1 = DAT_1805c3998;
      *(longlong *)(lVar2 + 8) = lVar3;
    }
    else {
      *(longlong *)(lVar2 + 8) = param_3[1];
    }
  }
  else if ((longlong *)*plVar1 == param_3) {
    *plVar1 = *param_3;
  }
  lVar2 = *param_3;
  DAT_1805c39a0 = DAT_1805c39a0 + -1;
  *(longlong *)param_3[1] = lVar2;
  *(longlong *)(lVar2 + 8) = param_3[1];
  FUN_18020e450();
  free(param_3);
  *param_2 = lVar2;
  return param_2;
}


