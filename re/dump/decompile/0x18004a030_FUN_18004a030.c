// 0x18004a030  FUN_18004a030
// size=230 thunk=false
// signature: undefined FUN_18004a030()
// status: ok


void FUN_18004a030(longlong *param_1,float *param_2)

{
  float fVar1;
  
  (**(code **)(*param_1 + 0x30))();
  fVar1 = DAT_1803811c8;
  (**(code **)(*param_1 + 0xf0))(param_1,(double)(*param_2 * DAT_1803811c8));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18033e668);
  (**(code **)(*param_1 + 0xf0))(param_1,(double)(param_2[1] * fVar1));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_180342c10);
  (**(code **)(*param_1 + 0xf0))(param_1,(double)(param_2[2] * fVar1));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18033f594);
  (**(code **)(*param_1 + 0xf0))(param_1,(double)(param_2[3] * fVar1));
                    /* WARNING: Could not recover jumptable at 0x00018004a112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18033f59c);
  return;
}


