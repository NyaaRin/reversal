// 0x18024f4f0  FUN_18024f4f0
// size=637 thunk=false
// signature: undefined FUN_18024f4f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18024f4f0(longlong param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [40];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  puVar15 = auStack_68;
  puVar14 = auStack_68;
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  lVar12 = *(longlong *)(param_1 + 0x348) - *(longlong *)(param_1 + 0x340) >> 3;
  uVar13 = lVar12 * -0x71c71c71c71c71c7;
  if (uVar13 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    if (0x7fffffffffffffff < uVar13) {
      FUN_180266030();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar11 = lVar12 * 0x1c71c71c71c71c72;
    uVar8 = 0;
    puVar15 = auStack_68;
    if (uVar11 != 0) {
      if (uVar11 < 0x1000) {
        uVar8 = FUN_1802d8350(uVar11);
        puVar15 = auStack_68;
      }
      else {
        if (uVar11 + 0x27 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        lVar7 = FUN_1802d8350();
        lVar12 = lVar7;
        if (lVar7 == 0) {
          lVar12 = 5;
          pcVar4 = (code *)swi(0x29);
          lVar7 = (*pcVar4)();
          puVar14 = auStack_60;
        }
        uVar8 = lVar7 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar8 - 8) = lVar12;
        puVar15 = puVar14;
      }
    }
    *(ulonglong *)(puVar15 + 0x30) = uVar8;
    *(ulonglong *)(puVar15 + 0x38) = uVar8;
    *(ulonglong *)(puVar15 + 0x40) = uVar8 + uVar11;
    *(undefined1 **)(puVar15 + 0x20) = puVar15 + 0x30;
    puVar9 = *(undefined2 **)(puVar15 + 0x30);
    do {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    *(undefined2 **)(puVar15 + 0x38) = puVar9;
    *(undefined8 *)(puVar15 + 0x20) = 0;
    lVar7 = *(longlong *)(param_1 + 0x58);
    for (lVar12 = *(longlong *)(param_1 + 0x50); lVar12 != lVar7; lVar12 = lVar12 + 0x60) {
      if (*(longlong *)(lVar12 + 0x50) != 0) {
        *(undefined1 *)(*(longlong *)(puVar15 + 0x30) + -2 + *(longlong *)(lVar12 + 0x50) * 2) = 1;
      }
    }
    pcVar2 = *(char **)(puVar15 + 0x38);
    uVar13 = 0;
    for (pcVar10 = *(char **)(puVar15 + 0x30); pcVar10 != pcVar2; pcVar10 = pcVar10 + 2) {
      uVar11 = uVar13;
      if (*pcVar10 != '\0') {
        uVar11 = uVar13 + 1;
        pcVar10[1] = uVar13 != 0;
      }
      uVar13 = uVar11;
    }
    lVar7 = *(longlong *)(param_1 + 0x58);
    for (lVar12 = *(longlong *)(param_1 + 0x50); lVar12 != lVar7; lVar12 = lVar12 + 0x60) {
      if (*(longlong *)(lVar12 + 0x50) != 0) {
        *(ulonglong *)(lVar12 + 0x50) =
             (ulonglong)
             *(byte *)(*(longlong *)(puVar15 + 0x30) + -1 + *(longlong *)(lVar12 + 0x50) * 2) + 1;
      }
    }
    lVar12 = (*(longlong *)(param_1 + 0x348) - *(longlong *)(param_1 + 0x340) >> 3) *
             -0x71c71c71c71c71c7;
    do {
      lVar12 = lVar12 + -1;
      if (*(char *)(*(longlong *)(puVar15 + 0x30) + lVar12 * 2) == '\0') {
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x340) + lVar12 * 0x48);
        puVar3 = *(undefined4 **)(param_1 + 0x348);
        puVar6 = puVar1;
        while (puVar5 = puVar6 + 0x12, puVar5 != puVar3) {
          *puVar1 = *puVar5;
          puVar1[1] = puVar6[0x13];
          *(undefined8 *)(puVar15 + -8) = 0x18024f6e7;
          FUN_18020e8a0(puVar1 + 2,puVar6 + 0x14);
          *(undefined8 *)(puVar15 + -8) = 0x18024f6f4;
          FUN_18020e8a0(puVar1 + 10,puVar6 + 0x1c);
          puVar1 = puVar1 + 0x12;
          puVar6 = puVar5;
        }
        lVar7 = *(longlong *)(param_1 + 0x348);
        *(longlong *)(puVar15 + 0x28) = lVar7 + -0x48;
        *(undefined8 *)(puVar15 + -8) = 0x18024f71a;
        FUN_18020e450(lVar7 + -0x20);
        *(undefined8 *)(puVar15 + -8) = 0x18024f724;
        FUN_18020e450(lVar7 + -0x40);
        *(longlong *)(param_1 + 0x348) = *(longlong *)(param_1 + 0x348) + -0x48;
      }
    } while (lVar12 != 0);
    *(undefined8 *)(puVar15 + -8) = 0x18024f73f;
    FUN_180262110(puVar15 + 0x30);
  }
  *(undefined8 *)(puVar15 + -8) = 0x18024f74c;
  return;
}


