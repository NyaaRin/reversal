// 0x1802033a0  FUN_1802033a0
// size=99 thunk=false
// signature: undefined FUN_1802033a0()
// status: ok


int FUN_1802033a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180012990();
  iVar1 = __stdio_common_vsnprintf_s(*puVar2,param_1,0x30,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


