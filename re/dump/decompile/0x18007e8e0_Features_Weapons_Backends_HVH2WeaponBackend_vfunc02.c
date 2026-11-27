// 0x18007e8e0  Features_Weapons_Backends_HVH2WeaponBackend_vfunc02
// size=111 thunk=false
// signature: undefined Features_Weapons_Backends_HVH2WeaponBackend_vfunc02()
// status: ok


undefined8
Features_Weapons_Backends_HVH2WeaponBackend_vfunc02
          (undefined8 param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  
  plVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (longlong *)*param_2;
  }
  if (*plVar1 == 0xb) {
    lVar3 = *param_2 + -0x625f6e6f70616577;
    if ((lVar3 == 0) && (lVar3 = (ulonglong)*(ushort *)(param_2 + 1) - 0x7361, lVar3 == 0)) {
      lVar3 = (ulonglong)*(byte *)((longlong)param_2 + 10) - 0x65;
    }
    if (lVar3 == 0) {
      piVar2 = param_3;
      if (0xf < *(ulonglong *)(param_3 + 6)) {
        piVar2 = *(int **)param_3;
      }
      if ((3 < *(ulonglong *)(param_3 + 4)) && (*piVar2 == 0x5f737363)) {
        return 1;
      }
    }
  }
  return 0;
}


