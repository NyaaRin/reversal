// 0x1800d2e50  FUN_1800d2e50
// size=639 thunk=false
// signature: undefined FUN_1800d2e50()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800d2e50(int *param_1,float *param_2,char param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_58 [3];
  int local_4c [17];
  
  fVar9 = DAT_1803eb868;
  fVar7 = DAT_1803eb86c;
  if ((((*param_1 != 0) && (fVar8 = *param_2, ((uint)fVar8 & 0x7f800000) != 0x7f800000)) &&
      (fVar1 = param_2[1], ((uint)fVar1 & 0x7f800000) != 0x7f800000)) &&
     (((uint)param_2[2] & 0x7f800000) != 0x7f800000)) {
    _DAT_1803eb870 = 0;
    DAT_1803eb868 = fVar8;
    fVar7 = fVar1;
    if (DAT_18040a4b0 == '\0') {
      DAT_18040a4b0 = '\x01';
    }
    else if (param_3 != '\0') {
      fVar7 = DAT_1803eb86c - param_2[1];
      DAT_1803eb86c = fVar1;
      fVar7 = fmodf(fVar7 + DAT_180381188,DAT_18038120c);
      fVar7 = fVar7 - DAT_180381188;
      fVar9 = *param_2 - fVar9;
      fVar8 = floorf(fVar7 / _DAT_1803809a4);
      iVar6 = (int)fVar8;
      local_58[2] = iVar6;
      fVar8 = floorf(fVar9 / _DAT_1803809a4);
      iVar5 = (int)fVar8;
      iVar2 = -iVar6;
      if (-iVar6 < 0) {
        iVar2 = iVar6;
      }
      local_4c[0] = iVar5;
      if (5 < iVar2) {
        iVar2 = rand();
        iVar6 = iVar6 + -2 + iVar2 % 5;
        local_58[2] = iVar6;
      }
      iVar2 = -iVar5;
      if (-iVar5 < 0) {
        iVar2 = iVar5;
      }
      if (5 < iVar2) {
        iVar2 = rand();
        iVar5 = iVar5 + -2 + iVar2 % 5;
        local_4c[0] = iVar5;
      }
      local_58[1] = 2000;
      local_58[0] = -2000;
      piVar4 = local_58;
      if (-0x7d1 < iVar6) {
        piVar4 = local_58 + 2;
      }
      piVar3 = local_58 + 1;
      if (iVar6 < 0x7d1) {
        piVar3 = piVar4;
      }
      iVar2 = *piVar3;
      piVar4 = local_58 + 1;
      if (-0x7d1 < iVar5) {
        piVar4 = local_4c;
      }
      local_58[0] = 2000;
      local_58[1] = 0xfffff830;
      piVar3 = local_58;
      if (iVar5 < 0x7d1) {
        piVar3 = piVar4;
      }
      iVar5 = *piVar3;
      if (((DAT_180380980 < (float)((uint)fVar7 & _DAT_1803817c0)) && (iVar2 == 0)) &&
         (iVar2 = -1, 0.0 < fVar7)) {
        iVar2 = 1;
      }
      if (((DAT_180380980 < (float)((uint)fVar9 & _DAT_1803817c0)) && (iVar5 == 0)) &&
         (iVar5 = -1, 0.0 < fVar9)) {
        iVar5 = 1;
      }
      *(short *)(param_1 + 0xc) = (short)iVar2;
      *(short *)((longlong)param_1 + 0x32) = (short)iVar5;
      fVar7 = DAT_1803eb86c;
    }
  }
  DAT_1803eb86c = fVar7;
  return;
}


