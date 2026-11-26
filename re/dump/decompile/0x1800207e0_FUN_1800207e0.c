// 0x1800207e0  FUN_1800207e0
// size=452 thunk=false
// signature: undefined FUN_1800207e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800207e0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_78 [32];
  int local_58;
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar10 = fVar2 * param_3[0xd] + fVar1 * param_3[0xc] + fVar3 * param_3[0xe] + param_3[0xf];
  uVar8 = _fdclass(fVar10);
  if (((short)uVar8 < 1) && (DAT_180380964 <= fVar10)) {
    fVar9 = fVar2 * param_3[1] + fVar1 * *param_3 + fVar3 * param_3[2] + param_3[3];
    *param_2 = fVar9;
    fVar4 = param_3[5];
    fVar5 = param_3[4];
    fVar6 = param_3[6];
    fVar9 = fVar9 / fVar10;
    fVar7 = param_3[7];
    *param_2 = fVar9;
    fVar10 = (fVar2 * fVar4 + fVar1 * fVar5 + fVar3 * fVar6 + fVar7) / fVar10;
    param_2[1] = fVar10;
    uVar8 = _fdclass(fVar9);
    if (((short)uVar8 < 1) &&
       ((uVar8 = _fdclass(fVar10), (short)uVar8 < 1 && (DAT_1803fa668 != (longlong *)0x0)))) {
      local_58 = 0;
      local_54 = 0;
      uVar8 = (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_58,&local_54);
      fVar1 = DAT_180380ac0;
      if ((1 < local_58) && (uVar8 = (ulonglong)local_54, 1 < (int)local_54)) {
        *param_2 = (float)local_58 * *param_2 * DAT_180380ac0 + (float)local_58 * DAT_180380ac0;
        param_2[1] = (float)(int)local_54 * fVar1 - (float)(int)local_54 * param_2[1] * fVar1;
        return CONCAT71((uint7)(uint3)(local_54 >> 8),1);
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}


