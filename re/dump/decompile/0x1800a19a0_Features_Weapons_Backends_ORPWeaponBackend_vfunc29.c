// 0x1800a19a0  Features_Weapons_Backends_ORPWeaponBackend_vfunc29
// size=5 thunk=true
// signature: undefined Features_Weapons_Backends_ORPWeaponBackend_vfunc29()
// status: ok


void Features_Weapons_Backends_ORPWeaponBackend_vfunc29(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 **ppuVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined4 uStack_af;
  undefined2 uStack_ab;
  undefined1 uStack_a9;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 *puStack_98;
  undefined4 uStack_90;
  undefined8 *puStack_88;
  longlong *plStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *apuStack_68 [2];
  undefined8 *puStack_58;
  
  *(undefined2 *)(param_1 + 2) = 0x100;
  bVar13 = DAT_1803fa678 == 0;
  if (bVar13) {
    puStack_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    puStack_88 = (undefined8 *)0x0;
    ppuVar10 = &puStack_98;
  }
  else {
    ppuVar10 = (undefined8 **)FUN_18001bcd0(param_1,apuStack_68);
  }
  puVar2 = puStack_88;
  plVar1 = *ppuVar10;
  plStack_80 = plVar1;
  puStack_78 = ppuVar10[1];
  puVar12 = ppuVar10[2];
  puStack_70 = puVar12;
  if ((bVar13) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
    DAT_1803fa338 = puVar2 != (undefined8 *)0x0;
    DAT_1803fa330 = param_1;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = puVar2;
    }
    DAT_1803fa339 = uStack_af;
    DAT_1803fa33d = uStack_ab;
    DAT_1803fa33f = uStack_a9;
  }
  if ((!bVar13) && (apuStack_68[0] != (undefined8 *)0x0)) {
    (**(code **)*apuStack_68[0])();
    DAT_1803fa338 = puStack_58 != (undefined8 *)0x0;
    DAT_1803fa330 = param_1;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = puStack_58;
    }
    DAT_1803fa339 = uStack_af;
    DAT_1803fa33d = uStack_ab;
    DAT_1803fa33f = uStack_a9;
  }
  plVar11 = plStack_80;
  if ((((param_2 == (longlong *)0x0) || (plVar11 = plVar1, plVar1 == (longlong *)0x0)) ||
      (plVar1[1] == 0)) || ((DAT_1803fa608 == (float *)0x0 || (DAT_1803faee8 == 0)))) {
    if (plVar11 == (longlong *)0x0) {
      return;
    }
    (**(code **)*plVar11)(plVar11);
    goto LAB_1800a162c;
  }
  iVar6 = (**(code **)*plVar1)(plVar1);
  iStack_9c = iVar6;
  cVar3 = FUN_18001e2b0(param_2,plVar1);
  if ((cVar3 == '\0') ||
     (cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,9), cVar3 == '\0')) {
    uStack_a0 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&uStack_a0,(ThrowInfo *)&DAT_1803d59f0);
  }
  uVar7 = (**(code **)*plVar1)(plVar1);
  FUN_18002d9c0(plVar1[1],uVar7,"DoAnimation");
  uVar4 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,6);
  (**(code **)(*plVar1 + 0x10))(plVar1,1);
  FUN_18002d9c0(plVar1[1],uVar7,"Reloading");
  cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,1);
  if ((cVar3 == '\0') || (cVar3 = (**(code **)(*plVar1 + 200))(plVar1,0xffffffff), cVar3 == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar5;
  (**(code **)(*plVar1 + 0x10))(plVar1,1);
  plVar11 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
  if (plVar11 == (longlong *)0x0) {
    uStack_a4 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&uStack_a4,(ThrowInfo *)&DAT_1803d59f0);
  }
  uVar8 = (**(code **)(*plVar11 + 0x48))(plVar11);
  if ((*(char *)((longlong)param_1 + 0x11) == '\0') &&
     (cVar3 = FUN_18002f1c0(uVar8,"Otrub"), cVar3 == '\0')) {
    cVar3 = FUN_18002f1c0(uVar8,"TazerFake");
    uVar5 = 0;
    if (cVar3 != '\0') goto LAB_1800a1548;
  }
  else {
LAB_1800a1548:
    uVar5 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  FUN_18002d9c0(plVar1[1],uVar7,"Primary");
  cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,5);
  if (cVar3 != '\0') {
    FUN_18002d9c0(plVar1[1],0xffffffff,"Automatic");
    cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,1);
    if ((cVar3 == '\0') || (cVar3 = (**(code **)(*plVar1 + 200))(plVar1,0xffffffff), cVar3 == '\0'))
    {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x12) = uVar5;
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    *(undefined1 *)(param_1 + 2) = uVar4;
  }
  param_1[3] = (double)*DAT_1803fa608;
  iVar9 = (**(code **)*plVar1)(plVar1);
  if (iVar6 < iVar9) {
    puVar12 = (undefined8 *)*plVar1;
    iVar9 = (*(code *)*puVar12)(plVar1);
    (*(code *)puVar12[2])(plVar1,iVar9 - iVar6);
  }
  (**(code **)*plVar1)(plVar1);
  puVar12 = puStack_70;
LAB_1800a162c:
  if (puVar12 != (undefined8 *)0x0) {
    param_1 = puVar12;
  }
  DAT_1803fa33f = uStack_a9;
  DAT_1803fa33d = uStack_ab;
  DAT_1803fa339 = uStack_af;
  DAT_1803fa338 = puVar12 != (undefined8 *)0x0;
  DAT_1803fa330 = param_1;
  return;
}


