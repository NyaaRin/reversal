// 0x180291d90  FUN_180291d90
// size=264 thunk=false
// signature: undefined FUN_180291d90()
// status: ok


void FUN_180291d90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_1802921b0();
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x60);
    plVar1 = plVar3 + *(int *)(lVar2 + 0x58);
    for (plVar4 = plVar3; plVar4 < plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_1) {
        if (plVar4 < plVar1 + -1) {
          plVar3[(longlong)plVar4 - (longlong)plVar3 >> 3] = plVar1[-1];
        }
        *(int *)(lVar2 + 0x58) = *(int *)(lVar2 + 0x58) + -1;
        break;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_18026f680();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_18026f680();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_18026f680();
  }
  FUN_180296c50(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_18026f680();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_18026f680();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_18026f680();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_18026f680();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18026f680();
  }
  return;
}


