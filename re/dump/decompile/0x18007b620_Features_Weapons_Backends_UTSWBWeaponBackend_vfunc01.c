// 0x18007b620  Features_Weapons_Backends_UTSWBWeaponBackend_vfunc01
// size=122 thunk=false
// signature: undefined Features_Weapons_Backends_UTSWBWeaponBackend_vfunc01()
// status: ok


bool Features_Weapons_Backends_UTSWBWeaponBackend_vfunc01(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 local_28 [32];
  
  if (DAT_1803fe3e8 == 0) {
    DAT_1803fe3e8 = FUN_180016fb0("sv_ut_swb_bullet_debug");
    if (DAT_1803fe3e8 == 0) {
      return false;
    }
  }
  plVar2 = (longlong *)FUN_18001f260(param_2,local_28);
  plVar1 = plVar2 + 2;
  if (0xf < (ulonglong)plVar2[3]) {
    plVar2 = (longlong *)*plVar2;
  }
  if (*plVar1 == 8) {
    bVar3 = *plVar2 == 0x657361625f627773;
  }
  else {
    bVar3 = false;
  }
  FUN_18020e450(local_28);
  return bVar3;
}


