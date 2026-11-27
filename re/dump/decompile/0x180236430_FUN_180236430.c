// 0x180236430  FUN_180236430
// size=437 thunk=false
// signature: undefined FUN_180236430()
// status: ok


void FUN_180236430(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  lVar11 = 1L << ((char)lVar11 + 1U & 0x3f);
  plVar2 = *(longlong **)(param_1 + 8);
  FUN_18022c1b0(param_1 + 0x18,lVar11 * 2,plVar2);
  *(longlong *)(param_1 + 0x30) = lVar11 + -1;
  *(longlong *)(param_1 + 0x38) = lVar11;
  plVar9 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001802364b0:
  do {
    while( true ) {
      while( true ) {
        if (plVar9 == plVar2) {
          return;
        }
        plVar3 = (longlong *)*plVar9;
        uVar10 = (((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 &
                 *(ulonglong *)(param_1 + 0x30);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar10 * 0x10);
        lVar11 = *(longlong *)(param_1 + 0x18) + uVar10 * 0x10;
        if ((longlong *)*puVar1 != plVar2) break;
        *puVar1 = plVar9;
        *(longlong **)(lVar11 + 8) = plVar9;
        plVar9 = plVar3;
      }
      plVar4 = *(longlong **)(lVar11 + 8);
      if ((int)plVar9[2] != (int)plVar4[2]) break;
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar9) {
        plVar5 = (longlong *)plVar9[1];
        *plVar5 = (longlong)plVar3;
        puVar1 = (undefined8 *)plVar3[1];
        *puVar1 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar9;
        plVar4[1] = (longlong)puVar1;
        plVar3[1] = (longlong)plVar5;
        plVar9[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar11 + 8) = plVar9;
      plVar9 = plVar3;
    }
    do {
      if ((longlong *)*puVar1 == plVar4) {
        plVar5 = (longlong *)plVar9[1];
        *plVar5 = (longlong)plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar4;
        puVar7 = (undefined8 *)plVar4[1];
        *puVar7 = plVar9;
        plVar4[1] = (longlong)puVar6;
        plVar3[1] = (longlong)plVar5;
        plVar9[1] = (longlong)puVar7;
        *puVar1 = plVar9;
        plVar9 = plVar3;
        goto joined_r0x0001802364b0;
      }
      plVar4 = (longlong *)plVar4[1];
    } while ((int)plVar9[2] != (int)plVar4[2]);
    lVar11 = *plVar4;
    plVar4 = (longlong *)plVar9[1];
    *plVar4 = (longlong)plVar3;
    plVar5 = (longlong *)plVar3[1];
    *plVar5 = lVar11;
    puVar1 = *(undefined8 **)(lVar11 + 8);
    *puVar1 = plVar9;
    *(longlong **)(lVar11 + 8) = plVar5;
    plVar3[1] = (longlong)plVar4;
    plVar9[1] = (longlong)puVar1;
    plVar9 = plVar3;
  } while( true );
}


