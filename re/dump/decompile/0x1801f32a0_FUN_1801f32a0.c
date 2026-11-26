// 0x1801f32a0  FUN_1801f32a0
// size=184 thunk=false
// signature: undefined FUN_1801f32a0()
// status: ok


void FUN_1801f32a0(undefined8 param_1,undefined8 param_2)

{
  if (DAT_1803ff270 == '\0') {
    if (DAT_1803fa3a0 == (code *)0x0) {
      return;
    }
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xecc) < 2) {
      DAT_180409899 = 0;
      if (DAT_180409898 != '\0') {
        DAT_180409898 = '\0';
        FUN_180129d50(0);
      }
      if (((DAT_1804236a5 == '\0') && (DAT_180423650 == 0)) && (DAT_1804236a0 == 0)) {
        FUN_1801fd250("EngineDrawing");
      }
    }
    if (DAT_1803fa3a0 == (code *)0x0) {
      return;
    }
  }
  (*DAT_1803fa3a0)(param_1,param_2);
  return;
}


