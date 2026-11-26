// 0x1800a1860  Features_Weapons_Backends_ORPWeaponBackend_vfunc25
// size=294 thunk=false
// signature: undefined Features_Weapons_Backends_ORPWeaponBackend_vfunc25()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Weapons_Backends_ORPWeaponBackend_vfunc25(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if ((param_2 != param_1[1]) ||
     ((DAT_1803fa608 != (float *)0x0 && ((double)*DAT_1803fa608 < (double)param_1[3])))) {
    (**(code **)(*param_1 + 0xd0))();
    param_1[1] = param_2;
  }
  FUN_1800a1280(param_1,param_2);
  FUN_1800a0dd0(param_1,param_2);
  cVar1 = FUN_1800a0ce0();
  if (cVar1 != '\0') {
    local_28 = 0x93fd561a96ab0c67;
    local_20 = 0x8e62cf1c230948fa;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_38,&local_20);
    piVar3 = (int *)FUN_1802029c0(*plVar2 + 0x28);
    if (*piVar3 == 3) {
      DAT_180423964 = 0;
      DAT_180423984 = 0;
      DAT_180423985 = 0;
      DAT_180423988 = 1;
      DAT_180423989 = 0;
      DAT_18042398a = 1;
      return;
    }
  }
  DAT_18042398a = 0;
  DAT_180423988 = 0;
  DAT_180423986 = 0;
  DAT_180423989 = 0;
  DAT_180423984 = 0;
  DAT_180423964 = 0;
  DAT_180423985 = 0;
  return;
}


