// 0x1800a1280  FUN_1800a1280
// size=1103 thunk=false
// signature: undefined FUN_1800a1280()
// status: ok


void FUN_1800a1280(undefined8 *param_1,longlong *param_2)

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
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined8 *local_98;
  undefined4 uStack_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 *local_68 [2];
  undefined8 *local_58;
  
  *(undefined2 *)(param_1 + 2) = 0x100;
  bVar13 = DAT_1803fa678 == 0;
  if (bVar13) {
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    local_88 = (undefined8 *)0x0;
    ppuVar10 = &local_98;
  }
  else {
    ppuVar10 = (undefined8 **)FUN_18001bcd0(param_1,local_68);
  }
  puVar2 = local_88;
  plVar1 = *ppuVar10;
  local_80 = plVar1;
  puStack_78 = ppuVar10[1];
  puVar12 = ppuVar10[2];
  local_70 = puVar12;
  if ((bVar13) && (local_98 != (undefined8 *)0x0)) {
    (**(code **)*local_98)();
    DAT_1803fa338 = puVar2 != (undefined8 *)0x0;
    DAT_1803fa330 = param_1;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = puVar2;
    }
    DAT_1803fa339 = local_af;
    DAT_1803fa33d = local_ab;
    DAT_1803fa33f = local_a9;
  }
  if ((!bVar13) && (local_68[0] != (undefined8 *)0x0)) {
    (**(code **)*local_68[0])();
    DAT_1803fa338 = local_58 != (undefined8 *)0x0;
    DAT_1803fa330 = param_1;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_58;
    }
    DAT_1803fa339 = local_af;
    DAT_1803fa33d = local_ab;
    DAT_1803fa33f = local_a9;
  }
  plVar11 = local_80;
  if ((((param_2 == (longlong *)0x0) || (plVar11 = plVar1, plVar1 == (longlong *)0x0)) ||
      (plVar1[1] == 0)) || ((DAT_1803fa608 == (float *)0x0 || (DAT_1803faee8 == 0)))) {
    if (plVar11 == (longlong *)0x0) {
      return;
    }
    (**(code **)*plVar11)(plVar11);
    goto LAB_1800a162c;
  }
  iVar6 = (**(code **)*plVar1)(plVar1);
  local_9c = iVar6;
  cVar3 = FUN_18001e2b0(param_2,plVar1);
  if ((cVar3 == '\0') ||
     (cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,9), cVar3 == '\0')) {
    local_a0 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_a0,(ThrowInfo *)&DAT_1803d59f0);
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
    local_a4 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_a4,(ThrowInfo *)&DAT_1803d59f0);
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
  puVar12 = local_70;
LAB_1800a162c:
  if (puVar12 != (undefined8 *)0x0) {
    param_1 = puVar12;
  }
  DAT_1803fa33f = local_a9;
  DAT_1803fa33d = local_ab;
  DAT_1803fa339 = local_af;
  DAT_1803fa338 = puVar12 != (undefined8 *)0x0;
  DAT_1803fa330 = param_1;
  return;
}


