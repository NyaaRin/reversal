// 0x1802dd5ac  FUN_1802dd5ac
// size=87 thunk=false
// signature: undefined FUN_1802dd5ac()
// status: ok


void FUN_1802dd5ac(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2120)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2120) & 0xfffffffe;
  return;
}


