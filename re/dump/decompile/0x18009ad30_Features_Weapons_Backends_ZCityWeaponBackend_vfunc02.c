// 0x18009ad30  Features_Weapons_Backends_ZCityWeaponBackend_vfunc02
// size=342 thunk=false
// signature: undefined Features_Weapons_Backends_ZCityWeaponBackend_vfunc02()
// status: ok


undefined8
Features_Weapons_Backends_ZCityWeaponBackend_vfunc02(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  size_t sVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *_Buf1;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *local_88;
  undefined8 **local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 ***local_60;
  undefined8 uStack_58;
  size_t local_50;
  ulonglong local_48;
  
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  local_68 = 0;
  plVar10 = (longlong *)FUN_180095180();
  local_80 = &local_78;
  local_60 = (undefined8 ****)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_88 = param_2;
  FUN_18001d080(&local_60,"homigrad_base",0xd);
  uVar7 = local_48;
  sVar6 = local_50;
  pppuVar5 = local_60;
  ppppuVar11 = &local_60;
  if (0xf < local_48) {
    ppppuVar11 = (undefined8 ****)local_60;
  }
  sVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if ((sVar1 == local_50) &&
     ((sVar1 == 0 || (iVar9 = memcmp(param_2,ppppuVar11,sVar1), iVar9 == 0)))) {
LAB_18009ae25:
    bVar3 = true;
  }
  else {
    puVar4 = puStack_70;
    puVar12 = local_78;
    if (local_78 != puStack_70) {
      do {
        ppppuVar11 = &local_60;
        if (0xf < uVar7) {
          ppppuVar11 = (undefined8 ****)pppuVar5;
        }
        sVar1 = puVar12[2];
        _Buf1 = puVar12;
        if (0xf < (ulonglong)puVar12[3]) {
          _Buf1 = (undefined8 *)*puVar12;
        }
      } while (((sVar1 != sVar6) ||
               ((sVar1 != 0 && (iVar9 = memcmp(_Buf1,ppppuVar11,sVar1), iVar9 != 0)))) &&
              (puVar12 = puVar12 + 4, puVar12 != puVar4));
      if (puVar12 != puVar4) goto LAB_18009ae25;
    }
    bVar3 = false;
  }
  FUN_18020e450(&local_60);
  if (bVar3) {
LAB_18009ae35:
    uVar13 = 1;
  }
  else {
    lVar2 = plVar10[1];
    for (lVar14 = *plVar10; lVar14 != lVar2; lVar14 = lVar14 + 0x20) {
      cVar8 = FUN_1800937d0(&local_88,lVar14);
      if (cVar8 != '\0') goto LAB_18009ae35;
    }
    uVar13 = 0;
  }
  FUN_18020d5c0(&local_78);
  return uVar13;
}


