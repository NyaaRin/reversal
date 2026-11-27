// 0x1801a6c50  FUN_1801a6c50
// size=2403 thunk=false
// signature: undefined FUN_1801a6c50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801a6c50(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong param_5,undefined *param_6,char param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  float *pfVar12;
  ulonglong *puVar13;
  float *pfVar14;
  byte *pbVar15;
  byte bVar16;
  uint uVar17;
  undefined1 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1d8 [32];
  undefined *local_1b8;
  char *local_1b0;
  char *local_1a8;
  ulonglong local_1a0;
  undefined8 *local_198;
  undefined4 local_190;
  undefined4 local_188;
  byte local_178;
  undefined8 local_170;
  ulonglong local_168;
  float local_160 [2];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  char local_128 [64];
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  local_148 = param_3;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_160[0] = param_2;
  local_170 = param_4;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  uVar11 = *(ulonglong *)(lVar2 + 0x1520);
  *(undefined1 *)(uVar11 + 0xce) = 1;
  plVar3 = *(longlong **)(lVar2 + 0x1520);
  if (*(char *)((longlong)plVar3 + 0xd1) == '\0') {
    local_168 = CONCAT44(local_168._4_4_,4);
    puVar13 = &local_158;
    local_158 = (ulonglong)local_158._4_4_ << 0x20;
    if (-1 < DAT_1803fb24c) {
      puVar13 = (ulonglong *)&DAT_1803fb24c;
    }
    puVar10 = &local_168;
    if (DAT_1803fb24c < 5) {
      puVar10 = puVar13;
    }
    DAT_1803fb24c = (int)*puVar10;
    local_168 = CONCAT44(local_168._4_4_,DAT_1803fb24c);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar1 + 0xec0);
    uVar8 = FUN_180268980(param_1,0,
                          *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
    if (*(uint *)(*plVar3 + 0x1578) == uVar8) {
      FUN_1802899e0(uVar8,0xb,param_1);
    }
    fVar19 = (float)FUN_18027f9c0();
    fVar22 = *(float *)(plVar3 + 0x23);
    local_140 = plVar3[0x23];
    fVar19 = fVar22 + fVar19;
    fVar23 = *(float *)((longlong)plVar3 + 0x11c) + DAT_18038102c;
    uStack_138 = CONCAT44(fVar23,fVar19);
    local_158 = CONCAT44(fVar23 - *(float *)((longlong)plVar3 + 0x11c),fVar19 - fVar22);
    FUN_18027f400(&local_158,*(undefined4 *)(lVar2 + 0xcc8));
    uVar11 = FUN_18027f160(&local_140,uVar8,&local_140,0x100000);
    if ((char)uVar11 != '\0') {
      if (param_6 == (undefined *)0x0) {
        param_6 = (&PTR_DAT_180338980)[(longlong)(int)param_2 * 4];
      }
      local_178 = FUN_18026f180(&local_140,uVar8,*(undefined4 *)(lVar2 + 0x1efc));
      lVar4 = *(longlong *)(lVar1 + 0xec0);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if ((*(uint *)(*(longlong *)(lVar1 + 0xec0) + 0x1594) != uVar8) ||
         (*(uint *)(*(longlong *)(lVar1 + 0xec0) + 0x2638) != uVar8)) {
        if ((*(uint *)(lVar4 + 0x157c) != uVar8) || (cVar7 = FUN_18027bce0(1,0,0), cVar7 == '\0')) {
          bVar16 = local_178;
          local_168 = (longlong)(int)(float)local_168 * 200;
          if ((local_178 != '\0') && (*(char *)(lVar2 + 0xb30) != '\0')) {
            FUN_18026ea90(uVar8,plVar3);
            FUN_180282e10(uVar8,plVar3);
            FUN_1802827b0(plVar3,0);
            *(uint *)(lVar2 + 0x1ea8) = *(uint *)(lVar2 + 0x1ea8) | 3;
          }
          fVar22 = local_160[0];
          local_198 = &local_158;
          local_1b0 = (char *)param_5;
          local_1b8 = (undefined *)local_170;
          local_158 = local_158 & 0xffffffff00000000;
          uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
          local_1a8 = param_6;
          local_178 = FUN_1802b27c0(&local_140,uVar8,local_160[0],local_148);
          if (local_178 != 0) {
            FUN_18026ed00(uVar8);
          }
          fVar19 = DAT_180380bb0;
          if ((bVar16 == '\0') && (*(uint *)(lVar2 + 0x1594) != uVar8)) {
            uVar18 = 0;
          }
          else {
            uVar18 = 1;
          }
          pbVar15 = &DAT_180363fa1;
          bVar16 = 0x73;
          uVar17 = ~uVar8;
          do {
            if (((bVar16 == 0x23) && (*pbVar15 == 0x23)) && (pbVar15[1] == 0x23)) {
              pbVar15 = pbVar15 + 2;
              uVar17 = ~uVar8;
            }
            else {
              uVar17 = uVar17 >> 8 ^
                       *(uint *)(&DAT_180331380 +
                                ((ulonglong)(uVar17 & 0xff) ^ (ulonglong)bVar16) * 4);
            }
            bVar16 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar16 != 0);
          fVar20 = (float)FUN_1802d3320(~uVar17,uVar18,(ulonglong)(uint)DAT_180380bb0 << 0x20,
                                        DAT_180380fcc);
          uVar11 = local_168;
          fVar23 = DAT_180380ac0;
          lVar4 = plVar3[0x59];
          fVar25 = fVar20 * DAT_180380c50 + DAT_180380fa8;
          fVar5 = local_140._4_4_;
          fVar6 = (float)uStack_138;
          fVar21 = ((float)local_158 + (float)uStack_150) * DAT_180380ac0;
          fVar27 = (uStack_138._4_4_ + local_140._4_4_) * DAT_180380ac0;
          fVar26 = fVar25 + (float)local_140;
          if ((fVar25 + (float)local_140 <= fVar21) &&
             (fVar26 = (float)uStack_138 - fVar25, fVar21 <= (float)uStack_138 - fVar25)) {
            fVar26 = fVar21;
          }
          local_168 = local_168 & 0xffffffff00000000;
          local_160[0] = 1.0;
          fVar21 = fVar20 * DAT_1803809d4 + DAT_180380a20;
          fVar24 = fVar27 + DAT_180380e28;
          local_158 = CONCAT44(local_158._4_4_,fVar21);
          local_170 = CONCAT44(fVar24,(float)uStack_138);
          pfVar14 = (float *)&local_168;
          if (0.0 <= fVar21) {
            pfVar14 = (float *)&local_158;
          }
          pfVar12 = local_160;
          if (fVar21 <= fVar19) {
            pfVar12 = pfVar14;
          }
          fVar21 = fVar27 - DAT_180380e28;
          fVar19 = *pfVar12;
          local_168 = CONCAT44(fVar21,(float)local_140);
          local_158 = CONCAT44(fVar19 * (*(float *)(&DAT_1803dca1c + uVar11) -
                                        *(float *)(&DAT_1803dc99c + uVar11)) +
                               *(float *)(&DAT_1803dc99c + uVar11),
                               fVar19 * (*(float *)(&DAT_1803dca18 + uVar11) -
                                        *(float *)(&DAT_1803dc998 + uVar11)) +
                               *(float *)(&DAT_1803dc998 + uVar11));
          uStack_150 = CONCAT44(fVar19 * (*(float *)(&DAT_1803dca24 + uVar11) -
                                         *(float *)(&DAT_1803dc9a4 + uVar11)) +
                                *(float *)(&DAT_1803dc9a4 + uVar11),
                                fVar19 * (*(float *)(&DAT_1803dca20 + uVar11) -
                                         *(float *)(&DAT_1803dc9a0 + uVar11)) +
                                *(float *)(&DAT_1803dc9a0 + uVar11));
          uVar9 = FUN_180268ed0(&local_158);
          local_1b0 = (char *)((ulonglong)local_1b0 & 0xffffffff00000000);
          local_1b8._0_4_ = DAT_180380e28;
          FUN_180295000(lVar4,&local_168,&local_170,uVar9);
          local_158 = *(ulonglong *)(&DAT_1803dc9c8 + uVar11);
          uStack_150 = *(longlong *)(&DAT_1803dc9d0 + uVar11);
          local_170 = CONCAT44(fVar24,fVar26);
          local_168 = CONCAT44(fVar21,(int)local_140);
          uVar9 = FUN_180268ed0(&local_158);
          fVar19 = DAT_180380e28;
          local_1b0 = (char *)((ulonglong)local_1b0 & 0xffffffff00000000);
          local_1b8._0_4_ = DAT_180380e28;
          FUN_180295000(lVar4,&local_168,&local_170,uVar9);
          fVar21 = DAT_180380f50;
          if (DAT_180380980 < fVar20) {
            local_140 = *(undefined8 *)(&DAT_1803dc9c8 + uVar11);
            uStack_138 = CONCAT44(*(float *)(&DAT_1803dc9d4 + uVar11) * fVar20 * DAT_180380a40,
                                  *(undefined4 *)(&DAT_1803dc9d0 + uVar11));
            uVar8 = FUN_180268ed0(&local_140);
            local_170 = CONCAT44(fVar27,fVar26);
            if (((uVar8 & 0xff000000) != 0) && (fVar23 <= fVar25 + fVar19)) {
              local_1b0 = (char *)CONCAT44(local_1b0._4_4_,0x17);
              local_1b8._0_4_ = fVar21;
              FUN_1802941e0(lVar4,&local_170,fVar25 + fVar19,0);
              FUN_1802938c0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar8)
              ;
              *(undefined4 *)(lVar4 + 0x50) = 0;
            }
          }
          local_140 = *(undefined8 *)(&DAT_1803dc9c8 + uVar11);
          uStack_138 = *(undefined8 *)(&DAT_1803dc9d0 + uVar11);
          uVar8 = FUN_180268ed0(&local_140);
          local_170 = CONCAT44(fVar27,fVar26);
          if (((uVar8 & 0xff000000) != 0) && (fVar23 <= fVar25)) {
            local_1b0 = (char *)CONCAT44(local_1b0._4_4_,0x17);
            local_1b8._0_4_ = fVar21;
            FUN_1802941e0(lVar4,&local_170,fVar25,0);
            FUN_1802938c0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar8);
            *(undefined4 *)(lVar4 + 0x50) = 0;
          }
          local_140 = _DAT_180381760;
          uStack_138 = _UNK_180381768;
          uVar8 = FUN_180268ed0(&local_140);
          local_170 = CONCAT44(fVar27,fVar26);
          if (((uVar8 & 0xff000000) != 0) && (fVar23 <= fVar25 * _DAT_180380a98)) {
            local_1b0 = (char *)CONCAT44(local_1b0._4_4_,0xf);
            local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,DAT_180380f30);
            FUN_1802941e0(lVar4,&local_170,fVar25 * _DAT_180380a98,0);
            FUN_1802938c0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar8);
            *(undefined4 *)(lVar4 + 0x50) = 0;
          }
          if (param_7 != '\0') {
            local_1b8 = param_6;
            FUN_1802b1470(local_128,0x40,fVar22,local_148);
            if (*(char *)(lVar1 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            local_1b0 = local_128;
            local_188 = 0;
            local_198 = (undefined8 *)0x0;
            local_1a0 = 0;
            local_1a8 = (char *)0x0;
            local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,DAT_180381384);
            FUN_18029e350(&local_170,*(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x1228),
                          *(undefined4 *)(*(longlong *)(lVar1 + 0xec0) + 0x1238),DAT_180381308);
            fVar22 = (float)local_170 + DAT_180380ba8;
            if (*(char *)(lVar1 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            local_140 = *(undefined8 *)(&DAT_1803dc9c8 + uVar11);
            uStack_138 = *(undefined8 *)(&DAT_1803dc9d0 + uVar11);
            uVar8 = FUN_180268ed0(&local_140);
            local_170 = CONCAT44((fVar5 - *(float *)(lVar2 + 0xcd8)) -
                                 *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x1238),
                                 fVar6 - (float)(int)fVar22);
            if (((uVar8 & 0xff000000) != 0) && (local_128[0] != '\0')) {
              local_1a8 = local_128;
              local_140 = *(undefined8 *)(lVar4 + 0x60);
              uStack_138 = *(undefined8 *)(lVar4 + 0x68);
              local_190 = 0;
              local_198 = (undefined8 *)((ulonglong)local_198 & 0xffffffff00000000);
              local_1a0 = 0;
              local_1b0 = (char *)&local_140;
              local_1b8 = (undefined *)CONCAT44(local_1b8._4_4_,uVar8);
              FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x18),lVar4,
                            *(undefined4 *)(*(longlong *)(lVar4 + 0x38) + 0x20),&local_170);
            }
          }
          return (ulonglong)local_178;
        }
        if (*(char *)(lVar1 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar1 = *(longlong *)(lVar1 + 0xec0);
        *(uint *)(lVar1 + 0x1cdc) = uVar8;
        *(uint *)(lVar1 + 0x1cd8) = uVar8;
        *(undefined2 *)(lVar1 + 0x1ce0) = 0;
        if (*(uint *)(lVar4 + 0x1594) == uVar8) {
          FUN_18026ea90(0,0);
        }
      }
      local_1a0 = param_5;
      local_1a8 = (char *)local_170;
      local_1b8 = (undefined *)local_148;
      local_1b0 = param_6;
      uVar11 = FUN_1802b3410(&local_140,uVar8,param_1,local_160[0]);
      return uVar11;
    }
  }
  return uVar11 & 0xffffffffffffff00;
}


