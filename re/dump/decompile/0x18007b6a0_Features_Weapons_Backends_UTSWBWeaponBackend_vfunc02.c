// 0x18007b6a0  Features_Weapons_Backends_UTSWBWeaponBackend_vfunc02
// size=272 thunk=false
// signature: undefined Features_Weapons_Backends_UTSWBWeaponBackend_vfunc02()
// status: ok


undefined1
Features_Weapons_Backends_UTSWBWeaponBackend_vfunc02
          (undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  undefined1 local_30 [40];
  
  bVar2 = false;
  cVar4 = FUN_18007b590(param_2,param_3,param_3,param_4,0);
  if (cVar4 != '\0') {
    return 1;
  }
  if (DAT_1803fe3e8 == 0) {
    DAT_1803fe3e8 = FUN_180016fb0("sv_ut_swb_bullet_debug");
    if (DAT_1803fe3e8 == 0) {
      return 0;
    }
  }
  plVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (longlong *)*param_2;
  }
  if (*plVar1 == 8) {
    if (*param_2 == 0x657361625f627773) {
      return 1;
    }
  }
  else if ((*plVar1 == 0) && (3 < *(ulonglong *)(param_3 + 0x10))) {
    piVar5 = (int *)FUN_18020e670(param_3,local_30,0,4);
    bVar2 = true;
    plVar1 = (longlong *)(piVar5 + 4);
    if (0xf < *(ulonglong *)(piVar5 + 6)) {
      piVar5 = *(int **)piVar5;
    }
    if ((*plVar1 == 4) && (*piVar5 == 0x5f627773)) {
      uVar3 = 1;
      goto LAB_18007b725;
    }
  }
  uVar3 = 0;
LAB_18007b725:
  if (bVar2) {
    FUN_18020e450(local_30);
  }
  return uVar3;
}


