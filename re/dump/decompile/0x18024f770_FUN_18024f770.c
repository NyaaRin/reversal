// 0x18024f770  FUN_18024f770
// size=149 thunk=false
// signature: undefined FUN_18024f770()
// status: ok


void FUN_18024f770(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  for (plVar3 = *(longlong **)(param_1 + 0x50); plVar3 != plVar1; plVar3 = plVar3 + 0xc) {
    lVar4 = plVar3[1];
    for (lVar2 = *plVar3; lVar2 != lVar4; lVar2 = lVar2 + 0x10) {
      *(undefined8 *)(lVar2 + 8) = 0;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x360);
  lVar4 = *(longlong *)(param_1 + 0x358);
  if (lVar4 != lVar2) {
    do {
      FUN_18020e450(lVar4 + 0x10);
      lVar4 = lVar4 + 0x30;
    } while (lVar4 != lVar2);
    *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x358);
  }
  return;
}


