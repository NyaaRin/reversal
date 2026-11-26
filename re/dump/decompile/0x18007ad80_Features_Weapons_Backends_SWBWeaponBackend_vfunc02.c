// 0x18007ad80  Features_Weapons_Backends_SWBWeaponBackend_vfunc02
// size=171 thunk=false
// signature: undefined Features_Weapons_Backends_SWBWeaponBackend_vfunc02()
// status: ok


undefined1
Features_Weapons_Backends_SWBWeaponBackend_vfunc02
          (undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  bool bVar3;
  int *piVar4;
  undefined1 local_30 [40];
  
  bVar3 = false;
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
    piVar4 = (int *)FUN_18020e670(param_3,local_30,0,4,0);
    bVar3 = true;
    plVar1 = (longlong *)(piVar4 + 4);
    if (0xf < *(ulonglong *)(piVar4 + 6)) {
      piVar4 = *(int **)piVar4;
    }
    if ((*plVar1 == 4) && (*piVar4 == 0x5f627773)) {
      uVar2 = 1;
      goto LAB_18007ae0b;
    }
  }
  uVar2 = 0;
LAB_18007ae0b:
  if (bVar3) {
    FUN_18020e450(local_30);
  }
  return uVar2;
}


