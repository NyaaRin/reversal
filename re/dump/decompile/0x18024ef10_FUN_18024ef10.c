// 0x18024ef10  FUN_18024ef10
// size=170 thunk=false
// signature: undefined FUN_18024ef10()
// status: ok


void FUN_18024ef10(longlong param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *(undefined8 *)(param_1 + 0x578) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x580) = 0;
  uVar5 = (*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 5) * -0x5555555555555555
  ;
  *(undefined4 *)(param_1 + 0x574) = param_4;
  *(undefined4 *)(param_1 + 0x570) = param_3;
  uVar2 = param_2;
  if (uVar5 < param_2) {
    uVar2 = uVar5;
  }
  *(ulonglong *)(param_1 + 0x568) = uVar2;
  if (*(char *)(param_1 + 0x23) != '\0') {
    puVar1 = *(ulonglong **)(param_1 + 0x1c0);
    for (puVar3 = *(ulonglong **)(param_1 + 0x1b8); puVar3 != puVar1; puVar3 = puVar3 + 2) {
      if ((*puVar3 < param_2) && (param_2 <= puVar3[1])) {
        lVar4 = *puVar3 * 0x60;
        if (*(char *)(lVar4 + 0x22 + *(longlong *)(param_1 + 0x50)) == '\x01') {
          *(undefined1 *)(lVar4 + 0x22 + *(longlong *)(param_1 + 0x50)) = 0;
          *(undefined1 *)(param_1 + 0x1d2) = 1;
        }
      }
    }
  }
  return;
}


