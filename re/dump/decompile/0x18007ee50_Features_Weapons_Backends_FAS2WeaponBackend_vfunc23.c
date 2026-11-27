// 0x18007ee50  Features_Weapons_Backends_FAS2WeaponBackend_vfunc23
// size=1088 thunk=false
// signature: undefined Features_Weapons_Backends_FAS2WeaponBackend_vfunc23()
// status: ok


void Features_Weapons_Backends_FAS2WeaponBackend_vfunc23(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  HMODULE pHVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  char *pcVar12;
  undefined8 extraout_XMM0_Qa;
  double dVar13;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  undefined8 *local_68;
  uint local_60;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  
  local_60 = 0;
  cVar4 = (**(code **)(*DAT_1803f9290 + 0x78))();
  uVar11 = DAT_180380bb0;
  if (cVar4 == '\0') {
    local_78 = (undefined8 *)((ulonglong)local_78._4_4_ << 0x20);
    local_5c = 0;
    cVar4 = FUN_180078520(extraout_XMM0_Qa,*(undefined8 *)(param_1 + 0x30),0,DAT_180380bb0,&local_78
                          ,&local_5c);
    if (cVar4 == '\0') {
      FUN_180020770(*(undefined8 *)(param_1 + 0x30));
      if ((DAT_18042f184 & 1) == 0) {
        DAT_18042f184 = DAT_18042f184 | 1;
        pHVar8 = GetModuleHandleA("vstdlib.dll");
        DAT_1805c51e8 = GetProcAddress(pHVar8,"RandomFloat");
      }
      if (DAT_1805c51e8 != (FARPROC)0x0) {
        (*DAT_1805c51e8)(DAT_1805c51e8,(ulonglong)uVar11);
      }
      if ((DAT_18042f184 & 1) == 0) {
        DAT_18042f184 = DAT_18042f184 | 1;
        pHVar8 = GetModuleHandleA("vstdlib.dll");
        DAT_1805c51e8 = GetProcAddress(pHVar8,"RandomFloat");
      }
      if (DAT_1805c51e8 != (FARPROC)0x0) {
        (*DAT_1805c51e8)(DAT_1805c51e8,(ulonglong)uVar11);
      }
    }
    if (DAT_1803fa678 == 0) {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      local_68 = (undefined8 *)0x0;
      puVar9 = &local_78;
      uVar11 = 2;
      local_60 = 2;
    }
    else {
      puVar9 = (undefined8 *)FUN_18001bcd0();
      uVar11 = 1;
      local_60 = 1;
    }
    puVar3 = local_68;
    plVar2 = (longlong *)*puVar9;
    local_58 = plVar2;
    uStack_50 = puVar9[1];
    local_48 = (undefined8 *)puVar9[2];
    if (((uVar11 & 2) != 0) &&
       (uVar11 = uVar11 & 0xfffffffd, local_60 = uVar11, local_78 != (undefined8 *)0x0)) {
      (**(code **)*local_78)();
      DAT_1803fa330 = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        DAT_1803fa330 = local_78;
      }
      DAT_1803fa338 = puVar3 != (undefined8 *)0x0;
      DAT_1803fa339 = CONCAT13(uStack_6c,uStack_70._1_3_);
      DAT_1803fa33d = uStack_6b;
      DAT_1803fa33f = uStack_69;
    }
    if (((uVar11 & 1) != 0) && (local_60 = uVar11 & 0xfffffffe, local_40 != (undefined8 *)0x0)) {
      (**(code **)*local_40)();
      DAT_1803fa338 = local_30 != (undefined8 *)0x0;
      DAT_1803fa330 = local_78;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_30;
      }
      DAT_1803fa339 = CONCAT13(uStack_6c,uStack_70._1_3_);
      DAT_1803fa33d = uStack_6b;
      DAT_1803fa33f = uStack_69;
    }
    if (plVar2 != (longlong *)0x0) {
      iVar5 = (**(code **)*plVar2)(plVar2);
      local_78 = (undefined8 *)CONCAT44(local_78._4_4_,iVar5);
      cVar4 = FUN_18001e2b0(param_2,plVar2);
      if (cVar4 != '\0') {
        FUN_18002d9c0(plVar2[1],0xffffffff,&DAT_180347258);
        (**(code **)(*plVar2 + 0xe8))(plVar2,"Status",0);
        (**(code **)(*plVar2 + 0xa8))(plVar2,0xfffffffe);
        (**(code **)(*plVar2 + 0xf0))(plVar2,DAT_180380d08);
        iVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,0xfffffffe,0xffffffff);
        (**(code **)(*plVar2 + 0x10))(plVar2,3);
        pcVar12 = "HipRecoil";
        if (iVar6 != 0) {
          pcVar12 = "AimRecoil";
        }
        FUN_18002d9c0(plVar2[1],0xffffffff,pcVar12);
        cVar4 = (**(code **)(*plVar2 + 0x138))(plVar2,0xffffffff,6);
        if (((cVar4 != '\0') && (cVar4 = FUN_18001e2b0(param_2,plVar2), cVar4 != '\0')) &&
           (iVar6 = FUN_180023180(plVar2[1],1,0), iVar6 != 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2,1);
        }
      }
      while (iVar6 = (**(code **)*plVar2)(plVar2), iVar5 < iVar6) {
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2);
        DAT_1803fa338 = local_48 != (undefined8 *)0x0;
        DAT_1803fa330 = local_78;
        if ((bool)DAT_1803fa338) {
          DAT_1803fa330 = local_48;
        }
        DAT_1803fa339 = CONCAT13(uStack_6c,uStack_70._1_3_);
        DAT_1803fa33d = uStack_6b;
        DAT_1803fa33f = uStack_69;
      }
    }
  }
  else {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar10 = (*pcVar1)(DAT_1803fa360,uVar7);
    if (lVar10 != 0) {
      if (DAT_1803fa608 == 0) {
        dVar13 = 0.0;
      }
      else {
        dVar13 = (double)DAT_1803de068 * *(double *)(DAT_1803fa608 + 0x28);
      }
      *(double *)(param_1 + 0x30) = dVar13;
    }
  }
  return;
}


