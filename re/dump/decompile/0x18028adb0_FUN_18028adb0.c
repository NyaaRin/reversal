// 0x18028adb0  FUN_18028adb0
// size=558 thunk=false
// signature: undefined FUN_18028adb0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18028adb0(int *param_1,int param_2,int param_3,longlong param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  ulonglong uVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  iVar5 = _UNK_180381514;
  iVar4 = _DAT_180381510;
  iVar3 = _UNK_1803814f4;
  iVar2 = _DAT_1803814f0;
  iVar6 = 0;
  uVar1 = param_5 - 1;
  if (0 < (int)uVar1) {
    iVar8 = 0;
    if ((7 < uVar1) && (iVar8 = 0, 1 < DAT_1803da510)) {
      uVar7 = uVar1 & 0x80000007;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      iVar6 = 0;
      do {
        lVar9 = (longlong)iVar6;
        auVar13._0_4_ = iVar6 + iVar4 + iVar2;
        auVar13._4_4_ = iVar6 + iVar5 + iVar3;
        auVar13._8_4_ = iVar6;
        auVar13._12_4_ = iVar6;
        auVar13 = pmovsxdq(in_XMM2,auVar13);
        uVar17 = auVar13._8_8_ * 0x10 + param_4;
        *(longlong *)(param_4 + 8 + lVar9 * 0x10) = auVar13._0_8_ * 0x10 + param_4;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar17;
        *(ulonglong *)(param_4 + 0x18 + lVar9 * 0x10) = uVar17;
        iVar8 = iVar6 + 2;
        auVar10._0_4_ = iVar8 + iVar4 + iVar2;
        auVar10._4_4_ = iVar8 + iVar5 + iVar3;
        auVar10._8_4_ = iVar8;
        auVar10._12_4_ = iVar8;
        auVar13 = pmovsxdq(auVar14,auVar10);
        uVar17 = auVar13._8_8_ * 0x10 + param_4;
        *(longlong *)(param_4 + 0x28 + lVar9 * 0x10) = auVar13._0_8_ * 0x10 + param_4;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar17;
        *(ulonglong *)(param_4 + 0x38 + lVar9 * 0x10) = uVar17;
        iVar8 = iVar6 + 4;
        auVar11._0_4_ = iVar8 + iVar4 + iVar2;
        auVar11._4_4_ = iVar8 + iVar5 + iVar3;
        auVar11._8_4_ = iVar8;
        auVar11._12_4_ = iVar8;
        auVar13 = pmovsxdq(auVar15,auVar11);
        uVar17 = auVar13._8_8_ * 0x10 + param_4;
        *(longlong *)(param_4 + 0x48 + lVar9 * 0x10) = auVar13._0_8_ * 0x10 + param_4;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar17;
        *(ulonglong *)(param_4 + 0x58 + lVar9 * 0x10) = uVar17;
        iVar8 = iVar6 + 6;
        iVar6 = iVar6 + 8;
        auVar12._0_4_ = iVar8 + iVar4 + iVar2;
        auVar12._4_4_ = iVar8 + iVar5 + iVar3;
        auVar12._8_4_ = iVar8;
        auVar12._12_4_ = iVar8;
        auVar13 = pmovsxdq(auVar16,auVar12);
        uVar17 = auVar13._8_8_ * 0x10 + param_4;
        *(longlong *)(param_4 + 0x68 + lVar9 * 0x10) = auVar13._0_8_ * 0x10 + param_4;
        in_XMM2._8_8_ = 0;
        in_XMM2._0_8_ = uVar17;
        *(ulonglong *)(param_4 + 0x78 + lVar9 * 0x10) = uVar17;
      } while (iVar6 < (int)(uVar1 - uVar7));
      iVar8 = iVar6;
      if ((int)uVar1 <= iVar6) goto LAB_18028af81;
    }
    do {
      iVar6 = iVar8 + 1;
      *(longlong *)(param_4 + 8 + (longlong)iVar8 * 0x10) = (longlong)iVar6 * 0x10 + param_4;
      iVar8 = iVar6;
    } while (iVar6 < (int)uVar1);
  }
LAB_18028af81:
  *(undefined8 *)(param_4 + 8 + (longlong)iVar6 * 0x10) = 0;
  param_1[2] = (param_5 + -1 + param_2) / param_5;
  param_1[3] = 1;
  param_1[4] = 0;
  *(longlong *)(param_1 + 8) = param_4;
  *(int **)(param_1 + 6) = param_1 + 10;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = param_5;
  *(int **)(param_1 + 0xc) = param_1 + 0xe;
  param_1[0xe] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0x40000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}


