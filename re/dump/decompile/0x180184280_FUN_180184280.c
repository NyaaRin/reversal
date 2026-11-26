// 0x180184280  FUN_180184280
// size=1269 thunk=false
// signature: undefined FUN_180184280()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180184280(longlong param_1,float *param_2,float *param_3,uint param_4,char *param_5,
                  float param_6)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float _X;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined8 local_108;
  float local_100;
  int local_f8;
  int local_f4 [5];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  if (DAT_1803fa668 == (longlong *)0x0) {
    return;
  }
  local_f8 = 0;
  local_f4[0] = 0;
  (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_f8,local_f4);
  if (local_f8 < 1) {
    return;
  }
  if (local_f4[0] < 1) {
    return;
  }
  local_f4[2] = 0;
  local_f4[3] = 0;
  local_f4[1] = 0;
  (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,local_f4 + 1);
  FUN_1802d3e70(local_f4 + 1,&local_e0,&local_d0,&local_c0);
  fVar7 = *param_2 - *param_3;
  fVar11 = param_2[1] - param_3[1];
  fVar8 = param_2[2] - param_3[2];
  fVar9 = (float)local_f8 * DAT_180380ac0;
  fVar10 = (float)local_f4[0] * DAT_180380ac0;
  if (0.0 < fVar11 * local_dc + fVar7 * local_e0 + fVar8 * local_d8) {
    local_108 = *(undefined8 *)param_2;
    local_100 = param_2[2];
    cVar2 = FUN_180021ac0(&local_108,&local_118);
    if (cVar2 != '\0') {
      fVar12 = local_118 - fVar9;
      fVar7 = local_114 - fVar10;
      goto LAB_18018448e;
    }
  }
  fVar12 = fVar11 * local_cc + fVar7 * local_d0 + fVar8 * local_c8;
  fVar7 = (float)((uint)(fVar11 * local_bc + fVar7 * local_c0 + fVar8 * local_b8) ^ DAT_1803817f0);
LAB_18018448e:
  iVar1 = local_f4[0];
  iVar5 = local_f8;
  fVar8 = fVar12 * fVar12 + fVar7 * fVar7;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  if (fVar8 < DAT_180380964) {
    fVar12 = 0.0;
    fVar7 = DAT_180380bb0;
    fVar8 = DAT_180380bb0;
  }
  fVar12 = fVar12 / fVar8;
  if (iVar1 < iVar5) {
    iVar5 = iVar1;
  }
  fVar7 = fVar7 / fVar8;
  fVar10 = (float)iVar5 * DAT_180380a6c * fVar7 + fVar10;
  fVar9 = (float)iVar5 * DAT_180380a6c * fVar12 + fVar9;
  fVar8 = atan2f(fVar7,fVar12);
  local_108._0_4_ = 40.0;
  local_110 = 6.0;
  pfVar4 = &local_110;
  if (DAT_180380f40 <= param_6) {
    pfVar4 = &param_6;
  }
  pfVar3 = (float *)&local_108;
  if (param_6 <= DAT_180381088) {
    pfVar3 = pfVar4;
  }
  fVar11 = *pfVar3;
  fVar6 = cosf(fVar8);
  local_108 = CONCAT44(local_108._4_4_,fVar6 * fVar11 + fVar9);
  fVar6 = sinf(fVar8);
  _X = fVar8 + _DAT_180380dd0;
  local_108 = CONCAT44(fVar6 * fVar11 + fVar10,(float)local_108);
  fVar6 = cosf(_X);
  local_110 = fVar6 * fVar11 + fVar9;
  fVar6 = sinf(_X);
  fVar8 = fVar8 - _DAT_180380dd0;
  local_10c = fVar6 * fVar11 + fVar10;
  fVar6 = cosf(fVar8);
  local_118 = fVar6 * fVar11 + fVar9;
  fVar8 = sinf(fVar8);
  local_114 = fVar8 * fVar11 + fVar10;
  if ((param_4 & 0xff000000) != 0) {
    FUN_18020dc30(param_1 + 0x50,&local_108);
    FUN_18020dc30(param_1 + 0x50,&local_110);
    FUN_18020dc30(param_1 + 0x50,&local_118);
    FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_18020dc30(param_1 + 0x50,&local_108);
  FUN_18020dc30(param_1 + 0x50,&local_110);
  FUN_18020dc30(param_1 + 0x50,&local_118);
  local_120 = 0x200;
  local_128 = DAT_180380d30;
  FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),0xdc000000);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
    FUN_180183f10(param_1,CONCAT44(fVar10 - fVar7 * DAT_180381038,fVar9 - fVar12 * DAT_180381038),
                  param_5,param_4);
  }
  return;
}


