// 0x1800cb0e0  FUN_1800cb0e0
// size=168 thunk=false
// signature: undefined FUN_1800cb0e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800cb0e0(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_28 = 0xf7521f28977a3033;
  local_20 = 0x4064f70bc33de70a;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_38,&local_20);
  piVar2 = (int *)FUN_1802029c0(*plVar1 + 0x28);
  if ((*piVar2 < 1) && ((DAT_180423988 == '\0' || (DAT_18042398a == '\0')))) {
    return 0;
  }
  return 1;
}


