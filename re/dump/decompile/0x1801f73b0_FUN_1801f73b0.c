// 0x1801f73b0  FUN_1801f73b0
// size=135 thunk=false
// signature: undefined FUN_1801f73b0()
// status: ok


void FUN_1801f73b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  if (DAT_1803fa498 != (code *)0x0) {
    if (DAT_1803ff270 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001801f73d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_1803fa498)();
      return;
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined1 *)(lVar2 + 0xf6f);
    uVar1 = *puVar3;
    *puVar3 = 1;
    if (*(char *)(lVar2 + 0xf89) != '\0') {
      *(undefined1 *)(lVar2 + 0xf8a) = 1;
    }
    (*DAT_1803fa498)(param_1,param_2);
    *puVar3 = uVar1;
  }
  return;
}


