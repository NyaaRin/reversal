// 0x18027b3d0  FUN_18027b3d0
// size=492 thunk=false
// signature: undefined FUN_18027b3d0()
// status: ok


void FUN_18027b3d0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  void *_Dst;
  int iVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  piVar1 = (int *)(param_1 + 0x148);
  iVar12 = *(int *)(param_1 + 0x14c);
  lVar6 = *(longlong *)(lVar6 + 0xec0);
  if (iVar12 < 0) {
    iVar9 = iVar12 / 2 + iVar12;
    iVar10 = 0;
    if (0 < iVar9) {
      iVar10 = iVar9;
    }
    if (iVar12 < iVar10) {
      _Dst = (void *)FUN_18026f580((longlong)iVar10 << 4);
      if (*(void **)(param_1 + 0x150) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 0x150),(longlong)*piVar1 << 4);
        FUN_18026f680(*(undefined8 *)(param_1 + 0x150));
      }
      *(void **)(param_1 + 0x150) = _Dst;
      *(int *)(param_1 + 0x14c) = iVar10;
    }
  }
  *piVar1 = 0;
  iVar12 = 0;
  uVar15 = 0x200;
  do {
    lVar2 = param_1 + uVar15 * 2;
    sVar4 = *(short *)(lVar2 + -0x400);
    while (sVar4 != -1) {
      psVar11 = (short *)((longlong)(int)sVar4 * 0x10 + *(longlong *)(param_1 + 0x140));
      iVar10 = *(int *)(psVar11 + 6);
      psVar11[2] = psVar11[3];
      *(int *)(psVar11 + 4) = iVar10;
      psVar11[6] = -1;
      psVar11[7] = -1;
      psVar11[3] = 0;
      if (((iVar10 != -1) &&
          (FUN_18028a580(piVar1,psVar11), (uint)(ushort)psVar11[1] == *(uint *)(lVar6 + 0x120))) &&
         (lVar3 = lVar6 + uVar15 * 0xc, *(int *)(lVar3 + -500) == -1)) {
        *(undefined4 *)(lVar3 + -500) = *(undefined4 *)(psVar11 + 4);
      }
      sVar4 = *psVar11;
    }
    uVar8 = 0xffff;
    if (iVar12 < *piVar1) {
      uVar8 = (short)iVar12;
    }
    *(undefined2 *)(lVar2 + -0x400) = uVar8;
    iVar10 = *piVar1;
    if (iVar12 < iVar10) {
      do {
        iVar13 = iVar12 + 1;
        iVar9 = -1;
        if (iVar13 < iVar10) {
          iVar9 = iVar13;
        }
        *(short *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar12 * 0x10) = (short)iVar9;
        iVar10 = *piVar1;
        iVar12 = iVar13;
      } while (iVar13 < iVar10);
    }
    iVar12 = iVar10;
    uVar14 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar14;
  } while ((int)uVar14 < 0x29b);
  *piVar1 = *(int *)(param_1 + 0x138);
  uVar5 = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x13c) = uVar5;
  uVar7 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = uVar7;
  *(int *)(param_1 + 0x138) = iVar12;
  return;
}


