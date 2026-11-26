// 0x1800763a0  vfunc_shared_1800763a0
// size=83 thunk=false
// signature: undefined vfunc_shared_1800763a0()
// status: ok


bool vfunc_shared_1800763a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  double dVar3;
  
  if ((param_2 != 0) && (cVar1 = (**(code **)(*param_1 + 0x38))(), cVar1 == '\0')) {
    iVar2 = FUN_18001e5b0(param_2);
    if (iVar2 == 0) {
      return false;
    }
    dVar3 = (double)FUN_18001eff0(param_2);
    return dVar3 <= *(double *)(DAT_1803fa608 + 0x10);
  }
  return false;
}


