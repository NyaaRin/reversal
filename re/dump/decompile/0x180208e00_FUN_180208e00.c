// 0x180208e00  FUN_180208e00
// size=283 thunk=false
// signature: undefined FUN_180208e00()
// status: ok


undefined8 * FUN_180208e00(longlong *param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *local_48;
  ulonglong local_40;
  
  plVar1 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar1[1];
  plVar5 = plVar1;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    plVar4 = plVar7;
    do {
      plVar7 = plVar4;
      bVar2 = *param_3 <= (int)plVar7[4];
      if (bVar2) {
        plVar4 = (longlong *)*plVar7;
        plVar5 = plVar7;
      }
      else {
        plVar4 = (longlong *)plVar7[2];
      }
      uVar6 = (uint)bVar2;
    } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
  }
  else {
    uVar6 = 0;
  }
  if ((*(char *)((longlong)plVar5 + 0x19) == '\0') && ((int)plVar5[4] <= *param_3)) {
    uVar3 = 0;
  }
  else {
    if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    local_40 = 0;
    local_48 = param_1;
    plVar5 = (longlong *)FUN_1802d8350(0x30);
    *(int *)(plVar5 + 4) = *param_3;
    plVar5[5] = *(longlong *)(param_3 + 2);
    *plVar5 = (longlong)plVar1;
    plVar5[1] = (longlong)plVar1;
    plVar5[2] = (longlong)plVar1;
    *(undefined2 *)(plVar5 + 3) = 0;
    local_40 = (ulonglong)uVar6;
    local_48 = plVar7;
    plVar5 = (longlong *)FUN_18022bb90(param_1,&local_48);
    uVar3 = 1;
  }
  *param_2 = plVar5;
  *(undefined1 *)(param_2 + 1) = uVar3;
  return param_2;
}


