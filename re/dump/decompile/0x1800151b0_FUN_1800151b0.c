// 0x1800151b0  FUN_1800151b0
// size=191 thunk=false
// signature: undefined FUN_1800151b0()
// status: ok


void FUN_1800151b0(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar2 = (*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 5) * -0x5555555555555555
  ;
  if (uVar2 <= param_2) {
    param_2 = uVar2 - 1;
  }
  *(undefined8 *)(param_1 + 0x578) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x570) = 1;
  uVar4 = (*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 5) * -0x5555555555555555
  ;
  uVar2 = param_2;
  if (uVar4 < param_2) {
    uVar2 = uVar4;
  }
  *(ulonglong *)(param_1 + 0x568) = uVar2;
  if (*(char *)(param_1 + 0x23) != '\0') {
    puVar1 = *(ulonglong **)(param_1 + 0x1c0);
    for (puVar3 = *(ulonglong **)(param_1 + 0x1b8); puVar3 != puVar1; puVar3 = puVar3 + 2) {
      if ((*puVar3 < param_2) && (param_2 <= puVar3[1])) {
        lVar5 = *puVar3 * 0x60;
        if (*(char *)(lVar5 + 0x22 + *(longlong *)(param_1 + 0x50)) == '\x01') {
          *(undefined1 *)(lVar5 + 0x22 + *(longlong *)(param_1 + 0x50)) = 0;
          *(undefined1 *)(param_1 + 0x1d2) = 1;
        }
      }
    }
  }
  return;
}


