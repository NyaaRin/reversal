// 0x180287c20  FUN_180287c20
// size=543 thunk=false
// signature: undefined FUN_180287c20()
// status: ok


void FUN_180287c20(longlong param_1,char *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *_Str;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  int iVar8;
  size_t sVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  float fVar13;
  
  fVar7 = DAT_180380bb0;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  do {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar3 + 0xec0);
    pcVar12 = *(char **)(lVar4 + 0x2880);
    _Str = *(char **)(lVar4 + 0x2888);
    lVar5 = *(longlong *)(lVar4 + 0x1520);
    *(undefined8 *)(lVar4 + 0x2888) = 0;
    *(undefined8 *)(lVar4 + 0x2880) = 0;
    if ((param_3 == (char *)0x0) && (param_3 = param_2, param_2 != (char *)0xffffffffffffffff)) {
      while (*param_3 != '\0') {
        pcVar10 = param_3 + 1;
        if (((*param_3 == '#') && (*pcVar10 == '#')) ||
           (param_3 = pcVar10, pcVar10 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (param_1 != 0) {
      fVar13 = *(float *)(lVar4 + 0xcc8);
      if (*(float *)(lVar4 + 0xcc8) <= *(float *)(lVar4 + 0xcd8)) {
        fVar13 = *(float *)(lVar4 + 0xcd8);
      }
      if (*(float *)(param_1 + 4) <= fVar13 + *(float *)(lVar4 + 0x2890) + fVar7) {
        if (param_1 == 0) goto LAB_180287d34;
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      *(float *)(lVar4 + 0x2890) = *(float *)(param_1 + 4);
      if (bVar6) {
        FUN_180287bb0(&DAT_18033f5ac);
        *(undefined1 *)(lVar4 + 0x2859) = 1;
      }
    }
LAB_180287d34:
    if (pcVar12 != (char *)0x0) {
      sVar9 = strlen(pcVar12);
      FUN_180287c20(param_1,pcVar12,pcVar12 + sVar9);
    }
    iVar1 = *(int *)(lVar5 + 0x1a0);
    iVar8 = *(int *)(lVar4 + 0x2894);
    if (iVar1 < iVar8) {
      *(int *)(lVar4 + 0x2894) = iVar1;
      iVar8 = iVar1;
    }
    iVar1 = *(int *)(lVar5 + 0x1a0);
    while( true ) {
      pcVar10 = memchr(param_2,10,(longlong)param_3 - (longlong)param_2);
      pcVar12 = param_3;
      if (pcVar10 != (char *)0x0) {
        pcVar12 = pcVar10;
      }
      if ((param_2 == pcVar12) && (pcVar12 == param_3)) break;
      iVar11 = (iVar1 - iVar8) * 4;
      if (*(char *)(lVar4 + 0x2859) == '\0') {
        iVar11 = 1;
      }
      FUN_180287bb0("%*s%.*s",iVar11,&DAT_18033e5ea,(int)pcVar12 - (int)param_2,param_2);
      *(undefined1 *)(lVar4 + 0x2859) = 0;
      if (*pcVar12 == '\n') {
        FUN_180287bb0(&DAT_18033f5ac);
        *(undefined1 *)(lVar4 + 0x2859) = 1;
      }
      if (pcVar12 == param_3) break;
      param_2 = pcVar12 + 1;
    }
    if (_Str == (char *)0x0) {
      return;
    }
    sVar9 = strlen(_Str);
    param_3 = _Str + sVar9;
    param_2 = _Str;
  } while( true );
}


