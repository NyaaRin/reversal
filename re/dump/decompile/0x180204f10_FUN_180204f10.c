// 0x180204f10  FUN_180204f10
// size=91 thunk=false
// signature: undefined FUN_180204f10()
// status: ok


int FUN_180204f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180012990();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,0x40,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


