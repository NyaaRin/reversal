// 0x180076470  vfunc_shared_180076470
// size=38 thunk=false
// signature: undefined vfunc_shared_180076470()
// status: ok


byte vfunc_shared_180076470(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  
  if ((param_3 != 0) && ((*(byte *)(param_3 + 0x20) & 1) != 0)) {
    bVar1 = FUN_180076400(param_2);
    return bVar1 ^ 1;
  }
  return 0;
}


