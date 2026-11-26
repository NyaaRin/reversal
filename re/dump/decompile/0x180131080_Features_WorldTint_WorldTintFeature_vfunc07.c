// 0x180131080  Features_WorldTint_WorldTintFeature_vfunc07
// size=348 thunk=false
// signature: undefined Features_WorldTint_WorldTintFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_WorldTint_WorldTintFeature_vfunc07(void)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  char local_48;
  char local_47;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (DAT_1803fa46f == '\0') {
    local_18 = 0x2910e3a0aaac7743;
    local_20 = 0x93fd561a96ab0c67;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_20);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_30,&local_18);
    piVar3 = (int *)FUN_1802029c0(*plVar2 + 0x28);
    if (((*piVar3 != 0) && (FUN_180024720(&local_48), local_48 == '\0')) && (local_47 != '\0')) {
      local_18 = 0x93fd561a96ab0c67;
      local_20 = 0x33ebf49592e8d668;
      plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
      plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_40,&local_20);
      pcVar4 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
      local_20 = 0x33ebf49592e8d668;
      local_18 = 0x93fd561a96ab0c67;
      cVar1 = *pcVar4;
      plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
      plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_40,&local_20);
      uVar5 = FUN_1801fcfc0(*plVar2 + 0x28);
      *(bool *)uVar5 = cVar1 == '\0';
    }
  }
  return;
}


