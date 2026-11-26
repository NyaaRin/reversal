// 0x18026ba40  FUN_18026ba40
// size=694 thunk=false
// signature: undefined FUN_18026ba40()
// status: ok


void FUN_18026ba40(longlong param_1,undefined8 param_2,char *param_3,char *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char *_Str;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  float fVar11;
  
  pcVar9 = (char *)0xffffffffffffffff;
  if (param_4 != (char *)0x0) {
    pcVar9 = param_4;
  }
  pcVar10 = param_3;
  if (param_3 < pcVar9) {
    while (*pcVar10 != '\0') {
      if (((*pcVar10 == '#') && (pcVar10[1] == '#')) || (pcVar10 = pcVar10 + 1, pcVar9 <= pcVar10))
      break;
    }
  }
  if ((int)pcVar10 == (int)param_3) {
    return;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  FUN_18026b760(*(undefined8 *)(*(longlong *)(lVar3 + 0x1520) + 0x2c8),param_1,param_2,param_3,
                pcVar10,param_5,param_6,param_7);
  if (*(char *)(lVar3 + 0x2858) == '\0') {
    return;
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  pcVar7 = *(char **)(lVar2 + 0x2880);
  _Str = *(char **)(lVar2 + 0x2888);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  *(undefined8 *)(lVar2 + 0x2888) = 0;
  *(undefined8 *)(lVar2 + 0x2880) = 0;
  pcVar9 = param_3;
  if (pcVar10 == (char *)0x0) {
    do {
      pcVar10 = pcVar9;
      if ((pcVar10 == (char *)0xffffffffffffffff) || (*pcVar10 == '\0')) break;
      pcVar9 = pcVar10 + 1;
    } while ((*pcVar10 != '#') || (*pcVar9 != '#'));
  }
  if (param_1 != 0) {
    fVar11 = *(float *)(lVar2 + 0xcc8);
    if (*(float *)(lVar2 + 0xcc8) <= *(float *)(lVar2 + 0xcd8)) {
      fVar11 = *(float *)(lVar2 + 0xcd8);
    }
    if (*(float *)(param_1 + 4) <= fVar11 + *(float *)(lVar2 + 0x2890) + DAT_180380bb0) {
      if (param_1 == 0) goto LAB_18026bbe8;
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    *(float *)(lVar2 + 0x2890) = *(float *)(param_1 + 4);
    if (bVar4) {
      FUN_180287bb0(&DAT_18033f5ac);
      *(undefined1 *)(lVar2 + 0x2859) = 1;
    }
  }
LAB_18026bbe8:
  if (pcVar7 != (char *)0x0) {
    sVar6 = strlen(pcVar7);
    FUN_180287c20(param_1,pcVar7,pcVar7 + sVar6);
  }
  iVar1 = *(int *)(lVar3 + 0x1a0);
  iVar5 = *(int *)(lVar2 + 0x2894);
  if (iVar1 < iVar5) {
    *(int *)(lVar2 + 0x2894) = iVar1;
    iVar5 = iVar1;
  }
  iVar1 = *(int *)(lVar3 + 0x1a0);
  while( true ) {
    pcVar7 = memchr(param_3,10,(longlong)pcVar10 - (longlong)param_3);
    pcVar9 = pcVar10;
    if (pcVar7 != (char *)0x0) {
      pcVar9 = pcVar7;
    }
    if ((param_3 == pcVar9) && (pcVar9 == pcVar10)) break;
    iVar8 = (iVar1 - iVar5) * 4;
    if (*(char *)(lVar2 + 0x2859) == '\0') {
      iVar8 = 1;
    }
    FUN_180287bb0("%*s%.*s",iVar8,&DAT_18033e5ea,(int)pcVar9 - (int)param_3,param_3);
    *(undefined1 *)(lVar2 + 0x2859) = 0;
    if (*pcVar9 == '\n') {
      FUN_180287bb0(&DAT_18033f5ac);
      *(undefined1 *)(lVar2 + 0x2859) = 1;
    }
    if (pcVar9 == pcVar10) break;
    param_3 = pcVar9 + 1;
  }
  if (_Str != (char *)0x0) {
    sVar6 = strlen(_Str);
    FUN_180287c20(param_1,_Str,_Str + sVar6);
  }
  return;
}


