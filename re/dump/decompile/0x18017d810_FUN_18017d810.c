// 0x18017d810  FUN_18017d810
// size=679 thunk=false
// signature: undefined FUN_18017d810()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_18017d810(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,char param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  undefined8 local_100;
  undefined1 local_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  FUN_18017d630(local_f8);
  fVar8 = (float)((ulonglong)*param_2 >> 0x20);
  local_100 = *param_2;
  if (0.0 < fVar8) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pfVar4 = &local_108;
    local_104 = 1.5;
    local_108 = 0.75;
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    fVar7 = *(float *)(lVar1 + 0xcc8);
    if (DAT_180380b20 <= DAT_1803da6a4) {
      pfVar4 = &DAT_1803da6a4;
    }
    fVar7 = fVar7 + fVar7 + *(float *)(lVar1 + 0x1238);
    pfVar3 = &local_104;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar3 = pfVar4;
    }
    fVar8 = fVar8 * *pfVar3;
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    local_100 = CONCAT44(fVar8,(undefined4)local_100);
  }
  if (param_4 == '\0') {
    local_118 = local_d8;
    local_114 = local_d4;
    local_110 = local_d0;
    local_10c = 0x3e6147ae;
    FUN_18026a810(0x16,&local_118);
    local_118 = local_d8;
    local_114 = local_d4;
    local_110 = local_d0;
    local_10c = 0x3f051eb8;
    FUN_18026a810(0x17,&local_118);
    local_118 = local_d8;
    puVar5 = &local_118;
    local_114 = local_d4;
    local_110 = local_d0;
    local_10c = 0x3f333333;
  }
  else {
    local_128 = *param_3;
    local_124 = param_3[1];
    local_120 = param_3[2];
    local_11c = 0x3e6147ae;
    FUN_18026a810(0x16,&local_128);
    local_128 = *param_3;
    local_124 = param_3[1];
    local_120 = param_3[2];
    local_11c = 0x3eae147b;
    FUN_18026a810(0x17,&local_128);
    local_128 = *param_3;
    puVar5 = &local_128;
    local_124 = param_3[1];
    local_120 = param_3[2];
    local_11c = 0x3ef5c28f;
  }
  FUN_18026a810(0x18,puVar5);
  puVar6 = local_78;
  if (param_4 == '\0') {
    puVar6 = local_68;
  }
  FUN_18026a810(0,puVar6);
  uVar2 = FUN_1802abf60(param_1,&local_100,0);
  FUN_18026a890(4);
  return uVar2;
}


