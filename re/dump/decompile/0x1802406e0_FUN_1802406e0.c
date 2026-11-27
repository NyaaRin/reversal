// 0x1802406e0  FUN_1802406e0
// size=366 thunk=false
// signature: undefined FUN_1802406e0()
// status: ok


undefined8 FUN_1802406e0(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  char *pcVar4;
  
  uVar2 = param_1[0xc];
  if (((uVar2 >> 0xd & 1) == 0) || (*(char *)((longlong)param_1 + 0x75) != 'b')) {
    if ((uVar2 & 0x80080) != 0) {
      if ((byte)(*(char *)((longlong)param_1 + 0x75) - 0x30U) < 10) {
        iVar1 = *(char *)((longlong)param_1 + 0x75) + -0x30;
        *(int *)((longlong)param_1 + 0x6c) = iVar1;
        if (iVar1 != -1) {
          pcVar4 = (char *)*param_1;
          if (pcVar4 != (char *)param_1[1]) {
            if ((((*pcVar4 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
                (pcVar4 = pcVar4 + 1, pcVar4 != (char *)param_1[1])) &&
               ((((uVar2 & 8) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
                (((uVar2 & 0x10) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))) {
              *param_1 = (longlong)pcVar4;
            }
            *param_1 = *param_1 + 1;
          }
          FUN_180234da0(param_1);
          if ((((*(uint *)(param_1 + 0xc) >> 0x13 & 1) != 0) &&
              (*(int *)((longlong)param_1 + 0x6c) == 0)) &&
             (9 < (byte)(*(char *)((longlong)param_1 + 0x75) - 0x30U))) {
            *(undefined1 *)((longlong)param_1 + 0x76) = 0;
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_18023d7e0();
        }
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
      }
    }
    cVar3 = FUN_18023ea20(param_1,CONCAT71((int7)(uVar2 >> 8),1));
    if (cVar3 == '\0') {
      if ((*(uint *)(param_1 + 0xc) >> 0x10 & 1) != 0) {
        cVar3 = FUN_18023e670(param_1,0);
        if (cVar3 != '\0') {
          return 2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_18023d7e0();
    }
  }
  else {
    pcVar4 = (char *)*param_1;
    if (pcVar4 != (char *)param_1[1]) {
      if ((((*pcVar4 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
          (pcVar4 = pcVar4 + 1, pcVar4 != (char *)param_1[1])) &&
         ((((uVar2 & 8) == 0 && ((byte)(*pcVar4 - 0x28U) < 2)) ||
          (((uVar2 & 0x10) == 0 && ((*pcVar4 + 0x85U & 0xfd) == 0)))))) {
        *param_1 = (longlong)pcVar4;
      }
      *param_1 = *param_1 + 1;
    }
    FUN_180234da0(param_1);
    *(undefined1 *)((longlong)param_1 + 0x76) = 8;
  }
  return 1;
}


