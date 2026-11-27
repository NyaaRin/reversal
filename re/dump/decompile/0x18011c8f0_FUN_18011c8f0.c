// 0x18011c8f0  FUN_18011c8f0
// size=380 thunk=false
// signature: undefined FUN_18011c8f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18011c8f0(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  byte bVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_20;
  ulonglong local_18;
  char *local_10;
  
  pcVar2 = (char *)(DAT_1803da4c0 ^ (ulonglong)auStack_68);
  if ((param_1 != 0) && (DAT_1803fa600 != (longlong *)0x0)) {
    local_18 = 0x93fd561a96ab0c67;
    local_20 = 0x1477d415bd0ac6ae;
    local_10 = pcVar2;
    plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_18);
    plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_30,&local_20);
    pcVar2 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
    if (*pcVar2 != '\0') {
      local_18 = 0x93fd561a96ab0c67;
      local_20 = 0xcf94b2d417ed594d;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_40,&local_20);
      pcVar2 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
      if (*pcVar2 != '\0') {
        bVar4 = 0;
        pcVar2 = (char *)(**(code **)(*DAT_1803fa600 + 0x120))(DAT_1803fa600,param_1);
        if (((pcVar2 != (char *)0x0) && (*pcVar2 == 'L')) &&
           (iVar1 = strcmp(pcVar2,"LoadingDialog"), iVar1 == 0)) {
          local_20 = local_20 & 0xffffffff00000000;
          local_18 = local_18 & 0xffffffff00000000;
          (**(code **)(*DAT_1803fa600 + 0x28))(DAT_1803fa600,param_1,&local_20,&local_18);
          if ((((int)local_20 < 1) || ((int)local_18 < 1)) || ((int)local_20 <= (int)local_18 * 2))
          {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
        }
        return (ulonglong)bVar4;
      }
    }
  }
  return (ulonglong)pcVar2 & 0xffffffffffffff00;
}


