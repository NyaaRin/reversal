// 0x18022c6a0  FUN_18022c6a0
// size=455 thunk=false
// signature: undefined FUN_18022c6a0()
// status: ok


void FUN_18022c6a0(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  plVar9 = DAT_18056e748;
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  lVar11 = 1L << ((char)lVar11 + 1U & 0x3f);
  FUN_18022be40(&DAT_18056e758,lVar11 * 2,DAT_18056e748);
  DAT_18056e770 = lVar11 - 1;
  DAT_18056e778 = lVar11;
  plVar8 = (longlong *)*DAT_18056e748;
joined_r0x00018022c72c:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar9) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        uVar10 = (((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 & DAT_18056e770;
        puVar1 = (undefined8 *)(DAT_18056e758 + uVar10 * 0x10);
        lVar11 = DAT_18056e758 + uVar10 * 0x10;
        if ((longlong *)*puVar1 != plVar9) break;
        *puVar1 = plVar8;
        *(longlong **)(lVar11 + 8) = plVar8;
        plVar8 = plVar2;
      }
      plVar3 = *(longlong **)(lVar11 + 8);
      if ((int)plVar8[2] != (int)plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar8) {
        puVar1 = (undefined8 *)plVar8[1];
        *puVar1 = plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        *puVar4 = plVar3;
        puVar5 = (undefined8 *)plVar3[1];
        *puVar5 = plVar8;
        plVar3[1] = (longlong)puVar4;
        plVar2[1] = (longlong)puVar1;
        plVar8[1] = (longlong)puVar5;
      }
      *(longlong **)(lVar11 + 8) = plVar8;
      plVar8 = plVar2;
    }
    do {
      if ((longlong *)*puVar1 == plVar3) {
        puVar4 = (undefined8 *)plVar8[1];
        *puVar4 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar8;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)puVar4;
        plVar8[1] = (longlong)puVar6;
        *puVar1 = plVar8;
        plVar8 = plVar2;
        goto joined_r0x00018022c72c;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((int)plVar8[2] != (int)plVar3[2]);
    lVar11 = *plVar3;
    puVar1 = (undefined8 *)plVar8[1];
    *puVar1 = plVar2;
    plVar3 = (longlong *)plVar2[1];
    *plVar3 = lVar11;
    puVar4 = *(undefined8 **)(lVar11 + 8);
    *puVar4 = plVar8;
    *(longlong **)(lVar11 + 8) = plVar3;
    plVar2[1] = (longlong)puVar1;
    plVar8[1] = (longlong)puVar4;
    plVar8 = plVar2;
  } while( true );
}


