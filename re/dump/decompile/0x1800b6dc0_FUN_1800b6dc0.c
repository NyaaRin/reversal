// 0x1800b6dc0  FUN_1800b6dc0
// size=182 thunk=false
// signature: undefined FUN_1800b6dc0()
// status: ok


undefined8 FUN_1800b6dc0(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 != 0) &&
     (((*(int *)(param_1 + 0x27b8) == 0x100 || (*(int *)(param_1 + 0x27b8) == 0x1000)) &&
      ((*(int *)(param_1 + 0x27bc) - 8U & 0xfffffff7) == 0)))) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    if ((*(longlong *)(param_1 + 0x248) == 0) && (*(longlong *)(param_1 + 0x388) == 0)) {
      if ((*(uint *)(param_1 + 0x108) < 0x1001) && (*(uint *)(param_1 + 0x128) < 0x1001)) {
        if ((*(uint *)(param_1 + 0x108) == 0) && (*(uint *)(param_1 + 0x128) == 0)) {
          uVar2 = 0;
          if (0 < *(int *)(param_1 + 0x27bc)) {
            do {
              if (*(int *)(uVar2 * 0x1c + 0x3cc + param_1) != 0) {
                return 1;
              }
              uVar1 = (int)uVar2 + 1;
              uVar2 = (ulonglong)uVar1;
            } while ((int)uVar1 < *(int *)(param_1 + 0x27bc));
          }
          return 0;
        }
      }
      else if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
    }
  }
  return 1;
}


