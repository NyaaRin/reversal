// 0x1801748c0  FUN_1801748c0
// size=615 thunk=false
// signature: undefined FUN_1801748c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801748c0(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_b8 [48];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int *local_78;
  int *piStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  local_78 = (int *)0x0;
  piStack_70 = (int *)0x0;
  local_68 = 0;
  local_88 = *param_2;
  fStack_84 = param_2[1];
  fStack_80 = param_2[2];
  fStack_7c = param_2[3];
  FUN_180174640(&local_78,&local_88);
  piVar2 = piStack_70;
  iVar4 = 8;
  fVar9 = (float)param_1;
  fVar10 = (float)((ulonglong)param_1 >> 0x20);
  fVar11 = DAT_180381308;
  for (piVar3 = local_78; piVar3 != piVar2; piVar3 = piVar3 + 10) {
    if ((float)piVar3[1] <= fVar9) {
      if (fVar9 <= (float)piVar3[3]) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = fVar9 - (float)piVar3[3];
      }
    }
    else {
      fVar5 = (float)piVar3[1] - fVar9;
    }
    if ((float)piVar3[2] <= fVar10) {
      if (fVar10 <= (float)piVar3[4]) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = fVar10 - (float)piVar3[4];
      }
    }
    else {
      fVar6 = (float)piVar3[2] - fVar10;
    }
    fVar5 = fVar6 * fVar6 + fVar5 * fVar5;
    if (fVar5 < 0.0) {
      fVar5 = sqrtf(fVar5);
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    if (fVar5 < fVar11) {
      iVar4 = *piVar3;
      fVar11 = fVar5;
    }
  }
  *param_3 = fVar11;
  if (DAT_180381088 <= fVar11) {
    iVar4 = 8;
  }
  else {
    fVar11 = *param_2;
    fVar5 = param_2[1];
    fVar6 = param_2[2];
    fVar1 = param_2[3];
    fVar7 = (fVar6 - fVar11) / DAT_180380e28;
    fVar8 = (fVar1 - fVar5) / DAT_180380e28;
    if (iVar4 == 0) {
      if (fVar7 + fVar11 <= fVar9) {
        iVar4 = 0;
        if (fVar6 - fVar7 < fVar9) {
          iVar4 = 5;
        }
      }
      else {
        iVar4 = 4;
      }
    }
    else if (iVar4 == 1) {
      if (fVar7 + fVar11 <= fVar9) {
        iVar4 = 1;
        if (fVar6 - fVar7 < fVar9) {
          iVar4 = 7;
        }
      }
      else {
        iVar4 = 6;
      }
    }
    else if (iVar4 == 2) {
      if (fVar8 + fVar5 <= fVar10) {
        iVar4 = 2;
        if (fVar1 - fVar8 < fVar10) {
          iVar4 = 10;
        }
      }
      else {
        iVar4 = 9;
      }
    }
    else if (iVar4 == 3) {
      if (fVar8 + fVar5 <= fVar10) {
        iVar4 = 3;
        if (fVar1 - fVar8 < fVar10) {
          iVar4 = 0xc;
        }
      }
      else {
        iVar4 = 0xb;
      }
    }
  }
  FUN_18021bab0(&local_78);
  return iVar4;
}


