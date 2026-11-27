// 0x180078a70  Features_Weapons_Backends_CW20WeaponBackend_vfunc02
// size=389 thunk=false
// signature: undefined Features_Weapons_Backends_CW20WeaponBackend_vfunc02()
// status: ok


undefined8
Features_Weapons_Backends_CW20WeaponBackend_vfunc02
          (undefined8 param_1,longlong *param_2,longlong param_3)

{
  ushort *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 local_30 [40];
  
  bVar4 = false;
  uVar9 = 0;
  lVar2 = param_2[2];
  plVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar8 = (longlong *)*param_2;
  }
  if (lVar2 == 7) {
    iVar7 = (int)*plVar8 + -0x625f7763;
    if ((iVar7 == 0) && (iVar7 = *(ushort *)((longlong)plVar8 + 4) - 0x7361, iVar7 == 0)) {
      iVar7 = *(byte *)((longlong)plVar8 + 6) - 0x65;
    }
    if (iVar7 == 0) {
      return 1;
    }
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (longlong *)*param_2;
  }
  if (lVar2 == 8) {
    if (*param_2 != 0x657361625f627773) {
      return 0;
    }
    return 1;
  }
  if (lVar2 != 0) {
    return 0;
  }
  if (*(ulonglong *)(param_3 + 0x10) < 3) {
LAB_180078b5d:
    bVar3 = false;
  }
  else {
    puVar5 = (ushort *)FUN_18020e670(param_3,local_30,0,3,0);
    bVar4 = true;
    uVar9 = 1;
    puVar1 = puVar5 + 8;
    if (0xf < *(ulonglong *)(puVar5 + 0xc)) {
      puVar5 = *(ushort **)puVar5;
    }
    if (*(longlong *)puVar1 != 3) goto LAB_180078b5d;
    iVar7 = *puVar5 - 0x7763;
    if (iVar7 == 0) {
      iVar7 = (byte)puVar5[1] - 0x5f;
    }
    if (iVar7 != 0) goto LAB_180078b5d;
    bVar3 = true;
  }
  if (bVar4) {
    uVar9 = 0;
    FUN_18020e450(local_30);
  }
  bVar4 = false;
  if (bVar3) {
    return 1;
  }
  if (3 < *(ulonglong *)(param_3 + 0x10)) {
    piVar6 = (int *)FUN_18020e670(param_3,local_30,0,4,uVar9);
    bVar4 = true;
    plVar8 = (longlong *)(piVar6 + 4);
    if (0xf < *(ulonglong *)(piVar6 + 6)) {
      piVar6 = *(int **)piVar6;
    }
    if ((*plVar8 == 4) && (*piVar6 == 0x5f627773)) {
      bVar3 = true;
      goto LAB_180078bc4;
    }
  }
  bVar3 = false;
LAB_180078bc4:
  if (bVar4) {
    FUN_18020e450(local_30);
  }
  if (bVar3) {
    return 1;
  }
  return 0;
}


