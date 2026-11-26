// 0x180076340  FUN_180076340
// size=59 thunk=false
// signature: undefined FUN_180076340()
// status: ok


ulonglong FUN_180076340(longlong *param_1)

{
  int iVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  
  if (((param_1 != (longlong *)0x0) && (in_RAX = (**(code **)(*param_1 + 0x78))(), in_RAX != 0)) &&
     ((char *)0x10000 < *(char **)(in_RAX + 0x10))) {
    iVar1 = strcmp(*(char **)(in_RAX + 0x10),"CWeaponSWEP");
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  return in_RAX & 0xffffffffffffff00;
}


