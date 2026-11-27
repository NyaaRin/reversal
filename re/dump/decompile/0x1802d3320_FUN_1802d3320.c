// 0x1802d3320  FUN_1802d3320
// size=280 thunk=false
// signature: undefined FUN_1802d3320()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1802d3320(undefined4 param_1,char param_2,ulonglong param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined1 local_50 [16];
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  uVar7 = param_3;
  if (param_2 != '\0') {
    uVar7 = param_3 >> 0x20;
  }
  local_58 = param_3;
  local_40[0] = param_1;
  plVar4 = (longlong *)FUN_1802155b0(&DAT_1803fae40,local_50,local_40);
  lVar2 = *plVar4;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar5 = 0.0;
  fVar1 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x40);
  if ((0.0 < fVar1) && (0.0 < param_4)) {
    fVar5 = expf((float)((uint)param_4 ^ DAT_1803817f0) * fVar1);
    fVar5 = DAT_180380bb0 - fVar5;
  }
  fVar1 = DAT_180380964;
  fVar6 = (float)uVar7;
  fVar5 = (fVar6 - *(float *)(lVar2 + 0x14)) * fVar5 + *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x14) = fVar5;
  if ((float)((uint)(fVar6 - fVar5) & _DAT_1803817c0) < fVar1) {
    *(float *)(lVar2 + 0x14) = fVar6;
    fVar5 = fVar6;
  }
  return fVar5;
}


