// 0x1800741c0  FUN_1800741c0
// size=1019 thunk=false
// signature: undefined FUN_1800741c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1800741c0(undefined8 param_1,longlong param_2,float *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  float extraout_XMM0_Da;
  float fVar5;
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined **local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_118 [12];
  float local_10c;
  float local_108;
  float local_104;
  longlong local_c0;
  undefined1 local_a8 [64];
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  if (DAT_180423985 == '\0') {
    if ((((((DAT_180423988 != '\0') && (cVar3 = FUN_180071c60(), cVar3 != '\0')) && (param_2 != 0))
         && (((DAT_1803fa610 != (longlong *)0x0 && (((uint)*param_3 & 0x7f800000) != 0x7f800000)) &&
             ((((uint)param_3[1] & 0x7f800000) != 0x7f800000 &&
              ((((uint)param_3[2] & 0x7f800000) != 0x7f800000 &&
               (cVar3 = FUN_1800732a0(param_1,&local_188,&local_178), cVar3 != '\0')))))))) &&
        (((uint)local_178 & 0x7f800000) != 0x7f800000)) &&
       (((uint)local_174 & 0x7f800000) != 0x7f800000)) {
      if ((((uint)local_170 & 0x7f800000) != 0x7f800000) &&
         (DAT_180380938 < local_174 * local_174 + local_178 * local_178 + local_170 * local_170)) {
        local_168 = *param_3 - local_188;
        local_164 = param_3[1] - local_184;
        local_160 = param_3[2] - local_180;
        fVar5 = local_164 * local_174 + local_168 * local_178 + local_160 * local_170;
        if (fVar5 <= DAT_180380bb0) {
          return false;
        }
        if ((DAT_1803fa360 == (longlong *)0x0) || (DAT_1803fa668 == (longlong *)0x0)) {
          uStack_128 = 0;
        }
        else {
          pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
          uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
          uStack_128 = (*pcVar1)(DAT_1803fa360,uVar4);
        }
        local_130 = vftable_CDoubleTraceFilter;
        local_120 = DAT_1803ff0f0;
        local_68 = 0;
        local_150 = fVar5 + DAT_1803810d0;
        local_158 = local_150 * local_178;
        local_154 = local_150 * local_174;
        local_150 = local_150 * local_170;
        local_178 = local_158 + local_188;
        local_174 = local_154 + local_184;
        local_170 = local_150 + local_180;
        local_14c = local_178;
        local_148 = local_174;
        local_144 = local_170;
        FUN_18001fde0(local_a8,&local_188,&local_178);
        local_198 = local_118;
        (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,local_a8,0x46004003,&local_130);
        if (local_c0 == param_2) {
          return true;
        }
        local_140 = local_10c - local_188;
        local_13c = local_108 - local_184;
        local_138 = local_104 - local_180;
        (*(code *)PTR_FUN_1803da018)
                  (local_13c * local_13c + local_140 * local_140 + local_138 * local_138);
        return fVar5 <= extraout_XMM0_Da + DAT_180380fa8;
      }
    }
  }
  else if ((((DAT_180423984 != '\0') && (0.0 <= DAT_1803e9210)) && (DAT_1803fa608 != (float *)0x0))
          && ((0.0 <= (double)*DAT_1803fa608 - DAT_1803e9210 &&
              ((double)*DAT_1803fa608 - DAT_1803e9210 <= DAT_180380c90)))) {
    uVar2 = FUN_180073ce0();
    return (bool)uVar2;
  }
  return true;
}


