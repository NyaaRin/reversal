// 1800e0950  vfunc_shared_1800e0950
// signature: undefined vfunc_shared_1800e0950()
// status: ok


void vfunc_shared_1800e0950(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180076750(param_2);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800e0974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
    return;
  }
  return;
}


