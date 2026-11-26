// 1800e0910  vfunc_shared_1800e0910
// signature: undefined vfunc_shared_1800e0910()
// status: ok


void vfunc_shared_1800e0910(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180076750(param_2);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800e0934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xc0))(plVar1,param_2);
    return;
  }
  return;
}


