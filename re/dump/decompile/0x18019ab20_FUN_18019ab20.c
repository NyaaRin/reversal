// 0x18019ab20  FUN_18019ab20
// size=8063 thunk=false
// signature: undefined FUN_18019ab20()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18019ab20(longlong param_1,undefined4 param_2,undefined8 param_3,uint param_4,float param_5
                  )

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  
  puVar10 = (undefined *)0x0;
  puVar11 = puVar10;
  switch(param_2) {
  case 0:
    puVar11 = &DAT_180363bbc;
    break;
  case 1:
    puVar11 = &DAT_180363bc4;
    break;
  case 2:
    puVar11 = &DAT_180363bc8;
    break;
  case 3:
    puVar11 = &DAT_180363bcc;
    break;
  case 4:
    puVar11 = &DAT_180363bd0;
    break;
  case 5:
    puVar11 = &DAT_180363bd4;
    break;
  case 6:
    puVar11 = &DAT_180363bd8;
    break;
  case 7:
    puVar11 = &DAT_180363bdc;
    break;
  case 8:
    puVar11 = &DAT_180363be0;
    break;
  case 9:
    puVar11 = &DAT_180363be4;
    break;
  case 10:
    puVar11 = &DAT_180363be8;
    break;
  case 0xb:
    puVar11 = &DAT_18034f9e0;
    break;
  case 0xc:
    puVar11 = &DAT_180363bec;
    break;
  case 0xd:
    puVar11 = &DAT_180363bf0;
    break;
  case 0xe:
    puVar11 = &DAT_180363bf4;
    break;
  case 0xf:
    puVar11 = &DAT_180363bf8;
    break;
  case 0x10:
    puVar11 = &DAT_180363bc0;
    break;
  case 0x11:
    puVar11 = &DAT_180363bfc;
    break;
  case 0x12:
    puVar11 = &DAT_180363c00;
    break;
  case 0x13:
    puVar11 = &DAT_180363c04;
  }
  local_118 = param_3;
  local_110 = param_3;
  cVar8 = FUN_180022250(param_5 * _DAT_180380d58,DAT_1803fa5d8,puVar11,param_3,param_4,
                        param_5 * _DAT_180380d58);
  uVar12 = DAT_1803817f0;
  uVar6 = DAT_180380f28;
  uVar5 = DAT_180380d30;
  uVar4 = DAT_180380cd0;
  uVar3 = DAT_180380ca8;
  uVar22 = DAT_180380c88;
  uVar24 = DAT_180380c50;
  uVar23 = DAT_180380c34;
  fVar2 = DAT_180380b98;
  fVar13 = DAT_180380b38;
  fVar21 = DAT_180380b30;
  fVar20 = DAT_180380af0;
  fVar18 = DAT_180380ac0;
  fVar17 = DAT_180380a6c;
  fVar16 = DAT_180380a68;
  fVar14 = DAT_180380a1c;
  if (cVar8 != '\0') {
    return;
  }
  fVar19 = (float)param_3;
  fVar7 = (float)local_118;
  fVar15 = local_118._4_4_;
  switch(param_2) {
  case 0:
    if ((param_4 & 0xff000000) != 0) {
      if (DAT_180380ac0 <= param_5 * DAT_180380b18) {
        FUN_1802941e0(param_1,&local_118,param_5 * DAT_180380b18 - DAT_180380ac0,0,DAT_180380f60,
                      0x1b);
        FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),
                      param_4,DAT_180380ca8,0x200);
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      if (fVar18 <= param_5 * DAT_180380a74) {
        FUN_1802941e0(param_1,&local_118,param_5 * DAT_180380a74 - fVar18,0,DAT_180380f3c,0x13);
        FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),
                      param_4,uVar24,0x200);
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
    }
    fVar14 = local_118._4_4_;
    fVar16 = param_5 * _DAT_180380ad0;
    local_110 = CONCAT44(local_118._4_4_ - 0.0,fVar19 - fVar16);
    local_118 = CONCAT44(local_118._4_4_ - 0.0,fVar19 - param_5);
    FUN_180294c90(param_1,&local_118,&local_110,param_4,uVar24);
    local_110 = CONCAT44(fVar14 + 0.0,fVar19 + param_5);
    local_118 = CONCAT44(fVar14 + 0.0,fVar16 + fVar19);
    FUN_180294c90(param_1,&local_118,&local_110,param_4,uVar24);
    local_110 = CONCAT44(fVar14 - fVar16,fVar19 - 0.0);
    local_118 = CONCAT44(fVar14 - param_5,fVar19 - 0.0);
    FUN_180294c90(param_1,&local_118,&local_110,param_4,uVar24);
    local_110 = CONCAT44(fVar14 + param_5,fVar19 + 0.0);
    local_118 = CONCAT44(fVar16 + fVar14,fVar19 + 0.0);
    FUN_180294c90(param_1,&local_118,&local_110,param_4,uVar24);
    break;
  case 1:
    fVar16 = (float)((uint)param_5 ^ DAT_1803817f0);
    fVar14 = local_118._4_4_ + 0.0;
    fVar17 = fVar16 * DAT_180380b98 + fVar19;
    local_110 = CONCAT44(fVar14,fVar17);
    FUN_18020dc30(param_1 + 0x50,&local_110);
    local_104 = fVar16 * _DAT_180380b50 + fVar15;
    local_110 = CONCAT44(fVar14,param_5 * DAT_180380b98 + fVar19);
    local_108 = fVar19 + 0.0;
    FUN_1802947e0(param_1,&local_108,&local_110,0xc);
    local_110 = CONCAT44(param_5 * _DAT_180380b50 + fVar15,fVar19 + 0.0);
    local_108 = fVar17;
    local_104 = fVar14;
    FUN_1802947e0(param_1,&local_110,&local_108,0xc);
    FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                  DAT_180380c88,0x200);
    *(undefined4 *)(param_1 + 0x50) = 0;
    if ((param_4 & 0xff000000) == 0) {
      return;
    }
    param_5 = param_5 * _DAT_180380a5c;
    if (param_5 < DAT_180380ac0) {
      return;
    }
    uVar24 = 0xf;
    uVar23 = DAT_180380f30;
    goto LAB_18019c5b0;
  case 2:
    fVar14 = (float)((uint)param_5 ^ DAT_1803817f0);
    local_f8 = param_5 * DAT_180380a6c + fVar19;
    local_ec = param_5 * DAT_1803809ec + local_118._4_4_;
    local_f0 = fVar14 * _DAT_180380ad0 + fVar19;
    local_f4 = fVar14 + local_118._4_4_;
    local_e0 = fVar14 * DAT_180380a68 + fVar19;
    local_e8 = fVar14 * DAT_1803809d4 + fVar19;
    local_d4 = fVar14 * DAT_1803809fc + local_118._4_4_;
    local_dc = local_118._4_4_ + param_5;
    local_d8 = param_5 * _DAT_180380ad0 + fVar19;
    local_d0 = param_5 * DAT_1803809d4 + fVar19;
    local_e4 = local_ec;
    local_cc = local_d4;
    FUN_180295e40(param_1,&local_f8,local_ec,param_4);
    break;
  case 3:
    local_108 = param_5 * _DAT_180380b50 + fVar19;
    local_104 = param_5 * DAT_180380af0 + local_118._4_4_;
    local_110 = CONCAT44(local_118._4_4_ - param_5 * DAT_180380ac0,fVar19 - param_5 * _DAT_180380b50
                        );
    FUN_180294f00(param_1,&local_110,&local_108,param_4,DAT_180380e28,DAT_180380c88,0);
    fVar14 = (float)((uint)param_5 ^ DAT_1803817f0);
    local_108 = fVar14 * DAT_1803809fc + fVar19;
    local_104 = fVar14 * DAT_180380ab8 + fVar15;
    local_110 = CONCAT44(fVar14 * DAT_180380b20 + fVar15,fVar14 * DAT_180380ad4 + fVar19);
    FUN_180295000(param_1,&local_110,&local_108,param_4,DAT_180380d30,0);
    local_108 = param_5 * DAT_1803809ec + fVar19;
    local_104 = param_5 * DAT_1803809c4 + fVar15;
    if (((param_4 & 0xff000000) != 0) && (fVar18 <= param_5 * DAT_180380a6c)) {
      FUN_1802941e0(param_1,&local_108,param_5 * DAT_180380a6c - fVar18,0,DAT_180380f38,0x11);
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                    uVar22,0x200);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    break;
  case 4:
    do {
      fVar16 = (float)(int)puVar10 * fVar13;
      fVar14 = cosf(fVar16);
      fVar16 = sinf(fVar16);
      puVar1 = (undefined4 *)(param_1 + 0x50);
      if ((param_4 & 0xff000000) != 0) {
        local_108 = fVar14 * param_5 * fVar21 + fVar7 + fVar18;
        local_104 = fVar16 * param_5 * fVar21 + fVar15 + fVar18;
        FUN_18020dc30(puVar1,&local_108);
        local_110 = CONCAT44(fVar16 * param_5 * fVar2 + fVar15 + fVar18,
                             fVar14 * param_5 * fVar2 + fVar7 + fVar18);
        FUN_18020dc30(puVar1,&local_110);
        FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*puVar1,param_4,uVar22,0);
        *puVar1 = 0;
      }
      uVar12 = (int)puVar10 + 1;
      puVar10 = (undefined *)(ulonglong)uVar12;
    } while ((int)uVar12 < 8);
    if ((param_4 & 0xff000000) != 0) {
      if (fVar18 <= param_5 * DAT_180380ae4) {
        FUN_1802941e0(param_1,&local_118,param_5 * DAT_180380ae4 - fVar18,0,DAT_180380f50,0x17);
        FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*puVar1,param_4,DAT_180380ca8,0x200);
        *puVar1 = 0;
      }
      if (fVar18 <= param_5 * DAT_180380a48) {
        FUN_1802941e0(param_1,&local_118,param_5 * DAT_180380a48 - fVar18,0,DAT_180380f30,0xf);
        FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*puVar1,param_4,uVar22,0x200);
        *puVar1 = 0;
      }
    }
    break;
  case 5:
    fVar18 = (float)((uint)param_5 ^ DAT_1803817f0);
    fVar17 = local_118._4_4_ + 0.0;
    fVar16 = fVar18 * _DAT_180380ae0 + (float)local_110;
    fVar14 = fVar18 * DAT_180380a48 + (float)local_110;
    fVar18 = fVar18 * DAT_180380b34 + local_118._4_4_;
    local_118 = CONCAT44(fVar18,fVar14);
    local_108 = fVar16;
    local_104 = fVar17;
    FUN_180294c90(param_1,&local_118,&local_108,param_4,DAT_180380cd0);
    local_118 = CONCAT44(fVar17,fVar16);
    fVar15 = param_5 * DAT_180380b34 + fVar15;
    local_108 = fVar14;
    local_104 = fVar15;
    FUN_180294c90(param_1,&local_118,&local_108,param_4,uVar4);
    fVar14 = param_5 * _DAT_180380ae0 + (float)local_110;
    fVar16 = param_5 * DAT_180380a48 + (float)local_110;
    local_110 = CONCAT44(fVar18,fVar16);
    local_108 = fVar14;
    local_104 = fVar17;
    FUN_180294c90(param_1,&local_110,&local_108,param_4,uVar4);
    local_110 = CONCAT44(fVar17,fVar14);
    local_108 = fVar16;
    local_104 = fVar15;
    FUN_180294c90(param_1,&local_110,&local_108,param_4,uVar4);
    break;
  case 6:
    local_108 = param_5 * DAT_180380b6c + fVar19;
    local_104 = param_5 * DAT_180380af0 + local_118._4_4_;
    local_110 = CONCAT44(local_118._4_4_ - param_5 * _DAT_180380a98,fVar19 - param_5 * DAT_180380b6c
                        );
    FUN_180294f00(param_1,&local_110,&local_108,param_4,DAT_180380e28,DAT_180380c88,0);
    param_5 = (float)((uint)param_5 ^ DAT_1803817f0);
    local_108 = param_5 * DAT_180380a48 + fVar19;
    local_104 = param_5 * DAT_180380a94 + fVar15;
    local_110 = CONCAT44(param_5 * _DAT_180380b0c + fVar15,param_5 * _DAT_180380b48 + fVar19);
    FUN_180295000(param_1,&local_110,&local_108,param_4,DAT_180380d30,0);
    break;
  case 7:
    local_108 = param_5 * DAT_180380b18 + fVar19;
    local_104 = param_5 * DAT_180380b34 + local_118._4_4_;
    local_110 = CONCAT44(local_118._4_4_ - param_5 * DAT_180380b34,fVar19 - param_5 * DAT_180380b18)
    ;
    FUN_180294f00(param_1,&local_110,&local_108,param_4,DAT_180380e28,DAT_180380c88,0);
    uVar23 = DAT_180380d30;
    fVar14 = (float)((uint)param_5 ^ DAT_1803817f0);
    local_104 = fVar14 * DAT_180380a2c + fVar15;
    fVar16 = fVar14 * _DAT_180380a98 + fVar19;
    local_108 = param_5 * DAT_180380a74 + fVar19;
    local_110 = CONCAT44(fVar14 * DAT_180380af0 + fVar15,fVar16);
    FUN_180295000(param_1,&local_110,&local_108,param_4,DAT_180380d30,0);
    local_108 = param_5 * _DAT_180380a98 + fVar19;
    local_104 = param_5 * _DAT_180380b00 + fVar15;
    local_110 = CONCAT44(param_5 * DAT_180380a3c + fVar15,fVar16);
    FUN_180294f00(param_1,&local_110,&local_108,param_4,uVar23,DAT_180380c34,0);
    break;
  case 8:
    local_108 = param_5 * DAT_180380b20 + fVar19;
    local_104 = param_5 * DAT_180380b10 + local_118._4_4_;
    local_110 = CONCAT44(local_118._4_4_ - param_5 * DAT_180380ad4,fVar19 - param_5 * DAT_180380b20)
    ;
    FUN_180294f00(param_1,&local_110,&local_108,param_4,DAT_180380e28,DAT_180380c50,0);
    fVar16 = (float)((uint)param_5 ^ DAT_1803817f0);
    fVar14 = fVar19 + 0.0;
    local_104 = param_5 * DAT_1803809fc + fVar15;
    local_110 = CONCAT44(fVar16 * _DAT_180380b48 + fVar15,fVar14);
    local_108 = fVar14;
    FUN_180294c90(param_1,&local_110,&local_108,param_4,DAT_180380d10);
    local_118 = CONCAT44(param_5 * DAT_180380a58 + fVar15,fVar14);
    local_104 = fVar16 * DAT_1803809fc + fVar15;
    local_108 = fVar16 * DAT_180380a88 + fVar19;
    local_110 = CONCAT44(local_104,param_5 * DAT_180380a88 + fVar19);
    if ((param_4 & 0xff000000) == 0) {
      return;
    }
    FUN_18020dc30(param_1 + 0x50,&local_108);
    FUN_18020dc30(param_1 + 0x50,&local_110);
    FUN_18020dc30(param_1 + 0x50,&local_118);
    goto LAB_18019c5ca;
  case 9:
    local_108 = param_5 * DAT_180380ad4 + fVar19;
    local_104 = param_5 * DAT_180380b34 + local_118._4_4_;
    local_110 = CONCAT44(local_118._4_4_ - param_5 * DAT_180380a94,fVar19 - param_5 * DAT_180380ad4)
    ;
    FUN_180294f00(param_1,&local_110,&local_108,param_4,DAT_180380d30,DAT_180380c50,0);
    uVar23 = DAT_180380c88;
    fVar14 = (float)((uint)param_5 ^ DAT_1803817f0);
    local_108 = param_5 * DAT_180380b18 + fVar19;
    local_104 = fVar14 * _DAT_180380ae0 + fVar15;
    local_110 = CONCAT44(local_104,fVar14 * DAT_180380b18 + fVar19);
    FUN_180294c90(param_1,&local_110,&local_108,param_4,DAT_180380c88);
    local_108 = param_5 * DAT_180380a68 + fVar19;
    local_104 = fVar14 * DAT_180380b34 + fVar15;
    local_110 = CONCAT44(local_104,fVar14 * DAT_180380a68 + fVar19);
    FUN_180294c90(param_1,&local_110,&local_108,param_4,uVar23);
    break;
  case 10:
    param_5 = param_5 * DAT_180380b10;
    local_104 = local_118._4_4_ + 0.0;
    local_108 = param_5 + fVar19;
    local_110 = CONCAT44(local_118._4_4_ - 0.0,fVar19 - param_5);
    FUN_180294c90(param_1,&local_110,&local_108,param_4,DAT_180380d30);
    local_108 = fVar19 + 0.0;
    local_104 = param_5 + fVar15;
    local_110 = CONCAT44(fVar15 - param_5,fVar19 - 0.0);
    FUN_180294c90(param_1,&local_110,&local_108,param_4,uVar5);
    break;
  case 0xb:
    if (DAT_180380ac0 <= param_5 * DAT_180380b10) {
      FUN_180294060(param_1,&local_118,param_5 * DAT_180380b10,DAT_180380ad4,DAT_180380f04,0x1a);
    }
    else {
      FUN_18020dc30(param_1 + 0x50);
    }
    FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                  DAT_180380ca8,0);
    local_100 = param_5 * DAT_180380b30;
    *(undefined4 *)(param_1 + 0x50) = 0;
    local_100 = local_100 + fVar19;
    local_fc = param_5 * DAT_180380a1c + local_118._4_4_;
    local_104 = local_118._4_4_ - param_5 * DAT_180380a2c;
    local_108 = param_5 * DAT_180380ae4 + fVar19;
    local_110 = CONCAT44(local_104,param_5 * DAT_180380b6c + fVar19);
    if ((param_4 & 0xff000000) == 0) {
      return;
    }
    FUN_18020dc30(param_1 + 0x50,&local_108);
    FUN_18020dc30(param_1 + 0x50,&local_110);
    FUN_18020dc30(param_1 + 0x50,&local_100);
    goto LAB_18019c5ca;
  case 0xc:
    fVar20 = param_5 * _DAT_180380b48;
    do {
      iVar9 = (int)puVar10;
      local_100 = fVar20 + fVar7;
      local_108 = fVar7 - fVar20;
      fVar21 = (float)(iVar9 + -1) * param_5 * _DAT_180380ad0 + local_118._4_4_;
      local_104 = fVar21;
      local_fc = fVar21;
      FUN_180294c90(param_1,&local_108,&local_100,param_4,DAT_180380c50);
      if (iVar9 == 1) {
        fVar13 = (float)((uint)param_5 ^ uVar12) * fVar17;
      }
      else {
        fVar13 = param_5 * fVar16;
      }
      local_110 = CONCAT44(fVar21,fVar13 + fVar7);
      if (((param_4 & 0xff000000) != 0) && (fVar18 <= param_5 * fVar14)) {
        FUN_1802941e0(param_1,&local_110,param_5 * fVar14,0,uVar6,0xb);
        FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),
                      param_4);
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      puVar10 = (undefined *)(ulonglong)(iVar9 + 1U);
    } while ((int)(iVar9 + 1U) < 3);
    break;
  case 0xd:
    local_104 = param_5 * _DAT_180380b0c + local_118._4_4_;
    local_110 = CONCAT44(local_118._4_4_ + 0.0,param_5 * _DAT_180380ae0 + fVar19);
    local_108 = (float)((uint)param_5 ^ DAT_1803817f0) * _DAT_180380a98 + fVar19;
    local_fc = (float)((uint)param_5 ^ DAT_1803817f0) * _DAT_180380b0c + local_118._4_4_;
    if ((param_4 & 0xff000000) == 0) {
      return;
    }
    local_100 = local_108;
    FUN_18020dc30(param_1 + 0x50,&local_100);
    FUN_18020dc30(param_1 + 0x50,&local_108);
    FUN_18020dc30(param_1 + 0x50,&local_110);
    goto LAB_18019c5ca;
  case 0xe:
    fVar19 = fVar19 + 0.0;
    local_fc = local_118._4_4_ - param_5 * DAT_180380a74;
    local_100 = fVar19;
    if (((param_4 & 0xff000000) != 0) && (DAT_180380ac0 <= param_5 * DAT_180380a6c)) {
      FUN_1802941e0(param_1,&local_100,param_5 * DAT_180380a6c - DAT_180380ac0,0,DAT_180380f3c,0x13)
      ;
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                    uVar22,0x200);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    local_110 = CONCAT44(param_5 * _DAT_180380ae0 + fVar15,fVar19);
    if (fVar18 <= param_5 * _DAT_180380b1c) {
      FUN_180294060(param_1,&local_110,param_5 * _DAT_180380b1c,DAT_180380e68,DAT_180380f34,0x14);
      uVar23 = 0;
    }
    else {
      FUN_18020dc30(param_1 + 0x50);
      uVar23 = 0;
    }
    goto LAB_18019c39f;
  case 0xf:
    fVar17 = (float)((uint)param_5 ^ DAT_1803817f0);
    local_100 = fVar17 * DAT_180380b18 + fVar19;
    fVar14 = fVar17 * _DAT_180380b1c + local_118._4_4_;
    local_fc = fVar14;
    FUN_18020dc30(param_1 + 0x50,&local_100);
    fVar16 = param_5 * DAT_180380b18;
    local_100 = fVar16 + fVar19;
    local_fc = fVar14;
    FUN_18020dc30(param_1 + 0x50,&local_100);
    local_100 = param_5 * _DAT_180380af8 + fVar19;
    fVar14 = param_5 * DAT_180380a14 + fVar15;
    local_fc = fVar14;
    FUN_18020dc30(param_1 + 0x50,&local_100);
    fVar16 = fVar16 + fVar15;
    local_fc = param_5 * _DAT_180380b88 + fVar15;
    local_100 = fVar19 + 0.0;
    local_108 = param_5 * _DAT_180380a8c + fVar19;
    local_104 = fVar16;
    FUN_1802947e0(param_1,&local_108,&local_100,10);
    local_100 = fVar17 * _DAT_180380af8 + fVar19;
    local_108 = fVar17 * _DAT_180380a8c + fVar19;
    local_104 = fVar16;
    local_fc = fVar14;
    FUN_1802947e0(param_1,&local_108,&local_100,10);
    uVar23 = 0x200;
    uVar22 = DAT_180380ca8;
LAB_18019c39f:
    FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                  uVar22,uVar23);
    *(undefined4 *)(param_1 + 0x50) = 0;
    break;
  case 0x10:
    if (((param_4 & 0xff000000) != 0) && (DAT_180380ac0 <= param_5 * DAT_180380af0)) {
      FUN_1802941e0(param_1,&local_118,param_5 * DAT_180380af0 - DAT_180380ac0,0,DAT_180380f50,0x17)
      ;
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                    DAT_180380c34,0x200);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    uVar23 = DAT_180380ca8;
    fVar14 = local_118._4_4_;
    fVar16 = param_5 * DAT_180380a6c;
    local_104 = local_118._4_4_ - 0.0;
    local_100 = fVar19 - fVar16;
    local_108 = fVar19 - param_5;
    local_fc = local_104;
    FUN_180294c90(param_1,&local_108,&local_100,param_4,DAT_180380ca8);
    local_100 = fVar19 + param_5;
    local_104 = fVar14 + 0.0;
    local_108 = fVar16 + fVar19;
    local_fc = local_104;
    FUN_180294c90(param_1,&local_108,&local_100,param_4,uVar23);
    local_108 = fVar19 - 0.0;
    local_fc = fVar14 - fVar16;
    local_104 = fVar14 - param_5;
    local_100 = local_108;
    FUN_180294c90(param_1,&local_108,&local_100,param_4,uVar23);
    local_108 = fVar19 + 0.0;
    local_104 = fVar16 + fVar14;
    local_fc = fVar14 + param_5;
    local_100 = local_108;
    FUN_180294c90(param_1,&local_108,&local_100,param_4,uVar23);
    if ((param_4 & 0xff000000) == 0) {
      return;
    }
    param_5 = param_5 * DAT_180380a1c;
    if (param_5 < fVar18) {
      return;
    }
    uVar24 = 9;
    uVar23 = DAT_180380f24;
LAB_18019c5b0:
    FUN_1802941e0(param_1,&local_118,param_5,0,uVar23,uVar24);
LAB_18019c5ca:
    FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
    break;
  case 0x11:
    fVar17 = param_5 * _DAT_180380ae0;
    iVar9 = -1;
    fVar14 = param_5 * DAT_1803809fc;
    fVar16 = param_5 * DAT_180380b6c;
    fVar18 = param_5 * DAT_180380a70;
    do {
      local_100 = fVar7 - fVar17;
      local_108 = fVar7 - fVar16;
      fVar21 = (float)iVar9 * param_5 * fVar20 + fVar15;
      local_fc = fVar21 + fVar14;
      local_104 = fVar21 - fVar14;
      FUN_180295000(param_1,&local_108,&local_100,param_4,DAT_180380bb0,0);
      local_110 = CONCAT44(fVar21,fVar16 + fVar7);
      local_118 = CONCAT44(fVar21,fVar7 - fVar18);
      FUN_180294c90(param_1,&local_118,&local_110,param_4,uVar24);
      iVar9 = iVar9 + 1;
    } while (iVar9 != 2);
    break;
  case 0x12:
    fVar14 = param_5 * DAT_180380b6c;
    if (((param_4 & 0xff000000) == 0) || (fVar14 < DAT_180380ac0)) {
      local_110 = CONCAT44(fVar14,param_5 * DAT_180380a94);
      if ((param_4 & 0xff000000) != 0) goto LAB_18019c7c4;
    }
    else {
      FUN_1802941e0(param_1,&local_118,fVar14 - DAT_180380ac0,0,DAT_180380f60,0x1b);
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                    DAT_180380c88,0x200);
      param_5 = param_5 * DAT_180380a94;
      *(undefined4 *)(param_1 + 0x50) = 0;
      local_110 = CONCAT44(fVar14,param_5);
LAB_18019c7c4:
      FUN_180294590(param_1,&local_118,&local_110,0,0,DAT_180380f50,0x17);
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                    uVar23,0x200);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    local_100 = fVar14 + fVar19;
    local_108 = fVar19 - fVar14;
    local_fc = local_118._4_4_ + 0.0;
    local_104 = local_118._4_4_ - 0.0;
    goto LAB_18019ca85;
  case 0x13:
    fVar21 = param_5 * DAT_180380b68;
    param_5 = param_5 * DAT_180380aa0;
    fVar14 = (float)((uint)fVar21 ^ DAT_1803817f0) + local_118._4_4_;
    fVar20 = (float)((uint)fVar21 ^ DAT_1803817f0) + fVar19;
    fVar18 = param_5 - fVar21;
    fVar19 = fVar18 + fVar19;
    local_108 = fVar20;
    local_104 = fVar14;
    local_100 = fVar19;
    local_fc = fVar14;
    FUN_180294c90(param_1,&local_108,&local_100,param_4,DAT_180380ca8);
    fVar18 = fVar18 + fVar15;
    local_108 = fVar20;
    local_104 = fVar14;
    local_100 = fVar20;
    local_fc = fVar18;
    FUN_180294c90(param_1,&local_108,&local_100,param_4,uVar3);
    param_5 = fVar21 - param_5;
    fVar17 = fVar21 + (float)local_110;
    fVar16 = param_5 + (float)local_110;
    local_108 = fVar17;
    local_104 = fVar14;
    local_100 = fVar16;
    local_fc = fVar14;
    FUN_180294c90(param_1,&local_108,&local_100,param_4,uVar3);
    local_108 = fVar17;
    local_104 = fVar14;
    local_100 = fVar17;
    local_fc = fVar18;
    FUN_180294c90(param_1,&local_108,&local_100,param_4,uVar3);
    fVar21 = fVar21 + fVar15;
    local_108 = fVar20;
    local_104 = fVar21;
    local_100 = fVar19;
    local_fc = fVar21;
    FUN_180294c90(param_1,&local_108,&local_100,param_4,uVar3);
    param_5 = param_5 + fVar15;
    local_108 = fVar20;
    local_104 = fVar21;
    local_100 = fVar20;
    local_fc = param_5;
    FUN_180294c90(param_1,&local_108,&local_100,param_4,uVar3);
    local_108 = fVar17;
    local_104 = fVar21;
    local_100 = fVar16;
    local_fc = fVar21;
    FUN_180294c90(param_1,&local_108,&local_100,param_4,uVar3);
    uVar23 = uVar3;
    local_108 = fVar17;
    local_104 = fVar21;
    local_100 = fVar17;
    local_fc = param_5;
LAB_18019ca85:
    FUN_180294c90(param_1,&local_108,&local_100,param_4,uVar23);
  }
  return;
}


