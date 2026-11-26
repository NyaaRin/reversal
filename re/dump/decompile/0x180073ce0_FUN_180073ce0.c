// 0x180073ce0  FUN_180073ce0
// size=1235 thunk=false
// signature: undefined FUN_180073ce0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180073ce0(undefined8 param_1,longlong param_2,float *param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  float fVar7;
  float extraout_XMM0_Da;
  float fVar8;
  float extraout_XMM0_Da_00;
  undefined1 auStack_2b8 [32];
  undefined1 *local_298;
  float local_288;
  float local_284;
  float local_280;
  float local_278;
  float local_270;
  float local_268;
  undefined8 local_258;
  float local_250;
  float local_248;
  float local_244;
  float local_240;
  undefined8 local_238;
  float local_230;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  undefined **local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined1 local_1f8 [12];
  float local_1ec;
  float local_1e8;
  float local_1e4;
  longlong local_1a0;
  undefined1 local_188 [12];
  float local_17c;
  float local_178;
  float local_174;
  longlong local_130;
  undefined1 local_118 [64];
  undefined8 local_d8;
  undefined1 local_c8 [64];
  undefined8 local_88;
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  if (((((((DAT_180423985 != '\0') && (DAT_180423984 != '\0')) && (0.0 <= DAT_1803e9210)) &&
        ((DAT_1803fa608 != (float *)0x0 && (0.0 <= (double)*DAT_1803fa608 - DAT_1803e9210)))) &&
       (((double)*DAT_1803fa608 - DAT_1803e9210 <= DAT_180380c90 &&
        ((param_2 != 0 && (DAT_1803fa610 != (longlong *)0x0)))))) &&
      (((uint)*param_3 & 0x7f800000) != 0x7f800000)) &&
     (((((uint)param_3[1] & 0x7f800000) != 0x7f800000 &&
       (((uint)param_3[2] & 0x7f800000) != 0x7f800000)) &&
      (cVar5 = FUN_180072860(SUB84(DAT_180380c90,0),&local_288), cVar5 != '\0')))) {
    if ((DAT_1803fa360 == (longlong *)0x0) || (DAT_1803fa668 == (longlong *)0x0)) {
      uStack_208 = 0;
    }
    else {
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
      uStack_208 = (*pcVar1)(DAT_1803fa360,uVar6);
    }
    local_210 = vftable_CDoubleTraceFilter;
    local_200 = DAT_1803ff0f0;
    local_d8 = 0;
    local_258 = *(undefined8 *)param_3;
    local_250 = param_3[2];
    FUN_18001fde0(local_118,&local_288,&local_258);
    local_298 = local_1f8;
    (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,local_118,0x46004003,&local_210);
    if (local_1a0 != param_2) {
      local_248 = local_1ec - local_288;
      local_244 = local_1e8 - local_284;
      local_240 = local_1e4 - local_280;
      fVar7 = (float)(*(code *)PTR_FUN_1803da018)
                               (local_244 * local_244 + local_248 * local_248 +
                                local_240 * local_240);
      local_288 = *param_3 - local_288;
      local_284 = param_3[1] - local_284;
      local_280 = param_3[2] - local_280;
      (*(code *)PTR_FUN_1803da018)
                (local_284 * local_284 + local_288 * local_288 + local_280 * local_280);
      if (fVar7 + DAT_180380fa8 < extraout_XMM0_Da) {
        return 0;
      }
    }
    fVar7 = DAT_180380fa8;
    cVar5 = FUN_1800732a0(param_1,&local_288,0);
    fVar4 = local_280;
    fVar3 = local_284;
    fVar2 = local_288;
    if (((cVar5 != '\0') && (local_278 = local_288, ((uint)local_288 & 0x7f800000) != 0x7f800000))
       && ((local_270 = local_284, ((uint)local_284 & 0x7f800000) != 0x7f800000 &&
           (local_268 = local_280, ((uint)local_280 & 0x7f800000) != 0x7f800000)))) {
      local_88 = 0;
      local_238 = *(undefined8 *)param_3;
      local_230 = param_3[2];
      FUN_18001fde0(local_c8,&local_288,&local_238);
      local_298 = local_188;
      (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,local_c8,0x46004003,&local_210);
      if (local_130 != param_2) {
        local_228 = local_17c - fVar2;
        local_224 = local_178 - fVar3;
        local_220 = local_174 - fVar4;
        fVar8 = (float)(*(code *)PTR_FUN_1803da018)
                                 (local_224 * local_224 + local_228 * local_228 +
                                  local_220 * local_220);
        local_21c = *param_3 - fVar2;
        local_218 = param_3[1] - fVar3;
        local_214 = param_3[2] - fVar4;
        (*(code *)PTR_FUN_1803da018)
                  (local_218 * local_218 + local_21c * local_21c + local_214 * local_214);
        if (fVar8 + fVar7 < extraout_XMM0_Da_00) {
          return 0;
        }
      }
    }
  }
  return 1;
}


