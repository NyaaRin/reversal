// 0x18020d650  FUN_18020d650
// size=155 thunk=false
// signature: undefined FUN_18020d650()
// status: ok


void FUN_18020d650(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  if ((ulonglong)(param_1[2] - lVar1 >> 5) < param_2) {
    if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    lVar2 = param_1[1];
    uVar3 = FUN_18020dbc0();
    plVar4 = param_1;
    FUN_180229ca0(*param_1,param_1[1],uVar3,param_1,param_1,uVar3,param_2);
    FUN_18022e9d0(param_1,uVar3,lVar2 - lVar1 >> 5,param_2,plVar4,0);
  }
  return;
}


