// 0x180080f40  Features_Weapons_Backends_TFAWeaponBackend_vfunc09
// size=784 thunk=false
// signature: undefined Features_Weapons_Backends_TFAWeaponBackend_vfunc09()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180080fb3) */
/* WARNING: Removing unreachable block (ram,0x000180080ff7) */
/* WARNING: Removing unreachable block (ram,0x000180080fc2) */
/* WARNING: Removing unreachable block (ram,0x00018008102a) */

ulonglong Features_Weapons_Backends_TFAWeaponBackend_vfunc09(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  longlong *local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  longlong local_28;
  undefined1 local_20;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  longlong local_18;
  undefined1 local_10;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if ((DAT_1803fa678 == (longlong *)0x0) ||
     (lVar5 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0), lVar5 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar5 + 8);
  }
  FUN_18002dc30(&local_68,uVar7);
  local_80 = (longlong *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  uVar6 = FUN_18001bcd0(0,&local_80);
  if (local_80 == (longlong *)0x0) {
    if ((local_50 != '\0') && (uVar6 = 0, DAT_1803faf78 != (code *)0x0)) {
      uVar6 = (*DAT_1803faf78)(local_68,local_60,local_58,local_54);
    }
    return uVar6 & 0xffffffffffffff00;
  }
  iVar3 = (**(code **)*local_80)();
  bVar2 = 0;
  uVar8 = 0;
  FUN_18001e2b0(param_2,local_80);
  FUN_18002d9c0(local_80[1],0xffffffff,"GetStat");
  cVar1 = (**(code **)(*local_80 + 0x138))(local_80,0xffffffff,6,*local_80,uVar8);
  if (cVar1 == '\0') {
    lVar5 = *local_80;
  }
  else {
    FUN_18001e2b0(param_2,local_80);
    (**(code **)(*local_80 + 0xe8))(local_80,"Primary.Automatic",0);
    iVar4 = FUN_180023180(local_80[1],2,1);
    lVar5 = *local_80;
    if (iVar4 == 0) {
      bVar2 = (**(code **)(lVar5 + 200))(local_80,0xffffffff);
      (**(code **)(*local_80 + 0x10))(local_80,1);
      goto LAB_180081133;
    }
  }
  (**(code **)(lVar5 + 0x10))(local_80,1);
LAB_180081133:
  (**(code **)(*local_80 + 0x10))(local_80,1);
  while (iVar4 = (**(code **)*local_80)(), iVar3 < iVar4) {
    (**(code **)(*local_80 + 0x10))(local_80,1);
  }
  if (local_80 != (longlong *)0x0) {
    (**(code **)*local_80)();
    if (local_70 == 0) {
      local_10 = 0;
      DAT_1803fa330 = local_18;
      DAT_1803fa339 = local_f;
      DAT_1803fa33d = local_b;
      local_19 = local_9;
    }
    else {
      local_28 = local_70;
      local_20 = 1;
      DAT_1803fa330 = local_70;
      DAT_1803fa339 = local_1f;
      DAT_1803fa33d = local_1b;
    }
    DAT_1803fa338 = local_70 != 0;
    DAT_1803fa33f = local_19;
  }
  if ((local_50 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_68,local_60,local_58,local_54);
  }
  return (ulonglong)bVar2;
}


