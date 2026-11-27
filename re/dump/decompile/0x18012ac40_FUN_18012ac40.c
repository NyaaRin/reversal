// 0x18012ac40  FUN_18012ac40
// size=111 thunk=false
// signature: undefined FUN_18012ac40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18012ac40(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[0] = '\0';
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x58))(param_1,"$basetexture",local_18,0);
    if ((local_18[0] == '\0') || (puVar1 == (undefined8 *)0x0)) {
      uVar2 = 0;
    }
    else {
      puVar1 = (undefined8 *)(**(code **)*puVar1)(puVar1);
      uVar2 = 0;
      if (puVar1 != (undefined8 *)0x0) {
        uVar2 = (**(code **)*puVar1)(puVar1);
      }
    }
  }
  return uVar2;
}


