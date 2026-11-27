// 0x1802898c0  FUN_1802898c0
// size=278 thunk=false
// signature: undefined FUN_1802898c0()
// status: ok


int FUN_1802898c0(int *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 local_res10 [24];
  
  if (*param_1 != param_2) {
    *param_1 = param_2;
    *(undefined2 *)((longlong)param_1 + 5) = 0xff00;
    iVar3 = param_1[3];
    if (iVar3 < 0) {
      iVar3 = iVar3 + iVar3 / 2;
      iVar4 = 0;
      if (0 < iVar3) {
        iVar4 = iVar3;
      }
      FUN_18028ac40(param_1 + 2,iVar4);
    }
    param_1[2] = 0;
    if (0 < param_1[6]) {
      **(undefined1 **)(param_1 + 8) = 0;
    }
    local_res10[0] = 0;
    FUN_18028aac0(param_1 + 6,0,local_res10);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 == 0) {
    return 0;
  }
  cVar2 = *(char *)((longlong)param_1 + 6);
  if (-1 < cVar2) {
    iVar3 = (int)cVar2;
    if ((param_1[2] <= iVar3) ||
       ((*(char *)(*(longlong *)(param_1 + 4) + 5 + (longlong)cVar2 * 0xc) == '\0' &&
        (*(char *)(*(longlong *)(param_1 + 4) + 4 + (longlong)cVar2 * 0xc) < '\x03')))) {
      iVar4 = param_1[2];
      *(bool *)((longlong)param_1 + 5) = iVar3 == iVar4;
      goto LAB_180289999;
    }
    cVar2 = cVar2 + '\x01';
    *(char *)((longlong)param_1 + 6) = cVar2;
  }
  iVar4 = param_1[2];
  iVar3 = (int)cVar2;
  *(bool *)((longlong)param_1 + 5) = iVar3 == iVar4;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + 1) = 1;
    return param_2;
  }
  if (cVar2 < '\0') {
    return 0;
  }
LAB_180289999:
  if (iVar4 <= iVar3) {
    return 0;
  }
  pcVar1 = (char *)(*(longlong *)(param_1 + 4) + 4 + (longlong)cVar2 * 0xc);
  *pcVar1 = *pcVar1 + '\x01';
  *(undefined1 *)(param_1 + 1) = 1;
  return *(int *)(*(longlong *)(param_1 + 4) + (longlong)*(char *)((longlong)param_1 + 6) * 0xc);
}


