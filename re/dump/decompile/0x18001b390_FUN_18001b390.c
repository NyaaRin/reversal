// 0x18001b390  FUN_18001b390
// size=564 thunk=false
// signature: undefined FUN_18001b390()
// status: ok


float FUN_18001b390(longlong *param_1,byte param_2,byte param_3)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar6 = (int)param_1[2];
  if (iVar5 - iVar6 < (int)(3 - (uint)param_2)) {
    *(int *)(param_1 + 2) = iVar5;
    uVar8 = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    iVar1 = iVar5;
  }
  else {
    iVar1 = (3 - (uint)param_2) + iVar6;
    *(int *)(param_1 + 2) = iVar1;
    bVar3 = (byte)iVar6 & 0x1f;
    uVar8 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + -1 >> 5) * 4) << (-bVar3 & 0x1f) |
            *(uint *)(*param_1 + (ulonglong)(uint)(iVar6 >> 5) * 4) >> bVar3) &
            (&DAT_1803fa71c)[-(ulonglong)param_2];
  }
  if (param_2 == 0) {
    fVar2 = *(float *)(&DAT_18033bc30 + (ulonglong)((uint)param_3 * 8) + (ulonglong)(uVar8 & 4));
    bVar3 = (&DAT_18033b610)[(uVar8 & 3) + (uint)param_3 * 4];
    if (iVar5 - iVar1 < (int)(uint)bVar3) {
      *(int *)(param_1 + 2) = iVar5;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      uVar7 = 0;
    }
    else {
      *(uint *)(param_1 + 2) = (uint)bVar3 + iVar1;
      bVar4 = (byte)iVar1 & 0x1f;
      uVar7 = (*(int *)(*param_1 + (ulonglong)(uint)((int)((uint)bVar3 + iVar1 + -1) >> 5) * 4) <<
               (0x20 - bVar4 & 0x1f) |
              *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar4) &
              *(uint *)(&DAT_1803fa710 + (ulonglong)bVar3 * 4);
    }
    if ((uVar8 & 2) != 0) {
      uVar8 = (uVar8 & 1) - 1;
      iVar5 = ((uVar8 & 0x3800) + 0x7ff & uVar7) + 1;
      uVar7 = (iVar5 * 0x18 & param_3 - 1) + iVar5 * 8 |
              ((uVar7 >> 0xe) - (uVar7 >> 0xb) & uVar8) + (uVar7 >> 0xb);
    }
    return (float)(int)uVar7 * fVar2;
  }
  if ((uVar8 & 2) == 0) {
    return 0.0;
  }
  lVar9 = 0xf;
  if ((uVar8 & 1) != 0) {
    lVar9 = 0xc;
  }
  if (iVar5 - iVar1 < (int)lVar9) {
    *(int *)(param_1 + 2) = iVar5;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    uVar8 = 0;
  }
  else {
    iVar5 = (int)lVar9 + iVar1;
    *(int *)(param_1 + 2) = iVar5;
    bVar3 = (byte)iVar1 & 0x1f;
    uVar8 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar5 + -1 >> 5) * 4) << (0x20 - bVar3 & 0x1f) |
            *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar3) &
            *(uint *)(&DAT_1803fa710 + lVar9 * 4);
  }
  iVar6 = (uVar8 >> 1) + 1;
  iVar5 = -iVar6;
  if ((uVar8 & 1) == 0) {
    iVar5 = iVar6;
  }
  return (float)iVar5;
}


