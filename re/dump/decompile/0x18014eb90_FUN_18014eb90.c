// 0x18014eb90  FUN_18014eb90
// size=518 thunk=false
// signature: undefined FUN_18014eb90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18014eb90(LPCWSTR param_1)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  undefined8 uVar5;
  HANDLE hFile;
  undefined4 extraout_var;
  wchar_t ***pppwVar6;
  LPCWSTR pWVar7;
  undefined1 auStackY_98 [32];
  undefined1 local_50 [32];
  wchar_t **local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStackY_98;
  uVar5 = FUN_180066000(param_1,local_50);
  FUN_180065930(uVar5,local_30);
  FUN_18021e290(local_50);
  pppwVar6 = local_30;
  if (7 < local_18) {
    pppwVar6 = (wchar_t ***)local_30[0];
  }
  iVar2 = _wcsicmp((wchar_t *)pppwVar6,L".db");
  if (iVar2 == 0) {
LAB_18014ec6e:
    bVar1 = true;
  }
  else {
    pppwVar6 = local_30;
    if (7 < local_18) {
      pppwVar6 = (wchar_t ***)local_30[0];
    }
    iVar2 = _wcsicmp((wchar_t *)pppwVar6,L".db-journal");
    if (iVar2 == 0) goto LAB_18014ec6e;
    pppwVar6 = local_30;
    if (7 < local_18) {
      pppwVar6 = (wchar_t ***)local_30[0];
    }
    iVar2 = _wcsicmp((wchar_t *)pppwVar6,L".db-wal");
    if (iVar2 == 0) goto LAB_18014ec6e;
    pppwVar6 = local_30;
    if (7 < local_18) {
      pppwVar6 = (wchar_t ***)local_30[0];
    }
    iVar2 = _wcsicmp((wchar_t *)pppwVar6,L".sqlite");
    if (iVar2 == 0) goto LAB_18014ec6e;
    bVar1 = false;
  }
  hFile = (HANDLE)FUN_18021e290(local_30);
  if (!bVar1) {
    pWVar7 = param_1;
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      pWVar7 = *(LPCWSTR *)param_1;
    }
    hFile = CreateFileW(pWVar7,0x40000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffffffffffff) {
LAB_18014ed31:
      BVar4 = SetFilePointerEx(hFile,(LARGE_INTEGER)0x0,(PLARGE_INTEGER)0x0,0);
      if ((BVar4 != 0) && (BVar4 = SetEndOfFile(hFile), BVar4 != 0)) {
        CloseHandle(hFile);
        return 1;
      }
      CloseHandle(hFile);
      return 0;
    }
    DVar3 = GetLastError();
    hFile = (HANDLE)CONCAT44(extraout_var,DVar3);
    if (DVar3 == 5) {
      pWVar7 = param_1;
      if (7 < *(ulonglong *)(param_1 + 0xc)) {
        pWVar7 = *(LPCWSTR *)param_1;
      }
      SetFileAttributesW(pWVar7,0x80);
      if (7 < *(ulonglong *)(param_1 + 0xc)) {
        param_1 = *(LPCWSTR *)param_1;
      }
      hFile = CreateFileW(param_1,0x40000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffffffffffff) goto LAB_18014ed31;
    }
  }
  return (ulonglong)hFile & 0xffffffffffffff00;
}


