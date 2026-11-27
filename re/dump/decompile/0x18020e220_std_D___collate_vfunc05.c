// 0x18020e220  std_D_?$collate_vfunc05
// size=146 thunk=false
// signature: undefined std_D_?$collate_vfunc05()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint std_D___collate_vfunc05(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  undefined1 auStack_58 [40];
  undefined8 **local_30 [2];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  std_D___collate_vfunc04(param_1,local_30,param_2,param_3);
  pppuVar2 = local_30;
  if (0xf < local_18) {
    pppuVar2 = (undefined8 ***)local_30[0];
  }
  uVar3 = 0x84222325;
  uVar1 = 0;
  if (local_20 != 0) {
    do {
      uVar3 = (uVar3 ^ *(byte *)((longlong)pppuVar2 + uVar1)) * 0x1b3;
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_20);
  }
  FUN_18020e450(local_30);
  return uVar3;
}


