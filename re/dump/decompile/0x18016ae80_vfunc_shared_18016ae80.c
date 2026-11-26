// 0x18016ae80  vfunc_shared_18016ae80
// size=74 thunk=false
// signature: undefined vfunc_shared_18016ae80()
// status: ok


bool vfunc_shared_18016ae80(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  if (DAT_1803fcb80 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x48))();
    if (cVar1 != '\0') {
      if (param_1[0x16] != 0) {
        return false;
      }
      iVar2 = (**(code **)(*param_1 + 0x58))(param_1);
      return 0 < iVar2;
    }
  }
  return true;
}


