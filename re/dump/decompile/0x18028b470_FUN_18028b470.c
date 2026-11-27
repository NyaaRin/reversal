// 0x18028b470  FUN_18028b470
// size=474 thunk=false
// signature: undefined FUN_18028b470()
// status: ok


uint FUN_18028b470(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  uint3 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = (int)param_1[1];
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if (iVar8 < iVar2) {
    bVar6 = *(byte *)((longlong)iVar8 + *param_1);
    iVar8 = iVar8 + 1;
    *(int *)(param_1 + 1) = iVar8;
  }
  else {
    bVar6 = 0;
  }
  if (bVar6 - 0x20 < 0xd7) {
    return bVar6 - 0x8b;
  }
  uVar7 = (uint)bVar6;
  if (bVar6 - 0xf7 < 4) {
    if (iVar2 <= iVar8) {
      return uVar7 * 0x100 - 0xf694;
    }
    bVar6 = *(byte *)((longlong)iVar8 + *param_1);
    *(int *)(param_1 + 1) = iVar8 + 1;
    return (bVar6 - 0xf694) + uVar7 * 0x100;
  }
  if (bVar6 - 0xfb < 4) {
    if (iVar2 <= iVar8) {
      return uVar7 * -0x100 + 0xfa94;
    }
    bVar6 = *(byte *)((longlong)iVar8 + *param_1);
    *(int *)(param_1 + 1) = iVar8 + 1;
    return (uVar7 * -0x100 + 0xfa94) - (uint)bVar6;
  }
  if (uVar7 == 0x1c) {
    if (iVar2 <= iVar8) {
      return 0;
    }
    iVar9 = iVar8 + 1;
    bVar6 = *(byte *)((longlong)iVar8 + *param_1);
    *(int *)(param_1 + 1) = iVar9;
    if (iVar2 <= iVar9) {
      return (uint)bVar6 << 8;
    }
    uVar1 = *(undefined1 *)((longlong)iVar9 + *param_1);
    *(int *)(param_1 + 1) = iVar8 + 2;
    return (uint)CONCAT11(bVar6,uVar1);
  }
  if (uVar7 != 0x1d) {
    return 0;
  }
  if (iVar2 <= iVar8) {
    return 0;
  }
  lVar3 = *param_1;
  iVar9 = iVar8 + 1;
  bVar6 = *(byte *)(iVar8 + lVar3);
  *(int *)(param_1 + 1) = iVar9;
  if (iVar2 <= iVar9) {
    return (uint)bVar6 << 0x18;
  }
  iVar10 = iVar8 + 2;
  uVar4 = CONCAT11(bVar6,*(undefined1 *)(iVar9 + lVar3));
  *(int *)(param_1 + 1) = iVar10;
  if (iVar2 <= iVar10) {
    return (uint)uVar4 << 0x10;
  }
  iVar9 = iVar8 + 3;
  uVar5 = CONCAT21(uVar4,*(undefined1 *)(iVar10 + lVar3));
  *(int *)(param_1 + 1) = iVar9;
  if (iVar2 <= iVar9) {
    return (uint)uVar5 << 8;
  }
  uVar1 = *(undefined1 *)(iVar9 + lVar3);
  *(int *)(param_1 + 1) = iVar8 + 4;
  return CONCAT31(uVar5,uVar1);
}


