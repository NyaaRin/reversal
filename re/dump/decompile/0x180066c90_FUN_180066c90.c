// 0x180066c90  FUN_180066c90
// size=473 thunk=false
// signature: undefined FUN_180066c90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_180066c90(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 ***local_70 [2];
  longlong local_60;
  ulonglong local_58;
  undefined8 ***local_50 [2];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_98 = 1;
  local_78 = param_1;
  uVar2 = FUN_1802d75e4();
  local_88 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    local_88 = (undefined8 *)*param_3;
  }
  local_80 = param_3[2];
  FUN_180201d80(local_50,uVar2,&local_88);
  local_88 = param_4;
  if (7 < (ulonglong)param_4[3]) {
    local_88 = (undefined8 *)*param_4;
  }
  local_80 = param_4[2];
  FUN_180201d80(local_70,uVar2,&local_88);
  lVar1 = param_2[1];
  lVar3 = 8;
  if (local_60 == 0) {
    lVar3 = 4;
  }
  uVar4 = lVar3 + lVar1 + local_40 + local_60;
  if ((ulonglong)param_1[3] < uVar4) {
    lVar3 = param_1[2];
    FUN_18021aa80(param_1,uVar4 - lVar3);
    param_1[2] = lVar3;
  }
  FUN_18021aef0(param_1,*param_2,lVar1);
  FUN_18021aef0(param_1,&DAT_180345b28,3);
  ppppuVar5 = local_50;
  if (0xf < local_38) {
    ppppuVar5 = (undefined8 ****)local_50[0];
  }
  FUN_18021aef0(param_1,ppppuVar5,local_40);
  if (local_60 != 0) {
    FUN_18021aef0(param_1,&DAT_180345b2c,4);
    ppppuVar5 = local_70;
    if (0xf < local_58) {
      ppppuVar5 = (undefined8 ****)local_70[0];
    }
    FUN_18021aef0(param_1,ppppuVar5,local_60);
  }
  uVar4 = param_1[2];
  if (uVar4 < (ulonglong)param_1[3]) {
    param_1[2] = uVar4 + 1;
    if ((ulonglong)param_1[3] < 0x10) {
      *(undefined2 *)(uVar4 + (longlong)param_1) = 0x22;
    }
    else {
      *(undefined2 *)(uVar4 + *param_1) = 0x22;
    }
  }
  else {
    FUN_18021abd0(param_1);
  }
  FUN_18020e450(local_70);
  FUN_18020e450(local_50);
  return param_1;
}


