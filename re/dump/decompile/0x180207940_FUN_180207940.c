// 0x180207940  FUN_180207940
// size=144 thunk=false
// signature: undefined FUN_180207940()
// status: ok


undefined8 * FUN_180207940(void)

{
  undefined8 *puVar1;
  undefined8 *local_res8;
  undefined8 *local_res10;
  
  local_res8 = (undefined8 *)0x0;
  FUN_1802138a0(&local_res8);
  puVar1 = local_res8;
  local_res8 = (undefined8 *)0x0;
  local_res10 = puVar1;
  if (DAT_1803fb108 == DAT_1803fb110) {
    FUN_180222800();
  }
  else {
    local_res10 = (undefined8 *)0x0;
    *DAT_1803fb108 = puVar1;
    DAT_1803fb108 = DAT_1803fb108 + 1;
  }
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return puVar1;
}


