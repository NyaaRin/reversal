// 0x18006e640  FUN_18006e640
// size=232 thunk=false
// signature: undefined FUN_18006e640()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006e640(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_1068 [32];
  undefined1 *local_1048;
  undefined4 local_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined1 local_1028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18006e653;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_1068;
  local_1038 = param_1;
  local_1030 = param_2;
  FUN_18006e3f0();
  if ((DAT_18042586d != '\0') && (DAT_1803e95f0 != '\0')) {
    uVar2 = FUN_18006e360(param_1,local_1028);
    uVar3 = FUN_18006e2e0(param_1);
    cVar1 = FUN_18006b990(local_1028,uVar2,uVar3);
    if ((cVar1 == '\0') && (DAT_180425869 != '\0')) {
      uVar4 = FUN_18006df10(param_1);
      local_1048 = local_1028;
      local_1040 = uVar2;
      FUN_18006b650(1,"GMod (out)",uVar4,uVar3);
    }
  }
  if (DAT_1803fefb8 != (code *)0x0) {
    (*DAT_1803fefb8)(param_1,param_2);
  }
  return;
}


