// 0x18024dbe0  FUN_18024dbe0
// size=488 thunk=false
// signature: undefined FUN_18024dbe0()
// status: ok


void FUN_18024dbe0(longlong param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  longlong lVar10;
  undefined4 uStack_30;
  int iStack_2c;
  
  pvVar1 = *(void **)(param_1 + 0xf0);
  while (pvVar9 = pvVar1, pvVar9 < *(void **)(param_1 + 0xf8)) {
    pvVar1 = (void *)((longlong)pvVar9 + 0x30);
    if (*(char *)((longlong)pvVar9 + 0x20) == '\0') {
      memmove(pvVar9,pvVar1,(longlong)*(void **)(param_1 + 0xf8) - (longlong)pvVar1);
      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + -0x30;
      pvVar1 = pvVar9;
    }
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x21) = 1;
  lVar4 = *(longlong *)(param_1 + 0xf0);
  uVar5 = *(ulonglong *)(param_1 + 0x110);
  uVar7 = (*(longlong *)(param_1 + 0xf8) - lVar4 >> 4) * -0x5555555555555555;
  if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
    puVar2 = (undefined4 *)(lVar4 + uVar5 * 0x30);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + uVar5 * 0x30);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(lVar4 + 0x22 + uVar5 * 0x30) = 1;
    FUN_18024f370(param_1);
    *(undefined1 *)(param_1 + 0x7fa) = 0;
    lVar4 = *(longlong *)(param_1 + 0x50);
    uVar7 = (*(longlong *)(param_1 + 0x58) - lVar4 >> 5) * -0x5555555555555555;
    uVar5 = uVar7 - 1;
    if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    lVar10 = *(longlong *)(uVar5 * 0x60 + 8 + lVar4);
    lVar4 = *(longlong *)(uVar5 * 0x60 + lVar4);
    pvVar1 = *(void **)(param_1 + 0xf0);
    while (pvVar9 = pvVar1, pvVar9 < *(void **)(param_1 + 0xf8)) {
      pvVar1 = (void *)((longlong)pvVar9 + 0x30);
      if (*(char *)((longlong)pvVar9 + 0x20) == '\0') {
        memmove(pvVar9,pvVar1,(longlong)*(void **)(param_1 + 0xf8) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + -0x30;
        pvVar1 = pvVar9;
      }
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x21) = 1;
    lVar6 = *(longlong *)(param_1 + 0xf0);
    uVar7 = *(ulonglong *)(param_1 + 0x110);
    uVar8 = (*(longlong *)(param_1 + 0xf8) - lVar6 >> 4) * -0x5555555555555555;
    if (uVar7 <= uVar8 && uVar8 - uVar7 != 0) {
      lVar10 = lVar10 - lVar4;
      uStack_30 = (undefined4)(lVar10 >> 4);
      iStack_2c = (int)(lVar10 >> 0x24);
      puVar3 = (ulonglong *)(lVar6 + 0x10 + uVar7 * 0x30);
      *puVar3 = uVar5;
      *(undefined4 *)(puVar3 + 1) = uStack_30;
      *(int *)((longlong)puVar3 + 0xc) = iStack_2c;
      *(undefined1 *)(lVar6 + 0x22 + uVar7 * 0x30) = 1;
      FUN_18024f370(param_1);
      *(undefined1 *)(param_1 + 0x7fa) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180262180();
}


