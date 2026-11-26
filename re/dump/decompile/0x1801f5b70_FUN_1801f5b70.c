// 0x1801f5b70  FUN_1801f5b70
// size=949 thunk=false
// signature: undefined FUN_1801f5b70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801f5b70(void)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  float local_c0;
  undefined4 local_bc;
  float local_b8;
  int local_b4;
  int local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_98 [16];
  ulonglong local_58;
  
  fVar15 = DAT_18038110c;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if (DAT_1803fa668 != (longlong *)0x0) {
    uVar12 = 0;
    local_d0 = 0;
    uVar13 = 0;
    local_cc = 0;
    uVar14 = 0;
    local_c8 = 0;
    bVar6 = false;
    local_d8 = 0;
    local_c0 = DAT_18038110c;
    uVar7 = 0xffffffff;
    local_bc = 0xffffffff;
    bVar9 = false;
    lVar5 = (**(code **)(*DAT_1803fa668 + 0x120))();
    bVar8 = true;
    local_d7 = 1;
    fVar10 = 0.0;
    local_b8 = 0.0;
    for (local_b0 = 0; uVar11 = (uint)_DAT_1803817c0, local_b0 < 4; local_b0 = local_b0 + 1) {
      for (local_b4 = 0; local_b4 < 4; local_b4 = local_b4 + 1) {
        lVar1 = (longlong)local_b4 + (longlong)local_b0 * 4;
        uVar2 = *(uint *)(lVar5 + lVar1 * 4);
        if (((uVar2 & 0x7f800000) == 0x7f800000) || (DAT_1803812f8 < (float)(uVar2 & uVar11))) {
          bVar8 = false;
          local_d7 = 0;
        }
        local_98[lVar1] = uVar2;
        fVar10 = fVar10 + (float)(uVar2 & uVar11);
        local_b8 = fVar10;
      }
    }
    if (((bVar8) && (DAT_180380964 < fVar10)) &&
       (DAT_180380938 <
        (float)(*(uint *)(lVar5 + 0x34) & uVar11) + (float)(*(uint *)(lVar5 + 0x30) & uVar11) +
        (float)(*(uint *)(lVar5 + 0x38) & uVar11))) {
      if (((DAT_180425f80 == '\0') || ((DAT_1803db524 & 0x7f800000) == 0x7f800000)) ||
         (((DAT_1803db528 & 0x7f800000) == 0x7f800000 ||
          (bVar9 = (DAT_1803db52c & 0x7f800000) != 0x7f800000, !bVar9)))) {
        pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar5 = (*pcVar3)(DAT_1803fa360,uVar4);
        if (((lVar5 != 0) && (FUN_18001c430(lVar5,&local_a8), (local_a8 & 0x7f800000) != 0x7f800000)
            ) && (((local_a4 & 0x7f800000) != 0x7f800000 && ((local_a0 & 0x7f800000) != 0x7f800000))
                 )) {
          local_d0 = local_a8;
          local_cc = local_a4;
          local_c8 = local_a0;
          bVar6 = true;
          local_d8 = 1;
          uVar12 = local_a8;
          uVar13 = local_a4;
          uVar14 = local_a0;
        }
      }
      else {
        local_d0 = DAT_1803db524;
        local_cc = DAT_1803db528;
        local_c8 = DAT_1803db52c;
        uVar12 = DAT_1803db524;
        uVar13 = DAT_1803db528;
        uVar14 = DAT_1803db52c;
        bVar6 = bVar9;
        local_d8 = bVar9;
        if ((((((uint)DAT_1803db51c & 0x7f800000) != 0x7f800000) == bVar9) &&
            (DAT_180380bb0 < DAT_1803db51c)) && (DAT_1803db51c < DAT_180381184)) {
          local_c0 = DAT_1803db51c;
          fVar15 = DAT_1803db51c;
        }
      }
      if (DAT_1803fa608 != 0) {
        uVar7 = *(undefined4 *)(DAT_1803fa608 + 4);
      }
      bVar9 = true;
      local_d6 = 1;
      local_bc = uVar7;
    }
    if (bVar9) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
      FUN_1802d4780(&DAT_1805707c0,local_98);
      DAT_180425428 = 1;
      DAT_1803da5c0 = fVar15;
      DAT_1803e7498 = uVar7;
      DAT_1803fe650 = bVar6;
      DAT_1805c7c00 = uVar12;
      DAT_1805c7c04 = uVar13;
      DAT_1805c7c08 = uVar14;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
      return 1;
    }
  }
  return 0;
}


