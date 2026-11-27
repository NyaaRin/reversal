// 0x18007ed70  Features_Weapons_Backends_FAS2WeaponBackend_vfunc02
// size=214 thunk=false
// signature: undefined Features_Weapons_Backends_FAS2WeaponBackend_vfunc02()
// status: ok


undefined1
Features_Weapons_Backends_FAS2WeaponBackend_vfunc02
          (undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_30 [40];
  
  bVar2 = false;
  plVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (longlong *)*param_2;
  }
  if (*plVar1 == 9) {
    lVar6 = *param_2 + -0x7361625f32736166;
    if (lVar6 == 0) {
      lVar6 = (ulonglong)*(byte *)(param_2 + 1) - 0x65;
    }
    bVar2 = false;
    if (lVar6 == 0) {
      return 1;
    }
  }
  else if ((*plVar1 == 0) && (4 < *(ulonglong *)(param_3 + 0x10))) {
    piVar4 = (int *)FUN_18020e670(param_3,local_30,0,5,0);
    bVar2 = true;
    plVar1 = (longlong *)(piVar4 + 4);
    if (0xf < *(ulonglong *)(piVar4 + 6)) {
      piVar4 = *(int **)piVar4;
    }
    if (*plVar1 == 5) {
      iVar5 = *piVar4 + -0x32736166;
      if (iVar5 == 0) {
        iVar5 = *(byte *)(piVar4 + 1) - 0x5f;
      }
      if (iVar5 == 0) {
        uVar3 = 1;
        goto LAB_18007ee22;
      }
    }
  }
  uVar3 = 0;
LAB_18007ee22:
  if (bVar2) {
    FUN_18020e450(local_30);
  }
  return uVar3;
}


