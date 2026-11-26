// 0x180024250  FUN_180024250
// size=120 thunk=false
// signature: undefined FUN_180024250()
// status: ok


void FUN_180024250(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_180023e60(param_1,0xffffd8ed);
  (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"COPYCACHE");
  (**(code **)(*param_1 + 8))(param_1,param_2);
  (**(code **)(*param_1 + 8))(param_1,param_3);
  (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);
                    /* WARNING: Could not recover jumptable at 0x0001800242c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,2);
  return;
}


