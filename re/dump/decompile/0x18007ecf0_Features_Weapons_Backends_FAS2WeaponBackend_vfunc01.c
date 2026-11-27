// 0x18007ecf0  Features_Weapons_Backends_FAS2WeaponBackend_vfunc01
// size=102 thunk=false
// signature: undefined Features_Weapons_Backends_FAS2WeaponBackend_vfunc01()
// status: ok


bool Features_Weapons_Backends_FAS2WeaponBackend_vfunc01(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 local_28 [32];
  
  plVar2 = (longlong *)FUN_18001f260(param_2,local_28);
  plVar1 = plVar2 + 2;
  if (0xf < (ulonglong)plVar2[3]) {
    plVar2 = (longlong *)*plVar2;
  }
  if (*plVar1 == 9) {
    lVar3 = *plVar2 + -0x7361625f32736166;
    if (lVar3 == 0) {
      lVar3 = (ulonglong)*(byte *)(plVar2 + 1) - 0x65;
    }
    bVar4 = lVar3 == 0;
  }
  else {
    bVar4 = false;
  }
  FUN_18020e450(local_28);
  return bVar4;
}


