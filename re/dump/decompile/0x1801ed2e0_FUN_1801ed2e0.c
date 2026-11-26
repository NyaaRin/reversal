// 0x1801ed2e0  FUN_1801ed2e0
// size=124 thunk=false
// signature: undefined FUN_1801ed2e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801ed2e0(byte param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte local_18 [24];
  
  pbVar1 = local_18;
  pbVar2 = (byte *)(DAT_1803da4c0 ^ (ulonglong)local_18);
  if (DAT_1803ff238 != (byte *)0x0) {
    if (((local_18 < DAT_1803ff238) &&
        (pbVar1 = DAT_1803ff238 + -(longlong)local_18, pbVar1 < (byte *)0x10001)) &&
       (pbVar1 = (byte *)0x0, *DAT_1803ff238 < 2)) {
      *DAT_1803ff238 = param_1;
      return 1;
    }
    DAT_1803ff238 = (byte *)0x0;
    pbVar2 = pbVar1;
  }
  return (ulonglong)pbVar2 & 0xffffffffffffff00;
}


