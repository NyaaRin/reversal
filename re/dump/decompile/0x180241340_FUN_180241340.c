// 0x180241340  FUN_180241340
// size=232 thunk=false
// signature: undefined FUN_180241340()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180241340(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined1 local_70 [64];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  local_80 = param_3;
  local_30 = param_2;
  FUN_180241930(param_1,param_3);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  local_78 = local_70;
  uVar2 = FUN_180241280(local_70,param_2);
  FUN_180014200(param_1 + 0x10,uVar2);
  uVar1 = *(uint *)(param_2 + 0x38) & 3;
  if (uVar1 == 1) {
    lVar3 = *(longlong *)(param_2 + 0x28);
  }
  else {
    lVar3 = param_2;
    if (uVar1 != 2) goto LAB_1802413db;
  }
  (*(code *)**(undefined8 **)(param_2 + 0x30))(lVar3);
LAB_1802413db:
  *(undefined8 *)(param_2 + 0x38) = 0;
  FUN_180241ba0(param_3,param_3,*(undefined8 *)(*param_3 + 8));
  free((void *)*param_3);
  return param_1;
}


