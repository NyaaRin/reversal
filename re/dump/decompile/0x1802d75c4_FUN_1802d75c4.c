// 0x1802d75c4  FUN_1802d75c4
// size=31 thunk=false
// signature: undefined FUN_1802d75c4()
// status: ok


void FUN_1802d75c4(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = CloseHandle(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}


