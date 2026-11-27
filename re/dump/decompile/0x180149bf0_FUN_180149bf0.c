// 0x180149bf0  FUN_180149bf0
// size=370 thunk=false
// signature: undefined FUN_180149bf0()
// status: ok


void FUN_180149bf0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  float *pfVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  
  uVar5 = *(undefined4 *)(param_1 + param_2);
  fVar1 = *(float *)(param_1 + param_3);
  cVar4 = *(char *)(param_1 + param_5);
  uVar6 = *(uint *)(param_1 + param_6);
  uVar7 = FUN_180147610();
  uVar8 = FUN_180147650(param_1);
  fVar2 = *(float *)(param_1 + param_4);
  fVar3 = *(float *)(param_1 + 4 + param_4);
  uVar9 = FUN_1801475e0(param_1);
  lVar10 = FUN_1800b9fe0(uVar9);
  if (lVar10 == 0) {
    uVar13 = 0xffffffff;
    uVar12 = uVar13;
  }
  else {
    uVar13 = *(undefined4 *)(lVar10 + 0xbc);
    uVar12 = uVar13;
    if ((DAT_1803f9250 != (longlong *)0x0) &&
       (lVar10 = (**(code **)(*DAT_1803f9250 + 0xb8))(), lVar10 != 0)) {
      uVar12 = *(undefined4 *)(lVar10 + 0x18);
    }
  }
  pfVar11 = (float *)FUN_18001d530(param_1);
  fVar14 = pfVar11[1] * pfVar11[1] + *pfVar11 * *pfVar11;
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  FUN_180014410("[Toolbox-anim] seq=%d cyc=%.3f animState=%p pose01=(%.2f,%.2f) csAnim=%d idxWord=%d localSeq=%d masterSeq=%d ground=%d spd=%.0f\n"
                ,uVar5,(double)fVar1,uVar8,(double)fVar2,(double)fVar3,cVar4 != '\0',uVar7,uVar13,
                uVar12,uVar6 & 1,(double)fVar14);
  return;
}


