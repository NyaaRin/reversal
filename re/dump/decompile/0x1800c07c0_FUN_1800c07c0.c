// 0x1800c07c0  FUN_1800c07c0
// size=295 thunk=false
// signature: undefined FUN_1800c07c0()
// status: ok


void FUN_1800c07c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  
  local_78 = *param_2;
  local_70 = *(undefined4 *)(param_2 + 1);
  cVar1 = FUN_180021ac0(&local_78,&local_88);
  if (cVar1 != '\0') {
    local_78 = *param_3;
    local_70 = *(undefined4 *)(param_3 + 1);
    cVar1 = FUN_180021ac0(&local_78,&local_res10);
    if (cVar1 != '\0') {
      local_res10 = local_88;
      local_res14 = local_84;
      FUN_180294c90(*param_1,&local_res10,&local_78,0xbe000000,DAT_180380e9c);
      FUN_180294c90(*param_1,&local_78,&local_res10,param_4,DAT_180380d30);
    }
  }
  return;
}


