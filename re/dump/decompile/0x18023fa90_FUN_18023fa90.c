// 0x18023fa90  FUN_18023fa90
// size=496 thunk=false
// signature: undefined FUN_18023fa90()
// status: ok


undefined8 FUN_18023fa90(longlong *param_1,char param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  iVar2 = (int)param_1[0xe];
  if (iVar2 == 0x5c) {
    uVar4 = param_1[0xc];
    if ((uVar4 >> 0x14 & 1) != 0) {
      pcVar6 = (char *)*param_1;
      if (pcVar6 != (char *)param_1[1]) {
        if ((((*pcVar6 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
            (pcVar6 = pcVar6 + 1, pcVar6 != (char *)param_1[1])) &&
           ((((uVar4 & 8) == 0 && ((byte)(*pcVar6 - 0x28U) < 2)) ||
            (((uVar4 & 0x10) == 0 && ((*pcVar6 + 0x85U & 0xfd) == 0)))))) {
          *param_1 = (longlong)pcVar6;
        }
        *param_1 = *param_1 + 1;
      }
      FUN_180234da0(param_1);
      uVar5 = FUN_1802406e0(param_1);
      return uVar5;
    }
  }
  else {
    if (iVar2 == 0x5b) {
      uVar1 = *(undefined1 *)((longlong)param_1 + 0x75);
      pcVar6 = (char *)*param_1;
      if (pcVar6 != (char *)param_1[1]) {
        if ((((*pcVar6 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
            (pcVar6 = pcVar6 + 1, pcVar6 != (char *)param_1[1])) &&
           ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar6 - 0x28U) < 2)) ||
            (((param_1[0xc] & 0x10U) == 0 && ((*pcVar6 + 0x85U & 0xfd) == 0)))))) {
          *param_1 = (longlong)pcVar6;
        }
        *param_1 = *param_1 + 1;
      }
      FUN_180234da0(param_1);
      uVar3 = *(uint *)(param_1 + 0xe);
      if ((uVar3 < 0x3e) && ((0x2400400000000000U >> ((ulonglong)uVar3 & 0x3f) & 1) != 0)) {
        pcVar6 = (char *)*param_1;
        if (pcVar6 != (char *)param_1[1]) {
          if ((((*pcVar6 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
              (pcVar6 = pcVar6 + 1, pcVar6 != (char *)param_1[1])) &&
             ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar6 - 0x28U) < 2)) ||
              (((param_1[0xc] & 0x10U) == 0 && ((*pcVar6 + 0x85U & 0xfd) == 0)))))) {
            *param_1 = (longlong)pcVar6;
          }
          *param_1 = *param_1 + 1;
        }
        FUN_180234da0(param_1);
        uVar5 = FUN_180240330(param_1,uVar3);
        return uVar5;
      }
      *(undefined1 *)((longlong)param_1 + 0x76) = uVar1;
      return 1;
    }
    if (iVar2 == 0x5d) {
      if (((*(uint *)(param_1 + 0xc) >> 0x1d & 1) == 0) || (param_2 == '\0')) {
        return 0;
      }
    }
    else if (iVar2 == -1) {
      return 0;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x76) = *(undefined1 *)((longlong)param_1 + 0x75);
  pcVar6 = (char *)*param_1;
  if (pcVar6 != (char *)param_1[1]) {
    if (((*pcVar6 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
       ((pcVar6 = pcVar6 + 1, pcVar6 != (char *)param_1[1] &&
        ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar6 - 0x28U) < 2)) ||
         (((param_1[0xc] & 0x10U) == 0 && ((*pcVar6 + 0x85U & 0xfd) == 0)))))))) {
      *param_1 = (longlong)pcVar6;
    }
    *param_1 = *param_1 + 1;
  }
  FUN_180234da0(param_1);
  return 1;
}


