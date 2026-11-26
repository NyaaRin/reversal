// 0x180280d50  FUN_180280d50
// size=95 thunk=false
// signature: undefined FUN_180280d50()
// status: ok


void FUN_180280d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  cVar1 = FUN_18026ee60(0x1000);
  if ((cVar1 != '\0') && (cVar1 = FUN_180280a90(2), cVar1 != '\0')) {
    FUN_1802aab10(param_1,&local_res10);
    FUN_180278d40();
  }
  return;
}


