// 0x1802414c0  FUN_1802414c0
// size=230 thunk=false
// signature: undefined FUN_1802414c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1802414c0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined1 local_70 [64];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  local_88 = param_1;
  local_80 = param_1;
  local_30 = param_2;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *param_1 = lVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_78 = local_70;
  uVar3 = FUN_180241280(local_70,param_2);
  FUN_180014200(param_1 + 2,uVar3);
  uVar1 = *(uint *)(param_2 + 0x38) & 3;
  if (uVar1 == 1) {
    (*(code *)**(undefined8 **)(param_2 + 0x30))(*(undefined8 *)(param_2 + 0x28));
  }
  else if (uVar1 == 2) {
    (*(code *)**(undefined8 **)(param_2 + 0x30))(param_2);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  return param_1;
}


