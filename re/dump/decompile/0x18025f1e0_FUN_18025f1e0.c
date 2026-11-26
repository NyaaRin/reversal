// 0x18025f1e0  FUN_18025f1e0
// size=130 thunk=false
// signature: undefined FUN_18025f1e0()
// status: ok


void FUN_18025f1e0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  bool bVar7;
  bool bVar8;
  
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = param_2[3];
  uVar4 = (param_2[1] - *param_2 >> 4) * -0x5555555555555555;
  if (uVar1 <= uVar4 && uVar4 - uVar1 != 0) {
    puVar6 = (ulonglong *)(uVar1 * 0x30 + *param_2);
    bVar7 = *puVar6 < puVar6[2];
    bVar8 = false;
    if (*puVar6 == puVar6[2]) {
      bVar7 = puVar6[1] < puVar6[3];
      bVar8 = puVar6[1] == puVar6[3];
    }
    if (bVar7 || bVar8) {
      puVar6 = puVar6 + 2;
    }
    uVar2 = *(undefined4 *)((longlong)puVar6 + 4);
    uVar1 = puVar6[1];
    uVar3 = *(undefined4 *)((longlong)puVar6 + 0xc);
    *(int *)(param_1 + 8) = (int)*puVar6;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)uVar1;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    lVar5 = _Xtime_get_ticks();
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x40) * 10000 + lVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180262180();
}


