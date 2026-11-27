// 0x18020d6f0  FUN_18020d6f0
// size=301 thunk=false
// signature: undefined FUN_18020d6f0()
// status: ok


void FUN_18020d6f0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    lVar6 = lVar2 - *param_1 >> 5;
    if (lVar6 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar1 = lVar6 + 1;
    uVar4 = param_1[2] - *param_1 >> 5;
    uVar8 = 0x7ffffffffffffff;
    if ((uVar4 <= 0x7ffffffffffffff - (uVar4 >> 1)) && (uVar8 = uVar4 + (uVar4 >> 1), uVar8 < uVar1)
       ) {
      uVar8 = uVar1;
    }
    lVar3 = FUN_18020dbc0(uVar4,uVar8);
    lVar7 = lVar6 * 0x20 + lVar3;
    plVar10 = param_1;
    lVar11 = lVar3;
    uVar4 = uVar8;
    lVar12 = lVar7 + 0x20;
    FUN_18016d4c0(lVar7,param_2);
    lVar5 = param_1[1];
    lVar6 = *param_1;
    lVar9 = lVar3;
    if (lVar2 != lVar5) {
      FUN_180229ca0(lVar6,lVar2,lVar3,param_1,plVar10,lVar11,uVar4,lVar7,lVar12);
      lVar5 = param_1[1];
      lVar6 = lVar2;
      lVar9 = lVar7 + 0x20;
      lVar7 = lVar3;
    }
    FUN_180229ca0(lVar6,lVar5,lVar9,param_1,plVar10,lVar11,uVar4,lVar7,lVar12);
    FUN_18022e9d0(param_1,lVar3,uVar1,uVar8,plVar10,0);
  }
  else {
    FUN_18016d4c0(lVar2);
    param_1[1] = param_1[1] + 0x20;
  }
  return;
}


