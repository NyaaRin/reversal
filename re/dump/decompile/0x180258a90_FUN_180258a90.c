// 0x180258a90  FUN_180258a90
// size=3646 thunk=false
// signature: undefined FUN_180258a90()
// status: ok


void FUN_180258a90(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  char cVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 in_stack_fffffffffffffe88;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 local_138;
  longlong *local_128;
  longlong *plStack_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  undefined8 local_f0;
  
  uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  if (*(char *)(param_1 + 0x7b0) == '\0') {
    return;
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar20 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  local_110 = *(undefined4 *)(lVar20 + 0x118);
  local_10c = *(undefined4 *)(lVar20 + 0x11c);
  local_118 = 0x4080000040c00000;
  FUN_18026aad0(0xe,&local_118);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar20 = *(longlong *)(lVar10 + 0xec0);
  cVar14 = *(char *)(lVar10 + 0x10);
  if (cVar14 == '\0') {
    __dyn_tls_on_demand_init();
    cVar14 = *(char *)(lVar10 + 0x10);
  }
  fVar24 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0xc80) * DAT_1803811c4;
  local_118 = CONCAT44(local_118._4_4_,fVar24);
  plVar16 = (longlong *)(param_1 + 0x730);
  plVar15 = plVar16;
  if (0xf < *(ulonglong *)(param_1 + 0x748)) {
    plVar15 = (longlong *)*plVar16;
  }
  if (cVar14 == '\0') {
    __dyn_tls_on_demand_init();
    cVar14 = *(char *)(lVar10 + 0x10);
  }
  uVar13 = DAT_180381384;
  uVar31 = DAT_180381308;
  fVar22 = DAT_180380ba8;
  if (plVar15 == (longlong *)0x0) {
    fVar25 = 0.0;
  }
  else {
    uVar28 = CONCAT44(uVar29,DAT_180381384);
    FUN_18029e350(&local_138,*(undefined8 *)(*(longlong *)(lVar10 + 0xec0) + 0x1228),
                  *(undefined4 *)(*(longlong *)(lVar10 + 0xec0) + 0x1238),DAT_180381308,uVar28,
                  plVar15,0,0,0);
    uVar29 = (undefined4)((ulonglong)uVar28 >> 0x20);
    fVar25 = (float)(int)((float)local_138 + fVar22);
    cVar14 = *(char *)(lVar10 + 0x10);
  }
  fVar25 = *(float *)(lVar20 + 0xcd4) + *(float *)(lVar20 + 0xcd4) + fVar25;
  plVar15 = (longlong *)(param_1 + 0x750);
  plVar18 = plVar15;
  if (0xf < *(ulonglong *)(param_1 + 0x768)) {
    plVar18 = (longlong *)*plVar15;
  }
  if (cVar14 == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (plVar18 == (longlong *)0x0) {
    fVar26 = 0.0;
  }
  else {
    uVar28 = CONCAT44(uVar29,uVar13);
    FUN_18029e350(&local_138,*(undefined8 *)(*(longlong *)(lVar10 + 0xec0) + 0x1228),
                  *(undefined4 *)(*(longlong *)(lVar10 + 0xec0) + 0x1238),uVar31,uVar28,plVar18,0,0,
                  0);
    uVar29 = (undefined4)((ulonglong)uVar28 >> 0x20);
    fVar26 = (float)(int)((float)local_138 + fVar22);
  }
  fVar26 = *(float *)(lVar20 + 0xcd4) + *(float *)(lVar20 + 0xcd4) + fVar26;
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar30 = 1;
  uVar28 = CONCAT44(uVar29,uVar13);
  FUN_18029e350(&local_138,*(undefined8 *)(*(longlong *)(lVar10 + 0xec0) + 0x1228),
                *(undefined4 *)(*(longlong *)(lVar10 + 0xec0) + 0x1238),uVar31,uVar28,&DAT_18037cb60
                ,0,0,0);
  uVar29 = (undefined4)((ulonglong)uVar28 >> 0x20);
  fVar27 = (float)(int)((float)local_138 + fVar22) +
           *(float *)(lVar20 + 0xcd4) + *(float *)(lVar20 + 0xcd4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    puVar17 = (undefined8 *)(param_1 + 0x770);
    if (0xf < *(ulonglong *)(param_1 + 0x788)) {
      puVar17 = (undefined8 *)*puVar17;
    }
    cVar14 = *(char *)(lVar10 + 0x10);
    if (cVar14 == '\0') {
      __dyn_tls_on_demand_init();
      cVar14 = *(char *)(lVar10 + 0x10);
    }
    if (puVar17 == (undefined8 *)0x0) {
      fVar21 = 0.0;
    }
    else {
      uVar28 = CONCAT44(uVar29,uVar13);
      FUN_18029e350(&local_138,*(undefined8 *)(*(longlong *)(lVar10 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar10 + 0xec0) + 0x1238),uVar31,uVar28,puVar17,0,
                    0,0);
      uVar30 = (undefined4)((ulonglong)puVar17 >> 0x20);
      uVar29 = (undefined4)((ulonglong)uVar28 >> 0x20);
      fVar21 = (float)(int)((float)local_138 + fVar22);
      cVar14 = *(char *)(lVar10 + 0x10);
    }
    fVar21 = *(float *)(lVar20 + 0xcd4) + *(float *)(lVar20 + 0xcd4) + fVar21;
    if (fVar21 <= fVar25) {
      fVar21 = fVar25;
    }
    fVar25 = fVar21;
    puVar17 = (undefined8 *)(param_1 + 0x790);
    if (0xf < *(ulonglong *)(param_1 + 0x7a8)) {
      puVar17 = (undefined8 *)*puVar17;
    }
    if (cVar14 == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (puVar17 == (undefined8 *)0x0) {
      fVar22 = 0.0;
    }
    else {
      FUN_18029e350(&local_138,*(undefined8 *)(*(longlong *)(lVar10 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar10 + 0xec0) + 0x1238),uVar31,
                    CONCAT44(uVar29,uVar13),puVar17,0,0,0);
      uVar30 = (undefined4)((ulonglong)puVar17 >> 0x20);
      fVar22 = (float)(int)((float)local_138 + fVar22);
    }
    fVar22 = *(float *)(lVar20 + 0xcd4) + *(float *)(lVar20 + 0xcd4) + fVar22;
    if (fVar22 <= fVar26) {
      fVar22 = fVar26;
    }
    fVar26 = fVar22;
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*(char *)(lVar10 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar22 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0xcc8);
      fVar22 = fVar22 + fVar22 + *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1238) +
               *(float *)(lVar20 + 0xcd8);
      goto LAB_180258f1c;
    }
  }
  fVar22 = 0.0;
LAB_180258f1c:
  cVar14 = *(char *)(lVar10 + 0x10);
  if (cVar14 == '\0') {
    __dyn_tls_on_demand_init();
    cVar14 = *(char *)(lVar10 + 0x10);
  }
  fVar21 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0xcc8);
  fVar23 = *(float *)(lVar20 + 0xcb8) + *(float *)(lVar20 + 0xcb8);
  fVar22 = fVar21 + fVar21 + *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1238) +
           *(float *)(lVar20 + 0xc90) + *(float *)(lVar20 + 0xc90) + fVar23 + fVar22;
  fVar21 = *(float *)(lVar20 + 0xcd4);
  fVar24 = *(float *)(lVar20 + 0xc8c) + *(float *)(lVar20 + 0xc8c) + fVar23 + fVar24 + fVar21 +
           fVar25 + fVar21 + fVar26 + fVar21 + fVar27 * DAT_180380e28 + fVar21 + fVar21;
  if (*(char *)(param_1 + 0x17) == '\0') {
    fVar21 = 0.0;
  }
  else {
    fVar21 = *(float *)(param_1 + 0x530);
  }
  if (cVar14 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar10 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar11 + 0x1520) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar11 + 0x1520) + 0xc9) == '\0') {
    fVar23 = 0.0;
  }
  else {
    if (*(char *)(lVar10 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar23 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0xcfc);
  }
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar3 = *(float *)(lVar20 + 0xcd8);
  fVar4 = *(float *)(*(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520) + 0x30);
  fVar5 = *(float *)(lVar20 + 0xcd4);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar20 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  fVar6 = *(float *)(lVar20 + 0x28);
  fVar7 = *(float *)(lVar20 + 0x2c);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar20 = *(longlong *)(lVar10 + 0xec0);
  *(uint *)(lVar20 + 0x1f48) = *(uint *)(lVar20 + 0x1f48) | 1;
  *(float *)(lVar20 + 0x1f58) = ((((fVar4 - fVar21) - fVar23) - fVar24) - fVar5) + fVar6;
  *(float *)(lVar20 + 0x1f5c) = fVar3 + fVar3 + fVar7;
  *(undefined8 *)(lVar20 + 0x1f60) = 0;
  *(undefined4 *)(lVar20 + 0x1f4c) = 1;
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar20 = *(longlong *)(lVar10 + 0xec0);
  *(uint *)(lVar20 + 0x1f48) = *(uint *)(lVar20 + 0x1f48) | 2;
  *(float *)(lVar20 + 0x1f68) = fVar24;
  *(float *)(lVar20 + 0x1f6c) = fVar22;
  *(undefined4 *)(lVar20 + 0x1f50) = 1;
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar20 = *(longlong *)(lVar10 + 0xec0);
  puVar2 = (uint *)(lVar20 + 0x1f48);
  *puVar2 = *puVar2 | 0x40;
  *(undefined4 *)(lVar20 + 0x1fb0) = 0x3f400000;
  local_138 = (longlong **)CONCAT44(fVar22,fVar24);
  FUN_180272fa0("find-replace",&local_138,1,0);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar20 = *(longlong *)(lVar10 + 0xec0);
  puVar2 = (uint *)(lVar20 + 0x1ec0);
  *puVar2 = *puVar2 | 1;
  uVar29 = (undefined4)local_118;
  *(undefined4 *)(lVar20 + 0x1ed8) = (undefined4)local_118;
  if (*(char *)(param_1 + 0x7b2) == '\0') {
    if (*(char *)(param_1 + 0x7b3) != '\0') {
      FUN_180279dc0();
      *(undefined1 *)(param_1 + 0x7b3) = 0;
    }
  }
  else {
    FUN_180279dc0();
    *(undefined1 *)(param_1 + 0x7b2) = 0;
  }
  plVar18 = (longlong *)(param_1 + 0x7b8);
  plVar19 = plVar18;
  if (0xf < *(ulonglong *)(param_1 + 2000)) {
    plVar19 = (longlong *)*plVar18;
  }
  local_138 = (longlong **)0x0;
  uVar28 = CONCAT44(uVar30,0x411000);
  cVar14 = FUN_1802b74e0("###find",0,plVar19,(int)*(ulonglong *)(param_1 + 2000) + 1,&local_138,
                         uVar28,FUN_180258a40,plVar18);
  uVar31 = (undefined4)((ulonglong)uVar28 >> 0x20);
  if (cVar14 != '\0') {
    if (*(longlong **)(param_1 + 0x7c8) == (longlong *)0x0) {
      FUN_180254220(param_1 + 0xf0);
    }
    else {
      local_128 = plVar18;
      if (0xf < *(ulonglong *)(param_1 + 2000)) {
        local_128 = (longlong *)*plVar18;
      }
      plStack_120 = *(longlong **)(param_1 + 0x7c8);
      FUN_1802598d0(param_1,&local_128,*(undefined1 *)(param_1 + 0x7f8),
                    *(undefined1 *)(param_1 + 0x7f9));
    }
  }
  cVar14 = FUN_180272ea0();
  if (cVar14 != '\0') {
    cVar14 = FUN_18027bb30(0x20e,1,0);
    if (cVar14 == '\0') {
      cVar14 = FUN_18027bb30(0x20d,1,0);
      if ((cVar14 != '\0') || (cVar14 = FUN_18027bb30(0x273,1,0), cVar14 != '\0')) {
        *(undefined2 *)(param_1 + 0x7b1) = 1;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x7b0) = 0x100;
      *(undefined1 *)(param_1 + 0x7b2) = 0;
    }
  }
  local_118 = *(longlong *)(param_1 + 0x7c8);
  if (local_118 == 0) {
    if (*(char *)(lVar10 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar20 = *(longlong *)(lVar10 + 0xec0);
    uVar9 = *(uint *)(lVar20 + 0x1eb8);
    if ((uVar9 & 0x40) == 0) {
      *(float *)(lVar20 + 0x26d0) = *(float *)(lVar20 + 0xc84);
      *(float *)(lVar20 + 0xc84) = *(float *)(lVar20 + 0xc84) * *(float *)(lVar20 + 0xc88);
    }
    *(uint *)(lVar20 + 0x1eb8) = uVar9 | 0x40;
    FUN_18028a630(lVar20 + 0x2008);
    *(short *)(lVar20 + 0x26d4) = *(short *)(lVar20 + 0x26d4) + 1;
  }
  lVar20 = local_118;
  FUN_18027f5b0();
  local_138 = (longlong **)(ulonglong)(uint)fVar25;
  if (0xf < *(ulonglong *)(param_1 + 0x748)) {
    plVar16 = (longlong *)*plVar16;
  }
  cVar14 = FUN_1802abf60(plVar16,&local_138,0);
  if (cVar14 != '\0') {
    FUN_18025a980(param_1);
  }
  FUN_18027f5b0();
  local_138 = (longlong **)(ulonglong)(uint)fVar26;
  if (0xf < *(ulonglong *)(param_1 + 0x768)) {
    plVar15 = (longlong *)*plVar15;
  }
  cVar14 = FUN_1802abf60(plVar15,&local_138,0);
  if (cVar14 != '\0') {
    FUN_18025a9e0(param_1);
  }
  if (lVar20 == 0) {
    FUN_180279200();
  }
  FUN_18027f5b0();
  local_138 = (longlong **)(ulonglong)(uint)fVar27;
  cVar14 = FUN_180258950(&DAT_18037cb60,param_1 + 0x7f8,&local_138);
  if (cVar14 != '\0') {
    FUN_18025a980(param_1);
  }
  FUN_18027f5b0();
  local_138 = (longlong **)(ulonglong)(uint)fVar27;
  cVar14 = FUN_180258950(&DAT_18037cb64,param_1 + 0x7f9,&local_138);
  if (cVar14 != '\0') {
    FUN_18025a980(param_1);
  }
  FUN_18027f5b0();
  local_138 = (longlong **)(ulonglong)(uint)fVar27;
  cVar14 = FUN_1802abf60(&DAT_18034ede4,&local_138,0);
  if (cVar14 != '\0') {
    *(undefined2 *)(param_1 + 0x7b0) = 0x100;
    *(undefined1 *)(param_1 + 0x7b2) = 0;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (*(char *)(lVar10 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar20 = *(longlong *)(lVar10 + 0xec0);
    puVar2 = (uint *)(lVar20 + 0x1ec0);
    *puVar2 = *puVar2 | 1;
    *(undefined4 *)(lVar20 + 0x1ed8) = uVar29;
    plVar16 = (longlong *)(param_1 + 0x7d8);
    plVar15 = plVar16;
    if (0xf < *(ulonglong *)(param_1 + 0x7f0)) {
      plVar15 = (longlong *)*plVar16;
    }
    local_138 = (longlong **)0x0;
    FUN_1802b74e0("###replace",0,plVar15,(int)*(ulonglong *)(param_1 + 0x7f0) + 1,&local_138,
                  CONCAT44(uVar31,0x410000),FUN_180258a40,plVar16);
    FUN_18027f5b0();
    if ((*(longlong *)(param_1 + 0x7c8) == 0) || (*(longlong *)(param_1 + 0x7e8) == 0)) {
      if (*(char *)(lVar10 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar20 = *(longlong *)(lVar10 + 0xec0);
      uVar9 = *(uint *)(lVar20 + 0x1eb8);
      if ((uVar9 & 0x40) == 0) {
        *(float *)(lVar20 + 0x26d0) = *(float *)(lVar20 + 0xc84);
        *(float *)(lVar20 + 0xc84) = *(float *)(lVar20 + 0xc84) * *(float *)(lVar20 + 0xc88);
      }
      *(uint *)(lVar20 + 0x1eb8) = uVar9 | 0x40;
      FUN_18028a630(lVar20 + 0x2008);
      *(short *)(lVar20 + 0x26d4) = *(short *)(lVar20 + 0x26d4) + 1;
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    local_138 = (longlong **)(ulonglong)(uint)fVar25;
    plVar15 = (longlong *)(param_1 + 0x770);
    if (0xf < *(ulonglong *)(param_1 + 0x788)) {
      plVar15 = (longlong *)*plVar15;
    }
    cVar14 = FUN_1802abf60(plVar15,&local_138,0);
    if ((cVar14 != '\0') && (*(longlong *)(param_1 + 0x7c8) != 0)) {
      for (plVar15 = *(longlong **)(param_1 + 0xf0); plVar15 < *(longlong **)(param_1 + 0xf8);
          plVar15 = plVar15 + 6) {
        if ((*plVar15 != plVar15[2]) || (plVar15[1] != plVar15[3])) goto LAB_180259608;
      }
      local_128 = plVar18;
      if (0xf < *(ulonglong *)(param_1 + 2000)) {
        local_128 = (longlong *)*plVar18;
      }
      plStack_120 = (longlong *)*(longlong *)(param_1 + 0x7c8);
      FUN_180259a60(param_1,&local_128,*(undefined1 *)(param_1 + 0x7f8),
                    *(undefined1 *)(param_1 + 0x7f9));
LAB_180259608:
      local_128 = plVar16;
      if (0xf < *(ulonglong *)(param_1 + 0x7f0)) {
        local_128 = (longlong *)*plVar16;
      }
      plStack_120 = *(longlong **)(param_1 + 0x7e8);
      FUN_18025a2e0(param_1,&local_128);
      local_128 = plVar18;
      if (0xf < *(ulonglong *)(param_1 + 2000)) {
        local_128 = (longlong *)*plVar18;
      }
      plStack_120 = *(longlong **)(param_1 + 0x7c8);
      FUN_180259a60(param_1,&local_128,*(undefined1 *)(param_1 + 0x7f8),
                    *(undefined1 *)(param_1 + 0x7f9));
      *(undefined2 *)(param_1 + 0x7b1) = 1;
    }
    FUN_18027f5b0();
    local_138 = (longlong **)(ulonglong)(uint)fVar26;
    plVar15 = (longlong *)(param_1 + 0x790);
    if (0xf < *(ulonglong *)(param_1 + 0x7a8)) {
      plVar15 = (longlong *)*plVar15;
    }
    cVar14 = FUN_1802abf60(plVar15,&local_138,0);
    if ((cVar14 != '\0') && (*(longlong *)(param_1 + 0x7c8) != 0)) {
      if (0xf < *(ulonglong *)(param_1 + 2000)) {
        plVar18 = (longlong *)*plVar18;
      }
      local_128 = plVar18;
      plStack_120 = (longlong *)*(longlong *)(param_1 + 0x7c8);
      FUN_180259c60(param_1,&local_128,*(undefined1 *)(param_1 + 0x7f8),
                    *(undefined1 *)(param_1 + 0x7f9));
      if (0xf < *(ulonglong *)(param_1 + 0x7f0)) {
        plVar16 = (longlong *)*plVar16;
      }
      local_f0 = *(undefined8 *)(param_1 + 0x7e8);
      local_108 = (longlong *)0x0;
      plStack_100 = (longlong *)0x0;
      local_f8 = plVar16;
      FUN_180253050(param_1,&local_108,1);
      local_138 = &local_128;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
        UNLOCK();
      }
      local_128 = local_108;
      plStack_120 = plStack_100;
      FUN_1802532f0(param_1,&local_128,&local_f8);
      local_138 = &local_128;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
        UNLOCK();
      }
      local_128 = local_108;
      plStack_120 = plStack_100;
      FUN_180253190(param_1,&local_128);
      plVar16 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        plVar15 = plStack_100 + 1;
        lVar20 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*plStack_100)(plStack_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      *(undefined2 *)(param_1 + 0x7b1) = 1;
    }
    lVar20 = local_118;
    if (bVar12) {
      FUN_180279200();
      lVar20 = local_118;
    }
  }
  cVar14 = FUN_1802822b0(0);
  if (((cVar14 != '\0') && (lVar20 != 0)) && (cVar14 = FUN_18027e200(0x1228,0,0), cVar14 != '\0')) {
    FUN_1802827b0(0,0);
    FUN_18025a980(param_1);
  }
  FUN_180273410();
  FUN_18026abb0(1);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(lVar10 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar10 + 0x1520) + 0xce) = 1;
  lVar10 = *(longlong *)(lVar10 + 0x1520);
  *(undefined4 *)(lVar10 + 0x118) = local_110;
  *(undefined4 *)(lVar10 + 0x11c) = local_10c;
  *(undefined1 *)(lVar10 + 0x159) = 1;
  return;
}


