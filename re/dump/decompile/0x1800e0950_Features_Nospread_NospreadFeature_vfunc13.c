// 0x1800e0950  Features_Nospread_NospreadFeature_vfunc13
// size=49 thunk=false
// signature: undefined Features_Nospread_NospreadFeature_vfunc13()
// status: ok


void Features_Nospread_NospreadFeature_vfunc13(undefined8 param_1,undefined8 param_2)

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


