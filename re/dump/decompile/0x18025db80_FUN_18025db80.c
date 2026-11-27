// 0x18025db80  FUN_18025db80
// size=538 thunk=false
// signature: undefined FUN_18025db80()
// status: ok


undefined1 FUN_18025db80(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong local_28;
  longlong local_20;
  
  if (((param_1[3] == *param_2) && ((char)param_1[4] == (char)param_2[2])) &&
     (((char)param_1[4] == '\0' || (param_1[5] == param_2[9])))) {
    if ((char)param_3[3] != '\0') {
      lVar2 = param_3[1];
      for (lVar7 = *param_3; lVar7 != lVar2; lVar7 = lVar7 + 0x60) {
        if (*(char *)(lVar7 + 0x23) != '\0') {
          FUN_18025da80(param_1,lVar7);
        }
      }
    }
    if (((char)param_3[3] == '\0') && (*(char *)(param_4 + 0x19) == '\0')) {
      *(undefined1 *)(param_1 + 6) = 0;
      goto LAB_18025dbfb;
    }
  }
  else {
    param_1[3] = *param_2;
    *(char *)(param_1 + 4) = (char)param_2[2];
    param_1[5] = param_2[9];
    lVar2 = param_3[1];
    for (lVar7 = *param_3; lVar7 != lVar2; lVar7 = lVar7 + 0x60) {
      FUN_18025da80(param_1,lVar7);
    }
  }
  *(undefined1 *)(param_1 + 6) = 1;
  if (*param_1 != param_1[1]) {
    param_1[1] = *param_1;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  lVar7 = *param_3;
  lVar2 = param_3[1];
  local_20 = 0;
  lVar8 = local_20;
  for (; lVar7 != lVar2; lVar7 = lVar7 + 0x60) {
    *(longlong *)(lVar7 + 0x28) = param_1[7];
    if (*(char *)(lVar7 + 0x22) != '\x03') {
      puVar1 = (ulonglong *)(lVar7 + 0x38);
      param_1[7] = param_1[7] + *(longlong *)(lVar7 + 0x30);
      uVar5 = param_1[8];
      if ((ulonglong)param_1[8] < *puVar1) {
        uVar5 = *puVar1;
      }
      param_1[8] = uVar5;
      local_20 = lVar8;
      if (*(longlong *)(lVar7 + 0x40) == 0) {
        plVar4 = (longlong *)param_1[1];
        local_28 = local_28 & 0xffffffff00000000;
        if (plVar4 == (longlong *)param_1[2]) {
          FUN_180264330(param_1,plVar4,&local_20,&local_28,puVar1);
          lVar8 = local_20;
        }
        else {
          plVar4[2] = *puVar1;
          *plVar4 = lVar8;
          plVar4[1] = 0;
          param_1[1] = param_1[1] + 0x18;
        }
      }
      else {
        local_28 = 0;
        if (*(longlong *)(lVar7 + 0x30) != 0) {
          do {
            lVar3 = **(longlong **)(lVar7 + 0x40);
            if ((ulonglong)((*(longlong **)(lVar7 + 0x40))[1] - lVar3 >> 5) <= local_28) {
                    /* WARNING: Subroutine does not return */
              FUN_180262180();
            }
            plVar4 = (longlong *)param_1[1];
            plVar6 = (longlong *)(local_28 * 0x20 + 0x10 + lVar3);
            if (plVar4 == (longlong *)param_1[2]) {
              FUN_180264160(param_1,plVar4,&local_20,&local_28,plVar6);
              lVar8 = local_20;
            }
            else {
              plVar4[2] = *plVar6;
              *plVar4 = lVar8;
              plVar4[1] = local_28;
              param_1[1] = param_1[1] + 0x18;
            }
            local_28 = local_28 + 1;
          } while (local_28 < *(ulonglong *)(lVar7 + 0x30));
        }
      }
    }
    lVar8 = lVar8 + 1;
  }
LAB_18025dbfb:
  return (char)param_1[6];
}


