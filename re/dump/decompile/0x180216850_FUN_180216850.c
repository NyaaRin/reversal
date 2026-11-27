// 0x180216850  FUN_180216850
// size=362 thunk=false
// signature: undefined FUN_180216850()
// status: ok


undefined8 * FUN_180216850(longlong *param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_38;
  longlong *local_30;
  
  plVar1 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar1[1];
  plVar4 = plVar1;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    plVar3 = plVar7;
    do {
      plVar7 = plVar3;
      bVar2 = *param_3 <= (int)plVar7[4];
      if (bVar2) {
        plVar3 = (longlong *)*plVar7;
        plVar4 = plVar7;
      }
      else {
        plVar3 = (longlong *)plVar7[2];
      }
      uVar6 = (uint)bVar2;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
  }
  else {
    uVar6 = 0;
  }
  if ((*(char *)((longlong)plVar4 + 0x19) == '\0') && ((int)plVar4[4] <= *param_3)) {
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x1ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    local_50 = 0;
    local_58 = param_1;
    plVar4 = (longlong *)FUN_1802d8350(0x80);
    local_38 = plVar4 + 4;
    *(int *)local_38 = *param_3;
    local_30 = plVar4 + 5;
    *local_30 = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    *(undefined4 *)local_30 = 0xffffffff;
    *(undefined4 *)(plVar4 + 6) = 0xc47a0000;
    *(undefined8 *)((longlong)plVar4 + 0x34) = 0xffffffffc47a0000;
    plVar4[0xb] = 0xf;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0xf;
    *(undefined1 *)(plVar4 + 0xc) = 0;
    *plVar4 = (longlong)plVar1;
    plVar4[1] = (longlong)plVar1;
    plVar4[2] = (longlong)plVar1;
    *(undefined2 *)(plVar4 + 3) = 0;
    local_50 = (ulonglong)uVar6;
    local_58 = plVar7;
    uVar5 = FUN_18022bb90(param_1,&local_58);
    *param_2 = uVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}


