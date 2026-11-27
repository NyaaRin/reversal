// 0x180268a40  FUN_180268a40
// size=472 thunk=false
// signature: undefined FUN_180268a40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FILE * FUN_180268a40(LPCSTR param_1,LPCSTR param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int cchWideChar;
  wchar_t *_Memory;
  FILE *pFVar4;
  short sVar5;
  int *piVar6;
  wchar_t *lpWideCharStr;
  undefined1 auStackY_298 [32];
  wchar_t local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStackY_298;
  _Memory = (wchar_t *)0x0;
  iVar3 = MultiByteToWideChar(0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  if (0x104 < cchWideChar + iVar3) {
    _Memory = (wchar_t *)FUN_18026f580((longlong)(cchWideChar + iVar3) * 2);
  }
  lpWideCharStr = local_258;
  if (_Memory != (wchar_t *)0x0) {
    lpWideCharStr = _Memory;
  }
  MultiByteToWideChar(0xfde9,0,param_1,-1,lpWideCharStr,iVar3);
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr + iVar3,cchWideChar);
  pFVar4 = _wfopen(lpWideCharStr,lpWideCharStr + iVar3);
  if (_Memory != (wchar_t *)0x0) {
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
    free(_Memory);
  }
  return pFVar4;
}


