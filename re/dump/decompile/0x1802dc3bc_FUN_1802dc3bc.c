// 0x1802dc3bc  FUN_1802dc3bc
// size=87 thunk=false
// signature: undefined FUN_1802dc3bc()
// status: ok


void FUN_1802dc3bc(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x3a84)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x3a84) & 0xfffffffe;
  return;
}


