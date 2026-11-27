// 0x18020dcd0  FUN_18020dcd0
// size=303 thunk=false
// signature: undefined FUN_18020dcd0()
// status: ok


longlong * FUN_18020dcd0(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *local_48;
  ulonglong local_40;
  ulonglong *local_28;
  
  plVar1 = (longlong *)*param_1;
  plVar5 = (longlong *)plVar1[1];
  plVar3 = plVar1;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    plVar2 = plVar5;
    do {
      plVar5 = plVar2;
      if (*param_2 <= (ulonglong)plVar5[4]) {
        plVar2 = (longlong *)*plVar5;
        plVar3 = plVar5;
      }
      else {
        plVar2 = (longlong *)plVar5[2];
      }
      uVar4 = (uint)(*param_2 <= (ulonglong)plVar5[4]);
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
  }
  else {
    uVar4 = 0;
  }
  if ((*(char *)((longlong)plVar3 + 0x19) != '\0') || (*param_2 < (ulonglong)plVar3[4])) {
    if (param_1[1] == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    local_40 = 0;
    local_48 = param_1;
    plVar3 = (longlong *)FUN_1802d8350(0x48);
    local_28 = (ulonglong *)(plVar3 + 4);
    *local_28 = *param_2;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0xf;
    *(undefined1 *)(plVar3 + 5) = 0;
    *plVar3 = (longlong)plVar1;
    plVar3[1] = (longlong)plVar1;
    plVar3[2] = (longlong)plVar1;
    *(undefined2 *)(plVar3 + 3) = 0;
    local_40 = (ulonglong)uVar4;
    local_48 = plVar5;
    plVar3 = (longlong *)FUN_18022bb90(param_1,&local_48);
  }
  return plVar3 + 5;
}


