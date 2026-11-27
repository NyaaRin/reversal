// 0x180014200  FUN_180014200
// size=245 thunk=false
// signature: undefined FUN_180014200()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180014200(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if ((*(uint *)(param_1 + 7) & 3) == 1) {
    puVar8 = (undefined8 *)param_1[6];
    puVar9 = (undefined8 *)param_1[5];
LAB_180014249:
    (*(code *)*puVar8)(puVar9);
  }
  else if ((*(uint *)(param_1 + 7) & 3) == 2) {
    puVar8 = (undefined8 *)param_1[6];
    puVar9 = param_1;
    goto LAB_180014249;
  }
  param_1[7] = 0;
  uVar1 = param_2[7];
  param_1[7] = uVar1;
  uVar7 = (uint)uVar1 & 3;
  if ((uVar1 & 3) == 0) {
LAB_180014293:
    uVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    uVar6 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar6;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 5);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 5) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
    param_1[6] = param_2[6];
  }
  else if (uVar7 == 1) {
    param_1[6] = param_2[6];
    param_1[5] = param_2[5];
    param_2[7] = 0;
  }
  else {
    if (uVar7 != 2) goto LAB_180014293;
    lVar2 = param_2[6];
    param_1[6] = lVar2;
    (**(code **)(lVar2 + 0x10))(param_1,param_2);
  }
  if ((*(uint *)(param_2 + 7) & 3) == 1) {
    puVar8 = (undefined8 *)param_2[5];
  }
  else {
    puVar8 = param_2;
    if ((*(uint *)(param_2 + 7) & 3) != 2) goto LAB_1800142d4;
  }
  (**(code **)param_2[6])(puVar8);
LAB_1800142d4:
  param_2[7] = 0;
  return;
}


