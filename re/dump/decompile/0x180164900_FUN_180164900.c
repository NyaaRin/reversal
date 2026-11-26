// 0x180164900  FUN_180164900
// size=256 thunk=false
// signature: undefined FUN_180164900()
// status: ok


longlong FUN_180164900(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  code *pcVar4;
  void *_Memory;
  undefined1 *puVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  FUN_18020e8a0();
  plVar1 = (longlong *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  plVar2 = (longlong *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  if (plVar2 != plVar1) {
    pvVar3 = (void *)*plVar2;
    if (pvVar3 != (void *)0x0) {
      _Memory = pvVar3;
      puVar5 = auStack_38;
      if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 0x58) - (longlong)pvVar3 >> 3) * 8)) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8), puVar5 = auStack_38,
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
        _Memory = (void *)0x5;
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)();
        puVar5 = auStack_30;
      }
      *(undefined8 *)(puVar5 + -8) = 0x1801649c4;
      free(_Memory);
      *plVar2 = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    *plVar2 = *plVar1;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  return param_1;
}


