// 0x1802981f0  FUN_1802981f0
// size=427 thunk=false
// signature: undefined FUN_1802981f0()
// status: ok


void FUN_1802981f0(longlong param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  void *_Dst;
  ushort uVar6;
  uint uVar7;
  longlong lVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  uVar9 = *(ushort *)(param_1 + 0x38);
  uVar13 = (uint)param_4 + (uint)param_2;
  if (*(ushort *)(param_1 + 0x3c) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)uVar9 + (uint)*(ushort *)(param_1 + 0x3c);
  }
  puVar1 = (ushort *)(param_1 + 0x3a);
  uVar7 = uVar13;
  if (uVar13 <= uVar10) {
    uVar7 = uVar10;
  }
  uVar10 = (uint)param_3 + (uint)param_5;
  if (*(ushort *)(param_1 + 0x3e) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (uint)*(ushort *)(param_1 + 0x3e) + (uint)*puVar1;
  }
  uVar6 = param_2;
  if (uVar9 < param_2) {
    uVar6 = uVar9;
  }
  *(ushort *)(param_1 + 0x38) = uVar6;
  uVar9 = param_3;
  if (*puVar1 < param_3) {
    uVar9 = *puVar1;
  }
  *puVar1 = uVar9;
  sVar4 = (short)uVar10;
  if (uVar10 <= uVar12) {
    sVar4 = (short)uVar12;
  }
  *(ushort *)(param_1 + 0x3c) = (short)uVar7 - uVar6;
  *(ushort *)(param_1 + 0x3e) = sVar4 - uVar9;
  uVar9 = param_2;
  if (*(ushort *)(param_1 + 0x30) < param_2) {
    uVar9 = *(ushort *)(param_1 + 0x30);
  }
  uVar6 = param_3;
  if (*(ushort *)(param_1 + 0x32) < param_3) {
    uVar6 = *(ushort *)(param_1 + 0x32);
  }
  uVar7 = (uint)*(ushort *)(param_1 + 0x34) + (uint)uVar9;
  if (uVar13 <= uVar7) {
    uVar13 = uVar7 & 0xffff;
  }
  *(ushort *)(param_1 + 0x30) = uVar9;
  uVar7 = (uint)*(ushort *)(param_1 + 0x36) + (uint)uVar6;
  *(ushort *)(param_1 + 0x32) = uVar6;
  *(ushort *)(param_1 + 0x34) = (short)uVar13 - uVar9;
  if (uVar10 <= uVar7) {
    uVar10 = uVar7 & 0xffff;
  }
  *(ushort *)(param_1 + 0x36) = (short)uVar10 - uVar6;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == 3)) {
    *(undefined4 *)(param_1 + 4) = 3;
    iVar2 = *(int *)(param_1 + 0x44);
    if (*(int *)(param_1 + 0x40) == iVar2) {
      iVar11 = *(int *)(param_1 + 0x40) + 1;
      if (iVar2 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar2 / 2 + iVar2;
      }
      if (iVar11 < iVar5) {
        iVar11 = iVar5;
      }
      if (iVar2 < iVar11) {
        _Dst = (void *)FUN_18026f580((longlong)iVar11 << 3);
        if (*(void **)(param_1 + 0x48) != (void *)0x0) {
          memcpy(_Dst,*(void **)(param_1 + 0x48),(longlong)*(int *)(param_1 + 0x40) << 3);
          FUN_18026f680(*(undefined8 *)(param_1 + 0x48));
        }
        *(void **)(param_1 + 0x48) = _Dst;
        *(int *)(param_1 + 0x44) = iVar11;
      }
    }
    lVar8 = (longlong)*(int *)(param_1 + 0x40);
    lVar3 = *(longlong *)(param_1 + 0x48);
    *(ushort *)(lVar3 + lVar8 * 8) = param_2;
    *(ushort *)(lVar3 + 2 + lVar8 * 8) = param_3;
    *(ushort *)(lVar3 + 4 + lVar8 * 8) = param_4;
    *(ushort *)(lVar3 + 6 + lVar8 * 8) = param_5;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  return;
}


