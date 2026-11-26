// 0x1802e0020  FUN_1802e0020
// size=87 thunk=false
// signature: undefined FUN_1802e0020()
// status: ok


void FUN_1802e0020(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x1fa0)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x1fa0) & 0xfffffffe;
  return;
}


