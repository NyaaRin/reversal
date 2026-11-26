// 0x180270230  FUN_180270230
// size=4921 thunk=false
// signature: undefined FUN_180270230()
// status: ok


void FUN_180270230(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  long _Offset;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  FILE *_File;
  size_t sVar13;
  longlong lVar14;
  char cVar15;
  uint uVar16;
  void *pvVar17;
  char *pcVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  size_t _Count;
  longlong *plVar22;
  int iVar23;
  longlong lVar24;
  uint *puVar25;
  byte bVar26;
  float fVar27;
  undefined1 extraout_var [12];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float local_res8;
  float fStackX_c;
  
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar21 + 0xec0);
  uVar16 = *(uint *)(lVar5 + 0x27e8);
  while (uVar16 = uVar16 - 1, -1 < (int)uVar16) {
    pvVar17 = (void *)((ulonglong)uVar16 * 0x20 + *(longlong *)(lVar5 + 0x27f0));
    if (*(int *)((longlong)pvVar17 + 4) == 7) {
      memmove(pvVar17,(void *)((longlong)pvVar17 + 0x20),
              ((longlong)*(int *)(lVar5 + 0x27e8) - (ulonglong)uVar16) * 0x20 - 0x20);
      *(int *)(lVar5 + 0x27e8) = *(int *)(lVar5 + 0x27e8) + -1;
    }
  }
  lVar19 = *(longlong *)(lVar5 + 0x27f0);
  lVar24 = (longlong)*(int *)(lVar5 + 0x27e8) * 0x20 + lVar19;
  for (; lVar19 != lVar24; lVar19 = lVar19 + 0x20) {
    if (*(int *)(lVar19 + 4) == 0) {
      (**(code **)(lVar19 + 0x10))(lVar5,lVar19);
    }
  }
  cVar15 = *(char *)(lVar21 + 0x10);
  if (cVar15 == '\0') {
    __dyn_tls_on_demand_init();
    cVar15 = *(char *)(lVar21 + 0x10);
  }
  lVar19 = *(longlong *)(lVar21 + 0xec0);
  uVar16 = *(uint *)(lVar19 + 0x28);
  if ((uVar16 & 4) != 0) {
    uVar16 = uVar16 & 0xfffffffb;
    *(undefined1 *)(lVar19 + 0x72) = 1;
    *(uint *)(lVar19 + 0x28) = uVar16;
  }
  if ((uVar16 & 8) != 0) {
    *(undefined1 *)(lVar19 + 0x73) = 0;
    *(uint *)(lVar19 + 0x28) = uVar16 & 0xfffffff7;
  }
  if ((*(longlong *)(lVar19 + 0xbe8) != 0) &&
     ((*(code **)(lVar19 + 0xc00) == (code *)0x0 || (*(code **)(lVar19 + 0xc00) == FUN_180288cb0))))
  {
    *(undefined1 **)(lVar19 + 0xc00) = &LAB_18027e440;
  }
  if ((*(longlong *)(lVar19 + 0xbf0) != 0) &&
     ((*(code **)(lVar19 + 0xc08) == (code *)0x0 || (*(code **)(lVar19 + 0xc08) == FUN_180288de0))))
  {
    *(undefined1 **)(lVar19 + 0xc08) = &LAB_18027e460;
  }
  if (cVar15 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar21 + 0xec0);
  if (*(char *)(lVar19 + 0x27a0) == '\0') {
    if ((*(longlong *)(lVar19 + 0x48) != 0) &&
       (_File = (FILE *)FUN_180268a40(*(longlong *)(lVar19 + 0x48),&DAT_1803589f0),
       _File != (FILE *)0x0)) {
      _Offset = ftell(_File);
      if ((_Offset != -1) && (iVar8 = fseek(_File,0,2), iVar8 == 0)) {
        lVar9 = ftell(_File);
        _Count = (size_t)lVar9;
        if ((((lVar9 != -1) && (iVar8 = fseek(_File,_Offset,0), iVar8 == 0)) &&
            (_Count != 0xffffffffffffffff)) &&
           (pvVar17 = (void *)FUN_18026f580(_Count), pvVar17 != (void *)0x0)) {
          sVar13 = fread(pvVar17,1,_Count,_File);
          if (sVar13 == _Count) {
            fclose(_File);
            if (_Count != 0) {
              FUN_180288150(pvVar17,_Count);
            }
            FUN_18026f680(pvVar17);
          }
          else {
            fclose(_File);
            FUN_18026f680(pvVar17);
          }
          goto LAB_180270497;
        }
      }
      fclose(_File);
    }
LAB_180270497:
    *(undefined1 *)(lVar19 + 0x27a0) = 1;
  }
  iVar8 = 0;
  if ((0.0 < *(float *)(lVar19 + 0x27a4)) &&
     (fVar27 = *(float *)(lVar19 + 0x27a4) - *(float *)(lVar19 + 0x40),
     *(float *)(lVar19 + 0x27a4) = fVar27, fVar27 <= 0.0)) {
    if (*(longlong *)(lVar19 + 0x48) == 0) {
      *(undefined1 *)(lVar19 + 0xd4) = 1;
    }
    else {
      FUN_180288390();
    }
    *(undefined4 *)(lVar19 + 0x27a4) = 0;
  }
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  *(undefined2 *)(lVar5 + 0x26d6) = 0;
  *(undefined4 *)(lVar5 + 0x1510) = 0;
  *(double *)(lVar5 + 0x10) = (double)*(float *)(lVar5 + 0x40) + *(double *)(lVar5 + 0x10);
  FUN_18028a770(lVar5 + 0x26f0,0);
  fVar27 = DAT_180381308;
  *(float *)(lVar5 + 0x2ad8) =
       (*(float *)(lVar5 + 0x40) -
       *(float *)(lVar5 + 0x29e0 + (longlong)*(int *)(lVar5 + 0x2ad0) * 4)) +
       *(float *)(lVar5 + 0x2ad8);
  *(float *)(lVar5 + 0x29e0 + (longlong)*(int *)(lVar5 + 0x2ad0) * 4) = *(float *)(lVar5 + 0x40);
  iVar10 = *(int *)(lVar5 + 0x2ad4) + 1;
  *(int *)(lVar5 + 0x2ad0) = (*(int *)(lVar5 + 0x2ad0) + 1) % 0x3c;
  iVar23 = 0x3c;
  if (iVar10 < 0x3c) {
    iVar23 = iVar10;
  }
  *(int *)(lVar5 + 0x2ad4) = iVar23;
  fVar31 = fVar27;
  if (0.0 < *(float *)(lVar5 + 0x2ad8)) {
    fVar31 = DAT_180380bb0 / (*(float *)(lVar5 + 0x2ad8) / (float)iVar23);
  }
  *(float *)(lVar5 + 0xd8) = fVar31;
  FUN_18028a4e0(lVar5 + 0x14a8);
  FUN_18027d7d0(*(undefined1 *)(lVar5 + 0x7a));
  cVar15 = '\0';
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar21 + 0xec0);
  lVar24 = **(longlong **)(lVar19 + 0x2060);
  *(undefined8 *)(lVar24 + 4) = 5;
  *(undefined4 *)(lVar24 + 0xc) = 0;
  *(undefined8 *)(lVar24 + 0x10) = *(undefined8 *)(lVar19 + 0x30);
  *(undefined8 *)(lVar24 + 0x18) = *(undefined8 *)(lVar19 + 0x38);
  fVar31 = fVar27;
  if ((*(char *)(lVar19 + 0x1fc1) == '\0') && (0.0 <= *(float *)(lVar19 + 0x84))) {
    fVar31 = (float)*(double *)(lVar19 + 0x10) - *(float *)(lVar19 + 0x84);
  }
  plVar22 = *(longlong **)(lVar19 + 0x2060);
  plVar2 = plVar22 + *(int *)(lVar19 + 0x2058);
  for (; plVar22 != plVar2; plVar22 = plVar22 + 1) {
    lVar19 = *plVar22;
    uVar3 = *(undefined8 *)(lVar19 + 0xd0);
    fVar29 = (float)((ulonglong)uVar3 >> 0x20);
    uVar4 = *(undefined8 *)(lVar19 + 0xd8);
    *(undefined8 *)(lVar19 + 0xc0) = uVar3;
    *(float *)(lVar19 + 0x20) = *(float *)(lVar19 + 8) + (float)uVar3;
    *(undefined8 *)(lVar19 + 0xd8) = 0;
    *(float *)(lVar19 + 0x24) = fVar29 + *(float *)(lVar19 + 0xc);
    *(undefined8 *)(lVar19 + 0xd0) = 0;
    *(undefined8 *)(lVar19 + 200) = uVar4;
    fVar30 = (*(float *)(lVar19 + 0x14) - fVar29) - (float)((ulonglong)uVar4 >> 0x20);
    fVar29 = 0.0;
    if (0.0 <= fVar30) {
      fVar29 = fVar30;
    }
    fVar30 = (*(float *)(lVar19 + 0x10) - *(float *)(lVar19 + 0xc0)) - *(float *)(lVar19 + 200);
    *(float *)(lVar19 + 0x2c) = fVar29;
    fVar29 = 0.0;
    if (0.0 <= fVar30) {
      fVar29 = fVar30;
    }
    *(float *)(lVar19 + 0x28) = fVar29;
    if ((*(float *)(lVar19 + 0x40) <= fVar31 && fVar31 != *(float *)(lVar19 + 0x40)) &&
       (lVar24 = *(longlong *)(lVar19 + 0x48), lVar24 != 0)) {
      FUN_180291d90(lVar24);
      FUN_18026f680(lVar24);
      *(undefined8 *)(lVar19 + 0x48) = 0;
    }
    if ((*(float *)(lVar19 + 0x44) <= fVar31 && fVar31 != *(float *)(lVar19 + 0x44)) &&
       (lVar24 = *(longlong *)(lVar19 + 0x50), lVar24 != 0)) {
      FUN_180291d90(lVar24);
      FUN_18026f680(lVar24);
      *(undefined8 *)(lVar19 + 0x50) = 0;
    }
  }
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar21 + 0xec0);
  plVar22 = *(longlong **)(lVar19 + 0x1220);
  uVar16 = *(uint *)(lVar19 + 0x2c);
  plVar2 = plVar22 + *(int *)(lVar19 + 0x1218);
  for (; plVar22 != plVar2; plVar22 = plVar22 + 1) {
    if (*(longlong *)(*plVar22 + 0x2d8) == lVar19) {
      FUN_180297b70(*plVar22,*(undefined4 *)(lVar19 + 4),(byte)(uVar16 >> 4) & 1);
    }
  }
  FUN_18026fff0();
  FUN_18027a250();
  *(undefined1 *)(lVar5 + 1) = 1;
  plVar22 = *(longlong **)(lVar5 + 0x2060);
  plVar2 = plVar22 + *(int *)(lVar5 + 0x2058);
  for (; plVar22 != plVar2; plVar22 = plVar22 + 1) {
    *(undefined1 *)(*plVar22 + 0x58) = 0;
  }
  if ((*(char *)(lVar5 + 0x2298) != '\0') &&
     (iVar23 = *(int *)(lVar5 + 0x22b4), iVar23 == *(int *)(lVar5 + 0x1594))) {
    if (*(char *)(lVar21 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar19 = *(longlong *)(lVar21 + 0xec0);
    if (*(int *)(lVar19 + 0x1594) == iVar23) {
      *(int *)(lVar19 + 0x1598) = iVar23;
    }
    if (*(int *)(lVar19 + 0x15c4) == iVar23) {
      *(undefined1 *)(lVar19 + 0x15cd) = 1;
    }
  }
  if ((((*(char *)(lVar5 + 0xa1) != '\0') && (*(char *)(lVar5 + 0x11c) != '\0')) ||
      (*(undefined4 *)(lVar5 + 0x1574) = 0, *(char *)(lVar5 + 0xa1) != '\0')) &&
     (1 < *(int *)(lVar5 + 0x1584))) {
    *(undefined4 *)(lVar5 + 0x1574) = *(undefined4 *)(lVar5 + 0x1580);
  }
  iVar23 = *(int *)(lVar5 + 0x157c);
  if (*(int *)(lVar5 + 0x1580) == 0) {
    *(undefined4 *)(lVar5 + 0x1588) = 0;
LAB_180270887:
    *(undefined4 *)(lVar5 + 0x158c) = 0;
LAB_18027088e:
    if (iVar23 == 0) goto LAB_1802708ca;
    fVar31 = *(float *)(lVar5 + 0x40);
    *(float *)(lVar5 + 0x1588) = fVar31 + *(float *)(lVar5 + 0x1588);
    if (*(int *)(lVar5 + 0x1594) != iVar23) {
      *(float *)(lVar5 + 0x158c) = fVar31 + *(float *)(lVar5 + 0x158c);
    }
  }
  else {
    if (iVar23 != 0) {
      if (*(int *)(lVar5 + 0x1594) == iVar23) goto LAB_180270887;
      goto LAB_18027088e;
    }
LAB_1802708ca:
    fVar31 = *(float *)(lVar5 + 0x40);
  }
  puVar25 = (uint *)(lVar5 + 0x1594);
  uVar16 = *puVar25;
  *(int *)(lVar5 + 0x1580) = iVar23;
  *(undefined4 *)(lVar5 + 0x1584) = 0;
  *(undefined4 *)(lVar5 + 0x157c) = 0;
  *(undefined2 *)(lVar5 + 0x1590) = 0;
  if (((uVar16 != 0) && (*(uint *)(lVar5 + 0x1598) != uVar16)) &&
     (*(uint *)(lVar5 + 0x15c0) == uVar16)) {
    if ((*(byte *)(lVar5 + 0x28e4) & 2) != 0) {
      FUN_180289170("NewFrame(): ClearActiveID() 0x%08X because it isn\'t marked alive anymore!\n");
    }
    FUN_18026ea90(0,0);
    fVar31 = *(float *)(lVar5 + 0x40);
  }
  uVar16 = *puVar25;
  if (uVar16 != 0) {
    *(float *)(lVar5 + 0x159c) = fVar31 + *(float *)(lVar5 + 0x159c);
  }
  *(uint *)(lVar5 + 0x15c0) = uVar16;
  *(uint *)(lVar5 + 0x1598) = 0;
  *(undefined1 *)(lVar5 + 0x15a5) = 0;
  *(float *)(lVar5 + 0x15dc) = fVar31 + *(float *)(lVar5 + 0x15dc);
  *(undefined1 *)(lVar5 + 0x15a0) = 0;
  if ((*(uint *)(lVar5 + 0x2638) != 0) && (uVar16 != *(uint *)(lVar5 + 0x2638))) {
    *(undefined4 *)(lVar5 + 0x2638) = 0;
  }
  if ((*(int *)(lVar5 + 0x2634) != 0) && (*(int *)(lVar5 + 0x2634) != *(int *)(lVar5 + 0x15c4))) {
    *(undefined4 *)(lVar5 + 0x2634) = 0;
  }
  if (uVar16 == 0) {
    *(undefined4 *)(lVar5 + 0x1ea8) = 0;
    *(undefined1 *)(lVar5 + 0x1eac) = 0;
  }
  if (*(int *)(lVar5 + 0x15c8) < *(int *)(lVar5 + 4)) {
    *(undefined4 *)(lVar5 + 0x15c4) = 0;
  }
  iVar23 = *(int *)(lVar5 + 0x24f0);
  *(undefined1 *)(lVar5 + 0x15cd) = 0;
  if (iVar23 == 0) {
    *(undefined4 *)(lVar5 + 0x2500) = 0;
  }
  else if (*(float *)(lVar5 + 0x11fc) <= *(float *)(lVar5 + 0x250c)) {
    *(int *)(lVar5 + 0x2500) = iVar23;
  }
  if (*(longlong *)(lVar5 + 0x1528) == 0) {
    *(undefined4 *)(lVar5 + 0x2504) = 0;
  }
  else if (*(float *)(lVar5 + 0x11fc) <= *(float *)(lVar5 + 0x250c)) {
    *(undefined4 *)(lVar5 + 0x2504) = *(undefined4 *)(*(longlong *)(lVar5 + 0x1528) + 0x10);
  }
  *(int *)(lVar5 + 0x24f4) = iVar23;
  fVar31 = DAT_180380a58;
  if (iVar23 == 0) {
    if (0.0 < *(float *)(lVar5 + 0x24f8)) {
      fVar29 = *(float *)(lVar5 + 0x40);
      fVar30 = fVar29 + *(float *)(lVar5 + 0x24fc);
      *(float *)(lVar5 + 0x24fc) = fVar30;
      if (fVar31 <= fVar29 + fVar29) {
        fVar31 = fVar29 + fVar29;
      }
      if (fVar31 <= fVar30) {
        *(undefined8 *)(lVar5 + 0x24f8) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(lVar5 + 0x24fc) = 0;
    *(undefined4 *)(lVar5 + 0x24f0) = 0;
    *(float *)(lVar5 + 0x24f8) = *(float *)(lVar5 + 0x24f8) + *(float *)(lVar5 + 0x40);
  }
  FUN_18027c070();
  *(undefined4 *)(lVar5 + 0x2320) = *(undefined4 *)(lVar5 + 0x231c);
  *(undefined4 *)(lVar5 + 0x2314) = *(undefined4 *)(lVar5 + 0x2310);
  *(undefined4 *)(lVar5 + 0x2310) = 0;
  *(undefined8 *)(lVar5 + 0x2318) = 0x7f7fffff;
  *(undefined2 *)(lVar5 + 0x2299) = 0;
  *(undefined4 *)(lVar5 + 9000) = 0;
  if (*(char *)(lVar5 + 0x2298) != '\0') {
    uVar16 = *puVar25;
    if (uVar16 == 0) {
      uVar20 = 0xffffffff;
      pcVar18 = "##DragDropCancelHandler";
      bVar26 = 0x23;
      do {
        pcVar18 = pcVar18 + 1;
        if (((bVar26 == 0x23) && (*pcVar18 == 0x23)) && (pcVar18[1] == 0x23)) {
          uVar20 = 0xffffffff;
          pcVar18 = pcVar18 + 2;
        }
        else {
          uVar20 = (ulonglong)
                   ((uint)(uVar20 >> 8) ^
                   *(uint *)(&DAT_180331380 + (uVar20 & 0xff ^ (ulonglong)bVar26) * 4));
        }
        bVar26 = *pcVar18;
      } while (bVar26 != 0);
      uVar16 = ~(uint)uVar20;
    }
    if (*(char *)(lVar21 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar19 = *(longlong *)(lVar21 + 0xec0);
    if (0xfffffffd < uVar16 - 1) {
      uVar16 = FUN_18027b5c0(uVar16);
    }
    if ((((*(byte *)(lVar19 + 0x1eb8) & 0x40) == 0) &&
        (cVar7 = FUN_18027b7f0(0x20e,0x1000,uVar16), cVar7 != '\0')) &&
       (cVar7 = FUN_18027e200(0x20e,0x1000,uVar16), cVar7 != '\0')) {
      FUN_18026ea90(0,0);
      FUN_180287530();
    }
  }
  *(undefined8 *)(lVar5 + 0x26d8) = 0;
  FUN_180284460();
  FUN_18027c660();
  fVar31 = DAT_180380bc0;
  if ((*(char *)(lVar5 + 0x1fc1) != '\0') || (*(float *)(lVar5 + 0x84) < 0.0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
    fVar27 = (float)*(double *)(lVar5 + 0x10) - *(float *)(lVar5 + 0x84);
  }
  plVar22 = *(longlong **)(lVar5 + 0x14c8);
  plVar2 = plVar22 + *(int *)(lVar5 + 0x14c0);
  for (; plVar22 != plVar2; plVar22 = plVar22 + 1) {
    lVar19 = *plVar22;
    cVar7 = *(char *)(lVar19 + 0xcc);
    *(char *)(lVar19 + 0xcd) = cVar7;
    *(undefined1 *)(lVar19 + 0xcc) = 0;
    *(undefined1 *)(lVar19 + 0xce) = 0;
    *(undefined2 *)(lVar19 + 0xdc) = *(undefined2 *)(lVar19 + 0xda);
    *(undefined2 *)(lVar19 + 0xda) = 0;
    if ((((cVar7 == '\0') || (bVar6)) && (*(char *)(lVar19 + 0x434) == '\0')) &&
       (*(float *)(lVar19 + 0x294) <= fVar27 && fVar27 != *(float *)(lVar19 + 0x294))) {
      lVar24 = *(longlong *)(lVar19 + 0x2c8);
      *(undefined1 *)(lVar19 + 0x434) = 1;
      iVar10 = (int)((float)*(int *)(lVar24 + 0x10) * fVar31);
      iVar23 = *(int *)(lVar24 + 0x14);
      if (iVar10 < *(int *)(lVar24 + 0x14)) {
        iVar23 = iVar10;
      }
      *(int *)(lVar19 + 0x42c) = iVar23;
      iVar10 = (int)((float)*(int *)(lVar24 + 0x20) * fVar31);
      iVar23 = *(int *)(lVar24 + 0x24);
      if (iVar10 < *(int *)(lVar24 + 0x24)) {
        iVar23 = iVar10;
      }
      *(int *)(lVar19 + 0x430) = iVar23;
      if (*(longlong *)(lVar19 + 0x110) != 0) {
        *(undefined8 *)(lVar19 + 0x108) = 0;
        FUN_18026f680();
        *(undefined8 *)(lVar19 + 0x110) = 0;
      }
      FUN_1802921b0(*(undefined8 *)(lVar19 + 0x2c8));
      if (*(longlong *)(lVar19 + 0x1b8) != 0) {
        *(undefined8 *)(lVar19 + 0x1b0) = 0;
        FUN_18026f680();
        *(undefined8 *)(lVar19 + 0x1b8) = 0;
      }
      if (*(longlong *)(lVar19 + 0x200) != 0) {
        *(undefined8 *)(lVar19 + 0x1f8) = 0;
        FUN_18026f680();
        *(undefined8 *)(lVar19 + 0x200) = 0;
      }
      if (*(longlong *)(lVar19 + 0x210) != 0) {
        *(undefined8 *)(lVar19 + 0x208) = 0;
        FUN_18026f680();
        *(undefined8 *)(lVar19 + 0x210) = 0;
      }
    }
  }
  FUN_18026fbc0(lVar5 + 0x100);
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar21 + 0xec0);
  if (*(longlong *)(lVar19 + 0x1540) == 0) {
    if (((*(longlong *)(lVar19 + 0x15b8) == 0) ||
        (*(int *)(*(longlong *)(lVar19 + 0x15b8) + 0x8c) != *(int *)(lVar19 + 0x1594))) ||
       (FUN_18027f100(), *(char *)(lVar19 + 0x108) != '\0')) goto LAB_180270e69;
  }
  else {
    FUN_18027f100(*(undefined4 *)(lVar19 + 0x1594));
    if (*(char *)(lVar19 + 0x108) != '\0') {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar19 + 0x1540) + 0x3c0);
      lVar24 = lVar19;
      if ((float *)(lVar19 + 0x100) == (float *)0x0) {
        if (*(char *)(lVar21 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar24 = *(longlong *)(lVar21 + 0xec0);
      }
      if ((DAT_180381444 <= *(float *)(lVar24 + 0x100)) &&
         (DAT_180381444 <= *(float *)(lVar24 + 0x104))) {
        local_res8 = *(float *)(lVar19 + 0x100) - *(float *)(lVar19 + 0x15ac);
        fStackX_c = *(float *)(lVar19 + 0x104) - *(float *)(lVar19 + 0x15b0);
        FUN_1802795a0(uVar3,&local_res8,1);
        FUN_1802827b0(*(undefined8 *)(lVar19 + 0x1540),0);
        goto LAB_180270e69;
      }
    }
    if (*(char *)(lVar21 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(undefined8 *)(*(longlong *)(lVar21 + 0xec0) + 0x1540) = 0;
  }
  FUN_18026ea90(0,0);
LAB_180270e69:
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar31 = DAT_180380f40;
  uVar16 = *(int *)(*(longlong *)(lVar21 + 0xec0) + 0x2028) - 1;
  if (-1 < (int)uVar16) {
    do {
      lVar19 = *(longlong *)
                ((ulonglong)uVar16 * 0x38 + 8 +
                *(longlong *)(*(longlong *)(lVar21 + 0xec0) + 0x2030));
      if ((lVar19 != 0) && ((*(uint *)(lVar19 + 0x14) & 0x8000000) != 0)) goto LAB_180270ed5;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
  }
  if ((*(longlong *)(lVar5 + 0x2258) == 0) || (*(float *)(lVar5 + 0x2274) <= 0.0)) {
    fVar29 = *(float *)(lVar5 + 0x2294) - *(float *)(lVar5 + 0x40) * DAT_180380fcc;
    if (fVar29 <= 0.0) {
      fVar29 = 0.0;
    }
  }
  else {
LAB_180270ed5:
    fVar29 = *(float *)(lVar5 + 0x40) * DAT_180380f40 + *(float *)(lVar5 + 0x2294);
    if (DAT_180380bb0 <= fVar29) {
      fVar29 = DAT_180380bb0;
    }
  }
  *(float *)(lVar5 + 0x2294) = fVar29;
  *(undefined8 *)(lVar5 + 0x277c) = *(undefined8 *)(lVar5 + 0x2768);
  *(undefined8 *)(lVar5 + 0x2784) = *(undefined8 *)(lVar5 + 0x2770);
  *(undefined4 *)(lVar5 + 0x278c) = *(undefined4 *)(lVar5 + 0x2778);
  *(undefined4 *)(lVar5 + 0x2508) = 0;
  *(undefined8 *)(lVar5 + 0x2ae0) = 0xffffffffffffffff;
  *(undefined4 *)(lVar5 + 0x2adc) = 0xffffffff;
  *(undefined2 *)(lVar5 + 0x2768) = 0;
  FUN_18027cd10();
  iVar23 = iVar8;
  if (0 < *(int *)(lVar5 + 0x23b0)) {
    do {
      fVar29 = *(float *)(*(longlong *)(lVar5 + 0x23b8) + (longlong)iVar23 * 4);
      if ((0.0 <= fVar29) && (fVar29 < fVar27)) {
        lVar19 = (longlong)iVar23 * 0x250 + *(longlong *)(lVar5 + 0x2390);
        if (*(char *)(lVar21 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar24 = *(longlong *)(lVar21 + 0xec0);
        *(undefined8 *)(lVar19 + 0x1f0) = 0;
        if (*(longlong *)(lVar19 + 0x1e8) != 0) {
          *(undefined8 *)(lVar19 + 0x1e0) = 0;
          FUN_18026f680();
          *(undefined8 *)(lVar19 + 0x1e8) = 0;
        }
        *(undefined1 *)(lVar19 + 0x23c) = 1;
        if (*(longlong *)(lVar19 + 0x198) != 0) {
          *(undefined8 *)(lVar19 + 400) = 0;
          FUN_18026f680();
          *(undefined8 *)(lVar19 + 0x198) = 0;
        }
        *(undefined1 *)(lVar19 + 0x24b) = 1;
        iVar10 = iVar8;
        if (0 < *(int *)(lVar19 + 0x6c)) {
          do {
            lVar14 = (longlong)iVar10;
            iVar10 = iVar10 + 1;
            *(undefined2 *)(lVar14 * 0x74 + 0x54 + *(longlong *)(lVar19 + 0x18)) = 0xffff;
          } while (iVar10 < *(int *)(lVar19 + 0x6c));
        }
        *(undefined4 *)
         (*(longlong *)(lVar24 + 0x23b8) +
         (longlong)(int)((lVar19 - *(longlong *)(lVar24 + 0x2390)) / 0x250) * 4) = 0xbf800000;
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(lVar5 + 0x23b0));
  }
  lVar19 = *(longlong *)(lVar5 + 0x2380);
  lVar24 = (longlong)*(int *)(lVar5 + 0x2378) * 0x88 + lVar19;
  for (; lVar19 != lVar24; lVar19 = lVar19 + 0x88) {
    if ((0.0 <= *(float *)(lVar19 + 8)) && (*(float *)(lVar19 + 8) < fVar27)) {
      FUN_180296c50(lVar19 + 0x28);
      *(undefined4 *)(lVar19 + 8) = 0xbf800000;
    }
  }
  if (*(char *)(lVar5 + 0x1fc1) != '\0') {
    if (*(char *)(lVar21 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar19 = *(longlong *)(lVar21 + 0xec0);
    if (*(longlong *)(lVar19 + 0x2010) != 0) {
      *(undefined8 *)(lVar19 + 0x2008) = 0;
      FUN_18026f680();
      *(undefined8 *)(lVar19 + 0x2010) = 0;
    }
    if (*(longlong *)(lVar19 + 0x2020) != 0) {
      *(undefined8 *)(lVar19 + 0x2018) = 0;
      FUN_18026f680();
      *(undefined8 *)(lVar19 + 0x2020) = 0;
    }
    if (*(longlong *)(lVar19 + 0x25a0) != 0) {
      *(undefined8 *)(lVar19 + 0x2598) = 0;
      FUN_18026f680();
      *(undefined8 *)(lVar19 + 0x25a0) = 0;
    }
    *(undefined4 *)(lVar19 + 0x25a8) = 0;
    *(undefined4 *)(lVar19 + 0x24b0) = 0;
    FUN_180289cc0(lVar19 + 0x24b8);
    FUN_1802a9890();
    plVar22 = *(longlong **)(lVar19 + 0x1220);
    plVar2 = plVar22 + *(int *)(lVar19 + 0x1218);
    for (; plVar22 != plVar2; plVar22 = plVar22 + 1) {
      lVar19 = *plVar22;
      lVar24 = *(longlong *)(lVar19 + 0x2b0);
      FUN_18029afd0(lVar19,1);
      FUN_18029ba70(&local_res8,lVar19);
      if (((*(int *)(lVar24 + 0x9c) != 0) ||
          (local_res8 != *(float *)(*(longlong *)(lVar19 + 0x38) + 0x1c))) ||
         (fStackX_c != *(float *)(*(longlong *)(lVar19 + 0x38) + 0x20))) {
        FUN_18029b3c0(lVar19);
      }
    }
  }
  *(undefined1 *)(lVar5 + 0x1fc1) = 0;
  if ((*(longlong *)(lVar5 + 0x2070) != 0) &&
     (*(char *)(*(longlong *)(lVar5 + 0x2070) + 0xcd) == '\0')) {
    if (*(char *)(lVar21 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar16 = *(int *)(*(longlong *)(lVar21 + 0xec0) + 0x14d0) - 1;
    if (-1 < (int)uVar16) {
      do {
        lVar19 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar21 + 0xec0) + 0x14d8) + (ulonglong)uVar16 * 8);
        if (((lVar19 != 0) && (*(char *)(lVar19 + 0xcd) != '\0')) &&
           ((*(uint *)(lVar19 + 0x14) & 0x10200) != 0x10200)) goto LAB_18027124c;
        uVar16 = uVar16 - 1;
      } while (-1 < (int)uVar16);
    }
    lVar19 = 0;
LAB_18027124c:
    FUN_1802827b0(lVar19,1);
  }
  FUN_18028a2e0(lVar5 + 0x14f0,0);
  FUN_18028a000(lVar5 + 0x2038,0);
  piVar1 = (int *)(lVar5 + 0x2008);
  FUN_18028a6d0(piVar1);
  iVar23 = *(int *)(lVar5 + 0x200c);
  if (*piVar1 == iVar23) {
    iVar10 = *piVar1 + 1;
    if (iVar23 == 0) {
      iVar11 = 8;
    }
    else {
      iVar11 = iVar23 / 2 + iVar23;
    }
    if (iVar10 < iVar11) {
      iVar10 = iVar11;
    }
    if (iVar23 < iVar10) {
      pvVar17 = (void *)FUN_18026f580((longlong)iVar10 << 2);
      if (*(void **)(lVar5 + 0x2010) != (void *)0x0) {
        memcpy(pvVar17,*(void **)(lVar5 + 0x2010),(longlong)*piVar1 << 2);
        FUN_18026f680(*(undefined8 *)(lVar5 + 0x2010));
      }
      *(void **)(lVar5 + 0x2010) = pvVar17;
      *(int *)(lVar5 + 0x200c) = iVar10;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar5 + 0x2010) + (longlong)*piVar1 * 4) = 0x10;
  iVar23 = *piVar1;
  *piVar1 = iVar23 + 1;
  *(undefined4 *)(lVar5 + 0x1eb8) =
       *(undefined4 *)(*(longlong *)(lVar5 + 0x2010) + (longlong)iVar23 * 4);
  FUN_18028a0b0(lVar5 + 0x2018,0);
  FUN_1802896c0();
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar21 + 0xec0);
  if ((*(int *)(lVar19 + 0x299c) + 1 == *(int *)(lVar19 + 4)) &&
     (iVar8 = *(int *)(lVar19 + 0x1580), iVar8 == 0)) {
    iVar8 = *(int *)(lVar19 + 0x1594);
  }
  uVar12 = FUN_1802898c0(lVar19 + 0x2960,iVar8);
  *(undefined4 *)(lVar19 + 0x1578) = uVar12;
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar21 + 0xec0);
  if (0.0 < *(float *)(lVar19 + 0x2928)) {
    lVar24 = ((longlong)*(int *)(lVar19 + 0x1fc4) + 0xdb) * 0x10 + lVar19;
    fVar27 = cosf(*(float *)(lVar19 + 0x2928) * fVar31);
    auVar28._0_4_ = fVar27 * DAT_180380ac0 + DAT_180380ac0;
    auVar28._4_12_ = extraout_var;
    FUN_180269040(auVar28._0_8_,DAT_180380ac0,DAT_180380ac0,lVar24,lVar24 + 4,lVar24 + 8);
    *(undefined4 *)(lVar19 + 0xdbc + (longlong)*(int *)(lVar19 + 0x1fc4) * 0x10) = 0x3f800000;
    fVar27 = *(float *)(lVar19 + 0x2928) - *(float *)(lVar19 + 0x40);
    *(float *)(lVar19 + 0x2928) = fVar27;
    if (fVar27 <= 0.0) {
      FUN_180289100();
    }
  }
  if ((*(char *)(lVar5 + 0x2919) != '\0') &&
     (cVar7 = *(char *)(lVar5 + 0x2919) + -1, *(char *)(lVar5 + 0x2919) = cVar7, cVar7 == '\0')) {
    *(undefined4 *)(lVar5 + 0x1ebc) = 0;
    *(undefined1 *)(lVar5 + 0x291a) = 0;
  }
  if ((*(char *)(lVar5 + 0x2918) != '\0') &&
     (cVar7 = *(char *)(lVar5 + 0x2918) + -1, *(char *)(lVar5 + 0x2918) = cVar7, cVar7 == '\0')) {
    FUN_180289170("(Debug Log: Auto-disabled some ImGuiDebugLogFlags after 2 frames)\n");
    uVar16 = *(uint *)(lVar5 + 0x2914);
    *(undefined4 *)(lVar5 + 0x2914) = 0;
    *(uint *)(lVar5 + 0x28e4) = *(uint *)(lVar5 + 0x28e4) & ~uVar16;
  }
  *(undefined1 *)(lVar5 + 2) = 1;
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar21 = *(longlong *)(lVar21 + 0xec0);
  *(uint *)(lVar21 + 0x1f48) = *(uint *)(lVar21 + 0x1f48) | 2;
  *(undefined4 *)(lVar21 + 0x1f68) = 0x43c80000;
  *(undefined4 *)(lVar21 + 0x1f6c) = 0x43c80000;
  *(undefined4 *)(lVar21 + 0x1f50) = 4;
  FUN_180276630("Debug##Default",0,0);
  *(undefined4 *)(lVar5 + 0x28bc) = 0;
  FUN_18027e480(lVar5 + 0x28c0);
  if (*(char *)(lVar5 + 0xa4) == '\0') {
    cVar15 = -1;
  }
  else if (*(char *)(lVar5 + 0x2920) != -1) {
    uVar16 = *(uint *)(lVar5 + 4) & 0x80000003;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
    }
    iVar8 = (uint)(uVar16 == 0) + (int)*(char *)(lVar5 + 0x2920);
    cVar15 = (char)iVar8 + (char)(iVar8 / 10) * -10;
  }
  *(char *)(lVar5 + 0x2920) = cVar15;
  lVar21 = *(longlong *)(lVar5 + 0x27f0);
  lVar19 = (longlong)*(int *)(lVar5 + 0x27e8) * 0x20 + lVar21;
  for (; lVar21 != lVar19; lVar21 = lVar21 + 0x20) {
    if (*(int *)(lVar21 + 4) == 1) {
      (**(code **)(lVar21 + 0x10))(lVar5,lVar21);
    }
  }
  return;
}


