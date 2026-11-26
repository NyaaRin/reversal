// 0x180289d40  FUN_180289d40
// size=176 thunk=false
// signature: undefined FUN_180289d40()
// status: ok


void FUN_180289d40(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 2)) {
    do {
      iVar1 = *(int *)(param_1[3] + 8 + (longlong)iVar3 * 0x10);
      if (iVar1 != -1) {
        lVar2 = (longlong)iVar1 * 0xb0 + param_1[1];
        if (*(longlong *)(lVar2 + 0xa8) != 0) {
          FUN_18026f680();
        }
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          FUN_18026f680();
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 2));
  }
  if (param_1[3] != 0) {
    param_1[2] = 0;
    FUN_18026f680();
    param_1[3] = 0;
  }
  if (param_1[1] != 0) {
    *param_1 = 0;
    FUN_18026f680();
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}


