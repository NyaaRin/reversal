// 0x180103eb0  Features_NetVars_NetVarsFeature_vfunc06
// size=92 thunk=false
// signature: undefined Features_NetVars_NetVarsFeature_vfunc06()
// status: ok


void Features_NetVars_NetVarsFeature_vfunc06(undefined8 param_1)

{
  char cVar1;
  
  if ((DAT_1803fa46f == '\0') && (DAT_1803fa668 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))();
    if (cVar1 != '\0') {
      FUN_180103c10(param_1);
      FUN_180037c70();
      FUN_180103480(param_1);
      FUN_180103d60(param_1);
    }
  }
  return;
}


