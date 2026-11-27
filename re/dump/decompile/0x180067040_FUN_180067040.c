// 0x180067040  FUN_180067040
// size=95 thunk=false
// signature: undefined FUN_180067040()
// status: ok


void FUN_180067040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [160];
  
  puVar3 = (undefined8 *)FUN_1800138e0(local_d8,param_2,param_3,param_1);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  FUN_18001d010(local_c8,param_1);
  local_e8 = uVar1;
  uStack_e0 = uVar2;
  FUN_180066b90(local_a8,local_c8,param_3,&local_e8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_1803d5ab8);
}


