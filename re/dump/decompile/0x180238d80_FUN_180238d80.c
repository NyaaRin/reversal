// 0x180238d80  FUN_180238d80
// size=622 thunk=false
// signature: undefined FUN_180238d80()
// status: ok


void FUN_180238d80(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  
  for (lVar15 = 0x3f; 0xfffffffffffffffU >> lVar15 == 0; lVar15 = lVar15 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar15 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = param_2 - 1 | 1;
  lVar15 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  lVar15 = 1L << ((char)lVar15 + 1U & 0x3f);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_18022be40(param_1 + 0x18,lVar15 * 2,plVar1);
  *(longlong *)(param_1 + 0x30) = lVar15 + -1;
  *(longlong *)(param_1 + 0x38) = lVar15;
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000180238e0c:
  do {
    while( true ) {
      if (plVar8 == plVar1) {
        return;
      }
      plVar2 = (longlong *)*plVar8;
      uVar10 = plVar8[4];
      plVar16 = plVar8 + 2;
      uVar3 = plVar8[5];
      if (0xf < uVar3) {
        plVar16 = (longlong *)plVar8[2];
      }
      uVar11 = 0xcbf29ce484222325;
      uVar13 = 0;
      if (uVar10 != 0) {
        do {
          uVar11 = (uVar11 ^ *(byte *)((longlong)plVar16 + uVar13)) * 0x100000001b3;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar10);
      }
      puVar17 = (undefined8 *)
                (*(longlong *)(param_1 + 0x18) + (uVar11 & *(ulonglong *)(param_1 + 0x30)) * 0x10);
      plVar16 = (longlong *)*puVar17;
      if (plVar16 != plVar1) break;
      *puVar17 = plVar8;
      puVar17[1] = plVar8;
      plVar8 = plVar2;
    }
    plVar4 = (longlong *)puVar17[1];
    plVar14 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      plVar14 = (longlong *)*plVar14;
    }
    plVar12 = plVar8 + 2;
    if (0xf < uVar3) {
      plVar12 = (longlong *)plVar8[2];
    }
    if (uVar10 != plVar4[4]) {
joined_r0x000180238f09:
      while (plVar16 != plVar4) {
        plVar4 = (longlong *)plVar4[1];
        plVar14 = plVar4 + 2;
        if (0xf < (ulonglong)plVar4[5]) {
          plVar14 = (longlong *)*plVar14;
        }
        if (uVar3 < 0x10) {
          plVar12 = plVar8 + 2;
        }
        else {
          plVar12 = (longlong *)plVar8[2];
        }
        if (uVar10 == plVar4[4]) {
          if ((uVar10 == 0) || (iVar9 = memcmp(plVar12,plVar14,uVar10), iVar9 == 0)) {
            lVar15 = *plVar4;
            plVar16 = (longlong *)plVar8[1];
            *plVar16 = (longlong)plVar2;
            plVar14 = (longlong *)plVar2[1];
            *plVar14 = lVar15;
            puVar17 = *(undefined8 **)(lVar15 + 8);
            *puVar17 = plVar8;
            *(longlong **)(lVar15 + 8) = plVar14;
            plVar2[1] = (longlong)plVar16;
            plVar8[1] = (longlong)puVar17;
            plVar8 = plVar2;
            goto joined_r0x000180238e0c;
          }
          uVar3 = plVar8[5];
        }
      }
      plVar16 = (longlong *)plVar8[1];
      *plVar16 = (longlong)plVar2;
      puVar5 = (undefined8 *)plVar2[1];
      *puVar5 = plVar4;
      puVar6 = (undefined8 *)plVar4[1];
      *puVar6 = plVar8;
      plVar4[1] = (longlong)puVar5;
      plVar2[1] = (longlong)plVar16;
      plVar8[1] = (longlong)puVar6;
      *puVar17 = plVar8;
      plVar8 = plVar2;
      goto joined_r0x000180238e0c;
    }
    if ((uVar10 != 0) && (iVar9 = memcmp(plVar12,plVar14,uVar10), iVar9 != 0)) {
      uVar3 = plVar8[5];
      goto joined_r0x000180238f09;
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != plVar8) {
      plVar16 = (longlong *)plVar8[1];
      *plVar16 = (longlong)plVar2;
      puVar5 = (undefined8 *)plVar2[1];
      *puVar5 = plVar4;
      puVar6 = (undefined8 *)plVar4[1];
      *puVar6 = plVar8;
      plVar4[1] = (longlong)puVar5;
      plVar2[1] = (longlong)plVar16;
      plVar8[1] = (longlong)puVar6;
    }
    puVar17[1] = plVar8;
    plVar8 = plVar2;
  } while( true );
}


