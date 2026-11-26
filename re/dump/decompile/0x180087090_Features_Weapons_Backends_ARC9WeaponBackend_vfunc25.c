// 0x180087090  Features_Weapons_Backends_ARC9WeaponBackend_vfunc25
// size=2194 thunk=false
// signature: undefined Features_Weapons_Backends_ARC9WeaponBackend_vfunc25()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Weapons_Backends_ARC9WeaponBackend_vfunc25(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong lVar11;
  undefined8 uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_158 [32];
  longlong **local_138;
  undefined8 local_130;
  float local_128;
  int local_124;
  undefined8 local_120;
  float local_118;
  longlong **local_110;
  undefined8 *local_108;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  longlong local_d0;
  float local_c8;
  float local_c0;
  float local_b8;
  uint local_b0;
  uint local_a8;
  uint local_a0;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong **local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_68 = (longlong **)0x0;
  local_d0 = param_1;
  local_80 = param_2;
  FUN_18001bcd0(0,&local_78);
  if (local_78 == (longlong *)0x0) goto LAB_1800878a5;
  iVar5 = (**(code **)*local_78)();
  local_124 = iVar5;
  cVar3 = FUN_18001e2b0(local_80,local_78);
  if (cVar3 != '\0') {
    local_138 = &local_78;
    local_130 = &local_80;
    local_110 = &local_78;
    local_108 = &local_80;
    FUN_180086e00(param_1,local_78);
    FUN_180087a70(&local_110,"Spread",param_1 + 8);
    FUN_180087940(&local_138,"AlwaysPhysBullet",param_1 + 0x2c);
    FUN_180087940(&local_138,"NeverPhysBullet",param_1 + 0x2d);
    local_128 = 1.0;
    FUN_180087a70(&local_110,&DAT_180347d28,&local_128);
    *(int *)(param_1 + 0x30) = (int)local_128;
    FUN_180087940(&local_138,"UseDispersion",param_1 + 0x34);
    FUN_180087a70(&local_110,"DispersionSpread",param_1 + 0x38);
    fVar14 = 0.0;
    local_f4 = 0;
    local_f0 = 0;
    local_ec = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar8 = (*pcVar1)(DAT_1803fa360,uVar6);
    FUN_18002d9c0(local_78[1],0xffffffff,"GetShootPos");
    cVar3 = (**(code **)(*local_78 + 0x138))(local_78,0xffffffff,6);
    if (cVar3 == '\0') {
      uVar12 = 1;
LAB_18008758a:
      lVar11 = *local_78;
    }
    else {
      FUN_18001e2b0(local_80,local_78);
      iVar7 = FUN_180023180(local_78[1],1,2);
      lVar11 = *local_78;
      if (iVar7 == 0) {
        cVar3 = (**(code **)(lVar11 + 0x138))(local_78,0xffffffff,0xb);
        if (cVar3 != '\0') {
          if (lVar8 == 0) {
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            fVar15 = 0.0;
            fVar16 = 0.0;
          }
          else {
            puVar9 = (undefined8 *)FUN_18001d350(lVar8);
            uVar12 = *puVar9;
            fVar15 = (float)uVar12;
            fVar16 = *(float *)(puVar9 + 1);
            local_98._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
            fVar14 = local_98._4_4_;
            local_98 = uVar12;
            local_90 = fVar16;
          }
          local_120 = CONCAT44(fVar14,fVar15);
          local_118 = fVar16;
          if (DAT_1803fa668 != (longlong *)0x0) {
            local_60 = 0.0;
            fStack_5c = 0.0;
            local_58 = 0.0;
            (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_60);
            local_c8 = local_60;
            if (((((uint)local_60 & 0x7f800000) == 0x7f800000) ||
                (local_c0 = fStack_5c, ((uint)fStack_5c & 0x7f800000) == 0x7f800000)) ||
               (local_b8 = local_58, ((uint)local_58 & 0x7f800000) == 0x7f800000)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              local_120 = CONCAT44(fStack_5c,local_60);
              local_118 = local_58;
              fVar14 = fStack_5c;
              fVar15 = local_60;
              fVar16 = local_58;
            }
          }
          pfVar10 = (float *)(**(code **)(*local_78 + 0x170))(local_78,0xffffffff);
          local_100 = *pfVar10 - fVar15;
          local_fc = pfVar10[1] - fVar14;
          local_f8 = pfVar10[2] - fVar16;
          *(float *)(param_1 + 0x3c) = local_100;
          *(float *)(param_1 + 0x40) = local_fc;
          *(float *)(param_1 + 0x44) = local_f8;
          FUN_180022190(param_1 + 0x3c);
          local_b0 = *(uint *)(param_1 + 0x3c);
          if ((((local_b0 & 0x7f800000) == 0x7f800000) ||
              (local_a8 = *(uint *)(param_1 + 0x40), (local_a8 & 0x7f800000) == 0x7f800000)) ||
             (local_a0 = *(uint *)(param_1 + 0x44), (local_a0 & 0x7f800000) == 0x7f800000)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((!bVar2) || (DAT_180381094 < (float)(local_b0 & _DAT_1803817c0))) ||
             (DAT_180381094 < (float)(*(uint *)(param_1 + 0x40) & _DAT_1803817c0))) {
            local_e8 = 0;
            local_e4 = 0;
            local_e0 = 0;
            *(undefined4 *)(param_1 + 0x3c) = 0;
            *(undefined4 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x44) = 0;
          }
        }
        uVar12 = 2;
        goto LAB_18008758a;
      }
      uVar12 = 1;
    }
    (**(code **)(lVar11 + 0x10))(local_78,uVar12);
    FUN_180087a70(&local_110,"Recoil",param_1 + 0xc);
    FUN_180087a70(&local_110,"RecoilUp",param_1 + 0x10);
    FUN_180087a70(&local_110,"RecoilSide",param_1 + 0x14);
    FUN_180087a70(&local_110,"RecoilRandomUp",param_1 + 0x18);
    FUN_180087a70(&local_110,"RecoilRandomSide",param_1 + 0x1c);
    FUN_18002d9c0(local_78[1],0xffffffff,&DAT_180347258);
    cVar3 = (**(code **)(*local_78 + 0x138))(local_78,0xffffffff,5);
    if (cVar3 != '\0') {
      FUN_18002d9c0(local_78[1],0xffffffff,"Jammed");
      uVar4 = (**(code **)(*local_78 + 200))(local_78,0xffffffff);
      *(undefined1 *)(param_1 + 0x28) = uVar4;
      (**(code **)(*local_78 + 0x10))(local_78,1);
      FUN_18002d9c0(local_78[1],0xffffffff,"HeatLockout");
      uVar4 = (**(code **)(*local_78 + 200))(local_78,0xffffffff);
      *(undefined1 *)(param_1 + 0x29) = uVar4;
      (**(code **)(*local_78 + 0x10))(local_78,1);
      FUN_18002d9c0(local_78[1],0xffffffff,"Reloading");
      uVar4 = (**(code **)(*local_78 + 200))(local_78,0xffffffff);
      *(undefined1 *)(param_1 + 0x2a) = uVar4;
      (**(code **)(*local_78 + 0x10))(local_78,1);
    }
    (**(code **)(*local_78 + 0x10))(local_78,1);
    FUN_18002d9c0(local_78[1],0xffffffff,"GetCurrentFiremodeTable");
    cVar3 = (**(code **)(*local_78 + 0x138))(local_78,0xffffffff,6);
    if (cVar3 == '\0') {
LAB_180087839:
      lVar8 = *local_78;
    }
    else {
      FUN_18001e2b0(local_80,local_78);
      iVar7 = FUN_180023180(local_78[1],1,1);
      lVar8 = *local_78;
      if (iVar7 == 0) {
        cVar3 = (**(code **)(lVar8 + 0x138))(local_78,0xffffffff,5);
        if (cVar3 != '\0') {
          FUN_18002d9c0(local_78[1],0xffffffff,&DAT_18034782c);
          dVar13 = (double)(**(code **)(*local_78 + 0xc0))(local_78,0xffffffff);
          if ((dVar13 < 0.0) || (DAT_180380d08 < dVar13)) {
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
          *(undefined1 *)(param_1 + 0x2b) = uVar4;
          (**(code **)(*local_78 + 0x10))(local_78,1);
        }
        goto LAB_180087839;
      }
    }
    (**(code **)(lVar8 + 0x10))(local_78,1);
    (**(code **)(*local_78 + 0x10))(local_78,1);
  }
  iVar7 = (**(code **)*local_78)();
  while (iVar5 < iVar7) {
    (**(code **)(*local_78 + 0x10))(local_78,1);
    iVar7 = (**(code **)*local_78)();
  }
LAB_1800878a5:
  if (local_78 != (longlong *)0x0) {
    (**(code **)*local_78)();
    DAT_1803fa338 = local_68 != (longlong **)0x0;
    DAT_1803fa330 = local_138;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_68;
    }
    DAT_1803fa339 = local_130._1_4_;
    DAT_1803fa33d = local_130._5_2_;
    DAT_1803fa33f = local_130._7_1_;
  }
  return;
}


