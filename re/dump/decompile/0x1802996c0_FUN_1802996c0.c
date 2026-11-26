// 0x1802996c0  FUN_1802996c0
// size=400 thunk=false
// signature: undefined FUN_1802996c0()
// status: ok


void FUN_1802996c0(longlong param_1)

{
  ushort *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort uVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ushort *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x2b0) + 0xb9) = 1;
  uVar6 = DAT_180381384;
  plVar12 = *(longlong **)(param_1 + 0x70);
  plVar2 = plVar12 + *(int *)(param_1 + 0x68);
  do {
    if (plVar12 == plVar2) {
      return;
    }
    lVar5 = *plVar12;
    lVar7 = FUN_18029db30(lVar5,*(undefined4 *)(lVar5 + 0x1c),uVar6);
    uVar8 = (ulonglong)*(ushort *)(lVar5 + 0x32);
    if ((*(ushort *)(lVar5 + 0x32) != 0) &&
       (((ulonglong)(longlong)*(int *)(lVar7 + 0x20) <= uVar8 ||
        (*(short *)(*(longlong *)(lVar7 + 0x28) + uVar8 * 2) == -1)))) {
      FUN_18029c810(lVar7,uVar8,0);
    }
    uVar8 = (ulonglong)*(ushort *)(lVar5 + 0x30);
    if ((*(ushort *)(lVar5 + 0x30) != 0) &&
       (((ulonglong)(longlong)*(int *)(lVar7 + 0x20) <= uVar8 ||
        (*(short *)(*(longlong *)(lVar7 + 0x28) + uVar8 * 2) == -1)))) {
      FUN_18029c810(lVar7,uVar8,0);
    }
    plVar11 = *(longlong **)(lVar5 + 0x28);
    plVar3 = plVar11 + *(int *)(lVar5 + 0x20);
    for (; plVar11 != plVar3; plVar11 = plVar11 + 1) {
      puVar10 = &DAT_18037fc7c;
      if (*(ushort **)(*plVar11 + 0x40) != (ushort *)0x0) {
        puVar10 = *(ushort **)(*plVar11 + 0x40);
      }
      uVar4 = *puVar10;
      while (uVar4 != 0) {
        uVar9 = (uint)uVar4;
        if (uVar4 <= puVar10[1]) {
          do {
            if (0xffff < uVar9) break;
            uVar8 = (ulonglong)(uVar9 & 0xffff);
            if (((ulonglong)(longlong)*(int *)(lVar7 + 0x20) <= uVar8) ||
               (*(short *)(*(longlong *)(lVar7 + 0x28) + uVar8 * 2) == -1)) {
              FUN_18029c810(lVar7,uVar8,0);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 <= puVar10[1]);
        }
        puVar1 = puVar10 + 2;
        puVar10 = puVar10 + 2;
        uVar4 = *puVar1;
      }
    }
    plVar12 = plVar12 + 1;
  } while( true );
}


