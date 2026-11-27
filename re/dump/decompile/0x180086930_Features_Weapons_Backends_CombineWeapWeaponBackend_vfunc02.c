// 0x180086930  Features_Weapons_Backends_CombineWeapWeaponBackend_vfunc02
// size=137 thunk=false
// signature: undefined Features_Weapons_Backends_CombineWeapWeaponBackend_vfunc02()
// status: ok


ulonglong Features_Weapons_Backends_CombineWeapWeaponBackend_vfunc02
                    (undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (longlong *)*param_2;
  }
  if (uVar1 == 9) {
    uVar1 = 0x7361625f32736166;
    lVar2 = *param_2 + -0x7361625f32736166;
    if (lVar2 == 0) {
      uVar1 = 0;
      lVar2 = (ulonglong)*(byte *)(param_2 + 1) - 0x65;
    }
    if (lVar2 == 0) {
      plVar3 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        plVar3 = (longlong *)*param_3;
      }
      if (0xd < (ulonglong)param_3[2]) {
        uVar1 = 0x6577635f32736166;
        lVar2 = *plVar3 + -0x6577635f32736166;
        if (lVar2 == 0) {
          uVar1 = 0x6e6f7061;
          lVar2 = (ulonglong)*(uint *)(plVar3 + 1) - 0x6e6f7061;
          if (lVar2 == 0) {
            uVar1 = 0x7972;
            lVar2 = (ulonglong)*(ushort *)((longlong)plVar3 + 0xc) - 0x7972;
          }
        }
        if (lVar2 == 0) {
          return CONCAT71((int7)(uVar1 >> 8),1);
        }
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}


