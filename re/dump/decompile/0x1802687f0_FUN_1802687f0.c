// 0x1802687f0  FUN_1802687f0
// size=400 thunk=false
// signature: undefined FUN_1802687f0()
// status: ok


void FUN_1802687f0(longlong *param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  size_t sVar5;
  ulonglong *puVar6;
  char *pcVar7;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*param_3 == '%') {
    if (param_3[1] == 's') {
      if (param_3[2] == '\0') {
        pcVar7 = "(null)";
        if ((char *)*param_4 != (char *)0x0) {
          pcVar7 = (char *)*param_4;
        }
        *param_1 = (longlong)pcVar7;
        if (param_2 == (longlong *)0x0) {
          return;
        }
        sVar5 = strlen(pcVar7);
        *param_2 = (longlong)(pcVar7 + sVar5);
        return;
      }
    }
    else if ((((param_3[1] == '.') && (param_3[2] == '*')) && (param_3[3] == 's')) &&
            (param_3[4] == '\0')) {
      lVar2 = param_4[1];
      iVar1 = (int)*param_4;
      if (lVar2 == 0) {
        *param_1 = (longlong)"(null)";
        iVar4 = 6;
        if (iVar1 < 6) {
          iVar4 = iVar1;
        }
        pcVar7 = "(null)" + iVar4;
      }
      else {
        *param_1 = lVar2;
        pcVar7 = (char *)(iVar1 + lVar2);
      }
      goto LAB_18026896c;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  iVar1 = *(int *)(lVar2 + 0x2ae8);
  lVar3 = *(longlong *)(lVar2 + 0x2af0);
  puVar6 = (ulonglong *)FUN_180012990();
  iVar4 = __stdio_common_vsprintf(*puVar6 | 1,lVar3,(longlong)iVar1,param_3,0,param_4);
  if (iVar4 < 0) {
    iVar4 = -1;
  }
  if (lVar3 != 0) {
    if ((iVar4 == -1) || (iVar1 <= iVar4)) {
      iVar4 = iVar1 + -1;
    }
    *(undefined1 *)(iVar4 + lVar3) = 0;
  }
  *param_1 = *(longlong *)(lVar2 + 0x2af0);
  if (param_2 == (longlong *)0x0) {
    return;
  }
  pcVar7 = (char *)((longlong)iVar4 + *(longlong *)(lVar2 + 0x2af0));
LAB_18026896c:
  *param_2 = (longlong)pcVar7;
  return;
}


