// 0x18023d9e0  FUN_18023d9e0
// size=499 thunk=false
// signature: undefined FUN_18023d9e0()
// status: ok


undefined8 FUN_18023d9e0(longlong *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  if (999 < *(int *)((longlong)param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    FUN_18023d7e0(param_1,0xc);
  }
  uVar6 = param_1[0xc];
  if (((uVar6 >> 0x1a & 1) == 0) && ((int)param_1[0xe] == 0x29)) {
                    /* WARNING: Subroutine does not return */
    FUN_18023d7e0(param_1,5);
  }
  if (((uVar6 & 0x20) == 0) || ((int)param_1[0xe] != 0x3f)) {
    if ((*(uint *)(param_1 + 0xd) & 0x200) == 0) {
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      if (999 < *(uint *)(param_1 + 2)) {
        std::_Xregex_error(0xc);
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return uVar3;
      }
      lVar4 = FUN_1802354d0(param_1 + 7);
      FUN_180235010(param_1);
      FUN_180235430(param_1 + 7,lVar4);
      uVar6 = (ulonglong)((int)param_1[2] + 1);
      if ((int)param_1[2] == -1) {
        uVar6 = 0xffffffffffffffff;
      }
      FUN_180239dc0(param_1 + 3,uVar6);
      uVar6 = (ulonglong)(*(uint *)(lVar4 + 0x20) >> 5);
      *(uint *)(param_1[3] + uVar6 * 4) =
           *(uint *)(param_1[3] + uVar6 * 4) | 1 << (*(uint *)(lVar4 + 0x20) & 0x1f);
      *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
      return 1;
    }
  }
  else {
    pcVar5 = (char *)*param_1;
    if (pcVar5 != (char *)param_1[1]) {
      if ((((*pcVar5 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
          (pcVar5 = pcVar5 + 1, pcVar5 != (char *)param_1[1])) &&
         ((((uVar6 & 8) == 0 && ((byte)(*pcVar5 - 0x28U) < 2)) ||
          (((uVar6 & 0x10) == 0 && ((*pcVar5 + 0x85U & 0xfd) == 0)))))) {
        *param_1 = (longlong)pcVar5;
      }
      *param_1 = *param_1 + 1;
    }
    FUN_180234da0(param_1);
    pcVar5 = (char *)*param_1;
    iVar1 = (int)param_1[0xe];
    if (pcVar5 != (char *)param_1[1]) {
      if (((*pcVar5 == '\\') && (*(char *)((longlong)param_1 + 0x74) == '\0')) &&
         ((pcVar5 = pcVar5 + 1, pcVar5 != (char *)param_1[1] &&
          ((((param_1[0xc] & 8U) == 0 && ((byte)(*pcVar5 - 0x28U) < 2)) ||
           (((param_1[0xc] & 0x10U) == 0 && ((*pcVar5 + 0x85U & 0xfd) == 0)))))))) {
        *param_1 = (longlong)pcVar5;
      }
      *param_1 = *param_1 + 1;
    }
    FUN_180234da0(param_1);
    if (iVar1 != 0x3a) {
      if (iVar1 == 0x21) {
        FUN_18023efd0(param_1,1);
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        return 0;
      }
      if (iVar1 == 0x3d) {
        FUN_18023efd0(param_1,0);
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_18023d7e0();
    }
  }
  FUN_18023ef60(param_1);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
  return 1;
}


