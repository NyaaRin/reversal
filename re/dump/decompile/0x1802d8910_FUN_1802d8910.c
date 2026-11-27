// 0x1802d8910  FUN_1802d8910
// size=166 thunk=false
// signature: undefined FUN_1802d8910()
// status: ok


undefined8 FUN_1802d8910(undefined8 param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar2 = *(int **)(lVar1 + 0x20);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(lVar1 + 0x30);
  }
  else {
    if (*piVar2 != 0x1e) {
      iVar3 = *piVar2;
      goto LAB_1802d898f;
    }
    piVar2 = malloc(0x100);
    free((void *)0x0);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(lVar1 + 0x20);
  }
  *(int **)(lVar1 + 0x20) = piVar2;
  *piVar2 = 0;
LAB_1802d898f:
  *(undefined8 *)(piVar2 + (longlong)iVar3 * 2 + 4) = param_1;
  *piVar2 = *piVar2 + 1;
  return 0;
}


