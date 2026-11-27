// 0x180267280  FUN_180267280
// size=108 thunk=false
// signature: undefined FUN_180267280()
// status: ok


void FUN_180267280(undefined2 *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x9b; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0xffff;
    puVar2 = puVar2 + 1;
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    *(undefined8 *)(param_1 + 0x9c) = 0;
    FUN_18026f680();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *(undefined8 *)(param_1 + 0xa4) = 0;
    FUN_18026f680();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


