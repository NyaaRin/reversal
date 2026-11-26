// 0x1801f72b0  FUN_1801f72b0
// size=83 thunk=false
// signature: undefined FUN_1801f72b0()
// status: ok


void FUN_1801f72b0(int *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = *param_1;
  uVar3 = 0;
  while (((uVar3 + 1 < 0x40 && (uVar3 < 0x3f)) &&
         (cVar1 = *(char *)((longlong)param_1 + uVar3 + 0xc + (longlong)iVar2), cVar1 != '\0'))) {
    *(char *)(uVar3 + param_2) = cVar1;
    uVar3 = uVar3 + 1;
  }
  *(undefined1 *)(uVar3 + param_2) = 0;
  return;
}


