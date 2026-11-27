// 0x1802d7920  FUN_1802d7920
// size=120 thunk=false
// signature: undefined FUN_1802d7920()
// status: ok


DWORD FUN_1802d7920(LPCWSTR param_1,longlong *param_2,LPVOID param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  
  if (*param_2 != -1) {
    BVar1 = FindClose((HANDLE)*param_2);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  pvVar3 = FindFirstFileExW(param_1,FindExInfoBasic,param_3,FindExSearchNameMatch,(LPVOID)0x0,0);
  *param_2 = (longlong)pvVar3;
  if (pvVar3 == (HANDLE)0xffffffffffffffff) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  return DVar2;
}


