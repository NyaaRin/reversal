// 0x180131770  FUN_180131770
// size=257 thunk=false
// signature: undefined FUN_180131770()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180131770(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  longlong lVar12;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auVar13 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar1 = *(ulonglong *)(param_1 + (longlong)param_3 * 8);
  uVar5 = uVar1 + 0x400;
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = uVar1;
  if (0 < (int)param_2) {
    iVar6 = 0;
    if ((3 < param_2) && (5 < DAT_1803da510)) {
      auVar18._8_8_ = uVar5;
      auVar18._0_8_ = uVar5;
      auVar19 = auVar18;
      do {
        lVar4 = (longlong)iVar6;
        iVar6 = iVar6 + 4;
        auVar8 = *(undefined1 (*) [16])(param_1 + lVar4 * 8);
        auVar7 = vpminuq_avx512vl(auVar8,auVar9);
        lVar12 = -(ulonglong)(auVar7._0_8_ == auVar8._0_8_);
        lVar16 = -(ulonglong)(auVar7._8_8_ == auVar8._8_8_);
        uVar11 = ~(uint)lVar12 & _DAT_180381830;
        uVar14 = ~(uint)((ulonglong)lVar12 >> 0x20) & _UNK_180381834;
        uVar15 = ~(uint)lVar16 & _UNK_180381838;
        uVar17 = ~(uint)((ulonglong)lVar16 >> 0x20) & _UNK_18038183c;
        auVar8 = vpminuq_avx512vl(auVar18,auVar8);
        auVar7._0_4_ = auVar8._0_4_ & uVar11;
        auVar7._4_4_ = auVar8._4_4_ & uVar14;
        auVar7._8_4_ = auVar8._8_4_ & uVar15;
        auVar7._12_4_ = auVar8._12_4_ & uVar17;
        auVar8._0_4_ = ~uVar11 & auVar18._0_4_;
        auVar8._4_4_ = ~uVar14 & auVar18._4_4_;
        auVar8._8_4_ = ~uVar15 & auVar18._8_4_;
        auVar8._12_4_ = ~uVar17 & auVar18._12_4_;
        auVar18 = auVar7 | auVar8;
        auVar8 = *(undefined1 (*) [16])(param_1 + 0x10 + lVar4 * 8);
        auVar7 = vpminuq_avx512vl(auVar8,auVar9);
        lVar4 = -(ulonglong)(auVar7._0_8_ == auVar8._0_8_);
        lVar12 = -(ulonglong)(auVar7._8_8_ == auVar8._8_8_);
        uVar11 = ~(uint)lVar4 & _DAT_180381830;
        uVar14 = ~(uint)((ulonglong)lVar4 >> 0x20) & _UNK_180381834;
        uVar15 = ~(uint)lVar12 & _UNK_180381838;
        uVar17 = ~(uint)((ulonglong)lVar12 >> 0x20) & _UNK_18038183c;
        auVar8 = vpminuq_avx512vl(auVar19,auVar8);
        auVar10._0_4_ = auVar8._0_4_ & uVar11;
        auVar10._4_4_ = auVar8._4_4_ & uVar14;
        auVar10._8_4_ = auVar8._8_4_ & uVar15;
        auVar10._12_4_ = auVar8._12_4_ & uVar17;
        auVar13._0_4_ = ~uVar11 & auVar19._0_4_;
        auVar13._4_4_ = ~uVar14 & auVar19._4_4_;
        auVar13._8_4_ = ~uVar15 & auVar19._8_4_;
        auVar13._12_4_ = ~uVar17 & auVar19._12_4_;
        auVar19 = auVar10 | auVar13;
      } while (iVar6 < (int)(param_2 & 0xfffffffc));
      auVar9 = vpminuq_avx512vl(auVar18,auVar19);
      auVar9 = vpminuq_avx512vl(auVar9,auVar9 >> 0x40);
      uVar5 = auVar9._0_8_;
      if ((int)param_2 <= iVar6) goto LAB_18013186d;
    }
    do {
      uVar2 = *(ulonglong *)(param_1 + (longlong)iVar6 * 8);
      uVar3 = uVar5;
      if ((uVar1 < uVar2) && (uVar3 = uVar2, uVar5 <= uVar2)) {
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_2);
  }
LAB_18013186d:
  return uVar5 - uVar1;
}


