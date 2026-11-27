// 0x18007f3d0  Features_Weapons_Backends_TFAWeaponBackend_vfunc02
// size=173 thunk=false
// signature: undefined Features_Weapons_Backends_TFAWeaponBackend_vfunc02()
// status: ok


undefined1
Features_Weapons_Backends_TFAWeaponBackend_vfunc02
          (undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 local_30 [40];
  
  uVar5 = 0;
  uVar6 = 0;
  cVar3 = FUN_18007f2b0(param_2);
  if (cVar3 != '\0') {
    return 1;
  }
  if ((*(ulonglong *)(param_2 + 0x10) == uVar5) && (3 < *(ulonglong *)(param_3 + 0x10))) {
    piVar4 = (int *)FUN_18020e670(param_3,local_30,0,4,uVar6);
    uVar5 = 1;
    plVar1 = (longlong *)(piVar4 + 4);
    if (0xf < *(ulonglong *)(piVar4 + 6)) {
      piVar4 = *(int **)piVar4;
    }
    if ((*plVar1 == 4) && (*piVar4 == 0x5f616674)) {
      uVar2 = 1;
      goto LAB_18007f447;
    }
  }
  uVar2 = 0;
LAB_18007f447:
  if ((uVar5 & 1) != 0) {
    FUN_18020e450(local_30);
  }
  return uVar2;
}


