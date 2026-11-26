// 0x18018a4c0  FUN_18018a4c0
// size=868 thunk=false
// signature: undefined FUN_18018a4c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_18018a4c0(char *param_1,longlong param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68 [22];
  undefined2 local_52;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar4 = DAT_1803fa608;
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)param_3;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  if (lVar4 == 0) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar4 + 0xec0);
  }
  fVar12 = (float)*(double *)(lVar4 + 0x10);
  cVar2 = FUN_18018a190(param_2);
  *param_1 = cVar2;
  local_40 = 0x93fd561a96ab0c67;
  local_38 = 0x43dc26eb12dd2e34;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_40);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_68,&local_38);
  pcVar6 = (char *)FUN_1801fcfc0(*plVar5 + 0x28);
  if ((*pcVar6 == '\0') || (cVar2 = FUN_18018a340(param_2), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  param_1[1] = cVar2;
  if (*(longlong *)(&DAT_180423b90 + lVar7 * 0x18) == param_2) {
    fVar11 = *(float *)(&DAT_180423b9c + lVar7 * 0x18);
  }
  else {
    *(longlong *)(&DAT_180423b90 + lVar7 * 0x18) = param_2;
    *(undefined8 *)(&DAT_180423b98 + lVar7 * 0x18) = 0;
    fVar11 = 0.0;
    *(undefined4 *)(&DAT_180423ba0 + lVar7 * 0x18) = 0;
    *(undefined2 *)(&DAT_180423ba4 + lVar7 * 0x18) = 0;
    *(undefined2 *)(&DAT_180423ba6 + lVar7 * 0x18) = local_52;
  }
  fVar10 = DAT_1803809ec;
  fVar9 = DAT_1803812fc;
  if ((((0xfe < param_3 - 1U) || (DAT_1803fa608 == 0)) ||
      (fVar8 = (float)(&DAT_1803ff300)[lVar7], fVar8 <= 0.0)) ||
     (((float)*(double *)(DAT_1803fa608 + 0x10) < fVar8 ||
      (fVar9 = (float)*(double *)(DAT_1803fa608 + 0x10) - fVar8, DAT_1803812f8 <= fVar9)))) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = fVar12 - fVar9;
  }
  if (fVar11 <= fVar8) {
    fVar11 = fVar8;
  }
  if (*param_1 == '\0') {
    if ((*(float *)(&DAT_180423b98 + lVar7 * 0x18) == 0.0) ||
       (fVar10 = *(float *)(&DAT_180423b98 + lVar7 * 0x18), DAT_180380ab0 < fVar12 - fVar11)) {
      *(float *)(&DAT_180423b98 + lVar7 * 0x18) = fVar12;
      fVar10 = fVar12;
    }
    *(float *)(&DAT_180423b9c + lVar7 * 0x18) = fVar12;
    (&DAT_180423ba4)[lVar7 * 0x18] = 1;
    if ((DAT_1803809ec <= fVar12 - fVar10) ||
       ((*(float *)(&DAT_180423ba0 + lVar7 * 0x18) != 0.0 &&
        (fVar12 - *(float *)(&DAT_180423ba0 + lVar7 * 0x18) <= DAT_180380c50)))) {
      (&DAT_180423ba5)[lVar7 * 0x18] = 1;
    }
    if ((&DAT_180423ba5)[lVar7 * 0x18] != '\0') {
      *(float *)(&DAT_180423ba0 + lVar7 * 0x18) = fVar12;
    }
    param_1[4] = (&DAT_180423ba5)[lVar7 * 0x18];
  }
  else {
    bVar1 = fVar9 <= DAT_1803809ec;
    (&DAT_180423ba4)[lVar7 * 0x18] = 0;
    fVar9 = DAT_180380ab0;
    if (bVar1) {
      if ((*(float *)(&DAT_180423b98 + lVar7 * 0x18) == 0.0) ||
         (fVar8 = *(float *)(&DAT_180423b98 + lVar7 * 0x18), DAT_180380ab0 < fVar12 - fVar11)) {
        *(float *)(&DAT_180423b98 + lVar7 * 0x18) = fVar12;
        fVar8 = fVar12;
      }
      if ((fVar10 <= fVar12 - fVar8) ||
         ((*(float *)(&DAT_180423ba0 + lVar7 * 0x18) != 0.0 &&
          (fVar12 - *(float *)(&DAT_180423ba0 + lVar7 * 0x18) <= DAT_180380c50)))) {
        (&DAT_180423ba5)[lVar7 * 0x18] = 1;
      }
    }
    cVar3 = (&DAT_180423ba5)[lVar7 * 0x18];
    if ((cVar3 == '\0') || (fVar9 < fVar12 - fVar11)) {
      cVar3 = '\0';
      (&DAT_180423ba5)[lVar7 * 0x18] = 0;
      bVar1 = false;
      param_1[2] = '\0';
    }
    else {
      *(float *)(&DAT_180423ba0 + lVar7 * 0x18) = fVar12;
      bVar1 = true;
      param_1[2] = '\x01';
    }
    param_1[4] = cVar3;
    if ((cVar2 != '\0') || (bVar1)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    param_1[3] = cVar2;
  }
  return param_1;
}


