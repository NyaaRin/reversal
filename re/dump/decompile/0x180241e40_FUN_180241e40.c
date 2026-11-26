// 0x180241e40  FUN_180241e40
// size=605 thunk=false
// signature: undefined FUN_180241e40()
// status: ok


longlong * FUN_180241e40(longlong *param_1,longlong *param_2,longlong *param_3,ulonglong *param_4)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  undefined4 local_1c;
  
  param_1 = (longlong *)*param_1;
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    uVar3 = param_3[4];
    uVar4 = *param_4;
    if (param_3 == (longlong *)*param_1) {
      if (uVar4 < uVar3) {
        *param_2 = (longlong)param_3;
        *(undefined4 *)(param_2 + 1) = 1;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      goto LAB_180241fc3;
    }
    if (uVar4 < uVar3) {
      plVar5 = (longlong *)*param_3;
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar5[2] + 0x19);
        while (cVar1 == '\0') {
          plVar5 = (longlong *)plVar5[2];
          cVar1 = *(char *)(plVar5[2] + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar6 = (longlong *)param_3[1];
        plVar9 = param_3;
        while ((plVar5 = plVar6, cVar1 == '\0' && (plVar9 == (longlong *)*plVar5))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar6 = (longlong *)plVar5[1];
          plVar9 = plVar5;
        }
        if (*(char *)((longlong)plVar9 + 0x19) != '\0') {
          plVar5 = plVar9;
        }
      }
      if ((ulonglong)plVar5[4] < uVar4) {
        cVar1 = *(char *)(plVar5[2] + 0x19);
        *(undefined1 *)(param_2 + 2) = 0;
        if (cVar1 == '\0') {
          *param_2 = (longlong)param_3;
          *(undefined4 *)(param_2 + 1) = 1;
          return param_2;
        }
        *param_2 = (longlong)plVar5;
        *(undefined4 *)(param_2 + 1) = 0;
        return param_2;
      }
      goto LAB_180241fc3;
    }
    if (uVar4 <= uVar3) {
      *param_2 = (longlong)param_3;
      *(undefined1 *)(param_2 + 2) = 1;
      goto LAB_180242088;
    }
    plVar5 = (longlong *)param_3[2];
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
    if (cVar1 == '\0') {
      cVar2 = *(char *)(*plVar5 + 0x19);
      plVar9 = (longlong *)*plVar5;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar9 + 0x19);
        plVar5 = plVar9;
        plVar9 = (longlong *)*plVar9;
      }
    }
    else {
      plVar9 = (longlong *)param_3[1];
      plVar6 = param_3;
      plVar5 = plVar9;
      if (*(char *)((longlong)plVar9 + 0x19) != '\0') goto LAB_180242049;
      do {
        plVar5 = plVar9;
        if (plVar6 != (longlong *)plVar9[2]) break;
        plVar5 = (longlong *)plVar9[1];
        plVar6 = plVar9;
        plVar9 = plVar5;
      } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
    }
    if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar4 < (ulonglong)plVar5[4])) {
LAB_180242049:
      *(undefined1 *)(param_2 + 2) = 0;
      if (cVar1 == '\0') {
        *param_2 = (longlong)plVar5;
        *(undefined4 *)(param_2 + 1) = 1;
        return param_2;
      }
      *param_2 = (longlong)param_3;
      *(undefined4 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  else if ((*(char *)(param_1[1] + 0x19) != '\0') || (*(ulonglong *)(param_1[2] + 0x20) < *param_4))
  {
    *param_2 = param_1[2];
    *(undefined1 *)(param_2 + 2) = 0;
LAB_180242088:
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_180241fc3:
  plVar5 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    plVar9 = plVar5;
    plVar6 = param_1;
    do {
      plVar5 = plVar9;
      plVar7 = plVar5;
      param_1 = plVar5;
      if (*param_4 > (ulonglong)plVar5[4]) {
        plVar7 = plVar5 + 2;
        param_1 = plVar6;
      }
      uVar8 = (uint)(*param_4 <= (ulonglong)plVar5[4]);
      plVar9 = (longlong *)*plVar7;
      plVar6 = param_1;
    } while (*(char *)(*plVar7 + 0x19) == '\0');
  }
  else {
    uVar8 = 0;
  }
  if ((*(char *)((longlong)param_1 + 0x19) == '\0') && ((ulonglong)param_1[4] <= *param_4)) {
    *param_2 = (longlong)param_1;
    *(undefined4 *)(param_2 + 1) = 2;
    *(undefined1 *)(param_2 + 2) = 1;
    return param_2;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  *param_2 = (longlong)plVar5;
  *(uint *)(param_2 + 1) = uVar8;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}


