// 0x1802765c0  FUN_1802765c0
// size=99 thunk=false
// signature: undefined FUN_1802765c0()
// status: ok


void FUN_1802765c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0xcc) = 1;
  plVar3 = *(longlong **)(param_1 + 0x1b8);
  plVar1 = plVar3 + *(int *)(param_1 + 0x1b0);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if (*(char *)(lVar2 + 0xd4) == '\0') {
      *(undefined1 *)(lVar2 + 0xd2) = 1;
      *(undefined1 *)(lVar2 + 0xcc) = 1;
      FUN_1802765c0();
    }
  }
  return;
}


