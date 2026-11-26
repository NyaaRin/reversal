// 0x1800c3270  FUN_1800c3270
// size=1777 thunk=false
// signature: undefined FUN_1800c3270()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800c3270(longlong *param_1,float *param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  longlong *plVar8;
  float *pfVar9;
  int iVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_2f8 [32];
  undefined8 *local_2d8;
  uint local_2d0;
  float local_2c8;
  undefined8 local_2c0;
  float local_2b8;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_290;
  float local_28c;
  float local_288;
  float local_280;
  float local_27c;
  float local_278;
  float local_270;
  float local_26c;
  float local_268;
  float local_260 [4];
  float local_250;
  undefined4 local_24c;
  float local_248;
  float local_244;
  undefined4 local_240;
  float local_23c;
  float local_238;
  undefined4 local_234;
  float local_230;
  float local_22c;
  undefined4 local_228;
  float local_224;
  undefined **local_220;
  longlong *local_218;
  undefined1 local_208 [12];
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1e8;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined1 local_198 [32];
  float local_178;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined1 local_128 [64];
  undefined8 local_e8;
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_2f8;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x18))();
  if (plVar8 == (longlong *)0x0) {
    pfVar9 = (float *)FUN_18001bef0(param_1);
    fVar13 = *pfVar9;
    fVar12 = pfVar9[1];
    fVar14 = pfVar9[2];
    local_2a0 = fVar13;
    local_29c = fVar12;
    local_298 = fVar14;
    pfVar9 = (float *)FUN_18001bfe0(param_1);
  }
  else {
    pfVar9 = (float *)(**(code **)(*plVar8 + 0x18))(plVar8);
    fVar13 = *pfVar9;
    fVar12 = pfVar9[1];
    fVar14 = pfVar9[2];
    local_2a0 = fVar13;
    local_29c = fVar12;
    local_298 = fVar14;
    pfVar9 = (float *)(**(code **)(*plVar8 + 0x20))(plVar8);
  }
  local_2b8 = pfVar9[2];
  local_2c0 = *(undefined8 *)pfVar9;
  if ((local_2b8 - fVar14 < DAT_180380fa8) ||
     (fVar14 = *pfVar9, fVar15 = pfVar9[1], *pfVar9 - fVar13 < DAT_180380e9c)) {
    local_2a0 = DAT_1803813f4;
    local_29c = DAT_1803813f4;
    local_2c0 = CONCAT44(DAT_180380fe8,DAT_180380fe8);
    local_298 = 0.0;
    local_2b8 = 72.0;
    fVar13 = DAT_1803813f4;
    fVar14 = DAT_180380fe8;
    fVar12 = DAT_1803813f4;
    fVar15 = DAT_180380fe8;
  }
  FUN_18001daf0(param_1,&local_290);
  fVar4 = DAT_180380d30;
  local_2d8 = &local_2c0;
  fVar16 = (float)*(double *)(DAT_1803fa608 + 0x28);
  local_e8 = 0;
  fVar17 = fVar16 * *param_2 + local_290;
  fVar18 = fVar16 * param_2[1] + local_28c;
  fVar19 = fVar16 * 0.0 + local_288;
  local_270 = fVar17 + 0.0;
  local_26c = fVar18 + 0.0;
  local_268 = fVar19 + DAT_180380d30;
  local_2b0 = local_290 + 0.0;
  local_2ac = local_28c + 0.0;
  local_2a8 = local_288 + DAT_180380d30;
  local_280 = fVar17;
  local_27c = fVar18;
  local_278 = fVar19;
  FUN_18001fe90(local_128,&local_2b0,&local_270,&local_2a0);
  local_220 = vftable_CTraceFilter;
  local_1bc = 0;
  uStack_1b4 = 0;
  local_2d8 = (undefined8 *)local_208;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_1cc = 0;
  uStack_1c4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  local_218 = param_1;
  (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,local_128,0x201400b,&local_220);
  fVar6 = DAT_180381024;
  fVar5 = DAT_180380d30;
  fVar3 = DAT_180380bb0;
  fVar2 = DAT_180380b10;
  if (((uStack_1d4._3_1_ != '\0') || (DAT_180380bb0 <= (float)local_1dc)) ||
     (DAT_180380b10 <= local_1e8)) {
    bVar11 = 0;
  }
  else {
    fVar17 = local_1fc - 0.0;
    fVar18 = local_1f8 - 0.0;
    fVar19 = local_1f4 - fVar4;
    bVar11 = 1;
    local_280 = fVar17;
    local_27c = fVar18;
    local_278 = fVar19;
  }
  iVar10 = 0;
  local_2c8 = 0.0;
  local_260[0] = 0.0;
  local_260[1] = 0.0;
  local_260[2] = 0.0;
  local_24c = 0;
  local_260[3] = fVar13 + DAT_180380bb0;
  pfVar9 = local_260;
  local_23c = fVar13 + DAT_180380bb0;
  local_250 = fVar12 + DAT_180380bb0;
  local_248 = fVar14 - DAT_180380bb0;
  local_244 = fVar12 + DAT_180380bb0;
  local_238 = fVar15 - DAT_180380bb0;
  local_230 = fVar14 - DAT_180380bb0;
  local_22c = fVar15 - DAT_180380bb0;
  local_240 = 0;
  local_234 = 0;
  local_228 = 0;
  fVar13 = DAT_180381004;
  do {
    local_14c = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    local_16c = 0;
    uStack_164 = 0;
    local_15c = 0;
    uStack_154 = 0;
    local_2b0 = fVar17 + *pfVar9;
    local_2ac = fVar18 + pfVar9[1];
    local_2a8 = fVar19 + pfVar9[2];
    FUN_1800c2f60(param_1,&local_2b0,DAT_180381004,local_198);
    if (uStack_164._3_1_ == '\0') {
      if ((fVar3 <= (float)local_16c) || (local_178 < fVar2)) goto LAB_1800c369b;
      iVar10 = iVar10 + 1;
      fVar12 = (float)local_16c * fVar6 - fVar5;
      fVar14 = local_178;
      if (fVar13 <= fVar12) goto LAB_1800c369b;
    }
    else {
      iVar10 = iVar10 + 1;
LAB_1800c369b:
      fVar12 = fVar13;
      fVar14 = local_2c8;
    }
    local_2c8 = fVar14;
    pfVar9 = pfVar9 + 3;
    fVar13 = fVar12;
    if (pfVar9 == &local_224) {
      if (((DAT_1803fa608 != 0) && ((DAT_180380f40 < fVar12 || (bVar11 != 0)))) &&
         ((fVar13 = (float)*(double *)(DAT_1803fa608 + 0x10), fVar13 < DAT_1803ff118 - DAT_180380f00
          || (DAT_1803ff118 < fVar13)))) {
        DAT_1803ff118 = fVar13 + DAT_180380ac0;
        dVar1 = (double)local_2c8;
        fVar13 = (float)(*(code *)PTR_FUN_1803da018)(param_2[1] * param_2[1] + *param_2 * *param_2);
        local_2d0 = (uint)bVar11;
        local_2d8 = (undefined8 *)CONCAT44(local_2d8._4_4_,iVar10);
        FUN_180014410("[EDGEJUMP] probe: speed=%.0f nextDrop=%.1fu normal.z=%.2f support=%d/5 clipped=%d\n"
                      ,(double)fVar13,SUB84((double)fVar12,0),dVar1);
      }
      if (iVar10 < 1) {
        fVar13 = (float)(*(code *)PTR_FUN_1803da018)(param_2[1] * param_2[1] + *param_2 * *param_2);
        local_2c0 = 0;
        local_2b8 = 0.0;
        if (DAT_180380980 <= fVar13) {
          local_2c0 = CONCAT44(*param_2 / fVar13,(float)((uint)param_2[1] ^ DAT_1803817f0) / fVar13)
          ;
        }
        fVar16 = fVar16 + fVar16;
        local_2b0 = fVar16 * *param_2 + local_290;
        local_2ac = fVar16 * param_2[1] + local_28c;
        local_2a8 = fVar16 * DAT_180380910 + local_288;
        cVar7 = FUN_1800c30f0(param_1,&local_280,&local_2c0,local_288);
        if ((cVar7 == '\0') &&
           (cVar7 = FUN_1800c30f0(param_1,&local_2b0,&local_2c0,local_288), cVar7 == '\0')) {
          return 1;
        }
        DAT_18040a640 = DAT_18040a640 + 1;
        if (DAT_18040a640 < 0xb) {
          FUN_180014410("[EDGEJUMP] skip #%d: walkable ground continues within %.0fu (stairs/terrace, not a ledge) speed=%.0f\n"
                        ,DAT_18040a640,DAT_180380e08,(double)fVar13);
        }
      }
      return 0;
    }
  } while( true );
}


