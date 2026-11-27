// 0x180288eb0  FUN_180288eb0
// size=360 thunk=false
// signature: undefined FUN_180288eb0()
// status: ok


bool FUN_180288eb0(undefined8 param_1,LPCSTR param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  LPCWSTR lpWideCharStr;
  HINSTANCE pHVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  
  iVar3 = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  lpWideCharStr = (LPCWSTR)0x0;
  if (0 < iVar3) {
    iVar7 = iVar3;
    if (iVar3 < 8) {
      iVar7 = 8;
    }
    lpWideCharStr = (LPCWSTR)0x0;
    if (0 < iVar7) {
      lpWideCharStr = (LPCWSTR)FUN_18026f580((longlong)iVar7 * 2);
    }
  }
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr,iVar3);
  pHVar4 = ShellExecuteW((HWND)0x0,L"open",lpWideCharStr,(LPCWSTR)0x0,(LPCWSTR)0x0,10);
  if (lpWideCharStr != (LPCWSTR)0x0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    if (lVar1 != 0) {
      piVar6 = (int *)(lVar1 + 0x29b0 + (longlong)*(short *)(lVar1 + 0x29ac) * 8);
      if (*piVar6 != *(int *)(lVar1 + 4)) {
        iVar3 = *(short *)(lVar1 + 0x29ac) + 1;
        lVar2 = (longlong)iVar3;
        sVar5 = (short)iVar3 +
                ((short)((ulonglong)(lVar2 * 0x2aaaaaab) >> 0x20) +
                (short)((lVar2 / 6 + (lVar2 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -6;
        *(short *)(lVar1 + 0x29ac) = sVar5;
        piVar6 = (int *)(lVar1 + ((longlong)sVar5 + 0x536) * 8);
        *piVar6 = *(int *)(lVar1 + 4);
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      *(int *)(lVar1 + 0x29a8) = *(int *)(lVar1 + 0x29a8) + 1;
    }
    free(lpWideCharStr);
  }
  return 0x20 < (longlong)pHVar4;
}


