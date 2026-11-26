// 0x180191fa0  FUN_180191fa0
// size=1245 thunk=false
// signature: undefined FUN_180191fa0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018019209a) */

void FUN_180191fa0(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  BOOL BVar9;
  uint *puVar10;
  longlong *plVar11;
  uint *puVar12;
  char *pcVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  undefined1 uVar19;
  uint *puVar20;
  uint *puVar21;
  char *pcVar22;
  
  if ((DAT_1805707bc & 1) == 0) {
    DAT_1805707bc = DAT_1805707bc | 1;
    atexit(FUN_18030ae50);
  }
  if (DAT_180423b00 != DAT_180423b08) {
    DAT_180423b08 = DAT_180423b00;
  }
  iVar7 = _Mtx_lock(&DAT_1803e8990);
  if (iVar7 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e89dc == 0x7fffffff) {
    DAT_1803e89dc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  uVar6 = DAT_180423b10;
  lVar17 = (longlong)DAT_180423b08;
  lVar5 = (longlong)DAT_180423b00;
  DAT_180423b00 = DAT_1803e9bf0;
  DAT_1803e9bf0 = (uint *)lVar5;
  DAT_180423b08 = DAT_1803e9bf8;
  DAT_1803e9bf8 = (uint *)lVar17;
  DAT_180423b10 = DAT_1803e9c00;
  DAT_1803e9c00 = uVar6;
  if (lVar5 != lVar17) {
    DAT_1803e9bf8 = (uint *)lVar5;
  }
  _Mtx_unlock(&DAT_1803e8990);
  lVar5 = DAT_1803e8970;
  if (DAT_180423b00 == DAT_180423b08) {
    return;
  }
  uVar8 = 0xffffffff;
  if (DAT_1803fa668 != (longlong *)0x0) {
    uVar8 = (**(code **)(*DAT_1803fa668 + 0x60))();
  }
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  puVar10 = DAT_180423b00;
  if (DAT_180423b00 != DAT_180423b08) {
    do {
      if (*(longlong *)(puVar10 + 4) == lVar5) {
        if ((char)puVar10[6] != '\0') {
          bVar2 = true;
        }
        if ((*(char *)((longlong)puVar10 + 0x19) == '\0') && (bVar3 = bVar4, *puVar10 == uVar8)) {
          bVar4 = true;
          bVar3 = true;
        }
      }
      puVar10 = puVar10 + 0xc;
    } while (puVar10 != DAT_180423b08);
    if ((bVar2) || (bVar3)) {
      bVar3 = true;
      pcVar13 = "fallback";
      if (bVar2) {
        pcVar13 = "exact";
      }
      FUN_180014410("[ESP] Entity List preserving full-update removals (%s marker)\n",pcVar13);
      lVar17 = DAT_1805c3998;
      puVar18 = DAT_180423b00;
      puVar20 = DAT_180423b08;
      puVar10 = DAT_180423b08;
      goto LAB_1801921d6;
    }
  }
  bVar3 = false;
  lVar17 = DAT_1805c3998;
  puVar18 = DAT_180423b00;
  puVar20 = DAT_180423b08;
  puVar10 = DAT_180423b08;
LAB_1801921d6:
  do {
    if (puVar18 == puVar10) {
      return;
    }
    if (*(longlong *)(puVar18 + 4) == lVar5) {
      uVar8 = *puVar18;
      if (((0 < (int)uVar8) && ((char)puVar18[6] == '\0')) &&
         ((*(char *)((longlong)puVar18 + 0x19) != '\0' || (!bVar3)))) {
        uVar14 = (((((ulonglong)uVar8 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)(uVar8 >> 8) & 0xff) * 0x100000001b3 ^
                  (ulonglong)(uVar8 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar8 >> 0x18)) *
                 0x100000001b3 & DAT_1805c39c0;
        lVar15 = *(longlong *)(DAT_1805c39a8 + 8 + uVar14 * 0x10);
        if (lVar15 == lVar17) {
LAB_180192292:
          lVar15 = 0;
        }
        else {
          for (; uVar8 != *(uint *)(lVar15 + 0x10); lVar15 = *(longlong *)(lVar15 + 8)) {
            if (lVar15 == *(longlong *)(DAT_1805c39a8 + uVar14 * 0x10)) goto LAB_180192292;
          }
        }
        lVar16 = lVar17;
        if (((lVar15 == 0) || (lVar16 = lVar15, lVar15 == lVar17)) ||
           (((*(longlong *)(puVar18 + 2) == 0 ||
             ((*(longlong *)(lVar15 + 0x40) == 0 ||
              (*(longlong *)(lVar15 + 0x40) == *(longlong *)(puVar18 + 2))))) &&
            ((puVar18[1] == 0xffffffff ||
             ((*(uint *)(lVar15 + 0x38) == 0xffffffff || (*(uint *)(lVar15 + 0x38) == puVar18[1]))))
            )))) {
          pcVar13 = (char *)((longlong)puVar18 + 0x1a);
          if ((*pcVar13 == '\0') ||
             ((((*(char *)((longlong)puVar18 + 0x1b) == '\0' || ((char)puVar18[7] != '\0')) ||
               (uVar14 = *(ulonglong *)(puVar18 + 8), uVar14 == 0)) ||
              ((*(ulonglong *)(puVar18 + 10) < uVar14 ||
               (0xfa < *(ulonglong *)(puVar18 + 10) - uVar14)))))) {
            bVar2 = false;
            uVar19 = 0;
            puVar21 = puVar18;
            pcVar22 = pcVar13;
            if (DAT_1803fa360 != (longlong *)0x0) {
              plVar11 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,*puVar18);
              if (((plVar11 != (longlong *)0x0) && (BVar9 = IsBadReadPtr(plVar11,8), BVar9 == 0)) &&
                 ((BVar9 = IsBadReadPtr((void *)*plVar11,8), BVar9 == 0 &&
                  (puVar18[1] != 0xffffffff)))) {
                puVar12 = (uint *)(**(code **)(*plVar11 + 0x10))(plVar11);
                uVar19 = *puVar12 == puVar18[1];
                bVar2 = (bool)uVar19;
              }
              lVar17 = DAT_1805c3998;
              if (bVar2) goto LAB_1801922e1;
            }
            if (lVar16 != lVar17) {
              plVar11 = (longlong *)(lVar16 + 0x18);
              if (0xf < *(ulonglong *)(lVar16 + 0x30)) {
                plVar11 = (longlong *)*plVar11;
              }
              FUN_180014410("[ESP] Entity List erased delete idx=%d class=%s txKnown=%d tx=%d coverage=%d\n"
                            ,*puVar18,plVar11,*(char *)((longlong)puVar18 + 0x1b) != '\0',
                            (char)puVar18[7] != '\0',*pcVar13 != '\0',uVar19,puVar20,puVar21,pcVar22
                           );
            }
            FUN_18020b4e0();
            FUN_18020af80();
            lVar17 = DAT_1805c3998;
          }
          else if (lVar16 != lVar17) {
            plVar11 = (longlong *)(lVar16 + 0x18);
            if (0xf < *(ulonglong *)(lVar16 + 0x30)) {
              plVar11 = (longlong *)*plVar11;
            }
            FUN_180014410("[ESP] Entity List kept stream-out idx=%d class=%s dt=%llums\n",*puVar18,
                          plVar11);
            lVar17 = DAT_1805c3998;
          }
        }
      }
    }
LAB_1801922e1:
    puVar18 = puVar18 + 0xc;
  } while( true );
}


