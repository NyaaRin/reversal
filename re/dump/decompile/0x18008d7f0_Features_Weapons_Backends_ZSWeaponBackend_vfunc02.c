// 0x18008d7f0  Features_Weapons_Backends_ZSWeaponBackend_vfunc02
// size=97 thunk=false
// signature: undefined Features_Weapons_Backends_ZSWeaponBackend_vfunc02()
// status: ok


undefined8
Features_Weapons_Backends_ZSWeaponBackend_vfunc02
          (undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = FUN_18008d400(param_2);
  if (cVar1 != '\0') {
    return 1;
  }
  plVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    plVar2 = (longlong *)*param_3;
  }
  if (9 < (ulonglong)param_3[2]) {
    lVar3 = *plVar2 + -0x7a5f6e6f70616577;
    if (lVar3 == 0) {
      lVar3 = (ulonglong)*(ushort *)(plVar2 + 1) - 0x5f73;
    }
    if (lVar3 == 0) {
      return 1;
    }
  }
  return 0;
}


