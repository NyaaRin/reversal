// 0x180238bf0  FUN_180238bf0
// size=164 thunk=false
// signature: undefined FUN_180238bf0()
// status: ok


void FUN_180238bf0(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  longlong local_18;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    for (lVar4 = *(longlong *)(param_1 + 0x18); local_18 = lVar4, lVar4 != lVar1;
        lVar4 = lVar4 + 0x68) {
      FUN_18020e450(lVar4 + 0x48);
      FUN_18020d5c0(lVar4 + 0x28);
      FUN_18020e450(lVar4 + 8);
    }
    pvVar2 = *(void **)(param_1 + 8);
    _Memory = pvVar2;
    puVar5 = auStack_38;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x68)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar5 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      pcVar3 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar3)(5);
      puVar5 = auStack_30;
    }
    *(undefined8 *)(puVar5 + -8) = 0x180238c83;
    free(_Memory);
  }
  return;
}


