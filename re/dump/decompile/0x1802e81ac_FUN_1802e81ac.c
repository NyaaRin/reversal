// 0x1802e81ac  FUN_1802e81ac
// size=87 thunk=false
// signature: undefined FUN_1802e81ac()
// status: ok


void FUN_1802e81ac(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x20f4)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x20f4) & 0xfffffffe;
  return;
}


