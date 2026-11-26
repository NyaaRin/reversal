// 0x1800213a0  FUN_1800213a0
// size=333 thunk=false
// signature: undefined FUN_1800213a0()
// status: ok


ulonglong FUN_1800213a0(int param_1,int param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined *puVar13;
  
  if ((param_1 < 1) || (in_RAX = (ulonglong)(param_2 - 1U), 3 < param_2 - 1U)) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar13 = &DAT_1803e92b0;
  iVar7 = _Mtx_lock(&DAT_1803e92b0);
  if (iVar7 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  if (DAT_1803e92fc == 0x7fffffff) {
    DAT_1803e92fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  plVar9 = (longlong *)DAT_1805ba360[1];
  cVar1 = *(char *)((longlong)plVar9 + 0x19);
  plVar12 = DAT_1805ba360;
  while (cVar1 == '\0') {
    plVar11 = plVar9;
    if ((int)plVar9[4] < param_1) {
      plVar9 = plVar9 + 2;
      plVar11 = plVar12;
    }
    plVar9 = (longlong *)*plVar9;
    plVar12 = plVar11;
    cVar1 = *(char *)((longlong)plVar9 + 0x19);
  }
  if ((*(char *)((longlong)plVar12 + 0x19) != '\0') || (param_1 < (int)plVar12[4])) {
    plVar12 = DAT_1805ba360;
  }
  if (plVar12 != DAT_1805ba360) {
    plVar12 = plVar12 + (longlong)param_2 * 9;
    plVar9 = plVar12 + -4;
    if ((plVar12[-2] != 0) &&
       ((uVar2 = *(uint *)(plVar12 + 4), uVar2 == 0 ||
        (UVar10 = GetTickCount64(), UVar10 - plVar12[3] <= (ulonglong)uVar2)))) {
      if ((longlong *)param_3 != plVar9) {
        if (0xf < (ulonglong)plVar12[-1]) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_180212700(param_3,plVar9,plVar12[-2],param_4,puVar13);
      }
      *(char *)(param_3 + 0x20) = (char)*plVar12;
      lVar5 = plVar12[1];
      uVar4 = *(undefined4 *)((longlong)plVar12 + 0xc);
      lVar6 = plVar12[2];
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)((longlong)plVar12 + 4);
      *(int *)(param_3 + 0x28) = (int)lVar5;
      *(undefined4 *)(param_3 + 0x2c) = uVar4;
      *(int *)(param_3 + 0x30) = (int)lVar6;
      *(longlong *)(param_3 + 0x38) = plVar12[3];
      *(int *)(param_3 + 0x40) = (int)plVar12[4];
      uVar8 = 1;
      goto LAB_1800214bd;
    }
  }
  uVar8 = 0;
LAB_1800214bd:
  _Mtx_unlock(&DAT_1803e92b0);
  return uVar8;
}


