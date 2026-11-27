// 0x18022b700  vfunc_shared_18022b700
// size=18 thunk=false
// signature: undefined vfunc_shared_18022b700()
// status: ok


void vfunc_shared_18022b700(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018022b70d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}


