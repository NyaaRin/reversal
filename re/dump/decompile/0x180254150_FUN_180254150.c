// 0x180254150  FUN_180254150
// size=199 thunk=false
// signature: undefined FUN_180254150()
// status: ok


void FUN_180254150(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  bool bVar7;
  bool bVar8;
  
  uVar2 = param_1[2];
  puVar1 = param_1 + 2;
  uVar3 = *param_1;
  bVar7 = uVar3 < uVar2;
  if (uVar3 == uVar2) {
    bVar7 = param_1[1] < param_1[3];
  }
  uVar4 = *param_2;
  puVar6 = param_1;
  uVar5 = uVar3;
  if (!bVar7) {
    puVar6 = puVar1;
    uVar5 = uVar2;
  }
  bVar7 = uVar4 < uVar5;
  if (uVar4 == uVar5) {
    bVar7 = param_2[1] < puVar6[1];
  }
  if (bVar7) {
    bVar8 = uVar2 < uVar3;
    bVar7 = false;
    if (uVar2 == uVar3) {
      bVar8 = param_1[3] < param_1[1];
      bVar7 = param_1[3] == param_1[1];
    }
    bVar7 = !bVar8 && !bVar7;
  }
  else {
    bVar8 = uVar3 < uVar2;
    bVar7 = false;
    if (uVar3 == uVar2) {
      uVar5 = param_1[3];
      bVar8 = param_1[1] < uVar5;
      bVar7 = param_1[1] == uVar5;
    }
    puVar6 = param_1;
    uVar5 = uVar3;
    if (bVar8 || bVar7) {
      puVar6 = puVar1;
      uVar5 = uVar2;
    }
    bVar8 = uVar4 < uVar5;
    bVar7 = false;
    if (uVar4 == uVar5) {
      bVar8 = param_2[1] < puVar6[1];
      bVar7 = param_2[1] == puVar6[1];
    }
    if (bVar8 || bVar7) {
      return;
    }
    bVar7 = uVar2 < uVar3;
    if (uVar2 == uVar3) {
      bVar7 = param_1[3] < param_1[1];
    }
  }
  if (bVar7) {
    *param_1 = *puVar1;
    param_1[1] = param_1[3];
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  *puVar1 = uVar2;
  param_1[3] = uVar3;
  return;
}


