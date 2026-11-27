// 0x180266cf0  FUN_180266cf0
// size=403 thunk=false
// signature: undefined FUN_180266cf0()
// status: ok


void FUN_180266cf0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar11 = param_2 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  lVar12 = 1L << ((char)lVar12 + 1U & 0x3f);
  plVar3 = *(longlong **)(param_1 + 8);
  FUN_18022be40(param_1 + 0x18,lVar12 * 2,plVar3);
  *(longlong *)(param_1 + 0x30) = lVar12 + -1;
  *(longlong *)(param_1 + 0x38) = lVar12;
  plVar10 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000180266d70:
  do {
    while( true ) {
      while( true ) {
        if (plVar10 == plVar3) {
          return;
        }
        plVar4 = (longlong *)*plVar10;
        bVar2 = *(byte *)(plVar10 + 2);
        uVar11 = ((ulonglong)bVar2 ^ 0xcbf29ce484222325) * 0x100000001b3 &
                 *(ulonglong *)(param_1 + 0x30);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar11 * 0x10);
        lVar12 = *(longlong *)(param_1 + 0x18) + uVar11 * 0x10;
        if ((longlong *)*puVar1 != plVar3) break;
        *puVar1 = plVar10;
        *(longlong **)(lVar12 + 8) = plVar10;
        plVar10 = plVar4;
      }
      plVar5 = *(longlong **)(lVar12 + 8);
      if (bVar2 != *(byte *)(plVar5 + 2)) break;
      plVar5 = (longlong *)*plVar5;
      if (plVar5 != plVar10) {
        plVar6 = (longlong *)plVar10[1];
        *plVar6 = (longlong)plVar4;
        puVar1 = (undefined8 *)plVar4[1];
        *puVar1 = plVar5;
        puVar7 = (undefined8 *)plVar5[1];
        *puVar7 = plVar10;
        plVar5[1] = (longlong)puVar1;
        plVar4[1] = (longlong)plVar6;
        plVar10[1] = (longlong)puVar7;
      }
      *(longlong **)(lVar12 + 8) = plVar10;
      plVar10 = plVar4;
    }
    do {
      if ((longlong *)*puVar1 == plVar5) {
        plVar6 = (longlong *)plVar10[1];
        *plVar6 = (longlong)plVar4;
        puVar7 = (undefined8 *)plVar4[1];
        *puVar7 = plVar5;
        puVar8 = (undefined8 *)plVar5[1];
        *puVar8 = plVar10;
        plVar5[1] = (longlong)puVar7;
        plVar4[1] = (longlong)plVar6;
        plVar10[1] = (longlong)puVar8;
        *puVar1 = plVar10;
        plVar10 = plVar4;
        goto joined_r0x000180266d70;
      }
      plVar5 = (longlong *)plVar5[1];
    } while (bVar2 != *(byte *)(plVar5 + 2));
    lVar12 = *plVar5;
    plVar5 = (longlong *)plVar10[1];
    *plVar5 = (longlong)plVar4;
    plVar6 = (longlong *)plVar4[1];
    *plVar6 = lVar12;
    puVar1 = *(undefined8 **)(lVar12 + 8);
    *puVar1 = plVar10;
    *(longlong **)(lVar12 + 8) = plVar6;
    plVar4[1] = (longlong)plVar5;
    plVar10[1] = (longlong)puVar1;
    plVar10 = plVar4;
  } while( true );
}


