// 180012ac0  FUN_180012ac0
// signature: undefined FUN_180012ac0()
// status: ok


int FUN_180012ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180012990();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


