// 0x1802dc4f0  FUN_1802dc4f0
// size=87 thunk=false
// signature: undefined FUN_1802dc4f0()
// status: ok


void FUN_1802dc4f0(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x3930)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x3930) & 0xfffffffe;
  return;
}


