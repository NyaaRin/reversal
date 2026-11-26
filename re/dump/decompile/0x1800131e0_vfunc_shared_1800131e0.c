// 0x1800131e0  vfunc_shared_1800131e0
// size=63 thunk=false
// signature: undefined vfunc_shared_1800131e0()
// status: ok


undefined8 vfunc_shared_1800131e0(longlong *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined1 local_18 [16];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1,local_18,param_2);
  if ((*(longlong *)(*(longlong *)(piVar1 + 2) + 8) == *(longlong *)(*(longlong *)(param_3 + 2) + 8)
      ) && (*piVar1 == *param_3)) {
    return 1;
  }
  return 0;
}


