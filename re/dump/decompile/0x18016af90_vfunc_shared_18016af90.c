// 0x18016af90  vfunc_shared_18016af90
// size=172 thunk=false
// signature: undefined vfunc_shared_18016af90()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * vfunc_shared_18016af90(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = param_1;
  fVar2 = (float)FUN_18016b060();
  fVar2 = (DAT_1803fcb84 - fVar2) + (DAT_1803fcb84 - fVar2);
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
    goto switchD_18016afc9_caseD_0;
  default:
switchD_18016afc9_caseD_2:
    fVar3 = DAT_1803fcb5c - _DAT_1803fcb54;
    *param_2 = *(float *)(lVar1 + 0x74) + DAT_180380d30;
    param_2[1] = fVar3 + fVar2;
    return param_2;
  case 8:
    if (*(char *)(lVar1 + 0x70) != '\0') goto switchD_18016afc9_caseD_2;
switchD_18016afc9_caseD_0:
    *param_2 = (DAT_1803fcb58 - _DAT_1803fcb50) + fVar2;
    param_2[1] = *(float *)(lVar1 + 0x74) + DAT_180380d30;
    return param_2;
  }
}


