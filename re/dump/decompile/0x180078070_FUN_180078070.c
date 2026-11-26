// 0x180078070  FUN_180078070
// size=338 thunk=false
// signature: undefined FUN_180078070()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180078070(longlong param_1,float *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_WeaponPistol",0xf);
  local_78 = local_58;
  uVar2 = FUN_18016d4c0(local_58,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_70 = &local_98;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_flAccuracyPenalty",0x13);
  local_68 = &local_98;
  local_60 = local_38;
  uVar3 = FUN_18016d4c0(local_38,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  if (0 < iVar1) {
    fVar5 = *(float *)(iVar1 + param_1);
    if ((0.0 <= fVar5) && (fVar5 <= DAT_180381120)) {
      fVar5 = fVar5 / DAT_180380c50;
      fVar4 = 0.0;
      if ((0.0 <= fVar5) && (fVar4 = DAT_180380bb0, fVar5 <= DAT_180380bb0)) {
        fVar4 = fVar5;
      }
      fVar5 = fVar4 * _DAT_1803809bc + _DAT_18038097c;
      *param_2 = fVar5;
      param_2[1] = fVar5;
      param_2[2] = fVar5;
      return 1;
    }
  }
  return 0;
}


