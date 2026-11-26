// 0x18007df80  Features_Weapons_Backends_PTPWeaponBackend_vfunc02
// size=279 thunk=false
// signature: undefined Features_Weapons_Backends_PTPWeaponBackend_vfunc02()
// status: ok


undefined8
Features_Weapons_Backends_PTPWeaponBackend_vfunc02
          (undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  
  cVar3 = FUN_18007de30(param_2);
  if (cVar3 != '\0') {
    return 1;
  }
  if (*(longlong *)(param_2 + 0x10) == 0) {
    uVar1 = param_3[3];
    plVar4 = param_3;
    if (0xf < uVar1) {
      plVar4 = (longlong *)*param_3;
    }
    uVar2 = param_3[2];
    if ((3 < uVar2) && ((int)*plVar4 == 0x5f707470)) {
      plVar4 = param_3;
      if (0xf < uVar1) {
        plVar4 = (longlong *)*param_3;
      }
      if (uVar2 == 0x12) {
        lVar5 = *plVar4 + -0x706165775f707470;
        if ((lVar5 == 0) && (lVar5 = plVar4[1] + -0x616e6572675f6e6f, lVar5 == 0)) {
          lVar5 = (ulonglong)*(ushort *)(plVar4 + 2) - 0x6564;
        }
        if (lVar5 == 0) {
          return 0;
        }
      }
      plVar4 = param_3;
      if (0xf < uVar1) {
        plVar4 = (longlong *)*param_3;
      }
      if (uVar2 == 0x10) {
        lVar5 = *plVar4 + -0x706165775f707470;
        if (lVar5 == 0) {
          lVar5 = plVar4[1] + -0x6873616c665f6e6f;
        }
        if (lVar5 == 0) {
          return 0;
        }
      }
      if (0xf < uVar1) {
        param_3 = (longlong *)*param_3;
      }
      if (uVar2 == 0x10) {
        lVar5 = *param_3 + -0x706165775f707470;
        if (lVar5 == 0) {
          lVar5 = param_3[1] + -0x656b6f6d735f6e6f;
        }
        if (lVar5 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


