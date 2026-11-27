// 0x180207490  FUN_180207490
// size=91 thunk=false
// signature: undefined FUN_180207490()
// status: ok


int FUN_180207490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180012990();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,0x100,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


