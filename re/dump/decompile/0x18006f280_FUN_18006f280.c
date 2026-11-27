// 0x18006f280  FUN_18006f280
// size=268 thunk=false
// signature: undefined FUN_18006f280()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18006f280(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [32];
  undefined8 **local_48;
  undefined8 local_40;
  undefined8 **local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  if (DAT_1803ffc48 == '\0') {
    cVar1 = FUN_18003a090("Net_ShouldSend");
    if (cVar1 != '\0') {
      DAT_1803ffc48 = 1;
      FUN_18016d4c0(local_38,&DAT_1803eb838);
      local_48 = local_38;
      cVar1 = FUN_1802023d0();
      DAT_1803ffc48 = '\0';
      if (cVar1 != '\0') {
        if (local_28 == 0) {
          pppuVar3 = (undefined8 ***)&DAT_18033e9cc;
        }
        else {
          pppuVar3 = local_38;
          if (0xf < local_20) {
            pppuVar3 = (undefined8 ***)local_38[0];
          }
        }
        FUN_180014410("[LUANET] script blocked outgoing net message \'%s\'\n",pppuVar3);
        if (DAT_18042586d != '\0') {
          FUN_18006ed50();
        }
        FUN_18020e450(local_38);
        return 0;
      }
      FUN_18020e450(local_38);
    }
  }
  if (DAT_18042586d != '\0') {
    FUN_18006ed50();
  }
  uVar2 = (*DAT_1803ff018)(param_1);
  return uVar2;
}


