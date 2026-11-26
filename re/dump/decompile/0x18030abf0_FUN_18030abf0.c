// 0x18030abf0  FUN_18030abf0
// size=175 thunk=false
// signature: undefined FUN_18030abf0()
// status: ok


void FUN_18030abf0(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  plVar4 = DAT_1803fb108;
  plVar3 = DAT_1803fb100;
  if (DAT_1803fb100 != (longlong *)0x0) {
    for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    plVar3 = DAT_1803fb100;
    puVar5 = auStack_28;
    if (0xfff < (ulonglong)((DAT_1803fb110 - (longlong)DAT_1803fb100 >> 3) * 8)) {
      plVar3 = (longlong *)DAT_1803fb100[-1];
      plVar4 = (longlong *)((longlong)DAT_1803fb100 + (-8 - (longlong)plVar3));
      puVar5 = auStack_28;
      if ((longlong *)0x1f < plVar4) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        plVar3 = plVar4;
        puVar5 = auStack_20;
      }
    }
    *(undefined8 *)(puVar5 + -8) = 0x18030ac83;
    free(plVar3);
    DAT_1803fb110 = 0;
    DAT_1803fb100 = (longlong *)0x0;
    DAT_1803fb108 = (longlong *)0x0;
  }
  return;
}


