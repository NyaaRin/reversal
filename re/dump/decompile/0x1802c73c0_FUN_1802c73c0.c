// 0x1802c73c0  FUN_1802c73c0
// size=307 thunk=false
// signature: undefined FUN_1802c73c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_1802c73c0(float *param_1,undefined8 param_2,char param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_68 = DAT_180381384;
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  FUN_180272ad0(&local_58,param_2,0,1);
  fVar1 = *(float *)(lVar3 + 0xcc8);
  fVar5 = DAT_180380bb0;
  if (param_3 != '\0') {
    fVar5 = *(float *)(lVar3 + 0x1238) + *(float *)(lVar3 + 0xcdc);
  }
  fVar5 = *(float *)(lVar3 + 0xcc4) + fVar5 + *(float *)(lVar3 + 0xcc4) + local_58;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar4 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x1238) * DAT_180381024;
  param_1[1] = fVar1 + fVar1 + local_54;
  if (fVar4 <= fVar5) {
    fVar5 = fVar4;
  }
  *param_1 = fVar5;
  return param_1;
}


