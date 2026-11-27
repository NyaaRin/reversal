// 0x1802dd470  FUN_1802dd470
// size=87 thunk=false
// signature: undefined FUN_1802dd470()
// status: ok


void FUN_1802dd470(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2118)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2118) & 0xfffffffe;
  return;
}


