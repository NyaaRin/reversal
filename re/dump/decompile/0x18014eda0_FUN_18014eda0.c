// 0x18014eda0  FUN_18014eda0
// size=255 thunk=false
// signature: undefined FUN_18014eda0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014eda0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  piVar3 = (int *)FUN_180067c80(local_48,param_1);
  if ((*piVar3 == 3) && (piVar3[2] == 0)) {
    local_38 = 0;
    lStack_30 = 0;
    local_28 = 0;
    FUN_18014e6f0(param_1,&local_38,0);
    lVar1 = lStack_30;
    for (lVar6 = local_38; lVar6 != lVar1; lVar6 = lVar6 + 0x20) {
      FUN_18014eda0(lVar6,param_2);
    }
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_1802d7d9c(param_1);
    FUN_18021c690(&local_38);
  }
  else {
    puVar5 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    uVar4 = FUN_1802d7d9c(puVar5);
    if (((char)uVar4 == '\0') || ((int)((ulonglong)uVar4 >> 0x20) != 0)) {
      cVar2 = FUN_18014eb90(param_1);
      if (cVar2 == '\0') {
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
      }
      else {
        param_2[1] = param_2[1] + 1;
      }
    }
    else {
      *param_2 = *param_2 + 1;
    }
  }
  return;
}


