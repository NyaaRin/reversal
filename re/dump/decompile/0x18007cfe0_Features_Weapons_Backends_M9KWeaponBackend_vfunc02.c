// 0x18007cfe0  Features_Weapons_Backends_M9KWeaponBackend_vfunc02
// size=121 thunk=false
// signature: undefined Features_Weapons_Backends_M9KWeaponBackend_vfunc02()
// status: ok


undefined8
Features_Weapons_Backends_M9KWeaponBackend_vfunc02
          (undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  cVar2 = FUN_18007cd30(param_2);
  if (cVar2 == '\0') {
    plVar4 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      plVar4 = (longlong *)*param_3;
    }
    puVar1 = (ulonglong *)(param_3 + 2);
    if ((*puVar1 < 4) || ((int)*plVar4 != 0x5f6b396d)) {
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (longlong *)*param_3;
      }
      if (9 < *puVar1) {
        lVar3 = *param_3 + -0x6d5f6e6f70616577;
        if (lVar3 == 0) {
          lVar3 = (ulonglong)*(ushort *)(param_3 + 1) - 0x6b39;
        }
        if (lVar3 == 0) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}


