// 0x18028f3f0  FUN_18028f3f0
// size=1123 thunk=false
// signature: undefined FUN_18028f3f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18028f3f0(int *param_1,float *param_2,int param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  undefined1 *_Dst;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  int iVar10;
  undefined8 ****ppppuVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 ****ppppuVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_338 [32];
  float local_318;
  int local_308;
  undefined1 *local_300;
  undefined1 *local_2f8;
  undefined8 *local_2f0;
  undefined8 ***local_2e8 [2];
  undefined1 local_2d8 [528];
  ulonglong local_c8;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_338;
  ppppuVar11 = (undefined8 ****)0x0;
  iVar12 = 0;
  iVar14 = 0;
  ppppuVar15 = (undefined8 ****)0x0;
  puVar16 = (undefined8 *)0x0;
  local_2f0 = (undefined8 *)0x0;
  local_2e8[0] = (undefined8 ****)0x0;
  if (*param_1 < 0x41) {
    _Dst = local_2d8;
  }
  else {
    _Dst = (undefined1 *)FUN_18026f580((longlong)(*param_1 * 2 + 1) << 2);
  }
  fVar2 = DAT_180380bb0;
  local_300 = _Dst + (longlong)*param_1 * 4;
  param_2[(longlong)param_3 * 5 + 1] = (float)(param_1[1] + param_6) + DAT_180380bb0;
  uVar5 = _DAT_1803817c0;
  fVar4 = DAT_180381384;
  fVar3 = DAT_1803811c8;
  fVar1 = DAT_180380ac0;
  local_308 = param_6;
  local_2f8 = _Dst;
  if (0 < param_1[1]) {
    do {
      fVar20 = (float)local_308;
      fVar19 = fVar20 + 0.0;
      memset(_Dst,0,(longlong)*param_1 << 2);
      memset(local_300,0,(longlong)(*param_1 + 1) << 2);
      ppppuVar9 = ppppuVar11;
      if (ppppuVar11 != (undefined8 ****)0x0) {
        ppppuVar8 = local_2e8;
        do {
          ppppuVar9 = ppppuVar11;
          if (*(float *)((longlong)ppppuVar11 + 0x1c) <= fVar19) {
            *ppppuVar8 = *ppppuVar11;
            *ppppuVar11 = ppppuVar15;
            *(undefined4 *)((longlong)ppppuVar11 + 0x14) = 0;
            ppppuVar9 = ppppuVar8;
            ppppuVar15 = ppppuVar11;
          }
          ppppuVar11 = (undefined8 ****)*ppppuVar9;
          ppppuVar8 = ppppuVar9;
          ppppuVar9 = (undefined8 ****)local_2e8[0];
        } while (ppppuVar11 != (undefined8 ****)0x0);
      }
      fVar18 = param_2[1];
      ppppuVar11 = ppppuVar9;
      puVar7 = local_2f0;
      while (fVar18 <= fVar20 + fVar2) {
        if (param_2[1] != param_2[3]) {
          puVar7 = puVar16;
          if (ppppuVar15 == (undefined8 ****)0x0) {
            if (iVar12 == 0) {
              puVar7 = (undefined8 *)FUN_18026f580(0x6408);
              if (puVar7 == (undefined8 *)0x0) goto LAB_18028f6ac;
              *puVar7 = puVar16;
              iVar12 = 800;
            }
            iVar12 = iVar12 + -1;
            ppppuVar9 = (undefined8 ****)(puVar7 + (longlong)iVar12 * 4 + 1);
            puVar16 = puVar7;
            if (ppppuVar9 == (undefined8 ****)0x0) goto LAB_18028f6ac;
          }
          else {
            ppppuVar9 = ppppuVar15;
            ppppuVar15 = (undefined8 ****)*ppppuVar15;
          }
          fVar18 = (param_2[2] - *param_2) / (param_2[3] - param_2[1]);
          *(float *)((longlong)ppppuVar9 + 0xc) = fVar18;
          if (fVar18 == 0.0) {
            fVar17 = 0.0;
          }
          else {
            fVar17 = fVar2 / fVar18;
          }
          *(float *)(ppppuVar9 + 2) = fVar17;
          *(float *)(ppppuVar9 + 1) = ((fVar19 - param_2[1]) * fVar18 + *param_2) - (float)param_5;
          fVar18 = fVar4;
          if (param_2[4] != 0.0) {
            fVar18 = fVar2;
          }
          *(float *)((longlong)ppppuVar9 + 0x14) = fVar18;
          *(float *)(ppppuVar9 + 3) = param_2[1];
          fVar18 = param_2[3];
          *(float *)((longlong)ppppuVar9 + 0x1c) = fVar18;
          if (((iVar14 == 0) && (param_6 != 0)) && (fVar18 < fVar19)) {
            *(float *)((longlong)ppppuVar9 + 0x1c) = fVar19;
          }
          *ppppuVar9 = ppppuVar11;
          local_2e8[0] = ppppuVar9;
          ppppuVar11 = ppppuVar9;
          puVar16 = puVar7;
        }
LAB_18028f6ac:
        fVar18 = param_2[6];
        param_2 = param_2 + 5;
        puVar7 = puVar16;
      }
      local_2f0 = puVar7;
      if (ppppuVar11 != (undefined8 ****)0x0) {
        local_318 = fVar19;
        FUN_18028edd0(_Dst,local_300 + 4,*param_1,ppppuVar11);
      }
      iVar13 = 0;
      fVar19 = 0.0;
      if (0 < *param_1) {
        do {
          fVar19 = fVar19 + *(float *)(local_300 + (longlong)iVar13 * 4);
          iVar10 = (int)((float)((uint)(fVar19 + *(float *)(_Dst + (longlong)iVar13 * 4)) & uVar5) *
                         fVar3 + fVar1);
          if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          iVar6 = iVar14 * param_1[2] + iVar13;
          iVar13 = iVar13 + 1;
          *(char *)((longlong)iVar6 + *(longlong *)(param_1 + 4)) = (char)iVar10;
          puVar16 = local_2f0;
        } while (iVar13 < *param_1);
      }
      if (ppppuVar11 != (undefined8 ****)0x0) {
        ppppuVar9 = local_2e8;
        ppppuVar8 = ppppuVar11;
        do {
          *(float *)(ppppuVar8 + 1) =
               *(float *)((longlong)ppppuVar8 + 0xc) + *(float *)(ppppuVar8 + 1);
          ppppuVar9 = (undefined8 ****)*ppppuVar9;
          ppppuVar8 = (undefined8 ****)*ppppuVar9;
        } while (ppppuVar8 != (undefined8 ****)0x0);
      }
      iVar14 = iVar14 + 1;
      local_308 = local_308 + 1;
    } while (iVar14 < param_1[1]);
  }
  while (puVar16 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar16;
    FUN_18026f680(puVar16);
    puVar16 = puVar7;
  }
  if (_Dst != local_2d8) {
    FUN_18026f680(_Dst);
  }
  return;
}


