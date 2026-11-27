// 0x1802d78e0  FUN_1802d78e0
// size=32 thunk=false
// signature: undefined FUN_1802d78e0()
// status: ok


DWORD FUN_1802d78e0(HANDLE param_1,LPWIN32_FIND_DATAW param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = FindNextFileW(param_1,param_2);
  if (BVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001802d78f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}


