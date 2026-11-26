// 0x180131880  FUN_180131880
// size=52 thunk=false
// signature: undefined FUN_180131880()
// status: ok


undefined8 FUN_180131880(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  cVar2 = FUN_1801311e0(uVar1);
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar3 = uVar1;
  }
  return uVar3;
}


