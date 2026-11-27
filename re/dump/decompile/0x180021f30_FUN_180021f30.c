// 0x180021f30  FUN_180021f30
// size=470 thunk=false
// signature: undefined FUN_180021f30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_180021f30(float *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  float extraout_XMM0_Da;
  float fVar8;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined **local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_138 [44];
  float local_10c;
  longlong local_e0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
  local_150 = (*pcVar4)(DAT_1803fa360,uVar6);
  bVar5 = false;
  if (local_150 != 0) {
    fVar1 = *param_1;
    local_b8 = *param_3 - fVar1;
    fVar2 = param_1[1];
    local_b4 = param_3[1] - fVar2;
    fVar3 = param_1[2];
    local_b0 = param_3[2] - fVar3;
    local_148 = DAT_1803ff0f0;
    local_158 = vftable_CDoubleTraceFilter;
    local_88 = 0;
    fVar8 = local_b4 * local_b4 + local_b8 * local_b8 + local_b0 * local_b0;
    fVar7 = (float)(*(code *)PTR_FUN_1803da018)(fVar8);
    local_7f = fVar7 != 0.0;
    local_168 = local_138;
    local_94 = 0;
    local_98 = 0;
    local_88 = 0;
    local_80 = 1;
    local_a4 = 0;
    local_a8 = 0;
    local_c8 = fVar1;
    local_c4 = fVar2;
    local_c0 = fVar3;
    (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_c8,0x46004003,&local_158);
    if ((local_e0 == param_2) ||
       ((*(code *)PTR_FUN_1803da018)(fVar8), extraout_XMM0_Da <= DAT_180380f40)) {
      bVar5 = true;
    }
    else {
      bVar5 = DAT_180380bb0 - DAT_180380f40 / extraout_XMM0_Da <= local_10c;
    }
  }
  return bVar5;
}


