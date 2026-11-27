// 0x18008eb80  FUN_18008eb80
// size=370 thunk=false
// signature: undefined FUN_18008eb80()
// status: ok


undefined8 FUN_18008eb80(longlong *param_1,undefined4 param_2,float *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  float local_res20 [2];
  
  iVar2 = (**(code **)*param_1)();
  FUN_180023e60(param_1,0);
  FUN_18002db10(param_1[1],0xffffffff,"PLAYER_WeaponMeta");
  cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
  if (cVar1 == '\0') {
    iVar3 = (**(code **)*param_1)();
    if (iVar2 < iVar3) {
      (**(code **)(*param_1 + 0x10))(param_1,iVar3 - iVar2);
    }
    uVar4 = 0;
  }
  else {
    (*(code *)((undefined8 *)*param_1)[1])(param_1,param_2);
    cVar1 = FUN_18002dbf0(param_1[1]);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
    }
    cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
    if (cVar1 == '\0') {
      iVar3 = (**(code **)*param_1)();
      if (iVar2 < iVar3) {
        (**(code **)(*param_1 + 0x10))(param_1,iVar3 - iVar2);
      }
      uVar4 = 0;
    }
    else {
      local_res20[0] = 1.0;
      cVar1 = FUN_18007daf0(param_1,0xffffffff,"BulletNum",local_res20);
      if (((cVar1 == '\0') || (((uint)local_res20[0] & 0x7f800000) == 0x7f800000)) ||
         (local_res20[0] <= 0.0)) {
        iVar3 = (**(code **)*param_1)(param_1);
        if (iVar2 < iVar3) {
          (**(code **)(*param_1 + 0x10))(param_1,iVar3 - iVar2);
        }
        uVar4 = 0;
      }
      else {
        *param_3 = local_res20[0];
        iVar3 = (**(code **)*param_1)(param_1);
        if (iVar2 < iVar3) {
          (**(code **)(*param_1 + 0x10))(param_1,iVar3 - iVar2);
        }
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


