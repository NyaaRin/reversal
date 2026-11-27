// 0x1802dd61c  FUN_1802dd61c
// size=87 thunk=false
// signature: undefined FUN_1802dd61c()
// status: ok


void FUN_1802dd61c(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x1090)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x1090) & 0xfffffffe;
  return;
}


