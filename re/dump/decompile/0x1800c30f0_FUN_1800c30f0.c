// 0x1800c30f0  FUN_1800c30f0
// size=371 thunk=false
// signature: undefined FUN_1800c30f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800c30f0(undefined8 param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined1 auStack_128 [32];
  float local_108;
  float local_104;
  float local_100;
  undefined1 local_f8 [20];
  float local_e4;
  float local_d8;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  ulonglong local_88;
  
  uVar5 = DAT_18038112c;
  fVar4 = DAT_180381038;
  fVar3 = DAT_180380bb0;
  fVar2 = DAT_180380b10;
  fVar1 = DAT_1803809ec;
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  pfVar6 = (float *)&DAT_18033c678;
  while( true ) {
    local_ac = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_cc = 0;
    uStack_c4 = 0;
    local_bc = 0;
    uStack_b4 = 0;
    local_108 = *pfVar6 * *param_3 + *param_2;
    local_104 = *pfVar6 * param_3[1] + param_2[1];
    local_100 = param_4;
    FUN_1800c2f60(param_1,&local_108,uVar5,local_f8);
    if ((((uStack_c4._3_1_ == '\0') && ((float)local_cc < fVar3)) && (fVar2 <= local_d8)) &&
       ((fVar1 <= param_4 - local_e4 && (param_4 - local_e4 <= fVar4)))) break;
    pfVar6 = pfVar6 + 1;
    if (pfVar6 == (float *)&DAT_18033c69c) {
      return 0;
    }
  }
  return 1;
}


