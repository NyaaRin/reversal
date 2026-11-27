// 0x1800783d0  vfunc_shared_1800783d0
// size=329 thunk=false
// signature: undefined vfunc_shared_1800783d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float vfunc_shared_1800783d0(longlong param_1,float param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  float local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (((*(char *)(param_1 + 0xc) != '\0') && (*(char *)(param_1 + 0x14) != '\0')) && (param_3 != 0))
  {
    piVar2 = (int *)&DAT_1803e9f78;
    if (0xf < DAT_1803e9f90) {
      piVar2 = DAT_1803e9f78;
    }
    if (DAT_1803e9f88 == 7) {
      iVar1 = *piVar2 + -0x625f7763;
      if ((iVar1 == 0) && (iVar1 = *(ushort *)(piVar2 + 1) - 0x7361, iVar1 == 0)) {
        iVar1 = *(byte *)((longlong)piVar2 + 6) - 0x65;
      }
      if (iVar1 == 0) {
        return param_2;
      }
    }
    FUN_1802d4050(param_3 + 8,&local_48);
    local_40 = local_40 - *(float *)(param_1 + 0x20);
    local_44 = local_44 - *(float *)(param_1 + 0x1c);
    local_48 = local_48 - *(float *)(param_1 + 0x18);
    fVar5 = *(float *)(param_1 + 0x24) + DAT_1803809e8;
    fVar3 = local_44 * local_44 + local_48 * local_48 + local_40 * local_40;
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    param_2 = param_2 - *(float *)(param_1 + 0x10);
    fVar4 = 0.0;
    if (0.0 <= param_2) {
      fVar4 = param_2;
    }
    fVar4 = (fVar3 * DAT_180380ac0 - *(float *)(param_1 + 0x10)) * DAT_180380a58 +
            *(float *)(param_1 + 0x10) + fVar4;
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    param_2 = 0.0;
    if (0.0 <= fVar5) {
      param_2 = fVar5;
    }
  }
  return param_2;
}


