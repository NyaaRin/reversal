// 0x180115110  FUN_180115110
// size=116 thunk=false
// signature: undefined FUN_180115110()
// status: ok


void FUN_180115110(longlong *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xfc4);
  *puVar1 = 1;
  (**(code **)(*param_1 + 0x78))(param_1,DAT_18040a378);
  *puVar1 = 0;
  LOCK();
  DAT_18040a389 = 1;
  UNLOCK();
  DAT_18040a260 = GetTickCount64();
  DAT_1803fcf20 = DAT_1803fcf20 + 1;
  if (DAT_1803fcf20 < 0xb) {
    FUN_180014410("[SP] snapshot #%d -> cleanRT\n");
  }
  return;
}


