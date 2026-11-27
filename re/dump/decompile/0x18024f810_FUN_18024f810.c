// 0x18024f810  FUN_18024f810
// size=676 thunk=false
// signature: undefined FUN_18024f810()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18024f810(longlong param_1)

{
  longlong *plVar1;
  char *pcVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  char *pcVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [40];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  puVar16 = auStack_68;
  puVar15 = auStack_68;
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  lVar13 = *(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358) >> 4;
  uVar14 = lVar13 * -0x5555555555555555;
  if (uVar14 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    if (0x7fffffffffffffff < uVar14) {
      FUN_180266030();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = lVar13 * 0x5555555555555556;
    uVar8 = 0;
    puVar16 = auStack_68;
    if (uVar12 != 0) {
      if (uVar12 < 0x1000) {
        uVar8 = FUN_1802d8350(uVar12);
        puVar16 = auStack_68;
      }
      else {
        if (uVar12 + 0x27 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        lVar7 = FUN_1802d8350();
        lVar13 = lVar7;
        if (lVar7 == 0) {
          lVar13 = 5;
          pcVar4 = (code *)swi(0x29);
          lVar7 = (*pcVar4)();
          puVar15 = auStack_60;
        }
        uVar8 = lVar7 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar8 - 8) = lVar13;
        puVar16 = puVar15;
      }
    }
    *(ulonglong *)(puVar16 + 0x30) = uVar8;
    *(ulonglong *)(puVar16 + 0x38) = uVar8;
    *(ulonglong *)(puVar16 + 0x40) = uVar8 + uVar12;
    *(undefined1 **)(puVar16 + 0x20) = puVar16 + 0x30;
    puVar9 = *(undefined2 **)(puVar16 + 0x30);
    do {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    *(undefined2 **)(puVar16 + 0x38) = puVar9;
    *(undefined8 *)(puVar16 + 0x20) = 0;
    plVar1 = *(longlong **)(param_1 + 0x58);
    for (plVar11 = *(longlong **)(param_1 + 0x50); plVar11 != plVar1; plVar11 = plVar11 + 0xc) {
      lVar7 = plVar11[1];
      for (lVar13 = *plVar11; lVar13 != lVar7; lVar13 = lVar13 + 0x10) {
        if (*(longlong *)(lVar13 + 8) != 0) {
          *(undefined1 *)(*(longlong *)(puVar16 + 0x30) + -2 + *(longlong *)(lVar13 + 8) * 2) = 1;
        }
      }
    }
    pcVar2 = *(char **)(puVar16 + 0x38);
    uVar14 = 0;
    for (pcVar10 = *(char **)(puVar16 + 0x30); pcVar10 != pcVar2; pcVar10 = pcVar10 + 2) {
      uVar12 = uVar14;
      if (*pcVar10 != '\0') {
        uVar12 = uVar14 + 1;
        pcVar10[1] = uVar14 != 0;
      }
      uVar14 = uVar12;
    }
    plVar1 = *(longlong **)(param_1 + 0x58);
    for (plVar11 = *(longlong **)(param_1 + 0x50); plVar11 != plVar1; plVar11 = plVar11 + 0xc) {
      lVar7 = plVar11[1];
      for (lVar13 = *plVar11; lVar13 != lVar7; lVar13 = lVar13 + 0x10) {
        if (*(longlong *)(lVar13 + 8) != 0) {
          *(ulonglong *)(lVar13 + 8) =
               (ulonglong)
               *(byte *)(*(longlong *)(puVar16 + 0x30) + -1 + *(longlong *)(lVar13 + 8) * 2) + 1;
        }
      }
    }
    lVar13 = (*(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358) >> 4) *
             -0x5555555555555555;
    do {
      lVar13 = lVar13 + -1;
      if (*(char *)(*(longlong *)(puVar16 + 0x30) + lVar13 * 2) == '\0') {
        puVar17 = (undefined8 *)(lVar13 * 0x30 + *(longlong *)(param_1 + 0x358));
        puVar3 = *(undefined8 **)(param_1 + 0x360);
        puVar6 = puVar17;
        while (puVar5 = puVar6 + 6, puVar5 != puVar3) {
          *puVar17 = *puVar5;
          *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar6 + 7);
          *(undefined8 *)(puVar16 + -8) = 0x18024fa49;
          FUN_18020e8a0(puVar17 + 2,puVar6 + 8);
          puVar17 = puVar17 + 6;
          puVar6 = puVar5;
        }
        lVar7 = *(longlong *)(param_1 + 0x360);
        *(longlong *)(puVar16 + 0x28) = lVar7 + -0x30;
        *(undefined8 *)(puVar16 + -8) = 0x18024fa6f;
        FUN_18020e450(lVar7 + -0x20);
        *(longlong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) + -0x30;
      }
    } while (lVar13 != 0);
    *(undefined8 *)(puVar16 + -8) = 0x18024fa86;
    FUN_180262110(puVar16 + 0x30);
  }
  *(undefined8 *)(puVar16 + -8) = 0x18024fa93;
  return;
}


