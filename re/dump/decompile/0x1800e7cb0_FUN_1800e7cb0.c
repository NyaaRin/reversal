// 0x1800e7cb0  FUN_1800e7cb0
// size=185 thunk=false
// signature: undefined FUN_1800e7cb0()
// status: ok


void FUN_1800e7cb0(longlong *param_1,undefined8 param_2,float *param_3)

{
  (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0xf0))(param_1,(double)*param_3);
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede4);
  (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3[1]);
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);
  (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3[2]);
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edec);
                    /* WARNING: Could not recover jumptable at 0x0001800e7d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,param_2);
  return;
}


