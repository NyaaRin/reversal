// 0x180184780  FUN_180184780
// size=425 thunk=false
// signature: undefined FUN_180184780()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_180184780(int *param_1,char param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined1 auStack_78 [32];
  int local_58 [2];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (int)((float)param_3 * DAT_180380ac0);
  param_1[5] = (int)((float)param_4 * DAT_180380ac0);
  if (param_2 != '\0') {
    local_58[1] = 2;
    local_58[0] = 0;
    local_28 = 0x93fd561a96ab0c67;
    local_30 = 0x25b6fbdbfceb85c6;
    plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_28);
    plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_40,&local_30);
    piVar2 = (int *)FUN_1802029c0(*plVar1 + 0x28);
    piVar5 = local_58;
    if (-1 < *piVar2) {
      piVar5 = piVar2;
    }
    piVar3 = local_58 + 1;
    if (*piVar2 < 3) {
      piVar3 = piVar5;
    }
    *param_1 = *piVar3;
    local_58[0] = 2;
    local_58[1] = 0;
    local_30 = 0x93fd561a96ab0c67;
    local_28 = 0xc3cc876af74b4db6;
    plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_30);
    plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_50,&local_28);
    piVar2 = (int *)FUN_1802029c0(*plVar1 + 0x28);
    piVar5 = local_58 + 1;
    if (-1 < *piVar2) {
      piVar5 = piVar2;
    }
    piVar3 = local_58;
    if (*piVar2 < 3) {
      piVar3 = piVar5;
    }
    param_1[1] = *piVar3;
    if (((*param_1 == 2) && (1 < param_3)) && (1 < param_4)) {
      puVar4 = (undefined8 *)FUN_1800ce370(&local_30);
      *(undefined8 *)(param_1 + 2) = *puVar4;
    }
  }
  return param_1;
}


