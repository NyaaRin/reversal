// 0x1800d8460  FUN_1800d8460
// size=1280 thunk=false
// signature: undefined FUN_1800d8460()
// status: ok


void FUN_1800d8460(int *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  ulonglong uVar5;
  double dVar6;
  char cVar7;
  short sVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  
  lVar11 = 0;
  if ((param_1 == (int *)0x0) || (DAT_1803fa608 == (float *)0x0)) {
    puVar12 = (undefined4 *)&DAT_1805c5a20;
    do {
      *(undefined1 *)puVar12 = 0;
      puVar12 = puVar12 + 0x10;
    } while (puVar12 != &DAT_1805c7a20);
    DAT_1805c7a20 = 0;
    DAT_1805c7a24 = 0xffffffff;
    DAT_1805c7a28 = 0;
    DAT_1805c7a30 = 0;
    DAT_1805c7a38 = DAT_1803813b0;
    return;
  }
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar10 = (*pcVar2)(DAT_1803fa360,uVar9);
  if ((lVar10 == 0) || (cVar7 = FUN_18001c330(lVar10), cVar7 == '\0')) {
    if (lVar10 == 0) goto LAB_1800d88f0;
    fVar17 = *DAT_1803fa608;
  }
  else {
    lVar11 = FUN_18001dbf0(lVar10);
    fVar17 = *DAT_1803fa608;
  }
  dVar3 = (double)fVar17;
  if (((((lVar11 == 0) || (sVar8 = _dclass(SUB84(dVar3,0)), dVar6 = DAT_1803813b0, 0 < sVar8)) ||
       (dVar3 < 0.0)) ||
      ((iVar1 = *param_1, iVar1 < 1 || ((param_1[2] & 0x7f800000U) == 0x7f800000)))) ||
     (((param_1[3] & 0x7f800000U) == 0x7f800000 || ((param_1[4] & 0x7f800000U) == 0x7f800000)))) {
LAB_1800d88f0:
    puVar12 = (undefined4 *)&DAT_1805c5a20;
    do {
      *(undefined1 *)puVar12 = 0;
      puVar12 = puVar12 + 0x10;
    } while (puVar12 != &DAT_1805c7a20);
    DAT_1805c7a38 = DAT_1803813b0;
    DAT_1805c7a30 = 0;
    DAT_1805c7a28 = 0;
    DAT_1805c7a24 = 0xffffffff;
    DAT_1805c7a20 = 0;
    return;
  }
  uVar9 = SUB84(DAT_1803813b0,0);
  uVar5 = (ulonglong)DAT_1803813b0 >> 0x20;
  if ((DAT_1805c7a28 == lVar10) && (DAT_1805c7a30 == lVar11)) {
    if ((DAT_1805c7a38 <= dVar3) &&
       (uVar14 = SUB84(DAT_1805c7a38,0), uVar15 = (int)((ulonglong)DAT_1805c7a38 >> 0x20),
       DAT_1805c7a24 <= iVar1)) goto LAB_1800d861b;
  }
  puVar12 = (undefined4 *)&DAT_1805c5a20;
  do {
    *(undefined1 *)puVar12 = 0;
    puVar12 = puVar12 + 0x10;
  } while (puVar12 != &DAT_1805c7a20);
  DAT_1805c7a20 = 0;
  DAT_1805c7a24 = -1;
  DAT_1805c7a38 = dVar6;
  DAT_1805c7a30 = 0;
  DAT_1805c7a28 = 0;
  uVar14 = uVar9;
  uVar15 = (int)uVar5;
LAB_1800d861b:
  if (iVar1 == DAT_1805c7a24) {
    return;
  }
  if ((((DAT_1805c7a24 < 1) || (iVar1 - DAT_1805c7a24 != 1)) || (sVar8 = _dclass(uVar14), 0 < sVar8)
      ) || ((((double)CONCAT44(uVar15,uVar14) < 0.0 || (dVar3 < (double)CONCAT44(uVar15,uVar14))) ||
            (DAT_180380c90 < dVar3 - (double)CONCAT44(uVar15,uVar14))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_c8 = DAT_1805c7a40;
  local_c0 = DAT_1805c7a48;
  DAT_1805c7a40 = param_1[2];
  local_c4 = DAT_1805c7a44;
  DAT_1805c7a44 = param_1[3];
  DAT_1805c7a48 = param_1[4];
  if (!bVar4) {
    DAT_1805c7a24 = iVar1;
    DAT_1805c7a28 = lVar10;
    DAT_1805c7a30 = lVar11;
    DAT_1805c7a38 = dVar3;
    return;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    DAT_1805c7a24 = iVar1;
    DAT_1805c7a28 = lVar10;
    DAT_1805c7a30 = lVar11;
    DAT_1805c7a38 = dVar3;
    return;
  }
  if (DAT_180423988 == '\0') {
    DAT_1805c7a24 = iVar1;
    DAT_1805c7a28 = lVar10;
    DAT_1805c7a30 = lVar11;
    DAT_1805c7a38 = dVar3;
    return;
  }
  DAT_1805c7a24 = iVar1;
  DAT_1805c7a28 = lVar10;
  DAT_1805c7a30 = lVar11;
  DAT_1805c7a38 = dVar3;
  cVar7 = FUN_180071c60();
  if (cVar7 == '\0') {
    return;
  }
  local_b0 = dVar6;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  local_88 = 0;
  local_84 = 0xffffffff;
  local_80 = 0;
  cVar7 = FUN_1800732a0(&local_c8,&local_a8,(longlong)&uStack_a0 + 4);
  uVar9 = DAT_180423980;
  if (cVar7 == '\0') {
    return;
  }
  if (((uint)local_a8 & 0x7f800000) == 0x7f800000) {
    return;
  }
  if ((local_a8._4_4_ & 0x7f800000) != 0x7f800000) {
    if (((uint)uStack_a0 & 0x7f800000) == 0x7f800000) {
      return;
    }
    if ((uStack_a0._4_4_ & 0x7f800000) == 0x7f800000) {
      return;
    }
    if (((uint)local_98 & 0x7f800000) == 0x7f800000) {
      return;
    }
    if ((local_98._4_4_ & 0x7f800000) != 0x7f800000) {
      iVar1 = *param_1;
      if (((DAT_1803e921c < 1) || (iVar1 != DAT_1803e921c)) ||
         (uVar14 = DAT_1805c39d0, uVar15 = DAT_1805c39d4, uVar16 = DAT_1805c39d8,
         uVar13 = DAT_180423a24, DAT_180423987 == '\0')) {
        uVar14 = (undefined4)uStack_90;
        uVar15 = uStack_90._4_4_;
        uVar16 = local_88;
        uVar13 = (undefined4)local_80;
      }
      lVar11 = (longlong)(int)DAT_1805c7a20;
      lVar10 = lVar11 * 0x40;
      (&DAT_1805c5a20)[lVar10] = local_b8;
      (&DAT_1805c5a28)[lVar11 * 8] = dVar3;
      *(uint *)(&DAT_1805c5a30 + lVar11 * 8) = (uint)local_a8;
      *(uint *)((longlong)&DAT_1805c5a30 + lVar10 + 4) = local_a8._4_4_;
      *(uint *)(&DAT_1805c5a38 + lVar11 * 8) = (uint)uStack_a0;
      *(uint *)((longlong)&DAT_1805c5a38 + lVar10 + 4) = uStack_a0._4_4_;
      *(uint *)(&DAT_1805c5a40 + lVar11 * 8) = (uint)local_98;
      *(uint *)((longlong)&DAT_1805c5a40 + lVar10 + 4) = local_98._4_4_;
      *(undefined4 *)(&DAT_1805c5a48 + lVar11 * 8) = uVar14;
      *(undefined4 *)((longlong)&DAT_1805c5a48 + lVar10 + 4) = uVar15;
      (&DAT_1805c5a50)[lVar11 * 0x10] = uVar16;
      *(undefined4 *)((longlong)&DAT_1805c5a58 + lVar10 + 4) = uVar9;
      (&DAT_1805c5a54)[lVar11 * 0x10] = iVar1;
      *(undefined4 *)(&DAT_1805c5a58 + lVar11 * 8) = uVar13;
      (&DAT_1805c5a20)[(longlong)(int)DAT_1805c7a20 * 0x40] = 1;
      DAT_1805c7a20 = DAT_1805c7a20 + 1 & 0x8000007f;
      if ((int)DAT_1805c7a20 < 0) {
        DAT_1805c7a20 = (DAT_1805c7a20 - 1 | 0xffffff80) + 1;
        return;
      }
      return;
    }
    return;
  }
  return;
}


