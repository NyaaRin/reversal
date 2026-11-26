// 18020d910  FUN_18020d910
// signature: undefined FUN_18020d910()
// status: ok


longlong * FUN_18020d910(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = param_2[1] - *param_2 >> 5;
  if (uVar3 != 0) {
    if (0x7ffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    lVar2 = FUN_18020dbc0(param_1,uVar3);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = uVar3 * 0x20 + lVar2;
    lVar2 = *param_1;
    lVar1 = param_2[1];
    lVar5 = lVar2;
    plVar6 = param_1;
    plVar7 = param_1;
    for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
      FUN_18016d4c0(lVar2,lVar4,param_3,param_4,lVar5,lVar2,plVar6,plVar7);
      lVar2 = lVar2 + 0x20;
    }
    param_1[1] = lVar2;
  }
  return param_1;
}


