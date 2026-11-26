// 0x1800c5dd0  FUN_1800c5dd0
// size=157 thunk=false
// signature: undefined FUN_1800c5dd0()
// status: ok


double FUN_1800c5dd0(void)

{
  double dVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar4 = 0;
  uVar5 = 0;
  if (DAT_1803fa608 != 0) {
    dVar1 = *(double *)(DAT_1803fa608 + 0x28);
    uVar6 = SUB84(dVar1,0);
    uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (0.0 < dVar1) goto LAB_1800c5e00;
  }
  uVar6 = (undefined4)DAT_180380bd0;
  uVar7 = (undefined4)((ulonglong)DAT_180380bd0 >> 0x20);
LAB_1800c5e00:
  iVar2 = FUN_1800c5d20();
  if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
     (fVar3 = DAT_1803fb248, DAT_180380bb0 <= DAT_1803fb248)) {
    fVar3 = 0.0;
  }
  if (DAT_180380964 < fVar3) {
    uVar4 = (undefined4)DAT_180380d38;
    uVar5 = (undefined4)((ulonglong)DAT_180380d38 >> 0x20);
  }
  return ((double)iVar2 * DAT_180380cb0 + (double)CONCAT44(uVar5,uVar4)) *
         (double)CONCAT44(uVar7,uVar6);
}


