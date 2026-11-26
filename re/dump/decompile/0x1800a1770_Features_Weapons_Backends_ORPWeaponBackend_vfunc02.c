// 0x1800a1770  Features_Weapons_Backends_ORPWeaponBackend_vfunc02
// size=84 thunk=false
// signature: undefined Features_Weapons_Backends_ORPWeaponBackend_vfunc02()
// status: ok


undefined8 Features_Weapons_Backends_ORPWeaponBackend_vfunc02(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  plVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (longlong *)*param_2;
  }
  if ((*plVar1 == 8) && (*param_2 == 0x657361625f70726f)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  FUN_18020d5c0(&local_28);
  return uVar2;
}


