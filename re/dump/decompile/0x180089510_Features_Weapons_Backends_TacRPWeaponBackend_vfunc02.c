// 0x180089510  Features_Weapons_Backends_TacRPWeaponBackend_vfunc02
// size=293 thunk=false
// signature: undefined Features_Weapons_Backends_TacRPWeaponBackend_vfunc02()
// status: ok


undefined1
Features_Weapons_Backends_TacRPWeaponBackend_vfunc02
          (undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 local_50 [40];
  
  bVar4 = false;
  uVar7 = 0;
  if (*(ulonglong *)(param_2 + 0x10) < 6) {
LAB_180089582:
    bVar2 = false;
  }
  else {
    piVar5 = (int *)FUN_18020e670(param_2,local_50,0,6,0);
    bVar4 = true;
    uVar7 = 1;
    plVar1 = (longlong *)(piVar5 + 4);
    if (0xf < *(ulonglong *)(piVar5 + 6)) {
      piVar5 = *(int **)piVar5;
    }
    if (*plVar1 != 6) goto LAB_180089582;
    iVar6 = *piVar5 + -0x72636174;
    if (iVar6 == 0) {
      iVar6 = *(ushort *)(piVar5 + 1) - 0x5f70;
    }
    if (iVar6 != 0) goto LAB_180089582;
    bVar2 = true;
  }
  if (bVar4) {
    uVar7 = 0;
    FUN_18020e450(local_50);
  }
  bVar4 = false;
  if (bVar2) {
    return 1;
  }
  if ((*(longlong *)(param_2 + 0x10) == 0) && (5 < *(ulonglong *)(param_3 + 0x10))) {
    piVar5 = (int *)FUN_18020e670(param_3,local_50,0,6,uVar7);
    bVar4 = true;
    plVar1 = (longlong *)(piVar5 + 4);
    if (0xf < *(ulonglong *)(piVar5 + 6)) {
      piVar5 = *(int **)piVar5;
    }
    if (*plVar1 == 6) {
      iVar6 = *piVar5 + -0x72636174;
      if (iVar6 == 0) {
        iVar6 = *(ushort *)(piVar5 + 1) - 0x5f70;
      }
      if (iVar6 == 0) {
        uVar3 = 1;
        goto LAB_180089601;
      }
    }
  }
  uVar3 = 0;
LAB_180089601:
  if (bVar4) {
    FUN_18020e450(local_50);
  }
  return uVar3;
}


