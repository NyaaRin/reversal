// 0x18024f370  FUN_18024f370
// size=229 thunk=false
// signature: undefined FUN_18024f370()
// status: ok


void FUN_18024f370(longlong param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  
  uVar2 = *(ulonglong *)(param_1 + 0x110);
  lVar10 = *(longlong *)(param_1 + 0xf0);
  uVar8 = (*(longlong *)(param_1 + 0xf8) - lVar10 >> 4) * -0x5555555555555555;
  if (uVar8 < uVar2 || uVar8 - uVar2 == 0) {
LAB_18024f450:
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  puVar1 = (undefined4 *)(lVar10 + 0x10 + uVar2 * 0x30);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *(undefined8 *)(param_1 + 0x568) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x578) = uVar4;
  *(undefined4 *)(param_1 + 0x57c) = uVar5;
  *(undefined4 *)(param_1 + 0x580) = uVar6;
  *(undefined4 *)(param_1 + 0x584) = uVar7;
  if (*(char *)(param_1 + 0x23) != '\0') {
    uVar8 = (*(longlong *)(param_1 + 0xf8) - lVar10 >> 4) * -0x5555555555555555;
    if (uVar8 < uVar2 || uVar8 - uVar2 == 0) goto LAB_18024f450;
    puVar3 = *(ulonglong **)(param_1 + 0x1c0);
    uVar2 = *(ulonglong *)(lVar10 + 0x10 + uVar2 * 0x30);
    for (puVar9 = *(ulonglong **)(param_1 + 0x1b8); puVar9 != puVar3; puVar9 = puVar9 + 2) {
      if ((*puVar9 < uVar2) && (uVar2 <= puVar9[1])) {
        lVar10 = *puVar9 * 0x60;
        if (*(char *)(lVar10 + 0x22 + *(longlong *)(param_1 + 0x50)) == '\x01') {
          *(undefined1 *)(lVar10 + 0x22 + *(longlong *)(param_1 + 0x50)) = 0;
          *(undefined1 *)(param_1 + 0x1d2) = 1;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x560) = 0xbe99999a;
  return;
}


