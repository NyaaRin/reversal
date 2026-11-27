// 0x18007e530  Features_Weapons_Backends_PTPWeaponBackend_vfunc27
// size=135 thunk=false
// signature: undefined Features_Weapons_Backends_PTPWeaponBackend_vfunc27()
// status: ok


void Features_Weapons_Backends_PTPWeaponBackend_vfunc27
               (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 0x40) = 0x80000000;
  if (param_3 != (undefined4 *)0x0) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if (lVar3 != 0) {
      pbVar4 = (byte *)FUN_18001d710(lVar3,local_res8);
      *(byte *)(param_1 + 0x3c) = *pbVar4 & 1;
      *(undefined4 *)(param_1 + 0x40) = *param_3;
      return;
    }
  }
  return;
}


