// 0x18001eff0  FUN_18001eff0
// size=607 thunk=false
// signature: undefined FUN_18001eff0()
// status: ok


double FUN_18001eff0(longlong param_1)

{
  double dVar1;
  double dVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [80];
  
  if (param_1 == 0) {
    return 0.0;
  }
  if (DAT_1803ffc40 == 0) {
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"DT_BaseCombatWeapon",0x13);
    uVar5 = FUN_18016d4c0(local_88,&local_c8);
    uVar5 = FUN_180018ef0(&DAT_1803fac80,uVar5);
    FUN_18020e450(&local_c8);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_18001d080(&local_a8,"m_flNextPrimaryAttack",0x15);
    uVar6 = FUN_18016d4c0(local_68,&local_a8);
    iVar4 = FUN_180018c10(uVar5,uVar6);
    FUN_18020e450(&local_a8);
    DAT_1803ffc40 = iVar4;
    FUN_180014410("[WEAP] m_flNextPrimaryAttack netvar offset = 0x%X (hardcoded 0x%X)\n",iVar4,
                  0x1bd8);
  }
  if (DAT_1803fa608 == 0) {
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar8 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
  }
  if (DAT_1803ffc40 < 1) {
    dVar1 = (double)CONCAT44(uVar9,uVar8) + DAT_180380f10;
  }
  else {
    lVar7 = (longlong)DAT_1803ffc40;
    dVar1 = *(double *)(lVar7 + param_1);
    sVar3 = _dclass(SUB84(dVar1,0));
    if (((sVar3 < 1) && (0.0 <= dVar1)) && (dVar1 <= (double)CONCAT44(uVar9,uVar8) + DAT_180380f10))
    {
      return dVar1;
    }
    dVar1 = (double)CONCAT44(uVar9,uVar8) + DAT_180380f10;
    dVar2 = (double)*(float *)(lVar7 + param_1);
    sVar3 = _dclass(SUB84(dVar2,0));
    if (((sVar3 < 1) && (0.0 <= dVar2)) && (dVar2 <= dVar1)) {
      return dVar2;
    }
  }
  dVar2 = *(double *)(param_1 + 0x1bd8);
  sVar3 = _dclass(SUB84(dVar2,0));
  if (((0 < sVar3) || (dVar2 < 0.0)) || (dVar1 < dVar2)) {
    dVar2 = (double)*(float *)(param_1 + 0x1bd8);
    sVar3 = _dclass(SUB84(dVar2,0));
    if (((0 < sVar3) || (dVar2 < 0.0)) || (dVar1 < dVar2)) {
      dVar2 = 0.0;
    }
  }
  return dVar2;
}


