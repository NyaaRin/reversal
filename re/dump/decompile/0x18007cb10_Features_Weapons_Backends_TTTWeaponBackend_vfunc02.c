// 0x18007cb10  Features_Weapons_Backends_TTTWeaponBackend_vfunc02
// size=76 thunk=false
// signature: undefined Features_Weapons_Backends_TTTWeaponBackend_vfunc02()
// status: ok


ulonglong Features_Weapons_Backends_TTTWeaponBackend_vfunc02(undefined8 param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  puVar1 = (ulonglong *)(param_2 + 2);
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (longlong *)*param_2;
  }
  if (*puVar1 != 0xe) {
    return *puVar1 & 0xffffffffffffff00;
  }
  uVar2 = 0x745f6e6f70616577;
  lVar3 = *param_2 + -0x745f6e6f70616577;
  if (lVar3 == 0) {
    uVar2 = 0x61627474;
    lVar3 = (ulonglong)*(uint *)(param_2 + 1) - 0x61627474;
    if (lVar3 == 0) {
      uVar2 = 0x6573;
      lVar3 = (ulonglong)*(ushort *)((longlong)param_2 + 0xc) - 0x6573;
    }
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),lVar3 == 0);
}


