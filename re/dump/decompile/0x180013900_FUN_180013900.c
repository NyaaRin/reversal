// 0x180013900  FUN_180013900
// size=56 thunk=false
// signature: undefined FUN_180013900()
// status: ok


void FUN_180013900(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [56];
  
  puVar1 = (undefined4 *)FUN_1800138e0(local_48,param_1);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  FUN_1800132b0(local_38,&local_58);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_1803d5960);
}


