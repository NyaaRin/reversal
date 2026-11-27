// 0x1802e37f0  FUN_1802e37f0
// size=87 thunk=false
// signature: undefined FUN_1802e37f0()
// status: ok


void FUN_1802e37f0(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2124)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2124) & 0xfffffffe;
  return;
}


