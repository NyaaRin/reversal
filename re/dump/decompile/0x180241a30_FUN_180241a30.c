// 0x180241a30  FUN_180241a30
// size=353 thunk=false
// signature: undefined FUN_180241a30()
// status: ok


undefined8 * FUN_180241a30(longlong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *local_78;
  longlong *local_70;
  ulonglong *local_58;
  longlong *local_50;
  longlong *local_48;
  
  plVar1 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar1[1];
  uVar6 = 0;
  plVar5 = plVar1;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    plVar2 = plVar7;
    do {
      plVar7 = plVar2;
      if (*param_3 <= (ulonglong)plVar7[4]) {
        plVar2 = (longlong *)*plVar7;
        plVar5 = plVar7;
      }
      else {
        plVar2 = (longlong *)plVar7[2];
      }
      uVar6 = (uint)(*param_3 <= (ulonglong)plVar7[4]);
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar5 + 0x19) == '\0') && ((ulonglong)plVar5[4] <= *param_3)) {
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    local_70 = (longlong *)0x0;
    local_78 = param_1;
    plVar2 = (longlong *)FUN_1802d8350(0x78);
    local_58 = (ulonglong *)(plVar2 + 4);
    *local_58 = *param_3;
    plVar5 = plVar2 + 5;
    *plVar5 = 0;
    plVar2[6] = 0;
    local_70 = plVar2;
    local_50 = plVar5;
    local_48 = plVar5;
    lVar3 = FUN_1802d8350(0x78);
    *(longlong *)lVar3 = lVar3;
    *(longlong *)(lVar3 + 8) = lVar3;
    *(longlong *)(lVar3 + 0x10) = lVar3;
    *(undefined2 *)(lVar3 + 0x18) = 0x101;
    *plVar5 = lVar3;
    plVar2[7] = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    *plVar2 = (longlong)plVar1;
    plVar2[1] = (longlong)plVar1;
    plVar2[2] = (longlong)plVar1;
    *(undefined2 *)(plVar2 + 3) = 0;
    local_70 = (longlong *)(ulonglong)uVar6;
    local_78 = plVar7;
    uVar4 = FUN_18022bb90(param_1,&local_78,plVar2);
    *param_2 = uVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}


