// 0x18019fbc0  FUN_18019fbc0
// size=2304 thunk=false
// signature: undefined FUN_18019fbc0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18019fbc0(char *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  size_t _Size;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 **ppuVar9;
  size_t sVar10;
  longlong lVar11;
  undefined8 **ppuVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 *local_e8;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  
  fVar24 = DAT_180380c50;
  ppuVar12 = (undefined8 **)&local_f0;
  local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,4);
  local_f0 = 0.0;
  local_d8 = param_2;
  local_100._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  if (-1 < (int)DAT_1803fb24c) {
    ppuVar12 = (undefined8 **)&DAT_1803fb24c;
  }
  ppuVar9 = &local_e8;
  if ((int)DAT_1803fb24c < 5) {
    ppuVar9 = ppuVar12;
  }
  ppuVar12 = &local_e8;
  DAT_1803fb24c = *(float *)ppuVar9;
  lVar16 = (longlong)(int)DAT_1803fb24c * 200;
  local_f0 = 1.5;
  local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,0x3f400000);
  if (DAT_180380b20 <= DAT_1803da6a4) {
    ppuVar12 = (undefined8 **)&DAT_1803da6a4;
  }
  ppuVar9 = (undefined8 **)&local_f0;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    ppuVar9 = ppuVar12;
  }
  fVar1 = *(float *)ppuVar9;
  fVar21 = local_100._4_4_;
  uVar15 = param_3;
  if (0.0 < local_100._4_4_) {
    fVar21 = local_100._4_4_ * fVar1;
    local_100 = CONCAT44(fVar21,(int)param_3);
    uVar15 = local_100;
  }
  local_100 = uVar15;
  local_110 = lVar16;
  if (DAT_1803facfd != '\0') {
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18019a460(param_1,0);
    PTR_DAT_1803dc8c0 = param_1;
  }
  FUN_18026a810(3,&DAT_1803dc998 + lVar16);
  puVar17 = (undefined8 *)(&DAT_1803dc9b8 + lVar16);
  local_e8 = puVar17;
  FUN_18026a810(5,puVar17);
  local_f0 = fVar1 * DAT_180380fd8;
  local_ec = fVar1 * DAT_180380fcc;
  FUN_18026aad0(2,&local_f0);
  fVar22 = DAT_180380f90;
  FUN_18026a940(7,fVar1 * DAT_180380f90);
  uVar15 = 1;
  if (fVar21 == 0.0) {
    uVar15 = 0x21;
  }
  cVar6 = FUN_180272fa0(param_1,&local_100,uVar15,-(param_4 != '\0') & 0x18);
  _Size = DAT_1803dc900;
  fVar3 = DAT_180380fa8;
  fVar21 = DAT_180380ac0;
  uVar19 = (ulonglong)_tls_index;
  if ((DAT_1803facfd == '\0') && (DAT_1803dc900 != 0)) {
    sVar10 = strlen(param_1);
    uVar18 = DAT_1803dc908;
    puVar14 = _DAT_1803dc8f0;
    puVar13 = &DAT_1803dc8f0;
    if (0xf < DAT_1803dc908) {
      puVar13 = _DAT_1803dc8f0;
    }
    puVar17 = local_e8;
    if ((_Size == sVar10) &&
       ((_Size == 0 || (iVar7 = memcmp(puVar13,param_1,_Size), puVar17 = local_e8, iVar7 == 0)))) {
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8);
      if (*(char *)(lVar16 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
        puVar14 = _DAT_1803dc8f0;
        uVar18 = DAT_1803dc908;
      }
      if ((float)*(double *)(*(longlong *)(lVar16 + 0xec0) + 0x10) <= _DAT_1803fa558) {
        if (*(char *)(lVar16 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        bVar20 = DAT_1803fa52c == '\0';
        lVar5 = *(longlong *)(lVar16 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar5 + 0x1520) + 0xce) = 1;
        lVar5 = *(longlong *)(lVar5 + 0x1520);
        if (bVar20) {
          lVar11 = *(longlong *)(lVar5 + 0x3b0);
          DAT_1803fa52c = '\x01';
          for (; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x3b0)) {
            if (((*(uint *)(lVar11 + 0x14) & 0x1000000) == 0) || (0.0 < *(float *)(lVar11 + 0xa4)))
            {
              if (0.0 < *(float *)(lVar11 + 0xa4)) {
                fVar23 = *(float *)(lVar5 + 0x2c);
                *(undefined4 *)(lVar11 + 0xb4) = 0x3e19999a;
                *(undefined4 *)(lVar11 + 0xbc) = 0;
                *(float *)(lVar11 + 0xac) =
                     (float)(int)((((fVar23 - *(float *)(lVar11 + 0x2c)) - *(float *)(lVar11 + 0x74)
                                   ) - *(float *)(lVar11 + 0x84)) + *(float *)(lVar11 + 0x9c));
              }
              break;
            }
          }
        }
        if (*(char *)(lVar16 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar22 = sinf((float)*(double *)(*(longlong *)(lVar16 + 0xec0) + 0x10) * fVar22);
        if (*(char *)(lVar16 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar15 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar16 + 0xec0) + 0x2060),1,
                               "##Foreground");
        lVar16 = local_110;
        local_100 = *(undefined8 *)(&DAT_1803dc9c8 + local_110);
        local_f8 = *(undefined4 *)(&DAT_1803dc9d0 + local_110);
        local_f4 = ((fVar22 * fVar21 + fVar21) * DAT_180380a94 + DAT_180380a58) *
                   *(float *)(&DAT_1803dc9d4 + local_110);
        local_110 = CONCAT44(*(float *)(lVar5 + 0x2c) + *(float *)(lVar5 + 0x34),
                             *(float *)(lVar5 + 0x28) + *(float *)(lVar5 + 0x30));
        uVar8 = FUN_180268ed0(&local_100);
        FUN_180294f00(uVar15,lVar5 + 0x28,&local_110,uVar8,fVar3,fVar24,0);
        uVar19 = (ulonglong)_tls_index;
        puVar17 = local_e8;
      }
      else {
        uVar19 = (ulonglong)_tls_index;
        puVar13 = &DAT_1803dc8f0;
        if (0xf < uVar18) {
          puVar13 = puVar14;
        }
        DAT_1803dc900 = 0;
        *puVar13 = 0;
        lVar16 = local_110;
        puVar17 = local_e8;
      }
    }
  }
  if (cVar6 == '\0') {
    if (DAT_1803facfd == '\0') {
      return 0;
    }
  }
  else {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    cVar6 = *(char *)(lVar5 + 0x10);
    lVar11 = *(longlong *)(lVar5 + 0xec0);
    fVar24 = fVar1 * DAT_180381038;
    *(undefined1 *)(*(longlong *)(lVar11 + 0x1520) + 0xce) = 1;
    uVar15 = *(undefined8 *)(*(longlong *)(lVar11 + 0x1520) + 0x2c8);
    if (cVar6 == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar22 = fVar1 * DAT_180380f40;
    local_e8 = *(undefined8 **)(&DAT_1803dc9c8 + lVar16);
    local_e0 = *(undefined4 *)(&DAT_1803dc9d0 + lVar16);
    uVar4 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x118);
    local_dc = *(float *)(&DAT_1803dc9d4 + lVar16) * DAT_1803809ec;
    local_100._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    local_110 = CONCAT44(fVar24 + local_100._4_4_,fVar24 + (float)uVar4);
    local_100 = uVar4;
    uVar8 = FUN_180268ed0(&local_e8);
    FUN_180295000(uVar15,&local_100,&local_110,uVar8,fVar22,0);
    local_110 = *(longlong *)(&DAT_1803dc9c8 + lVar16);
    uStack_108 = *(undefined8 *)(&DAT_1803dc9d0 + lVar16);
    fVar22 = fVar1 * DAT_180380f74;
    fVar23 = fVar24 * fVar21 + local_100._4_4_;
    uVar8 = FUN_180268ed0(&local_110);
    FUN_18019ab20(uVar15,local_d8,CONCAT44(fVar23,fVar24 * fVar21 + (float)uVar4),uVar8,fVar22);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
    fVar22 = *(float *)(lVar11 + 0x118);
    fVar23 = *(float *)(lVar11 + 0x28);
    fVar2 = *(float *)(lVar11 + 0x98);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    cVar6 = *(char *)(lVar5 + 0x10);
    lVar11 = *(longlong *)(lVar5 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar11 + 0x1520) + 0xce) = 1;
    lVar11 = *(longlong *)(lVar11 + 0x1520);
    *(undefined1 *)(lVar11 + 0x159) = 1;
    *(float *)(lVar11 + 0x118) =
         (fVar22 - fVar23) + fVar2 + fVar24 + fVar1 * fVar3 +
         (*(float *)(lVar11 + 0x28) - *(float *)(lVar11 + 0x98));
    if (cVar6 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
    fVar22 = *(float *)(lVar11 + 0x11c);
    fVar3 = *(float *)(lVar11 + 0x2c);
    fVar23 = *(float *)(lVar11 + 0x9c);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar2 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1238);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = *(longlong *)(lVar5 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar11 + 0x1520) + 0xce) = 1;
    lVar11 = *(longlong *)(lVar11 + 0x1520);
    *(undefined1 *)(lVar11 + 0x159) = 1;
    *(float *)(lVar11 + 0x11c) =
         (*(float *)(lVar11 + 0x2c) - *(float *)(lVar11 + 0x9c)) +
         (fVar24 - fVar2) * fVar21 + (fVar22 - fVar3) + fVar23;
    FUN_18026a810(0,&DAT_1803dca18 + lVar16);
    FUN_1802aa3c0(param_1,0,1);
    FUN_18026a890(1);
    cVar6 = *(char *)(lVar5 + 0x10);
    if (cVar6 == '\0') {
      __dyn_tls_on_demand_init();
      cVar6 = *(char *)(lVar5 + 0x10);
    }
    local_110 = *puVar17;
    lVar16 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
    fVar24 = *(float *)(lVar16 + 0x118);
    fVar21 = *(float *)(lVar16 + 0x11c);
    uStack_108 = CONCAT44(*(float *)((longlong)puVar17 + 0xc) * DAT_180380afc,
                          *(undefined4 *)(puVar17 + 1));
    uVar8 = FUN_180268ed0(&local_110);
    if (cVar6 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar16 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
    if ((*(longlong *)(lVar16 + 0x1c8) != 0) ||
       (lVar11 = 0x280, *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x2368) != 0)) {
      lVar11 = 0x250;
    }
    fVar21 = fVar1 * DAT_180380e9c + fVar21;
    local_110 = CONCAT44(fVar21,(*(float *)(lVar16 + lVar11) - *(float *)(lVar16 + 0x118)) + fVar24)
    ;
    local_100 = CONCAT44(fVar21,fVar24);
    FUN_180294c90(uVar15,&local_100,&local_110,uVar8,DAT_180380bb0);
    local_110 = (ulonglong)(uint)(fVar1 * DAT_180380fc4) << 0x20;
    FUN_1802af260(&local_110);
  }
  return 1;
}


