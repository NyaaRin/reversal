// 0x180083890  Features_Weapons_Backends_CSGOWeaponBackend_vfunc02
// size=137 thunk=false
// signature: undefined Features_Weapons_Backends_CSGOWeaponBackend_vfunc02()
// status: ok


undefined8
Features_Weapons_Backends_CSGOWeaponBackend_vfunc02
          (undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (longlong *)*param_2;
  }
  if (*plVar1 == 0xb) {
    lVar2 = *param_2 + -0x625f6e6f70616577;
    if ((lVar2 == 0) && (lVar2 = (ulonglong)*(ushort *)(param_2 + 1) - 0x7361, lVar2 == 0)) {
      lVar2 = (ulonglong)*(byte *)((longlong)param_2 + 10) - 0x65;
    }
    if (lVar2 == 0) {
      plVar1 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        plVar1 = (longlong *)*param_3;
      }
      if (0xb < (ulonglong)param_3[2]) {
        lVar2 = *plVar1 + -0x635f6e6f70616577;
        if (lVar2 == 0) {
          lVar2 = (ulonglong)*(uint *)(plVar1 + 1) - 0x5f6f6773;
        }
        if (lVar2 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


