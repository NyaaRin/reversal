// 0x18023e580  FUN_18023e580
// size=225 thunk=false
// signature: undefined FUN_18023e580()
// status: ok


bool FUN_18023e580(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_3;
  iVar3 = 0x7fffffff;
  do {
    if (9 < (byte)(*(char *)((longlong)param_1 + 0x75) - 0x30U)) break;
    iVar1 = *(char *)((longlong)param_1 + 0x75) + -0x30;
    if (iVar1 == -1) break;
    if ((0x7fffffff - iVar1) / 10 < *(int *)((longlong)param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
      FUN_18023d7e0(0x7fffffff - iVar1,param_2);
    }
    iVar3 = iVar3 + -1;
    *(int *)((longlong)param_1 + 0x6c) = iVar1 + *(int *)((longlong)param_1 + 0x6c) * 10;
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      if ((((*pcVar2 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
          (pcVar2 = pcVar2 + 1, pcVar2 != (char *)param_1[1])) &&
         ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar2 - 0x28U) < 2)) ||
          (((param_1[0xc] & 0x10U) == 0 && ((*pcVar2 + 0x85U & 0xfd) == 0)))))) {
        *param_1 = (longlong)pcVar2;
      }
      *param_1 = *param_1 + 1;
    }
    FUN_180234da0(param_1);
  } while (iVar3 != 0);
  return iVar3 != 0x7fffffff;
}


