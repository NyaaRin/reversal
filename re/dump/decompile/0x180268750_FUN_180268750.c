// 0x180268750  FUN_180268750
// size=115 thunk=false
// signature: undefined FUN_180268750()
// status: ok


void FUN_180268750(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180012990();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (param_1 != 0) {
    if ((iVar1 == -1) || ((int)param_2 <= iVar1)) {
      iVar1 = (int)param_2 + -1;
    }
    *(undefined1 *)(iVar1 + param_1) = 0;
  }
  return;
}


