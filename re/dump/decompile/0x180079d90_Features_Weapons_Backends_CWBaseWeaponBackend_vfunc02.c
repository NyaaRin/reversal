// 0x180079d90  Features_Weapons_Backends_CWBaseWeaponBackend_vfunc02
// size=214 thunk=false
// signature: undefined Features_Weapons_Backends_CWBaseWeaponBackend_vfunc02()
// status: ok


undefined1
Features_Weapons_Backends_CWBaseWeaponBackend_vfunc02
          (undefined8 param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  ushort *puVar2;
  bool bVar3;
  undefined1 uVar4;
  ushort *puVar5;
  int iVar6;
  undefined1 local_30 [40];
  
  bVar3 = false;
  plVar1 = (longlong *)(param_2 + 4);
  if (0xf < *(ulonglong *)(param_2 + 6)) {
    param_2 = *(int **)param_2;
  }
  if (*plVar1 == 7) {
    iVar6 = *param_2 + -0x625f7763;
    if (iVar6 == 0) {
      iVar6 = *(ushort *)(param_2 + 1) - 0x7361;
      if (iVar6 == 0) {
        iVar6 = *(byte *)((longlong)param_2 + 6) - 0x65;
      }
    }
    bVar3 = false;
    if (iVar6 == 0) {
      return 1;
    }
  }
  else if ((*plVar1 == 0) && (2 < *(ulonglong *)(param_3 + 0x10))) {
    puVar5 = (ushort *)FUN_18020e670(param_3,local_30,0,3,0);
    bVar3 = true;
    puVar2 = puVar5 + 8;
    if (0xf < *(ulonglong *)(puVar5 + 0xc)) {
      puVar5 = *(ushort **)puVar5;
    }
    if (*(longlong *)puVar2 == 3) {
      iVar6 = *puVar5 - 0x7763;
      if (iVar6 == 0) {
        iVar6 = (byte)puVar5[1] - 0x5f;
      }
      if (iVar6 == 0) {
        uVar4 = 1;
        goto LAB_180079e42;
      }
    }
  }
  uVar4 = 0;
LAB_180079e42:
  if (bVar3) {
    FUN_18020e450(local_30);
  }
  return uVar4;
}


