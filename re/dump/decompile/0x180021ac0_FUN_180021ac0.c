// 0x180021ac0  FUN_180021ac0
// size=284 thunk=false
// signature: undefined FUN_180021ac0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180021ac0(undefined8 *param_1,undefined8 param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [64];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_2c = 0x42b40000;
  local_28 = 0xffffffff;
  local_24 = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
  FUN_1802d4780(local_78,&DAT_1805707c0);
  local_28 = DAT_1803e7498;
  local_38 = DAT_1805c7c00;
  local_34 = DAT_1805c7c04;
  local_24 = CONCAT11(DAT_1803fe650,DAT_180425428);
  local_30 = DAT_1805c7c08;
  local_2c = DAT_1803da5c0;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
  if ((char)local_24 == '\0') {
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    local_88 = *param_1;
    local_80 = *(undefined4 *)(param_1 + 1);
    uVar1 = FUN_1800207e0(&local_88,param_2,local_78);
  }
  return uVar1;
}


