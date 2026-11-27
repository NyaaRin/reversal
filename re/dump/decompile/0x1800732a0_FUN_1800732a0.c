// 0x1800732a0  FUN_1800732a0
// size=2024 thunk=false
// signature: undefined FUN_1800732a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800732a0(float *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  undefined8 *local_280;
  float local_278 [2];
  float local_270 [2];
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  float local_250;
  float local_248;
  float local_244;
  float local_240;
  undefined8 local_238;
  float local_230;
  undefined8 local_228;
  float local_220;
  undefined4 *local_210;
  undefined4 *local_208;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined **local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  float local_188;
  undefined8 local_180;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined1 local_148 [12];
  float local_13c;
  float local_138;
  float local_134;
  float local_11c;
  undefined1 local_d8 [64];
  undefined8 local_98;
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_2a8;
  if (((DAT_180423988 != '\0') &&
      (local_210 = param_3, local_208 = param_2, cVar1 = FUN_180071d10(&local_248,&local_238),
      cVar1 != '\0')) && (cVar1 = FUN_1800723a0(&local_160), cVar1 != '\0')) {
    pcVar4 = DAT_180423978;
    uVar5 = FUN_180071bf0();
    fVar7 = DAT_180380bb0;
    if (pcVar4 == (code *)0x0) {
      if (DAT_180423964 == '\0') {
        local_270[0] = 0.9;
        local_278[0] = 0.0;
        pfVar3 = local_278;
        if (0.0 <= DAT_180423980) {
          pfVar3 = &DAT_180423980;
        }
        pfVar2 = local_270;
        if (DAT_180423980 <= DAT_180380b68) {
          pfVar2 = pfVar3;
        }
        local_170 = (DAT_180380bb0 - *pfVar2) * *param_1;
        local_16c = param_1[1];
        local_168 = (float)uVar5;
      }
      else {
        local_170 = *param_1;
        local_16c = param_1[1];
        local_168 = 0.0;
      }
      local_280 = &local_180;
      local_288 = &local_190;
      FUN_1800720d0(&local_160,&local_170,&local_248,&local_238);
    }
    else {
      local_268 = *(undefined8 *)param_1;
      local_260 = uVar5;
      cVar1 = (*pcVar4)(&local_160,&local_268,&local_190,&local_180);
      fVar7 = DAT_180380bb0;
      if (cVar1 == '\0') {
        local_190 = 0x7149f2ca7149f2ca;
        local_188 = 1e+30;
        local_180 = 0;
        local_178 = 0.0;
      }
    }
    if ((((((uint)(float)local_190 & 0x7f800000) != 0x7f800000) &&
         (((uint)local_190._4_4_ & 0x7f800000) != 0x7f800000)) &&
        ((((uint)local_188 & 0x7f800000) != 0x7f800000 &&
         ((((uint)(float)local_180 & 0x7f800000) != 0x7f800000 &&
          (((uint)local_180._4_4_ & 0x7f800000) != 0x7f800000)))))) &&
       (((uint)local_178 & 0x7f800000) != 0x7f800000)) {
      if ((DAT_180423989 != '\0') && (DAT_1803fa610 != (longlong *)0x0)) {
        local_1f0 = (float)local_180 * DAT_1803810a0;
        local_1ec = local_180._4_4_ * DAT_1803810a0;
        local_1e8 = local_178 * DAT_1803810a0;
        local_1e0 = (float)local_190 - local_1f0;
        local_1dc = local_190._4_4_ - local_1ec;
        local_1d8 = local_188 - local_1e8;
        local_1d0 = (float)local_190 - local_1e0;
        local_1cc = local_190._4_4_ - local_1dc;
        local_1c8 = local_188 - local_1d8;
        fVar6 = local_1cc * local_1cc + local_1d0 * local_1d0 + local_1c8 * local_1c8;
        local_258 = CONCAT44(local_1dc,local_1e0);
        fVar8 = local_1e0;
        fVar9 = local_1dc;
        fVar10 = local_1d8;
        if (DAT_180380948 < fVar6) {
          local_1c0 = local_160 - local_1e0;
          local_1bc = local_15c - local_1dc;
          local_1b8 = local_158 - local_1d8;
          fVar6 = (local_1bc * local_1cc + local_1c0 * local_1d0 + local_1b8 * local_1c8) / fVar6;
          local_1ac = 0.0;
          if ((0.0 <= fVar6) && (local_1ac = fVar6, fVar7 < fVar6)) {
            local_1ac = fVar7;
          }
          local_1b4 = local_1d0 * local_1ac;
          local_1b0 = local_1cc * local_1ac;
          local_1ac = local_1c8 * local_1ac;
          fVar8 = local_1b4 + local_1e0;
          fVar9 = local_1b0 + local_1dc;
          local_220 = local_1ac + local_1d8;
          local_228 = CONCAT44(fVar9,fVar8);
          local_258 = CONCAT44(fVar9,fVar8);
          fVar10 = local_220;
        }
        local_248 = fVar8 - (float)local_190;
        local_244 = fVar9 - local_190._4_4_;
        local_240 = fVar10 - local_188;
        if (DAT_180380980 < local_244 * local_244 + local_248 * local_248 + local_240 * local_240) {
          local_250 = fVar10;
          if ((DAT_1803fa360 == (longlong *)0x0) || (DAT_1803fa668 == (longlong *)0x0)) {
            uStack_1a0 = 0;
          }
          else {
            pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
            uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
            uStack_1a0 = (*pcVar4)(DAT_1803fa360,uVar5);
          }
          local_1a8 = vftable_CDoubleTraceFilter;
          local_198 = DAT_1803ff0f0;
          local_98 = 0;
          local_238 = local_190;
          local_230 = local_188;
          FUN_18001fde0(local_d8,&local_258,&local_238);
          local_288 = (undefined8 *)local_148;
          (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,local_d8,0x46004003,&local_1a8);
          if (local_11c < fVar7) {
            local_170 = (float)local_190 - fVar8;
            local_16c = local_190._4_4_ - fVar9;
            local_168 = local_188 - fVar10;
            if (DAT_180380948 <
                local_16c * local_16c + local_170 * local_170 + local_168 * local_168) {
              (*(code *)PTR_FUN_1803da000)(&local_170);
              if (((((uint)(local_13c - local_170) & 0x7f800000) != 0x7f800000) &&
                  (((uint)(local_138 - local_16c) & 0x7f800000) != 0x7f800000)) &&
                 (((uint)(local_134 - local_168) & 0x7f800000) != 0x7f800000)) {
                local_190 = CONCAT44(local_138 - local_16c,local_13c - local_170);
                local_188 = local_134 - local_168;
              }
            }
          }
        }
      }
      *param_2 = (float)local_190;
      param_2[1] = local_190._4_4_;
      param_2[2] = local_188;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = (float)local_180;
        param_3[1] = local_180._4_4_;
        param_3[2] = local_178;
      }
      return 1;
    }
  }
  return 0;
}


