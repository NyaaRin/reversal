// 0x180083110  Features_Weapons_Backends_ArcCWWeaponBackend_vfunc09
// size=1277 thunk=false
// signature: undefined Features_Weapons_Backends_ArcCWWeaponBackend_vfunc09()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180083183) */
/* WARNING: Removing unreachable block (ram,0x00018008319b) */
/* WARNING: Removing unreachable block (ram,0x000180083192) */
/* WARNING: Removing unreachable block (ram,0x0001800831a7) */

ulonglong Features_Weapons_Backends_ArcCWWeaponBackend_vfunc09
                    (undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  double dVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  longlong *local_70;
  undefined8 uStack_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28;
  longlong local_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  
  if ((DAT_1803fa678 == (longlong *)0x0) ||
     (lVar7 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0), lVar7 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar7 + 8);
  }
  FUN_18002dc30(&local_40,uVar9);
  local_70 = (longlong *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  uVar8 = FUN_18001bcd0(0,&local_70);
  if (local_70 == (longlong *)0x0) {
    if ((local_28 != '\0') && (uVar8 = 0, DAT_1803faf78 != (code *)0x0)) {
      uVar8 = (*DAT_1803faf78)(local_40,local_38,local_30,local_2c);
    }
    return uVar8 & 0xffffffffffffff00;
  }
  iVar5 = (**(code **)*local_70)();
  bVar4 = 0;
  local_48 = iVar5;
  cVar3 = FUN_18001e2b0(param_2,local_70);
  if (cVar3 == '\0') goto LAB_180083545;
  FUN_18002d9c0(local_70[1],0xffffffff,"GetCurrentFiremode");
  cVar3 = (**(code **)(*local_70 + 0x138))(local_70,0xffffffff,6);
  if (cVar3 == '\0') {
LAB_180083402:
    lVar7 = *local_70;
  }
  else {
    FUN_18001e2b0(param_2,local_70);
    iVar6 = FUN_180023180(local_70[1],1,1);
    lVar7 = *local_70;
    if (iVar6 == 0) {
      cVar3 = (**(code **)(lVar7 + 0x138))(local_70,0xffffffff,5);
      if (cVar3 != '\0') {
        FUN_18002d9c0(local_70[1],0xffffffff,&DAT_18034782c);
        cVar3 = (**(code **)(*local_70 + 0x138))(local_70,0xffffffff,3);
        if (cVar3 != '\0') {
          dVar2 = (double)(**(code **)(*local_70 + 0xc0))(local_70,0xffffffff);
          bVar1 = DAT_180380d38 <= dVar2;
          uVar10 = bVar1;
          while (iVar6 = (**(code **)*local_70)(), iVar5 < iVar6) {
            (**(code **)(*local_70 + 0x10))(local_70,1);
          }
          if (local_70 != (longlong *)0x0) {
            (**(code **)*local_70)();
            if (local_60 == 0) {
              local_50 = 0;
              DAT_1803fa330 = local_58;
              DAT_1803fa339 = local_4f;
              DAT_1803fa33d = local_4b;
              local_11 = local_49;
            }
            else {
              local_20 = local_60;
              local_18 = 1;
              DAT_1803fa330 = local_60;
              DAT_1803fa339 = local_17;
              DAT_1803fa33d = local_13;
            }
            DAT_1803fa338 = local_60 != 0;
            DAT_1803fa33f = local_11;
          }
          if ((local_28 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
            (*DAT_1803faf78)(local_40,local_38,local_30,local_2c,uVar10);
          }
          return (ulonglong)bVar1;
        }
        (**(code **)(*local_70 + 0x10))(local_70,1);
      }
      goto LAB_180083402;
    }
  }
  (**(code **)(lVar7 + 0x10))(local_70,1);
  FUN_18002d9c0(local_70[1],0xffffffff,"Autmatic");
  cVar3 = (**(code **)(*local_70 + 0x138))(local_70,0xffffffff,1);
  if (cVar3 != '\0') {
    bVar4 = (**(code **)(*local_70 + 200))(local_70,0xffffffff);
  }
  (**(code **)(*local_70 + 0x10))(local_70,1);
  FUN_18002d9c0(local_70[1],0xffffffff,"GetBuff");
  cVar3 = (**(code **)(*local_70 + 0x138))(local_70,0xffffffff,6);
  if (cVar3 == '\0') {
LAB_180083524:
    lVar7 = *local_70;
  }
  else {
    FUN_18001e2b0(param_2,local_70);
    (**(code **)(*local_70 + 0xe8))(local_70,"Autofire",0);
    iVar6 = FUN_180023180(local_70[1],2,1);
    lVar7 = *local_70;
    if (iVar6 == 0) {
      cVar3 = (**(code **)(lVar7 + 0x138))(local_70,0xffffffff,1);
      if (cVar3 != '\0') {
        bVar4 = (**(code **)(*local_70 + 200))(local_70,0xffffffff);
      }
      goto LAB_180083524;
    }
  }
  (**(code **)(lVar7 + 0x10))(local_70,1);
  (**(code **)(*local_70 + 0x10))(local_70,1);
LAB_180083545:
  iVar6 = (**(code **)*local_70)();
  while (iVar5 < iVar6) {
    (**(code **)(*local_70 + 0x10))(local_70,1);
    iVar6 = (**(code **)*local_70)();
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)*local_70)();
    DAT_1803fa338 = local_60 != 0;
    DAT_1803fa330 = local_58;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_60;
    }
    DAT_1803fa339 = local_4f;
    DAT_1803fa33d = local_4b;
    DAT_1803fa33f = local_49;
  }
  if ((local_28 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_40,local_38,local_30,local_2c);
  }
  return (ulonglong)bVar4;
}


