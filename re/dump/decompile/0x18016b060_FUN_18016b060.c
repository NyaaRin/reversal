// 0x18016b060  FUN_18016b060
// size=129 thunk=false
// signature: undefined FUN_18016b060()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_18016b060(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  default:
switchD_18016b07b_caseD_2:
    fVar1 = DAT_1803fcb5c - _DAT_1803fcb54;
    break;
  case 8:
    if (*(char *)(param_1 + 0x70) != '\0') goto switchD_18016b07b_caseD_2;
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
    fVar1 = DAT_1803fcb58 - _DAT_1803fcb50;
  }
  fVar3 = DAT_180380ac0;
  if (*(char *)(param_1 + 0x78) == '\0') {
    fVar3 = 0.0;
  }
  fVar3 = fVar3 + _DAT_1803fcb88 + *(float *)(param_1 + 0x80);
  if (fVar3 < 0.0) {
    return 0.0;
  }
  fVar2 = fVar1 / DAT_180380e28;
  if (fVar3 <= fVar1 / DAT_180380e28) {
    fVar2 = fVar3;
  }
  return fVar2;
}


