// 0x180067fd0  FUN_180067fd0
// size=439 thunk=false
// signature: undefined FUN_180067fd0()
// status: ok


longlong * FUN_180067fd0(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined4 local_3c;
  
  *param_2 = 0;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  uVar2 = param_1[2];
  if (uVar2 < 0x104) {
    uVar3 = 0x104 - uVar2;
    if (param_1[3] - uVar2 < uVar3) {
      FUN_18022a480(param_1,uVar3,param_3,uVar3);
    }
    else {
      param_1[2] = 0x104;
      plVar4 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        plVar4 = (longlong *)*param_1;
      }
      puVar6 = (undefined2 *)((longlong)plVar4 + uVar2 * 2);
      if (uVar3 != 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      *(undefined2 *)(plVar4 + 0x41) = 0;
    }
  }
  else {
    param_1[2] = 0x104;
    if ((ulonglong)param_1[3] < 8) {
      *(undefined2 *)(param_1 + 0x41) = 0;
    }
    else {
      *(undefined2 *)(*param_1 + 0x208) = 0;
    }
  }
  do {
    uVar1 = *(uint *)(param_1 + 2);
    plVar4 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    uVar3 = FUN_1802d799c(uVar1,plVar4);
    uVar2 = param_1[2];
    uVar7 = uVar3 & 0xffffffff;
    if (uVar2 < uVar7) {
      uVar5 = uVar7 - uVar2;
      if (param_1[3] - uVar2 < uVar5) {
        FUN_18022a480(param_1,uVar5,uVar7,uVar5);
      }
      else {
        param_1[2] = uVar7;
        plVar4 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          plVar4 = (longlong *)*param_1;
        }
        puVar6 = (undefined2 *)((longlong)plVar4 + uVar2 * 2);
        if (uVar5 != 0) {
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        *(undefined2 *)((longlong)plVar4 + uVar7 * 2) = 0;
      }
    }
    else {
      param_1[2] = uVar7;
      plVar4 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        plVar4 = (longlong *)*param_1;
      }
      *(undefined2 *)((longlong)plVar4 + uVar7 * 2) = 0;
    }
  } while (uVar1 <= (uint)uVar3);
  *param_2 = (int)(uVar3 >> 0x20);
  param_2[1] = local_3c;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
  return param_1;
}


