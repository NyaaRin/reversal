// 0x180080980  Features_Weapons_Backends_TFAWeaponBackend_vfunc05
// size=1201 thunk=false
// signature: undefined Features_Weapons_Backends_TFAWeaponBackend_vfunc05()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180080a14) */
/* WARNING: Removing unreachable block (ram,0x000180080a2c) */
/* WARNING: Removing unreachable block (ram,0x000180080a23) */
/* WARNING: Removing unreachable block (ram,0x000180080a38) */

longlong *
Features_Weapons_Backends_TFAWeaponBackend_vfunc05
          (undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined2 local_83;
  undefined1 local_81;
  int local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  longlong *local_58;
  
  local_58 = param_2;
  if ((DAT_1803fa678 == (longlong *)0x0) ||
     (lVar8 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0), lVar8 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar8 + 8);
  }
  FUN_18002dc30(&local_78,uVar10);
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_18001bcd0(0,&local_a8);
  if (local_a8 == (longlong *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    if (local_60 == '\0') {
      return param_2;
    }
    if (DAT_1803faf78 == (code *)0x0) {
      return param_2;
    }
    (*DAT_1803faf78)(local_78,local_70,local_68,local_64);
    return param_2;
  }
  local_90 = 0;
  uStack_88 = 0;
  iVar6 = (**(code **)*local_a8)();
  local_80 = iVar6;
  FUN_18001e2b0(param_3,local_a8);
  FUN_18002d9c0(local_a8[1],0xffffffff,"GetAimAngle");
  cVar5 = (**(code **)(*local_a8 + 0x138))(local_a8,0xffffffff,6);
  if (cVar5 == '\0') goto LAB_180080d1e;
  FUN_18001e2b0(param_3,local_a8);
  iVar7 = FUN_180023180(local_a8[1],1,1);
  lVar8 = *local_a8;
  if (iVar7 != 0) goto LAB_180080d21;
  cVar5 = (**(code **)(lVar8 + 0x138))(local_a8,0xffffffff,0xb);
  lVar8 = *local_a8;
  if (cVar5 == '\0') goto LAB_180080d21;
  pfVar9 = (float *)(**(code **)(lVar8 + 0x170))(local_a8,0xffffffff);
  fVar1 = *pfVar9;
  fVar2 = pfVar9[1];
  (**(code **)(*local_a8 + 0x10))(local_a8,1);
  FUN_18002d9c0(local_a8[1],0xffffffff,"GetOwner");
  cVar5 = (**(code **)(*local_a8 + 0x138))(local_a8,0xffffffff,6);
  if (cVar5 != '\0') {
    FUN_18001e2b0(param_3,local_a8);
    iVar7 = FUN_180023180(local_a8[1],1,1);
    if (iVar7 == 0) {
      FUN_18002d9c0(local_a8[1],0xffffffff,"GetAimVector");
      cVar5 = (**(code **)(*local_a8 + 0x138))(local_a8,0xffffffff,6);
      lVar8 = *local_a8;
      if (cVar5 != '\0') {
        (**(code **)(lVar8 + 8))(local_a8,0xfffffffe);
        iVar7 = FUN_180023180(local_a8[1],1,1);
        if (iVar7 == 0) {
          FUN_18002d9c0(local_a8[1],0xffffffff,"Angle");
          (**(code **)(*local_a8 + 8))(local_a8,0xfffffffe);
          iVar7 = FUN_180023180(local_a8[1],1,1);
          lVar8 = *local_a8;
          if (iVar7 == 0) {
            cVar5 = (**(code **)(lVar8 + 0x138))(local_a8,0xffffffff,0xb);
            lVar8 = *local_a8;
            if (cVar5 != '\0') {
              pfVar9 = (float *)(**(code **)(lVar8 + 0x170))(local_a8,0xffffffff);
              fVar3 = *pfVar9;
              fVar4 = pfVar9[1];
              (**(code **)(*local_a8 + 0x10))(local_a8,1);
              uVar11 = FUN_1802d3e00(fVar1 - fVar3);
              local_90 = CONCAT44(local_90._4_4_,uVar11);
              uVar11 = FUN_180022110(fVar2,fVar4);
              local_90 = CONCAT44(uVar11,(undefined4)local_90);
              uStack_88 = 0;
              goto LAB_180080d0e;
            }
          }
          (**(code **)(lVar8 + 0x10))(local_a8,1);
        }
LAB_180080d0e:
        lVar8 = *local_a8;
      }
      (**(code **)(lVar8 + 0x10))(local_a8,1);
    }
  }
LAB_180080d1e:
  lVar8 = *local_a8;
LAB_180080d21:
  (**(code **)(lVar8 + 0x10))(local_a8,1);
  (**(code **)(*local_a8 + 0x10))(local_a8,1);
  iVar7 = (**(code **)*local_a8)();
  while (iVar6 < iVar7) {
    (**(code **)(*local_a8 + 0x10))(local_a8,1);
    iVar7 = (**(code **)*local_a8)();
  }
  *param_2 = local_90;
  *(undefined4 *)(param_2 + 1) = uStack_88;
  if (local_a8 != (longlong *)0x0) {
    (**(code **)*local_a8)();
    DAT_1803fa338 = local_98 != 0;
    DAT_1803fa330 = local_90;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_98;
    }
    DAT_1803fa339 = CONCAT13(uStack_84,uStack_88._1_3_);
    DAT_1803fa33d = local_83;
    DAT_1803fa33f = local_81;
  }
  if ((local_60 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_78,local_70,local_68,local_64);
  }
  return param_2;
}


