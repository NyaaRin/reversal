// 0x1800c6530  FUN_1800c6530
// size=459 thunk=false
// signature: undefined FUN_1800c6530()
// status: ok


int FUN_1800c6530(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uVar11;
  double dVar9;
  double dVar10;
  float fVar12;
  
  if ((DAT_1803fa608 == 0) || (*(double *)(DAT_1803fa608 + 0x28) <= 0.0)) {
    return 1;
  }
  dVar7 = (double)FUN_1800c5e70();
  if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
     (fVar12 = DAT_1803fb248, DAT_180380bb0 <= DAT_1803fb248)) {
    fVar12 = 0.0;
  }
  uVar8 = FUN_1800c5b20((double)fVar12);
  uVar6 = (undefined4)uVar8;
  uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
  dVar9 = (double)FUN_1800c5c90();
  dVar10 = (double)FUN_1800c5dd0();
  dVar10 = (dVar9 + (double)CONCAT44(uVar11,uVar6)) - dVar10;
  if (dVar7 <= dVar10) {
    dVar10 = dVar7;
  }
  if (DAT_1803fa608 != 0) {
    dVar7 = *(double *)(DAT_1803fa608 + 0x28);
    uVar6 = SUB84(dVar7,0);
    uVar11 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (0.0 < dVar7) goto LAB_1800c65ec;
  }
  uVar6 = (undefined4)DAT_180380bd0;
  uVar11 = (undefined4)((ulonglong)DAT_180380bd0 >> 0x20);
LAB_1800c65ec:
  iVar1 = FUN_1800c5d20();
  dVar7 = (double)iVar1 + DAT_180380d38;
  dVar9 = (double)FUN_1800c5c00();
  dVar9 = dVar9 - dVar7 * (double)CONCAT44(uVar11,uVar6);
  dVar7 = *(double *)(DAT_1803fa608 + 0x28);
  if (dVar10 <= dVar9) {
    dVar9 = dVar10;
  }
  dVar10 = floor(dVar9 / dVar7);
  iVar1 = (int)dVar10;
  if (dVar7 <= 0.0) {
    iVar2 = 1;
  }
  else {
    iVar2 = -2 - (int)(DAT_1803813b0 / dVar7);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
  }
  iVar4 = iVar1;
  if ((iVar2 < iVar1) &&
     (iVar3 = DAT_1803feb08 + 1, bVar5 = DAT_1803feb08 == (DAT_1803feb08 / 200) * 200, iVar4 = iVar2
     , DAT_1803feb08 = iVar3, bVar5)) {
    FUN_180014410("[BT] depth capped by the server\'s usercmd validator: %d -> %d ticks (lag comp would allow %.0fms)\n"
                  ,iVar1,iVar2,dVar9 * DAT_180380ec0);
  }
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  return iVar4;
}


