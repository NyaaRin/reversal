// 0x18023f990  FUN_18023f990
// size=241 thunk=false
// signature: undefined FUN_18023f990()
// status: ok


void FUN_18023f990(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    cVar1 = *(char *)((longlong)param_1 + 0x75);
    iVar2 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar2 = iVar2 + -0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar2 = iVar2 + -0x57;
    }
    else {
      if (5 < (byte)(cVar1 + 0xbfU)) break;
      iVar2 = iVar2 + -0x37;
    }
    if (iVar2 == -1) break;
    if ((int)((0x7fffffff - iVar2) + (0x7fffffff - iVar2 >> 0x1f & 0xfU)) >> 4 <
        *(int *)((longlong)param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
      FUN_18023d7e0(iVar2,2);
    }
    param_2 = param_2 + -1;
    pcVar3 = (char *)*param_1;
    *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) * 0x10 + iVar2;
    if (pcVar3 != (char *)param_1[1]) {
      if ((((*pcVar3 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
          (pcVar3 = pcVar3 + 1, pcVar3 != (char *)param_1[1])) &&
         ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar3 - 0x28U) < 2)) ||
          (((param_1[0xc] & 0x10U) == 0 && ((*pcVar3 + 0x85U & 0xfd) == 0)))))) {
        *param_1 = (longlong)pcVar3;
      }
      *param_1 = *param_1 + 1;
    }
    FUN_180234da0(param_1);
  }
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18023d7e0(iVar2,2);
}


