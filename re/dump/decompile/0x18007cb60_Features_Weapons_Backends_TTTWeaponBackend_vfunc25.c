// 0x18007cb60  Features_Weapons_Backends_TTTWeaponBackend_vfunc25
// size=400 thunk=false
// signature: undefined Features_Weapons_Backends_TTTWeaponBackend_vfunc25()
// status: ok


void Features_Weapons_Backends_TTTWeaponBackend_vfunc25(longlong param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong local_38;
  undefined4 local_2f;
  undefined2 local_2b;
  undefined1 local_29;
  longlong *local_28;
  undefined8 uStack_20;
  longlong local_18;
  int local_10;
  
  local_28 = (longlong *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_18001bcd0(0,&local_28);
  if (local_28 != (longlong *)0x0) {
    iVar3 = (**(code **)*local_28)();
    local_10 = iVar3;
    FUN_18001e2b0(param_2,local_28);
    FUN_18002d9c0(local_28[1],0xffffffff,"GetPrimaryCone");
    cVar2 = (**(code **)(*local_28 + 0x138))(local_28,0xffffffff,6);
    if (cVar2 != '\0') {
      FUN_18001e2b0(param_2,local_28);
      FUN_180023180(local_28[1],1,1);
      dVar1 = (double)(**(code **)(*local_28 + 0xc0))(local_28,0xffffffff);
      *(float *)(param_1 + 8) = (float)dVar1;
    }
    (**(code **)(*local_28 + 0x10))(local_28,1);
    (**(code **)(*local_28 + 0x10))(local_28,1);
    iVar4 = (**(code **)*local_28)();
    while (iVar3 < iVar4) {
      (**(code **)(*local_28 + 0x10))(local_28,1);
      iVar4 = (**(code **)*local_28)();
    }
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)*local_28)();
    DAT_1803fa338 = local_18 != 0;
    DAT_1803fa330 = local_38;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_18;
    }
    DAT_1803fa339 = local_2f;
    DAT_1803fa33d = local_2b;
    DAT_1803fa33f = local_29;
  }
  return;
}


