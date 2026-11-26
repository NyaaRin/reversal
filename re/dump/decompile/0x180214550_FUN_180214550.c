// 0x180214550  FUN_180214550
// size=256 thunk=false
// signature: undefined FUN_180214550()
// status: ok


void FUN_180214550(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((longlong)param_3 < 0x21) {
    FUN_180214490(param_1,param_2,param_6);
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 4;
  if (param_5 < lVar3) {
    FUN_180214550(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_180214550(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    FUN_1802217a0();
    FUN_1802217a0(lVar1,param_2,uVar2,param_4,param_6);
  }
  FUN_180221960(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}


