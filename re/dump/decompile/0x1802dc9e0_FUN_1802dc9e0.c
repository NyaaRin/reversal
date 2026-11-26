// 0x1802dc9e0  FUN_1802dc9e0
// size=87 thunk=false
// signature: undefined FUN_1802dc9e0()
// status: ok


void FUN_1802dc9e0(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2128)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2128) & 0xfffffffe;
  return;
}


