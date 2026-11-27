// 0x18001c0d0  FUN_18001c0d0
// size=360 thunk=false
// signature: undefined FUN_18001c0d0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18001c0d0(longlong param_1)

{
  double dVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [72];
  
  if (DAT_1803da608 == -999) {
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    FUN_18001d080(&local_d8,"DT_BaseEntity",0xd);
    uVar4 = FUN_18016d4c0(local_88,&local_d8);
    uVar4 = FUN_180018ef0(&DAT_1803fac80,uVar4);
    FUN_18020e450(&local_d8);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_18001d080(&local_b8,"m_flSimulationTime",0x12);
    local_98 = &local_b8;
    local_90 = local_68;
    uVar5 = FUN_18016d4c0(local_68,&local_b8);
    iVar3 = FUN_180018c10(uVar4,uVar5);
    FUN_18020e450(&local_b8);
    DAT_1803da608 = iVar3;
  }
  if (DAT_1803fa608 == 0) {
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    uVar8 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
  }
  dVar1 = *(double *)(DAT_1803da608 + param_1);
  uVar6 = SUB84(dVar1,0);
  uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  sVar2 = _dclass(uVar6);
  if (((0 < sVar2) || (dVar1 <= DAT_180380d08)) ||
     (dVar1 = (double)CONCAT44(uVar10,uVar8) - dVar1, uVar9 = SUB84(dVar1,0) & _DAT_1803817d0,
     uVar11 = (uint)((ulonglong)dVar1 >> 0x20) & _UNK_1803817d4,
     DAT_180380d80 < (double)CONCAT44(uVar11,uVar9) ||
     DAT_180380d80 == (double)CONCAT44(uVar11,uVar9))) {
    uVar6 = 0;
    uVar7 = 0;
  }
  return CONCAT44(uVar7,uVar6);
}


