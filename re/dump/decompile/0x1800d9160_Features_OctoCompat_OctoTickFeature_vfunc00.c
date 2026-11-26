// 0x1800d9160  Features_OctoCompat_OctoTickFeature_vfunc00
// size=1180 thunk=false
// signature: undefined Features_OctoCompat_OctoTickFeature_vfunc00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_OctoCompat_OctoTickFeature_vfunc00
               (undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  float *local_140;
  double local_138;
  double local_130;
  undefined4 local_128;
  undefined4 local_120;
  float local_118 [2];
  float *local_110;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float local_f0;
  float local_e8;
  float local_e0;
  float local_d8;
  float local_d0;
  float local_c8;
  float local_c0;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  undefined1 local_94 [12];
  float local_88;
  float local_84;
  float local_80;
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  if (DAT_180423988 != '\0') {
    pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar6 = (*pcVar3)(DAT_1803fa360,uVar5);
    if (lVar6 != 0) {
      uVar8 = *(undefined8 *)(param_3 + 3);
      fVar13 = (float)uVar8;
      fVar10 = param_3[5];
      if (((uint)fVar13 & 0x7f800000) != 0x7f800000) {
        local_108._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
        fVar11 = local_108._4_4_;
        local_f0 = local_108._4_4_;
        if (((((((uint)local_108._4_4_ & 0x7f800000) != 0x7f800000) &&
              (((uint)fVar10 & 0x7f800000) != 0x7f800000)) &&
             (fVar12 = *param_3, ((uint)fVar12 & 0x7f800000) != 0x7f800000)) &&
            ((fVar1 = param_3[1], ((uint)fVar1 & 0x7f800000) != 0x7f800000 &&
             (fVar2 = param_3[2], ((uint)fVar2 & 0x7f800000) != 0x7f800000)))) &&
           ((DAT_1803fa608 != (float *)0x0 &&
            (local_108 = uVar8, local_100 = fVar10, local_f8 = fVar13, local_e8 = fVar10,
            local_e0 = fVar12, local_d8 = fVar1, local_d0 = fVar2, cVar4 = FUN_18001c330(lVar6),
            cVar4 != '\0')))) {
          puVar7 = (undefined8 *)FUN_18001c430(lVar6,local_94);
          uVar8 = *puVar7;
          local_c8 = (float)uVar8;
          local_b8 = *(float *)(puVar7 + 1);
          if (((uint)local_c8 & 0x7f800000) != 0x7f800000) {
            local_b0._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
            local_c0 = local_b0._4_4_;
            if ((((uint)local_b0._4_4_ & 0x7f800000) != 0x7f800000) &&
               (((uint)local_b8 & 0x7f800000) != 0x7f800000)) {
              local_a0 = fVar13 - local_c8;
              local_9c = fVar11 - local_b0._4_4_;
              local_98 = fVar10 - local_b8;
              local_b0 = uVar8;
              local_a8 = local_b8;
              fVar9 = (float)(*(code *)PTR_FUN_1803da018)
                                       (local_9c * local_9c + local_a0 * local_a0 +
                                        local_98 * local_98);
              if (fVar9 <= DAT_1803810ec) {
                local_88 = fVar12 - fVar13;
                local_84 = fVar1 - fVar11;
                local_80 = fVar2 - fVar10;
                fVar10 = (float)(*(code *)PTR_FUN_1803da018)
                                          (local_84 * local_84 + local_88 * local_88 +
                                           local_80 * local_80);
                if (DAT_180380bb0 < fVar10) {
                  fVar13 = DAT_180380bb0 / fVar10;
                  local_88 = local_88 * fVar13;
                  local_84 = local_84 * fVar13;
                  local_80 = local_80 * fVar13;
                  local_118[0] = 1e+30;
                  fVar13 = *DAT_1803fa608;
                  uVar8 = FUN_18001dbf0(lVar6);
                  local_140 = local_118;
                  local_148 = &local_108;
                  lVar6 = FUN_1800a4370(local_148,lVar6,uVar8,SUB84((double)fVar13,0));
                  if (lVar6 != 0) {
                    local_110 = &local_88;
                    fVar11 = (float)FUN_1800d9600(&local_110,lVar6 + 0x1c);
                    fVar12 = (float)FUN_1800d9600(&local_110,lVar6 + 0x28);
                    fVar13 = DAT_180381384;
                    if (0.0 <= fVar11) {
                      fVar13 = tanf(fVar11 * DAT_180380994);
                      fVar13 = fVar13 * fVar10;
                    }
                    local_138 = DAT_1803813b0;
                    if ((DAT_1803fa608 != (float *)0x0) && (0.0 <= *(double *)(lVar6 + 8))) {
                      local_138 = (double)*DAT_1803fa608 - *(double *)(lVar6 + 8);
                    }
                    local_130 = (double)*(float *)(lVar6 + 0x3c);
                    local_140 = (float *)(double)fVar10;
                    local_148 = (undefined8 *)(double)fVar13;
                    local_120 = *(undefined4 *)(lVar6 + 0x38);
                    local_128 = *(undefined4 *)(lVar6 + 0x34);
                    FUN_180014410("[OCTO-IMPACT] candidate srcErr=%.1fu modelErr=%.3fdeg aimErr=%.3fdeg miss=%.1fu range=%.0fu lag=%.3fs pitchScale=%.3f cmd#%d tgt=%d\n"
                                  ,(double)local_118[0],(double)fVar11,(double)fVar12);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


