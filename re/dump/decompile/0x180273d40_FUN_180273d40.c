// 0x180273d40  FUN_180273d40
// size=403 thunk=false
// signature: undefined FUN_180273d40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_180273d40(float *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_88 [32];
  float local_68;
  float local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar5 = *param_3;
  fVar6 = param_3[1];
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if ((*(byte *)(lVar2 + 0x1f48) & 0x10) != 0) {
    fVar4 = *(float *)(lVar2 + 0x1f8c);
    fVar3 = *(float *)(lVar2 + 0x1f90);
    if ((fVar4 < 0.0) || (fVar1 = *(float *)(lVar2 + 0x1f94), fVar1 < 0.0)) {
      fVar4 = *(float *)(param_2 + 0x38);
    }
    else if ((fVar4 <= fVar5) && (fVar4 = fVar1, fVar5 <= fVar1)) {
      fVar4 = fVar5;
    }
    if ((fVar3 < 0.0) || (fVar5 = *(float *)(lVar2 + 0x1f98), fVar5 < 0.0)) {
      fVar3 = *(float *)(param_2 + 0x3c);
    }
    else if ((fVar3 <= fVar6) && (fVar3 = fVar5, fVar6 <= fVar5)) {
      fVar3 = fVar6;
    }
    if (*(code **)(lVar2 + 0x1fa0) != (code *)0x0) {
      local_58 = *(undefined4 *)(param_2 + 0x28);
      local_54 = *(undefined4 *)(param_2 + 0x2c);
      local_60 = *(undefined8 *)(lVar2 + 0x1fa8);
      local_50 = *(undefined4 *)(param_2 + 0x38);
      local_4c = *(undefined4 *)(param_2 + 0x3c);
      local_48 = fVar4;
      local_44 = fVar3;
      (**(code **)(lVar2 + 0x1fa0))(&local_60);
      fVar3 = local_44;
      fVar4 = local_48;
    }
    fVar5 = (float)(int)fVar4;
    fVar6 = (float)(int)fVar3;
  }
  FUN_180273c50(&local_68,param_2);
  if (fVar5 <= local_68) {
    fVar5 = local_68;
  }
  if (fVar6 <= local_64) {
    fVar6 = local_64;
  }
  *param_1 = fVar5;
  param_1[1] = fVar6;
  return param_1;
}


