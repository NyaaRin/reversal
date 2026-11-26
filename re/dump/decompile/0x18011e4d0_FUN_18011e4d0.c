// 0x18011e4d0  FUN_18011e4d0
// size=379 thunk=false
// signature: undefined FUN_18011e4d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18011e4d0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  pcVar3 = *(char **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (pcVar3[0xf49] != '\0') {
    local_a0 = 0x7a7f52ad97e147b7;
    local_a8 = 0x93fd561a96ab0c67;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_a8);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_b8,&local_a0);
    pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
    if (*pcVar3 != '\0') {
      pcVar4 = (char *)FUN_18011e1d0(param_1,local_98);
      iVar1 = (int)pcVar4;
      pcVar3 = pcVar4;
      if ((local_98[0] != '\0') && (DAT_1803ff0bc < 0x28)) {
        LOCK();
        DAT_1803ff0bc = DAT_1803ff0bc + 1;
        UNLOCK();
        pcVar3 = (char *)FUN_180014410("[GMFilter] CallStr in pass1: \"%s\" tier=%d\n",local_98,
                                       (ulonglong)pcVar4 & 0xffffffff);
      }
      if (iVar1 == 1) {
        return (ulonglong)pcVar4 & 0xff;
      }
      if (iVar1 == 2) {
        local_a8 = 0x2b08eda621452889;
      }
      else if (iVar1 == 4) {
        local_a8 = 0x59d309e8a2eb12f6;
      }
      else {
        if (iVar1 != 5) goto LAB_18011e628;
        local_a8 = 0x2e9325269e4e4100;
      }
      local_a0 = 0x93fd561a96ab0c67;
      plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b8,&local_a0);
      plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_c8,&local_a8);
      pbVar5 = (byte *)FUN_1801fcfc0(*plVar2 + 0x28);
      return (ulonglong)*pbVar5;
    }
  }
LAB_18011e628:
  return (ulonglong)pcVar3 & 0xffffffffffffff00;
}


