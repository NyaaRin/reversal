// 0x18007a240  vfunc_shared_18007a240
// size=423 thunk=false
// signature: undefined vfunc_shared_18007a240()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong vfunc_shared_18007a240(longlong *param_1,ulonglong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_98 [32];
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  fVar5 = (float)param_2;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((param_3 != 0) && (*(char *)((longlong)param_1 + 0x69) != '\0')) {
    if (((char)param_1[6] != '\0') && ((char)param_1[7] != '\0')) {
      local_68 = *(undefined8 *)(param_3 + 8);
      local_60 = *(undefined4 *)(param_3 + 0x10);
      FUN_1802d4050(&local_68,&local_78);
      local_70 = local_70 - *(float *)((longlong)param_1 + 0x44);
      local_78 = local_78 - *(float *)((longlong)param_1 + 0x3c);
      fVar3 = (local_74 - *(float *)(param_1 + 8)) * (local_74 - *(float *)(param_1 + 8)) +
              local_78 * local_78 + local_70 * local_70;
      if (fVar3 < 0.0) {
        fVar3 = sqrtf(fVar3);
      }
      else {
        fVar3 = SQRT(fVar3);
      }
      fVar3 = fVar3 * DAT_180380ac0;
      fVar4 = fVar3 * *(float *)((longlong)param_1 + 0x5c);
      fVar2 = (float)(**(code **)(*param_1 + 0x110))(param_1);
      fVar1 = *(float *)((longlong)param_1 + 0x34);
      *(float *)(param_1 + 0xc) = fVar3;
      *(float *)(param_1 + 0xf) = fVar4;
      *(float *)((longlong)param_1 + 100) = fVar1;
      *(undefined1 *)(param_1 + 0xd) = 1;
      fVar2 = (fVar4 - fVar1) * fVar2 + fVar1;
      fVar3 = 0.0;
      if (0.0 <= fVar5 - fVar1) {
        fVar3 = fVar5 - fVar1;
      }
      *(float *)((longlong)param_1 + 0x7c) = fVar2;
      fVar5 = fVar3 + fVar2;
    }
    if (((char)param_1[9] != '\0') && ((char)param_1[10] != '\0')) {
      fVar3 = *(float *)((longlong)param_1 + 0x4c) - *(float *)((longlong)param_1 + 0x54);
      *(float *)(param_1 + 0x10) = fVar3;
      fVar5 = fVar5 + fVar3;
    }
    fVar3 = *(float *)((longlong)param_1 + 0x24) + DAT_1803809e8;
    if (fVar5 <= fVar3) {
      fVar3 = fVar5;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar3) {
      fVar5 = fVar3;
    }
    param_2 = (ulonglong)(uint)fVar5;
  }
  return param_2;
}


