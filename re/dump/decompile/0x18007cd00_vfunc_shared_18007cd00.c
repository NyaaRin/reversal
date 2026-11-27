// 0x18007cd00  vfunc_shared_18007cd00
// size=25 thunk=false
// signature: undefined vfunc_shared_18007cd00()
// status: ok


undefined4 * vfunc_shared_18007cd00(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = 0;
  return param_2;
}


