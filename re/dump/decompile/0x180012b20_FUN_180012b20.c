// 0x180012b20  FUN_180012b20
// size=98 thunk=false
// signature: undefined FUN_180012b20()
// status: ok


int FUN_180012b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180012990();
  iVar1 = __stdio_common_vsnprintf_s(*puVar2,param_1,param_2,param_3,param_4,0,&stack0x00000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


