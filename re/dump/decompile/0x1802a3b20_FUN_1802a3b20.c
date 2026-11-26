// 0x1802a3b20  FUN_1802a3b20
// size=2945 thunk=false
// signature: undefined FUN_1802a3b20()
// status: ok


void FUN_1802a3b20(void)

{
  int *piVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  void *pvVar16;
  undefined1 uVar17;
  char cVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  int *piVar26;
  longlong lVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_res8;
  int *local_res10;
  ulonglong local_res18;
  
  uVar22 = (ulonglong)_tls_index;
  lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar22 * 8);
  local_res18 = uVar22;
  if (*(char *)(lVar27 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar27 + 0xec0);
  lVar10 = *(longlong *)(lVar9 + 0x2368);
  if (lVar10 == 0) {
    FUN_18027e9c0("EndTable() call should only be done while in BeginTable() scope!");
    return;
  }
  if (*(char *)(lVar10 + 0x239) == '\0') {
    FUN_1802a2470(lVar10);
  }
  local_res8 = *(longlong *)(lVar10 + 0x10);
  uVar24 = *(uint *)(lVar10 + 4);
  lVar11 = *(longlong *)(lVar10 + 0x188);
  lVar12 = *(longlong *)(lVar10 + 0x180);
  if (*(char *)(lVar10 + 0x23a) != '\0') {
    FUN_1802a4b70(lVar10);
  }
  if (((uVar24 & 0x20) != 0) && (*(short *)(lVar10 + 0x20a) != -1)) {
    if (*(char *)(lVar27 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if ((*(int *)(*(longlong *)(lVar27 + 0xec0) + 0x157c) == 0) &&
       (*(int *)(*(longlong *)(lVar27 + 0xec0) + 0x1580) == 0)) {
      if (*(char *)(lVar27 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(char *)(*(longlong *)(lVar27 + 0xec0) + 0xb4f) != '\0') {
        if (*(char *)(lVar27 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if (*(char *)(*(longlong *)(lVar27 + 0xec0) + 0x1ce0) == '\0') {
          FUN_1802a7e20((int)*(short *)(lVar10 + 0x20a));
        }
      }
    }
  }
  if (*(short *)(lVar10 + 0x78) == 0) {
    piVar26 = (int *)(lVar10 + 0x1a8);
  }
  else {
    piVar26 = (int *)(*(longlong *)(lVar10 + 0x1c8) +
                     (longlong)(*(short *)(lVar10 + 0x78) + -1) * 0x18);
  }
  *(undefined8 *)(lVar11 + 0x148) = *(undefined8 *)(local_res8 + 0x60);
  *(undefined8 *)(lVar11 + 0x140) = *(undefined8 *)(local_res8 + 0x68);
  *(undefined8 *)(lVar11 + 0x130) = *(undefined8 *)(local_res8 + 0x70);
  local_res10 = piVar26;
  fVar29 = ceilf(*(float *)(lVar10 + 0x80));
  if (lVar11 == lVar12) {
    if ((uVar24 >> 0x11 & 1) == 0) {
      fVar30 = *(float *)(lVar10 + 0xfc);
      if (*(float *)(lVar10 + 0xfc) <= fVar29) {
        fVar30 = fVar29;
      }
      *(float *)(lVar10 + 0x10c) = fVar30;
      *(float *)(lVar10 + 0xfc) = fVar30;
    }
  }
  else {
    *(float *)(lVar11 + 0x134) = fVar29;
  }
  fVar30 = *(float *)(lVar10 + 0xfc);
  fVar35 = 0.0;
  fVar33 = *(float *)(lVar10 + 0x11c);
  if (*(float *)(lVar10 + 0x11c) <= fVar30) {
    fVar33 = fVar30;
  }
  *(float *)(lVar10 + 0x11c) = fVar33;
  piVar26[1] = (int)(fVar30 - *(float *)(lVar10 + 0xf4));
  if ((*(uint *)(lVar10 + 4) >> 0x18 & 1) != 0) {
    fVar30 = DAT_180380bb0;
    if ((*(uint *)(lVar10 + 4) >> 10 & 1) == 0) {
      fVar30 = 0.0;
    }
    fVar33 = *(float *)(lVar11 + 0x130);
    if ((*(short *)(lVar10 + 0x220) != -1) &&
       (fVar30 = (*(float *)((longlong)*(short *)(lVar10 + 0x220) * 0x74 + 0x3c +
                            *(longlong *)(lVar10 + 0x18)) + *(float *)(lVar10 + 0xc0) +
                 *(float *)(lVar10 + 0xbc)) - fVar30, fVar33 <= fVar30)) {
      fVar33 = fVar30;
    }
    if ((*(short *)(lVar10 + 0x212) != -1) && (fVar33 <= *(float *)(lVar10 + 0xe0))) {
      fVar33 = *(float *)(lVar10 + 0xe0);
    }
    *(float *)(lVar11 + 0x130) = fVar33 + *(float *)(*(longlong *)(lVar10 + 0x10) + 0xc);
  }
  if ((uVar24 >> 0x14 & 1) == 0) {
    lVar27 = *(longlong *)(lVar11 + 0x2c8);
    piVar1 = (int *)(lVar27 + 0xa0);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      puVar20 = (undefined8 *)(*(longlong *)(lVar27 + 0x38) + 0x38);
    }
    else {
      puVar20 = (undefined8 *)
                ((longlong)(*(int *)(lVar27 + 0xa0) + -1) * 0x10 + *(longlong *)(lVar27 + 0xa8));
    }
    uVar13 = puVar20[1];
    *(undefined8 *)(lVar27 + 0x60) = *puVar20;
    *(undefined8 *)(lVar27 + 0x68) = uVar13;
    FUN_180292360();
  }
  lVar21 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x2c8) + 0xa0);
  lVar27 = *(longlong *)(*(longlong *)(lVar11 + 0x2c8) + 0xa8);
  uVar23 = *(undefined4 *)(lVar27 + -0xc + lVar21 * 0x10);
  uVar3 = *(undefined4 *)(lVar27 + -8 + lVar21 * 0x10);
  uVar4 = *(undefined4 *)(lVar27 + -4 + lVar21 * 0x10);
  *(undefined4 *)(lVar11 + 0x268) = *(undefined4 *)(lVar27 + -0x10 + lVar21 * 0x10);
  *(undefined4 *)(lVar11 + 0x26c) = uVar23;
  *(undefined4 *)(lVar11 + 0x270) = uVar3;
  *(undefined4 *)(lVar11 + 0x274) = uVar4;
  if ((uVar24 & 0x780) != 0) {
    FUN_1802a64c0(lVar10);
  }
  uVar13 = *(undefined8 *)(lVar10 + 0x1a0);
  FUN_180297210(uVar13,*(undefined8 *)(lVar11 + 0x2c8),0);
  if ((*(uint *)(lVar10 + 4) & 0x100000) == 0) {
    FUN_1802a5c80(lVar10);
  }
  FUN_180296e30(uVar13);
  fVar34 = 0.0;
  fVar33 = 0.0;
  fVar30 = 0.0;
  if (0 < *(int *)(lVar10 + 0x6c)) {
    uVar24 = 0;
    do {
      if ((*(uint *)(*(longlong *)(lVar10 + 0x50) + ((longlong)(int)uVar24 >> 5) * 4) >>
           (uVar24 & 0x1f) & 1) != 0) {
        lVar27 = *(longlong *)(lVar10 + 0x18);
        lVar21 = (longlong)(int)uVar24 * 0x74;
        uVar7 = *(uint *)(lVar21 + lVar27);
        uVar28 = uVar7 & 0x20;
        uVar25 = uVar7 & 0x10;
        if ((uVar25 == 0) || (uVar28 != 0)) {
          fVar31 = *(float *)(lVar21 + 0x44 + lVar27);
          fVar32 = *(float *)(lVar21 + 0x38 + lVar27);
          fVar5 = *(float *)(lVar21 + 0x48 + lVar27);
          if (fVar31 <= fVar5) {
            fVar31 = fVar5;
          }
          fVar31 = fVar31 - fVar32;
          if (((uVar7 >> 0xd & 1) == 0) &&
             (fVar32 = *(float *)(lVar21 + 0x50 + lVar27) - fVar32, fVar31 <= fVar32)) {
            fVar31 = fVar32;
          }
          if (((uVar25 != 0) && (fVar32 = *(float *)(lVar21 + 0x20 + lVar27), 0.0 < fVar32)) &&
             (((*(byte *)(lVar10 + 4) & 1) == 0 || (uVar28 != 0)))) {
            fVar31 = fVar32;
          }
          if (fVar31 <= *(float *)(lVar10 + 0xb8)) {
            fVar31 = *(float *)(lVar10 + 0xb8);
          }
          if (uVar25 == 0) {
            fVar33 = fVar33 + fVar31;
          }
          else {
            fVar34 = fVar34 + fVar31;
          }
        }
        else {
          fVar31 = *(float *)(lVar21 + 0x10 + lVar27);
          fVar34 = fVar34 + fVar31;
        }
        if ((((uVar7 & 8) != 0) && (uVar28 != 0)) &&
           (fVar31 = fVar31 / (*(float *)(lVar21 + 0x1c + lVar27) / *(float *)(lVar10 + 0xd8)),
           fVar30 <= fVar31)) {
          fVar30 = fVar31;
        }
      }
      uVar24 = uVar24 + 1;
      piVar26 = local_res10;
      uVar22 = local_res18;
    } while ((int)uVar24 < *(int *)(lVar10 + 0x6c));
  }
  if (fVar33 <= fVar30) {
    fVar33 = fVar30;
  }
  fVar30 = *(float *)(lVar10 + 0xc0) + *(float *)(lVar10 + 0xc0);
  *(float *)(lVar10 + 0xd4) =
       (*(float *)(lVar10 + 200) + *(float *)(lVar10 + 0xc4)) *
       (float)(*(short *)(lVar10 + 0x202) + -1) +
       *(float *)(lVar10 + 0xbc) + *(float *)(lVar10 + 0xbc) +
       (float)(int)*(short *)(lVar10 + 0x202) * fVar30 + fVar34 + fVar33;
  if (((*(uint *)(lVar10 + 4) & 0x1000000) == 0) && (lVar11 != lVar12)) {
    *(undefined4 *)(lVar11 + 0x98) = 0;
  }
  else if (((*(short *)(lVar10 + 0x214) != -1) &&
           ((*(short *)(lVar10 + 0x212) == -1 && (*(char *)(lVar11 + 200) != '\0')))) &&
          (*(short *)(lVar10 + 0x7a) == *(short *)(lVar10 + 0x78))) {
    fVar30 = fVar30 + *(float *)(lVar10 + 0xb8);
    fVar33 = *(float *)((longlong)*(short *)(lVar10 + 0x214) * 0x74 + 0xc +
                       *(longlong *)(lVar10 + 0x18));
    if (*(float *)(lVar10 + 0x120) <= fVar33) {
      if (fVar33 < *(float *)(lVar10 + 0x128) || fVar33 == *(float *)(lVar10 + 0x128))
      goto LAB_1802a40ef;
      fVar30 = (fVar33 - *(float *)(lVar11 + 0x28)) + fVar30;
    }
    else {
      fVar30 = (fVar33 - *(float *)(lVar11 + 0x28)) - fVar30;
    }
    *(undefined4 *)(lVar11 + 0xb8) = 0;
    *(undefined4 *)(lVar11 + 0xb0) = 0x3f800000;
    *(float *)(lVar11 + 0xa8) =
         (float)(int)(((fVar30 - *(float *)(lVar11 + 0x70)) - *(float *)(lVar11 + 0x80)) +
                     *(float *)(lVar11 + 0x98));
  }
LAB_1802a40ef:
  if ((*(short *)(lVar10 + 0x212) != -1) && (*(short *)(lVar10 + 0x78) == *(short *)(lVar10 + 0x7a))
     ) {
    *(float *)(lVar10 + 0xdc) =
         (float)(int)(((((*(float *)(lVar9 + 0x100) - *(float *)(lVar9 + 0x15ac)) +
                        (float)(int)(*(float *)(lVar9 + 0x1248) * DAT_180380e9c)) -
                       *(float *)((longlong)*(short *)(lVar10 + 0x212) * 0x74 + 8 +
                                 *(longlong *)(lVar10 + 0x18))) - *(float *)(lVar10 + 0xc4)) -
                     (*(float *)(lVar10 + 0xc0) + *(float *)(lVar10 + 0xc0)));
  }
  if ((*(int *)(lVar9 + 0x1598) == 0) || (*(char *)(lVar10 + 0x247) != '\0')) {
    uVar17 = 0;
  }
  else {
    uVar17 = 1;
  }
  *(undefined1 *)(lVar10 + 0x248) = uVar17;
  if (*(int *)(*(longlong *)(lVar11 + 0x110) + -4 + (longlong)*(int *)(lVar11 + 0x108) * 4) !=
      *piVar26) {
    FUN_18027e9c0("Mismatching PushID/PopID!");
  }
  if (*(int *)(lVar12 + 0x1f8) < *(int *)(local_res8 + 0x80)) {
    FUN_18027e9c0("Too many PopItemWidth!");
  }
  pvVar16 = ThreadLocalStoragePointer;
  if (0 < *(short *)(lVar10 + 0x78)) {
    lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar22 * 8);
    if (*(char *)(lVar27 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar27 = *(longlong *)(*(longlong *)(lVar27 + 0xec0) + 0x1520);
    iVar8 = *(int *)(lVar27 + 0x108);
    if (iVar8 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar27 + 0x108) = iVar8 + -1;
    }
  }
  lVar27 = *(longlong *)((longlong)pvVar16 + uVar22 * 8);
  if (*(char *)(lVar27 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar21 = *(longlong *)(*(longlong *)(lVar27 + 0xec0) + 0x1520);
  iVar8 = *(int *)(lVar21 + 0x108);
  if (iVar8 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar21 + 0x108) = iVar8 + -1;
  }
  lVar21 = local_res8;
  pfVar2 = (float *)(lVar10 + 0xf0);
  fVar30 = *(float *)(lVar12 + 0x130);
  fVar33 = *(float *)(lVar12 + 0x134);
  uVar13 = *(undefined8 *)(local_res8 + 0x48);
  *(undefined8 *)(lVar11 + 0x248) = *(undefined8 *)(local_res8 + 0x40);
  *(undefined8 *)(lVar11 + 0x250) = uVar13;
  uVar13 = *(undefined8 *)(local_res8 + 0x58);
  *(undefined8 *)(lVar11 + 600) = *(undefined8 *)(local_res8 + 0x50);
  *(undefined8 *)(lVar11 + 0x260) = uVar13;
  *(undefined1 *)(lVar11 + 0xd1) = *(undefined1 *)(lVar10 + 0x24c);
  *(undefined8 *)(lVar12 + 0x118) = *(undefined8 *)pfVar2;
  *(undefined4 *)(lVar12 + 0x1e8) = *(undefined4 *)(local_res8 + 0x7c);
  *(undefined4 *)(lVar12 + 0x1f8) = *(undefined4 *)(local_res8 + 0x80);
  *(undefined4 *)(lVar12 + 0x160) = *(undefined4 *)(local_res8 + 0x78);
  if (lVar11 == lVar12) {
    *(int *)(lVar11 + 0x1a0) = *(int *)(lVar11 + 0x1a0) + -1;
    local_res8 = CONCAT44(*(float *)(lVar10 + 0xfc) - *(float *)(lVar10 + 0xf4),
                          *(float *)(lVar10 + 0xf8) - *pfVar2);
    FUN_18027f400(&local_res8,DAT_180381384);
    if (*(char *)(lVar27 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar27 = *(longlong *)(lVar27 + 0xec0);
    *(undefined4 *)(lVar27 + 0x1ef8) = 0;
    uVar13 = *(undefined8 *)(lVar10 + 0xf8);
    *(undefined8 *)(lVar27 + 0x1f04) = *(undefined8 *)pfVar2;
    *(undefined8 *)(lVar27 + 0x1f0c) = uVar13;
    uVar13 = *(undefined8 *)pfVar2;
    uVar15 = *(undefined8 *)(lVar10 + 0xf8);
    *(uint *)(lVar27 + 0x1efc) = *(uint *)(lVar27 + 0x1eb8) | *(uint *)(lVar27 + 0x1ec4);
    lVar14 = *(longlong *)(lVar27 + 0x1520);
    *(undefined8 *)(lVar27 + 0x1f14) = uVar13;
    *(undefined8 *)(lVar27 + 0x1f1c) = uVar15;
    *(undefined4 *)(lVar27 + 0x1f00) = 0;
    *(undefined8 *)(lVar27 + 0x1ec0) = 0;
    if ((((*(float *)(lVar10 + 0xfc) < *(float *)(lVar14 + 0x26c) ||
           *(float *)(lVar10 + 0xfc) == *(float *)(lVar14 + 0x26c)) ||
         (*(float *)(lVar14 + 0x274) < *(float *)(lVar10 + 0xf4) ||
          *(float *)(lVar14 + 0x274) == *(float *)(lVar10 + 0xf4))) ||
        (*(float *)(lVar10 + 0xf8) < *(float *)(lVar14 + 0x268) ||
         *(float *)(lVar10 + 0xf8) == *(float *)(lVar14 + 0x268))) ||
       (*(float *)(lVar14 + 0x270) < *pfVar2 || *(float *)(lVar14 + 0x270) == *pfVar2)) {
      if (*(char *)(lVar27 + 0x1592) == '\0') goto LAB_1802a443d;
    }
    else {
      *(undefined4 *)(lVar27 + 0x1f00) = 0x100;
    }
    cVar18 = FUN_18027bdd0(pfVar2,lVar10 + 0xf8,1);
    if (cVar18 != '\0') {
      *(uint *)(lVar27 + 0x1f00) = *(uint *)(lVar27 + 0x1f00) | 1;
    }
  }
  else {
    uVar6 = *(ushort *)(lVar11 + 0x174);
    *(ushort *)(lVar11 + 0x174) = uVar6 | (ushort)(1 << ((int)*(char *)(lVar10 + 0x238) & 0x1fU));
    *(undefined8 *)(lVar9 + 0x2368) = 0;
    FUN_180273410();
    *(longlong *)(lVar9 + 0x2368) = lVar10;
    *(ushort *)(lVar11 + 0x174) = uVar6;
  }
LAB_1802a443d:
  if ((*(uint *)(lVar10 + 4) & 0x10000) == 0) {
    fVar34 = *(float *)(lVar21 + 0x20);
    if (0.0 < fVar34) {
      if (fVar30 <= *(float *)(lVar10 + 0xf8)) {
        fVar30 = *(float *)(lVar10 + 0xf8);
      }
    }
    else {
      if (lVar11 == lVar12) {
        fVar31 = 0.0;
      }
      else {
        fVar31 = *(float *)(lVar11 + 0xc0);
      }
      fVar32 = fVar31 + *(float *)(*(longlong *)(lVar10 + 0x10) + 0xc) +
               *pfVar2 + *(float *)(lVar10 + 0xd4);
      fVar34 = fVar32 - fVar34;
      fVar31 = *(float *)(lVar12 + 0x138);
      if (*(float *)(lVar12 + 0x138) <= fVar34) {
        fVar31 = fVar34;
      }
      *(float *)(lVar12 + 0x138) = fVar31;
      fVar34 = *(float *)(lVar10 + 0xf8);
      if (fVar32 <= *(float *)(lVar10 + 0xf8)) {
        fVar34 = fVar32;
      }
      if (fVar30 <= fVar34) {
        fVar30 = fVar34;
      }
    }
  }
  else {
    fVar34 = *pfVar2 + *(float *)(lVar10 + 0xd4);
    if (fVar30 <= fVar34) {
      fVar30 = fVar34;
    }
  }
  *(float *)(lVar12 + 0x130) = fVar30;
  fVar30 = *(float *)(lVar21 + 0x24);
  if (0.0 < fVar30) {
    if (fVar33 <= *(float *)(lVar10 + 0xfc)) {
      fVar33 = *(float *)(lVar10 + 0xfc);
    }
  }
  else {
    if (lVar11 == lVar12) {
      fVar34 = *(float *)(lVar10 + 0x104);
    }
    else {
      fVar35 = *(float *)(lVar11 + 0xc4);
      fVar34 = *(float *)(lVar11 + 300);
    }
    fVar35 = (fVar29 - fVar34) + *(float *)(lVar10 + 0xf4) + fVar35;
    fVar30 = fVar35 - fVar30;
    fVar29 = *(float *)(lVar12 + 0x13c);
    if (*(float *)(lVar12 + 0x13c) <= fVar30) {
      fVar29 = fVar30;
    }
    *(float *)(lVar12 + 0x13c) = fVar29;
    fVar29 = *(float *)(lVar10 + 0xfc);
    if (fVar35 <= *(float *)(lVar10 + 0xfc)) {
      fVar29 = fVar35;
    }
    if (fVar33 <= fVar29) {
      fVar33 = fVar29;
    }
  }
  *(float *)(lVar12 + 0x134) = fVar33;
  if (*(char *)(lVar10 + 0x241) != '\0') {
    FUN_1802a8ac0(lVar10);
  }
  *(undefined1 *)(lVar10 + 0x23b) = 0;
  iVar8 = *(int *)(lVar9 + 0x2374);
  iVar19 = iVar8 + -1;
  *(int *)(lVar9 + 0x2374) = iVar19;
  if (((iVar19 < 1) ||
      (piVar26 = (int *)(((longlong)iVar8 + -2) * 0x88 + *(longlong *)(lVar9 + 0x2380)),
      piVar26 == (int *)0x0)) || (*piVar26 != *(int *)(lVar12 + 0x10))) {
    *(undefined8 *)(lVar9 + 0x2368) = 0;
  }
  else {
    lVar27 = (longlong)piVar26[1] * 0x250 + *(longlong *)(lVar9 + 0x2390);
    *(longlong *)(lVar9 + 0x2368) = lVar27;
    if (lVar27 != 0) {
      *(int **)(lVar27 + 0x10) = piVar26;
      *(int **)(*(longlong *)(lVar9 + 0x2368) + 0x1a0) = piVar26 + 10;
    }
  }
  pvVar16 = ThreadLocalStoragePointer;
  if (*(longlong *)(lVar9 + 0x2368) == 0) {
    uVar23 = 0xffffffff;
  }
  else {
    uVar23 = (undefined4)((*(longlong *)(lVar9 + 0x2368) - *(longlong *)(lVar9 + 0x2390)) / 0x250);
  }
  uVar22 = (ulonglong)_tls_index;
  *(undefined4 *)(lVar12 + 0x1d0) = uVar23;
  lVar27 = *(longlong *)((longlong)pvVar16 + uVar22 * 8);
  if (*(char *)(lVar27 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar27 = *(longlong *)(lVar27 + 0xec0);
  lVar9 = *(longlong *)(lVar27 + 0x1520);
  if ((*(longlong *)(lVar27 + 0x2368) == 0) && (*(longlong *)(lVar9 + 0x1c8) == 0)) {
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  *(undefined1 *)(lVar9 + 0x178) = uVar17;
  return;
}


