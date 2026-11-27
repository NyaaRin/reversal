// 0x18023dbe0  FUN_18023dbe0
// size=575 thunk=false
// signature: undefined FUN_18023dbe0()
// status: ok


void FUN_18023dbe0(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_1[0xe];
  iVar7 = -1;
  iVar4 = 0;
  if (iVar6 == 0x2a) goto LAB_18023dc0f;
  if (iVar6 == 0x2b) {
    iVar4 = 1;
    goto LAB_18023dc0f;
  }
  if (iVar6 == 0x3f) {
    iVar7 = 1;
    iVar4 = 0;
    goto LAB_18023dc0f;
  }
  if (iVar6 != 0x7b) {
    return;
  }
  pcVar3 = (char *)*param_1;
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
  cVar2 = FUN_18023e580(param_1,7,0);
  if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_18023d7e0();
  }
  iVar4 = *(int *)((longlong)param_1 + 0x6c);
  iVar6 = iVar4;
  if ((int)param_1[0xe] == 0x2c) {
    pcVar3 = (char *)*param_1;
    if (pcVar3 != (char *)param_1[1]) {
      if (((*pcVar3 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
         ((pcVar3 = pcVar3 + 1, pcVar3 != (char *)param_1[1] &&
          ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar3 - 0x28U) < 2)) ||
           (((param_1[0xc] & 0x10U) == 0 && ((*pcVar3 + 0x85U & 0xfd) == 0)))))))) {
        *param_1 = (longlong)pcVar3;
      }
      *param_1 = *param_1 + 1;
    }
    FUN_180234da0(param_1);
    if ((int)param_1[0xe] != 0x7d) {
      cVar2 = FUN_18023e580(param_1,7,0);
      if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_18023d7e0();
      }
      iVar6 = *(int *)((longlong)param_1 + 0x6c);
      goto LAB_18023ddbf;
    }
  }
  else {
LAB_18023ddbf:
    iVar7 = iVar6;
    if ((int)param_1[0xe] != 0x7d) goto LAB_18023de17;
  }
  if ((iVar7 == -1) || (iVar4 <= iVar7)) {
LAB_18023dc0f:
    pcVar3 = (char *)*param_1;
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
    uVar1 = param_1[0xc];
    if (((uVar1 >> 9 & 1) == 0) || ((int)param_1[0xe] != 0x3f)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
      pcVar3 = (char *)*param_1;
      if (pcVar3 != (char *)param_1[1]) {
        if ((((*pcVar3 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
            (pcVar3 = pcVar3 + 1, pcVar3 != (char *)param_1[1])) &&
           ((((uVar1 & 8) == 0 && ((byte)(*pcVar3 - 0x28U) < 2)) ||
            (((uVar1 & 0x10) == 0 && ((*pcVar3 + 0x85U & 0xfd) == 0)))))) {
          *param_1 = (longlong)pcVar3;
        }
        *param_1 = *param_1 + 1;
      }
      FUN_180234da0(param_1);
    }
    FUN_18023f100(param_1 + 7,iVar4,iVar7,uVar5);
    return;
  }
LAB_18023de17:
                    /* WARNING: Subroutine does not return */
  FUN_18023d7e0();
}


