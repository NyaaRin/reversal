// 0x1800cb6b0  FUN_1800cb6b0
// size=597 thunk=false
// signature: undefined FUN_1800cb6b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800cb6b0(float *param_1,undefined8 param_2,float *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  float fVar9;
  float extraout_XMM0_Da;
  float fVar10;
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  float local_188;
  float local_184;
  float local_180;
  undefined **local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_108 [44];
  float local_dc;
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar9 = param_3[2];
  if (param_4 == '\0') {
    local_188 = fVar1;
    local_184 = fVar2;
    local_180 = fVar9;
    cVar5 = FUN_180021f30(param_1,param_2,&local_188);
  }
  else {
    pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar7 = (*pcVar4)(DAT_1803fa360,uVar6);
    if (lVar7 == 0) goto LAB_1800cb8ab;
    fVar3 = *param_1;
    local_148 = fVar1 - fVar3;
    fVar1 = param_1[1];
    local_144 = fVar2 - fVar1;
    fVar2 = param_1[2];
    local_140 = fVar9 - fVar2;
    local_160 = DAT_1803ff0f0;
    local_178 = vftable_CTripleTraceFilter;
    local_118 = 0;
    fVar10 = local_144 * local_144 + local_148 * local_148 + local_140 * local_140;
    local_170 = lVar7;
    local_168 = param_2;
    fVar9 = (float)(*(code *)PTR_FUN_1803da018)(fVar10);
    local_10f = fVar9 != 0.0;
    local_198 = local_108;
    local_124 = 0;
    local_128 = 0;
    local_118 = 0;
    local_110 = 1;
    local_134 = 0;
    local_138 = 0;
    local_158 = fVar3;
    local_154 = fVar1;
    local_150 = fVar2;
    (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_158,0x46004003,&local_178);
    (*(code *)PTR_FUN_1803da018)(fVar10);
    if (extraout_XMM0_Da <= DAT_180380f40) {
      return 1;
    }
    cVar5 = DAT_180380bb0 - DAT_180380f40 / extraout_XMM0_Da <= local_dc;
  }
  if (cVar5 != '\0') {
    return 1;
  }
LAB_1800cb8ab:
  cVar5 = FUN_1800ab790(param_1,param_3,param_2);
  if (cVar5 != '\0') {
    return 1;
  }
  uVar8 = FUN_1800ae2d0(param_1,param_2,param_3,param_4);
  return uVar8;
}


