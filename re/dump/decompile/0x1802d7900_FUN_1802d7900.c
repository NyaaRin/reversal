// 0x1802d7900  FUN_1802d7900
// size=31 thunk=false
// signature: undefined FUN_1802d7900()
// status: ok


void FUN_1802d7900(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = FindClose(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}


