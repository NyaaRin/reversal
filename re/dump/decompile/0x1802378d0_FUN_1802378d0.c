// 0x1802378d0  FUN_1802378d0
// size=451 thunk=false
// signature: undefined FUN_1802378d0()
// status: ok


void FUN_1802378d0(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  plVar8 = DAT_1805c3998;
  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  lVar10 = 1L << ((char)lVar10 + 1U & 0x3f);
  FUN_18022c1b0(&DAT_1805c39a8,lVar10 * 2,DAT_1805c3998);
  DAT_1805c39c0 = lVar10 - 1;
  DAT_1805c39c8 = lVar10;
  plVar7 = (longlong *)*DAT_1805c3998;
joined_r0x000180237962:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          return;
        }
        plVar1 = (longlong *)*plVar7;
        puVar11 = (undefined8 *)
                  (((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 & DAT_1805c39c0)
                   * 0x10 + DAT_1805c39a8);
        if ((longlong *)*puVar11 != plVar8) break;
        *puVar11 = plVar7;
        puVar11[1] = plVar7;
        plVar7 = plVar1;
      }
      plVar2 = (longlong *)puVar11[1];
      if ((int)plVar7[2] != (int)plVar2[2]) break;
      plVar2 = (longlong *)*plVar2;
      if (plVar2 != plVar7) {
        puVar3 = (undefined8 *)plVar7[1];
        *puVar3 = plVar1;
        puVar4 = (undefined8 *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar7;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar7[1] = (longlong)puVar5;
      }
      puVar11[1] = plVar7;
      plVar7 = plVar1;
    }
    do {
      if ((longlong *)*puVar11 == plVar2) {
        puVar3 = (undefined8 *)plVar7[1];
        *puVar3 = plVar1;
        puVar4 = (undefined8 *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar7;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar7[1] = (longlong)puVar5;
        *puVar11 = plVar7;
        plVar7 = plVar1;
        goto joined_r0x000180237962;
      }
      plVar2 = (longlong *)plVar2[1];
    } while ((int)plVar7[2] != (int)plVar2[2]);
    lVar10 = *plVar2;
    puVar11 = (undefined8 *)plVar7[1];
    *puVar11 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar10;
    puVar3 = *(undefined8 **)(lVar10 + 8);
    *puVar3 = plVar7;
    *(longlong **)(lVar10 + 8) = plVar2;
    plVar1[1] = (longlong)puVar11;
    plVar7[1] = (longlong)puVar3;
    plVar7 = plVar1;
  } while( true );
}


