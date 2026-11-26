// 0x1801eaba0  FUN_1801eaba0
// size=1713 thunk=false
// signature: undefined FUN_1801eaba0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801eaba0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  SHORT SVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined *local_98;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong uVar12;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if (((DAT_1803fa520 == 0) && (DAT_1803fa524 == 0)) && (DAT_1803fa528 == 0)) {
    cVar5 = '\0';
  }
  else {
    uVar12 = 0;
    do {
      if ((&DAT_1803fa520)[uVar12] != 0) {
        SVar6 = GetAsyncKeyState((&DAT_1803fa520)[uVar12]);
        if (-1 < SVar6) {
          cVar5 = '\0';
          goto LAB_1801eac1d;
        }
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < 3);
    cVar5 = '\x01';
  }
LAB_1801eac1d:
  if (DAT_1803ff29c == '\0') {
    if (((cVar5 != '\0') && (DAT_180426114 == '\0')) &&
       ((bVar15 = DAT_1803fa46f == '\0', bVar16 = DAT_1803fa46f == '\0', DAT_1803fa46f = bVar15,
        bVar16 && (DAT_1803fa545 != '\0')))) {
      DAT_1803fa545 = '\0';
      if (DAT_1803fa5a8 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa5a8 + 0x58))(DAT_1803fa5a8,1);
      }
      FUN_180024860();
    }
  }
  else if (cVar5 == '\0') {
    DAT_1803ff29c = '\0';
  }
  DAT_180426114 = cVar5;
  local_a8 = _set_se_translator(FUN_180014ce0);
  if (DAT_1803fa565 != '\0') {
    DAT_1803feb1c = '\0';
    DAT_1803fa565 = '\0';
  }
  FUN_18010cfb0();
  cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))();
  if ((cVar5 == '\0') || (DAT_1803fa46f != '\0')) {
    DAT_1803fa566 = '\0';
    DAT_1803feb1c = '\0';
  }
  else {
    FUN_18026ce20(DAT_1803fa4d0);
    if (DAT_1803fa566 == '\0') {
      if ((((DAT_1803feb1c == '\0') || (pcVar10 = (char *)FUN_18026f780(), pcVar10 == (char *)0x0))
          || (*pcVar10 == '\0')) || (*(int *)(pcVar10 + 4) < 1)) {
        if (DAT_1803ff25d != '\0') {
          DAT_1803ff28c = DAT_1803ff28c + 1;
        }
      }
      else {
        FUN_1802cfbc0(pcVar10);
        if (DAT_1803ff25d != '\0') {
          DAT_1803ff280 = DAT_1803ff280 + 1;
        }
      }
    }
    else {
      FUN_180272510();
      uVar8 = FUN_18026f780();
      FUN_1802cfbc0(uVar8);
      DAT_1803fa566 = '\0';
      DAT_1803feb1c = '\x01';
      if (DAT_1803ff25d != '\0') {
        DAT_1803ff260 = DAT_1803ff260 + 1;
      }
    }
  }
  uVar8 = DAT_1803fa588;
  local_b0 = 0x10;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_b8 = 0xec0;
  *(undefined8 *)(lVar1 + 0xec0) = uVar8;
  FUN_1802d1540();
  cVar5 = *(char *)(lVar1 + 0x10);
  if (cVar5 == '\0') {
    __dyn_tls_on_demand_init();
    cVar5 = *(char *)(lVar1 + 0x10);
  }
  if ((*(longlong *)(lVar1 + 0xec0) != 0) && (cVar5 == '\0')) {
    __dyn_tls_on_demand_init();
  }
  local_68 = (undefined8 *)((ulonglong)local_68._4_4_ << 0x20);
  local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
  if (DAT_1803fa668 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_68,&local_70);
    if ((0 < (int)local_68) && (0 < (int)local_70)) {
      fVar17 = (float)(int)local_70;
      fVar18 = (float)(int)local_68;
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar1 + 0xec0);
      *(float *)(lVar2 + 0x30) = fVar18;
      *(float *)(lVar2 + 0x34) = fVar17;
    }
  }
  cVar5 = *(char *)(lVar1 + 0x10);
  if (cVar5 == '\0') {
    __dyn_tls_on_demand_init();
    cVar5 = *(char *)(lVar1 + 0x10);
  }
  fVar17 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x40);
  fVar18 = DAT_180380990;
  if ((0.0 < fVar17) && (fVar18 = fVar17, DAT_1803809ec <= fVar17)) {
    fVar18 = DAT_1803809ec;
  }
  if (cVar5 == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x40) = fVar18;
  FUN_180270230();
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0xec0) + 0xc84) = 0x3f800000;
  FUN_180199890();
  if (DAT_1803fa46f == '\0') {
    FUN_1801e5510();
    puVar4 = DAT_1803fcc70;
    for (puVar9 = DAT_1803fcc68; local_d0 = puVar9, puVar9 != puVar4; puVar9 = puVar9 + 1) {
      FUN_1801eab80(*puVar9);
    }
    FUN_1801e6010();
  }
  iVar7 = DAT_1803e9474;
  LOCK();
  DAT_1803e9474 = 0xffffffff;
  UNLOCK();
  if (((-1 < iVar7) && (DAT_1803fa46f == '\0')) && ((iVar7 == 1) != (bool)DAT_1803fa545)) {
    FUN_1801e5310();
  }
  FUN_1801e7a50(fVar18);
  FUN_1801664d0(DAT_1803fa4e8);
  FUN_18026a940(0,DAT_180380bb0);
  FUN_18026a940(4,0);
  local_80 = 0;
  uStack_78 = 0;
  FUN_18026a810(2,&local_80);
  local_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x40a0000040a00000;
  FUN_180279800(&local_68,0,&local_70);
  cVar5 = FUN_180276630("Debug",0,0x69);
  if (cVar5 != '\0') {
    local_98 = &DAT_1803de098;
    iVar7 = _Mtx_lock(&DAT_1803de098);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
    }
    if (DAT_1803de0e4 == 0x7fffffff) {
      DAT_1803de0e4 = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    local_d8 = DAT_1803de080;
    while (puVar4 = local_d8, local_70 = DAT_1803de088, local_d8 != DAT_1803de088) {
      puVar9 = local_d8;
      if (0xf < (ulonglong)local_d8[3]) {
        puVar9 = (undefined8 *)*local_d8;
      }
      FUN_1802aaae0(puVar9);
      fVar17 = *(float *)(puVar4 + 4);
      *(float *)(puVar4 + 4) = fVar17 - fVar18;
      puVar3 = DAT_1803de088;
      puVar14 = puVar4;
      puVar9 = puVar4;
      if (0.0 < fVar17 - fVar18) {
        local_d8 = puVar4 + 5;
      }
      else {
        while (puVar13 = puVar9 + 5, local_c8 = puVar14, local_c0 = puVar13, puVar13 != puVar3) {
          FUN_18020e8a0(puVar14,puVar13);
          *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar9 + 9);
          puVar14 = puVar14 + 5;
          puVar9 = puVar13;
        }
        local_68 = DAT_1803de088 + -5;
        FUN_18020e450();
        DAT_1803de088 = DAT_1803de088 + -5;
        local_d8 = puVar4;
      }
    }
    _Mtx_unlock(&DAT_1803de098);
  }
  FUN_180278d40();
  FUN_18026abb0(2);
  FUN_18026a890(1);
  lVar2 = local_b8;
  FUN_180272030();
  FUN_180272510();
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + local_b0) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pcVar10 = (char *)(**(longlong **)(*(longlong *)(lVar1 + lVar2) + 0x2060) + 0x58);
  if (*pcVar10 == '\0') {
    pcVar10 = (char *)0x0;
  }
  FUN_1802cfbc0(pcVar10);
  if (((DAT_1803fa590 == 0) || (DAT_1803fa46f != '\0')) ||
     ((DAT_1803fa668 == (longlong *)0x0 ||
      (cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar5 == '\0')))) {
    DAT_1803fa456 = '\0';
    DAT_1804259e0 = '\0';
  }
  else {
    FUN_18026ce20(DAT_1803fa590);
    if (DAT_1803fa456 == '\0') {
      if (((DAT_1804259e0 != '\0') && (pcVar10 = (char *)FUN_18026f780(), pcVar10 != (char *)0x0))
         && ((*pcVar10 != '\0' && (0 < *(int *)(pcVar10 + 4))))) {
        FUN_1802cfbc0(pcVar10);
      }
    }
    else {
      FUN_180272510();
      uVar8 = FUN_18026f780();
      FUN_1802cfbc0(uVar8);
      DAT_1803fa456 = '\0';
      DAT_1804259e0 = '\x01';
    }
  }
  _set_se_translator(local_a8);
  return;
}


