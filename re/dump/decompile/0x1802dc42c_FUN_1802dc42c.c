// 0x1802dc42c  FUN_1802dc42c
// size=87 thunk=false
// signature: undefined FUN_1802dc42c()
// status: ok


void FUN_1802dc42c(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x211c)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x211c) & 0xfffffffe;
  return;
}


