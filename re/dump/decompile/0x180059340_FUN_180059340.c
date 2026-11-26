// 0x180059340  FUN_180059340
// size=407 thunk=false
// signature: undefined FUN_180059340()
// status: ok


ulonglong FUN_180059340(char *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *****pppppuVar4;
  int iVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  size_t sVar7;
  longlong *plVar8;
  char cVar9;
  undefined8 ******ppppppuVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong _Size;
  ulonglong uVar13;
  undefined8 *****local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined *local_58;
  
  if ((param_1 == (char *)0x0) || (DAT_1805b88a0 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_58 = &DAT_1803e7760;
  iVar5 = _Mtx_lock(&DAT_1803e7760);
  if (iVar5 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  if (DAT_1803e77ac == 0x7fffffff) {
    DAT_1803e77ac = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  local_78 = (undefined8 ******)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  sVar7 = strlen(param_1);
  FUN_18001d080(&local_78,param_1,sVar7);
  uVar13 = local_60;
  uVar6 = local_68;
  pppppuVar4 = local_78;
  plVar3 = DAT_1805b8898;
  plVar11 = (longlong *)DAT_1805b8898[1];
  cVar9 = *(char *)((longlong)plVar11 + 0x19);
  plVar12 = DAT_1805b8898;
  while (cVar9 == '\0') {
    plVar8 = plVar11 + 4;
    ppppppuVar10 = &local_78;
    if (0xf < uVar13) {
      ppppppuVar10 = (undefined8 ******)pppppuVar4;
    }
    uVar1 = plVar11[6];
    if (0xf < (ulonglong)plVar11[7]) {
      plVar8 = (longlong *)*plVar8;
    }
    _Size = uVar1;
    if (uVar6 < uVar1) {
      _Size = uVar6;
    }
    iVar5 = memcmp(plVar8,ppppppuVar10,_Size);
    if (iVar5 == 0) {
      if (uVar1 < uVar6) {
        cVar9 = -1;
      }
      else {
        if (uVar6 < uVar1) goto LAB_180059445;
        cVar9 = '\0';
        plVar12 = plVar11;
      }
    }
    else if (iVar5 < 0) {
      cVar9 = -1;
    }
    else {
LAB_180059445:
      cVar9 = '\x01';
      plVar12 = plVar11;
    }
    plVar8 = plVar11 + 2;
    if (-1 < cVar9) {
      plVar8 = plVar11;
    }
    plVar11 = (longlong *)*plVar8;
    cVar9 = *(char *)((longlong)plVar11 + 0x19);
  }
  if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
    plVar11 = plVar12 + 4;
    uVar1 = plVar12[6];
    if (0xf < (ulonglong)plVar12[7]) {
      plVar11 = (longlong *)*plVar11;
    }
    ppppppuVar10 = &local_78;
    if (0xf < uVar13) {
      ppppppuVar10 = (undefined8 ******)pppppuVar4;
    }
    uVar13 = uVar6;
    if (uVar1 < uVar6) {
      uVar13 = uVar1;
    }
    iVar5 = memcmp(ppppppuVar10,plVar11,uVar13);
    if (iVar5 == 0) {
      if (uVar1 <= uVar6) goto LAB_1800594a5;
    }
    else if (-1 < iVar5) goto LAB_1800594a5;
  }
  plVar12 = plVar3;
LAB_1800594a5:
  FUN_18020e450(&local_78);
  _Mtx_unlock(&DAT_1803e7760);
  return (ulonglong)(plVar12 != plVar3);
}


