// 0x180105310  Features_FakeDuck_FakeDuckFeature_vfunc01
// size=344 thunk=false
// signature: undefined Features_FakeDuck_FakeDuckFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_FakeDuck_FakeDuckFeature_vfunc01
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  char *pcVar5;
  int *piVar6;
  void *lp;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_20 = 0x5c61b11ceab8fecb;
  local_28 = 0x93fd561a96ab0c67;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_38,&local_20);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 != '\0') {
    local_20 = 0x93fd561a96ab0c67;
    local_28 = 0x15b58d95d09e07fe;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_48,&local_28);
    piVar6 = (int *)FUN_1802029c0(*plVar4 + 0x28);
    iVar1 = *piVar6;
    if (iVar1 - 1U < 0xfe) {
      cVar2 = FUN_180024540();
      if ((cVar2 != '\0') && (DAT_1803fa545 == '\0')) {
        cVar2 = FUN_1800245f0(iVar1);
        if ((cVar2 != '\0') && (DAT_1803fa668 != (longlong *)0x0)) {
          lp = (void *)(**(code **)(*DAT_1803fa668 + 0x240))();
          if (lp != (void *)0x0) {
            BVar3 = IsBadReadPtr(lp,8);
            if (BVar3 == 0) {
              if (*(int *)((longlong)lp + 0x20) < 1) {
                *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffffffb;
                *DAT_1803db430 = 0;
              }
              else {
                *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 4;
              }
            }
          }
        }
      }
    }
  }
  return;
}


