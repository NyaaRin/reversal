// 0x18009a2f0  FUN_18009a2f0
// size=409 thunk=false
// signature: undefined FUN_18009a2f0()
// status: ok


ulonglong FUN_18009a2f0(void)

{
  ushort *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 extraout_var;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  uVar3 = DAT_1803de130;
  lVar8 = DAT_1803de128;
  plVar2 = DAT_1803de118;
  plVar5 = (longlong *)&DAT_1803de118;
  if (0xf < DAT_1803de130) {
    plVar5 = DAT_1803de118;
  }
  if (DAT_1803de128 == 0x12) {
    lVar6 = *plVar5 + -0x685f6e6f70616577;
    if ((lVar6 == 0) && (lVar6 = plVar5[1] + -0x6273736f72635f67, lVar6 == 0)) {
      puVar1 = (ushort *)(plVar5 + 2);
      plVar5 = (longlong *)0x776f;
      lVar6 = (ulonglong)*puVar1 - 0x776f;
    }
    if (lVar6 == 0) goto LAB_18009a473;
  }
  plVar7 = (longlong *)&DAT_1803de118;
  if (0xf < DAT_1803de130) {
    plVar7 = DAT_1803de118;
  }
  if (DAT_1803de128 == 0xd) {
    lVar6 = *plVar7 + -0x685f6e6f70616577;
    if (lVar6 == 0) {
      plVar5 = (longlong *)0x70725f67;
      lVar6 = (ulonglong)*(uint *)(plVar7 + 1) - 0x70725f67;
      if (lVar6 == 0) {
        plVar5 = (longlong *)0x0;
        lVar6 = (ulonglong)*(byte *)((longlong)plVar7 + 0xc) - 0x67;
      }
    }
    if (lVar6 == 0) goto LAB_18009a473;
  }
  plVar5 = (longlong *)&DAT_1803de118;
  if (0xf < DAT_1803de130) {
    plVar5 = DAT_1803de118;
  }
  if (DAT_1803de128 == 0x12) {
    lVar6 = *plVar5 + -0x685f6e6f70616577;
    if ((lVar6 == 0) && (lVar6 = plVar5[1] + -0x726c656265725f67, lVar6 == 0)) {
      puVar1 = (ushort *)(plVar5 + 2);
      plVar5 = (longlong *)0x6770;
      lVar6 = (ulonglong)*puVar1 - 0x6770;
    }
    if (lVar6 == 0) goto LAB_18009a473;
  }
  plVar7 = (longlong *)&DAT_1803de118;
  if (0xf < DAT_1803de130) {
    plVar7 = DAT_1803de118;
  }
  if (DAT_1803de128 == 0xd) {
    lVar6 = *plVar7 + -0x685f6e6f70616577;
    if (lVar6 == 0) {
      plVar5 = (longlong *)0x6f625f67;
      lVar6 = (ulonglong)*(uint *)(plVar7 + 1) - 0x6f625f67;
      if (lVar6 == 0) {
        plVar5 = (longlong *)0x0;
        lVar6 = (ulonglong)*(byte *)((longlong)plVar7 + 0xc) - 0x77;
      }
    }
    if (lVar6 == 0) goto LAB_18009a473;
  }
  plVar7 = (longlong *)&DAT_1803de118;
  if (0xf < DAT_1803de130) {
    plVar7 = DAT_1803de118;
  }
  if (DAT_1803de128 == 0x16) {
    iVar4 = memcmp(plVar7,"weapon_ags_30_handheld",0x16);
    plVar5 = (longlong *)CONCAT44(extraout_var,iVar4);
    if (iVar4 == 0) goto LAB_18009a473;
  }
  plVar7 = (longlong *)&DAT_1803de118;
  if (0xf < uVar3) {
    plVar7 = plVar2;
  }
  if (lVar8 == 0xc) {
    plVar5 = (longlong *)0x745f6e6f70616577;
    lVar8 = *plVar7 + -0x745f6e6f70616577;
    if (lVar8 == 0) {
      plVar5 = (longlong *)0x72657361;
      lVar8 = (ulonglong)*(uint *)(plVar7 + 1) - 0x72657361;
    }
    if (lVar8 == 0) {
LAB_18009a473:
      return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
    }
  }
  return (ulonglong)plVar5 & 0xffffffffffffff00;
}


