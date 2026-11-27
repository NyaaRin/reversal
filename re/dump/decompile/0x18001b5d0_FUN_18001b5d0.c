// 0x18001b5d0  FUN_18001b5d0
// size=449 thunk=false
// signature: undefined FUN_18001b5d0()
// status: ok


float FUN_18001b5d0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  iVar1 = (int)param_1[2];
  if (param_3 != 2) {
    uVar6 = 0;
    if (iVar3 - iVar1 < param_2) {
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      uVar7 = 0;
      iVar4 = iVar3;
    }
    else {
      iVar4 = iVar1 + param_2;
      *(int *)(param_1 + 2) = iVar4;
      bVar2 = (byte)iVar1 & 0x1f;
      uVar7 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar4 + -1 >> 5) * 4) << (-bVar2 & 0x1f) |
              *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar2) &
              *(uint *)(&DAT_1803fa710 + (longlong)param_2 * 4);
    }
    lVar5 = 5;
    if (param_3 == 1) {
      lVar5 = 3;
    }
    if (iVar3 - iVar4 < (int)lVar5) {
      *(int *)(param_1 + 2) = iVar3;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      iVar3 = (int)lVar5 + iVar4;
      *(int *)(param_1 + 2) = iVar3;
      bVar2 = (byte)iVar4 & 0x1f;
      uVar6 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar3 + -1 >> 5) * 4) << (0x20 - bVar2 & 0x1f)
              | *(uint *)(*param_1 + (ulonglong)(uint)(iVar4 >> 5) * 4) >> bVar2) &
              *(uint *)(&DAT_1803fa710 + lVar5 * 4);
    }
    dVar8 = DAT_180380c08;
    if (param_3 == 1) {
      dVar8 = DAT_180380c58;
    }
    return (float)dVar8 * (float)(int)uVar6 + (float)(int)uVar7;
  }
  if (param_2 <= iVar3 - iVar1) {
    *(int *)(param_1 + 2) = iVar1 + param_2;
    bVar2 = (byte)iVar1 & 0x1f;
    return (float)((*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + param_2 + -1 >> 5) * 4) <<
                    (0x20 - bVar2 & 0x1f) |
                   *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar2) &
                  *(uint *)(&DAT_1803fa710 + (longlong)param_2 * 4));
  }
  *(int *)(param_1 + 2) = iVar3;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return 0.0;
}


