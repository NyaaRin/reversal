// 0x1802dc490  FUN_1802dc490
// size=87 thunk=false
// signature: undefined FUN_1802dc490()
// status: ok


void FUN_1802dc490(void)

{
  *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2114)
       = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2114) & 0xfffffffe;
  return;
}


