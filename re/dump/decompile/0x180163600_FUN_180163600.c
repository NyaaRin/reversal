// 0x180163600  FUN_180163600
// size=142 thunk=false
// signature: undefined FUN_180163600()
// status: ok


void FUN_180163600(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 1;
  lVar2 = DAT_1803e9a38;
  lVar4 = DAT_1803e9a40;
  if (1 < (ulonglong)(DAT_1803e9a40 - DAT_1803e9a38 >> 3)) {
    do {
      plVar1 = *(longlong **)(lVar2 + uVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        lVar2 = DAT_1803e9a38;
        lVar4 = DAT_1803e9a40;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)(lVar4 - lVar2 >> 3));
  }
  if (lVar2 != lVar4) {
    DAT_1803e9a40 = lVar2;
  }
  if (DAT_1803e9a20 != (longlong *)0x0) {
    (**(code **)(*DAT_1803e9a20 + 0x10))();
    DAT_1803e9a20 = (longlong *)0x0;
  }
  return;
}


