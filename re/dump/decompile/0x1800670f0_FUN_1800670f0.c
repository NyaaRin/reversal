// 0x1800670f0  FUN_1800670f0
// size=82 thunk=false
// signature: undefined FUN_1800670f0()
// status: ok


void FUN_1800670f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [160];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_18001d010(local_c8,param_1);
  local_d8 = uVar1;
  uStack_d0 = uVar2;
  FUN_180066b90(local_a8,local_c8,param_3,&local_d8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_1803d5ab8);
}


