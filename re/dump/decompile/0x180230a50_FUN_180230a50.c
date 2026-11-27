// 0x180230a50  FUN_180230a50
// size=632 thunk=false
// signature: undefined FUN_180230a50()
// status: ok


void FUN_180230a50(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  lVar4 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_1 + 8;
  lVar7 = param_2;
  while (lVar7 < lVar4) {
    lVar10 = lVar7 * 2 + 2;
    pcVar6 = (char *)(param_1 + -0x48 + lVar10 * 0x50);
    if (0xf < *(ulonglong *)(param_1 + -0x30 + lVar10 * 0x50)) {
      pcVar6 = *(char **)pcVar6;
    }
    pcVar5 = (char *)(param_1 + 8 + lVar10 * 0x50);
    if (0xf < *(ulonglong *)(param_1 + 0x20 + lVar10 * 0x50)) {
      pcVar5 = *(char **)pcVar5;
    }
    iVar3 = _stricmp(pcVar5,pcVar6);
    if (iVar3 == 0) {
      bVar2 = *(int *)(lVar10 * 0x50 + param_1) < *(int *)(lVar10 * 0x50 + -0x50 + param_1);
    }
    else {
      bVar2 = SUB41((uint)iVar3 >> 0x1f,0);
    }
    if (bVar2 != false) {
      lVar10 = lVar7 * 2 + 1;
    }
    lVar12 = lVar10 * 0x50;
    lVar7 = lVar7 * 0x50;
    *(undefined4 *)(lVar7 + param_1) = *(undefined4 *)(lVar12 + param_1);
    FUN_18020e8a0(lVar7 + lVar1,lVar12 + lVar1);
    FUN_18020e8a0(param_1 + 0x28 + lVar7,param_1 + 0x28 + lVar12);
    *(undefined4 *)(lVar7 + 0x48 + param_1) = *(undefined4 *)(lVar12 + 0x48 + param_1);
    *(undefined1 *)(lVar7 + 0x4c + param_1) = *(undefined1 *)(lVar12 + 0x4c + param_1);
    lVar7 = lVar10;
  }
  if ((lVar7 == lVar4) && ((param_3 & 1) == 0)) {
    lVar4 = param_3 * 0x50 + param_1;
    puVar8 = (undefined4 *)(lVar7 * 0x50 + param_1);
    *puVar8 = *(undefined4 *)(lVar4 + -0x50);
    FUN_18020e8a0(puVar8 + 2,lVar4 + -0x48);
    FUN_18020e8a0(puVar8 + 10,lVar4 + -0x28);
    puVar8[0x12] = *(undefined4 *)(lVar4 + -8);
    *(undefined1 *)(puVar8 + 0x13) = *(undefined1 *)(lVar4 + -4);
    lVar7 = param_3 - 1;
  }
  while (param_2 < lVar7) {
    lVar4 = lVar7 + -1 >> 1;
    piVar9 = param_4 + 2;
    piVar11 = (int *)(lVar4 * 0x50 + param_1);
    if (0xf < *(ulonglong *)(param_4 + 8)) {
      piVar9 = *(int **)piVar9;
    }
    pcVar5 = (char *)(lVar4 * 0x50 + lVar1);
    pcVar6 = pcVar5;
    if (0xf < *(ulonglong *)(param_1 + 0x20 + lVar4 * 0x50)) {
      pcVar6 = *(char **)pcVar5;
    }
    iVar3 = _stricmp(pcVar6,(char *)piVar9);
    if (iVar3 == 0) {
      bVar2 = *piVar11 < *param_4;
    }
    else {
      bVar2 = SUB41((uint)iVar3 >> 0x1f,0);
    }
    if (bVar2 == false) break;
    piVar9 = (int *)(lVar7 * 0x50 + param_1);
    *piVar9 = *piVar11;
    FUN_18020e8a0(piVar9 + 2,pcVar5);
    FUN_18020e8a0(piVar9 + 10,piVar11 + 10);
    piVar9[0x12] = piVar11[0x12];
    *(char *)(piVar9 + 0x13) = (char)piVar11[0x13];
    lVar7 = lVar4;
  }
  piVar9 = (int *)(lVar7 * 0x50 + param_1);
  *piVar9 = *param_4;
  FUN_18020e8a0(piVar9 + 2,param_4 + 2);
  FUN_18020e8a0(piVar9 + 10,param_4 + 10);
  piVar9[0x12] = param_4[0x12];
  *(char *)(piVar9 + 0x13) = (char)param_4[0x13];
  return;
}


