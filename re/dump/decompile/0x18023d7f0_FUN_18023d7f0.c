// 0x18023d7f0  FUN_18023d7f0
// size=486 thunk=false
// signature: undefined FUN_18023d7f0()
// status: ok


void FUN_18023d7f0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  uVar6 = param_1[0xc];
  if ((uVar6 & 0x80080) != 0) {
    if ((byte)(*(char *)((longlong)param_1 + 0x75) - 0x30U) < 10) {
      iVar1 = *(char *)((longlong)param_1 + 0x75) + -0x30;
      *(int *)((longlong)param_1 + 0x6c) = iVar1;
      if (iVar1 != -1) {
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
        uVar7 = FUN_180234da0(param_1);
        uVar6 = param_1[0xc];
        if (((uVar6 >> 0x13 & 1) != 0) && (*(int *)((longlong)param_1 + 0x6c) == 0)) {
          if (9 < (byte)(*(char *)((longlong)param_1 + 0x75) - 0x30U)) {
            FUN_18023de30(param_1 + 7,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_18023d7e0(uVar7,2);
        }
        if (-1 < (char)uVar6) {
          return;
        }
        if ((uVar6 >> 8 & 1) == 0) {
          uVar7 = FUN_18023e580(param_1,3,*(undefined4 *)((longlong)param_1 + 0x6c));
        }
        iVar1 = *(int *)((longlong)param_1 + 0x6c);
        uVar6 = (ulonglong)iVar1;
        if (iVar1 != 0) {
          if (((uVar6 <= *(uint *)(param_1 + 2)) && (uVar6 < (ulonglong)param_1[6])) &&
             (uVar2 = *(uint *)(param_1[3] + (uVar6 >> 5) * 4), uVar6 = (ulonglong)uVar2,
             (uVar2 >> ((byte)iVar1 & 0x1f) & 1) != 0)) {
            puVar4 = (undefined8 *)FUN_1802d8350();
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            *puVar4 = vftable_std__Node_base;
            puVar4[1] = 0xf;
            puVar4[2] = 0;
            puVar4[3] = 0;
            *puVar4 = vftable_std__Node_back;
            *(int *)(puVar4 + 4) = iVar1;
            FUN_18023c1f0(param_1 + 7,puVar4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_18023d7e0(uVar6,3);
        }
                    /* WARNING: Subroutine does not return */
        FUN_18023d7e0(uVar7,2);
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
    }
  }
  cVar3 = FUN_18023ea20(param_1,0);
  if (cVar3 != '\0') {
    FUN_18023de30(param_1 + 7,*(undefined1 *)((longlong)param_1 + 0x76));
    return;
  }
  uVar7 = extraout_XMM0_Da;
  if (((*(uint *)(param_1 + 0xc) >> 0x10 & 1) != 0) &&
     (cVar3 = FUN_18023e670(param_1,1), uVar7 = extraout_XMM0_Da_00, cVar3 != '\0')) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18023d7e0(uVar7,2);
}


