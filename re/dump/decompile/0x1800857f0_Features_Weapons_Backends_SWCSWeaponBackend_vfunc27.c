// 0x1800857f0  Features_Weapons_Backends_SWCSWeaponBackend_vfunc27
// size=119 thunk=false
// signature: undefined Features_Weapons_Backends_SWCSWeaponBackend_vfunc27()
// status: ok


void Features_Weapons_Backends_SWCSWeaponBackend_vfunc27
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined1 local_res18 [16];
  
  *(undefined1 *)(param_1 + 0x54) = 0;
  if (param_3 != 0) {
    *(byte *)(param_1 + 0x60) = (byte)(*(uint *)(param_3 + 0x20) >> 0x12) & 1;
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if (lVar3 != 0) {
      pbVar4 = (byte *)FUN_18001d710(lVar3,local_res18);
      *(byte *)(param_1 + 0x55) = *pbVar4 & 1;
      *(undefined1 *)(param_1 + 0x54) = 1;
    }
  }
  return;
}


