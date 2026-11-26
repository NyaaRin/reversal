// 18019fbc0  FUN_18019fbc0
// signature: undefined FUN_18019fbc0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18019fbc0(char *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  size_t _Size;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 **ppuVar10;
  size_t sVar11;
  longlong lVar12;
  undefined8 **ppuVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
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
  
  ppuVar13 = (undefined8 **)&local_f0;
  local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,4);
  local_f0 = 0.0;
  local_d8 = param_2;
  local_100._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  if (-1 < (int)DAT_1803fb24c) {
    ppuVar13 = (undefined8 **)&DAT_1803fb24c;
  }
  ppuVar10 = &local_e8;
  if ((int)DAT_1803fb24c < 5) {
    ppuVar10 = ppuVar13;
  }
  ppuVar13 = &local_e8;
  DAT_1803fb24c = *(float *)ppuVar10;
  lVar17 = (longlong)(int)DAT_1803fb24c * 200;
  local_f0 = 1.5;
  local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,0x3f400000);
  if (0.75 <= DAT_1803da6a4) {
    ppuVar13 = (undefined8 **)&DAT_1803da6a4;
  }
  ppuVar10 = (undefined8 **)&local_f0;
  if (DAT_1803da6a4 <= 1.5) {
    ppuVar10 = ppuVar13;
  }
  fVar1 = *(float *)ppuVar10;
  fVar22 = local_100._4_4_;
  uVar16 = param_3;
  if (0.0 < local_100._4_4_) {
    fVar22 = local_100._4_4_ * fVar1;
    local_100 = CONCAT44(fVar22,(int)param_3);
    uVar16 = local_100;
  }
  local_100 = uVar16;
  local_110 = lVar17;
  if (DAT_1803facfd != '\0') {
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18019a460(param_1,0);
    PTR_DAT_1803dc8c0 = param_1;
  }
  FUN_18026a810(3,&DAT_1803dc998 + lVar17);
  puVar18 = (undefined8 *)(&DAT_1803dc9b8 + lVar17);
  local_e8 = puVar18;
  FUN_18026a810(5,puVar18);
  local_f0 = fVar1 * 12.0;
  local_ec = fVar1 * 10.0;
  FUN_18026aad0(2,&local_f0);
  FUN_18026a940(7,fVar1 * 7.0);
  uVar16 = 1;
  if (fVar22 == 0.0) {
    uVar16 = 0x21;
  }
  cVar7 = FUN_180272fa0(param_1,&local_100,uVar16,-(param_4 != '\0') & 0x18);
  _Size = DAT_1803dc900;
  uVar20 = (ulonglong)_tls_index;
  if ((DAT_1803facfd == '\0') && (DAT_1803dc900 != 0)) {
    sVar11 = strlen(param_1);
    uVar19 = DAT_1803dc908;
    puVar15 = _DAT_1803dc8f0;
    puVar14 = &DAT_1803dc8f0;
    if (0xf < DAT_1803dc908) {
      puVar14 = _DAT_1803dc8f0;
    }
    puVar18 = local_e8;
    if ((_Size == sVar11) &&
       ((_Size == 0 || (iVar8 = memcmp(puVar14,param_1,_Size), puVar18 = local_e8, iVar8 == 0)))) {
      lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8);
      if (*(char *)(lVar17 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
        puVar15 = _DAT_1803dc8f0;
        uVar19 = DAT_1803dc908;
      }
      if ((float)*(double *)(*(longlong *)(lVar17 + 0xec0) + 0x10) <= _DAT_1803fa558) {
        if (*(char *)(lVar17 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        bVar21 = DAT_1803fa52c == '\0';
        lVar6 = *(longlong *)(lVar17 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
        lVar6 = *(longlong *)(lVar6 + 0x1520);
        if (bVar21) {
          lVar12 = *(longlong *)(lVar6 + 0x3b0);
          DAT_1803fa52c = '\x01';
          for (; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x3b0)) {
            if (((*(uint *)(lVar12 + 0x14) & 0x1000000) == 0) || (0.0 < *(float *)(lVar12 + 0xa4)))
            {
              if (0.0 < *(float *)(lVar12 + 0xa4)) {
                fVar22 = *(float *)(lVar6 + 0x2c);
                *(undefined4 *)(lVar12 + 0xb4) = 0x3e19999a;
                *(undefined4 *)(lVar12 + 0xbc) = 0;
                *(float *)(lVar12 + 0xac) =
                     (float)(int)((((fVar22 - *(float *)(lVar12 + 0x2c)) - *(float *)(lVar12 + 0x74)
                                   ) - *(float *)(lVar12 + 0x84)) + *(float *)(lVar12 + 0x9c));
              }
              break;
            }
          }
        }
        if (*(char *)(lVar17 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar22 = sinf((float)*(double *)(*(longlong *)(lVar17 + 0xec0) + 0x10) * 7.0);
        if (*(char *)(lVar17 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar16 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar17 + 0xec0) + 0x2060),1,
                               "##Foreground");
        lVar17 = local_110;
        local_100 = *(undefined8 *)(&DAT_1803dc9c8 + local_110);
        local_f8 = *(undefined4 *)(&DAT_1803dc9d0 + local_110);
        local_f4 = ((fVar22 * 0.5 + 0.5) * 0.4 + 0.25) * *(float *)(&DAT_1803dc9d4 + local_110);
        local_110 = CONCAT44(*(float *)(lVar6 + 0x2c) + *(float *)(lVar6 + 0x34),
                             *(float *)(lVar6 + 0x28) + *(float *)(lVar6 + 0x30));
        uVar9 = FUN_180268ed0(&local_100);
        FUN_180294f00(uVar16,lVar6 + 0x28,&local_110,uVar9,0x41000000,0x3fc00000,0);
        uVar20 = (ulonglong)_tls_index;
        puVar18 = local_e8;
      }
      else {
        uVar20 = (ulonglong)_tls_index;
        puVar14 = &DAT_1803dc8f0;
        if (0xf < uVar19) {
          puVar14 = puVar15;
        }
        DAT_1803dc900 = 0;
        *puVar14 = 0;
        lVar17 = local_110;
        puVar18 = local_e8;
      }
    }
  }
  if (cVar7 == '\0') {
    if (DAT_1803facfd == '\0') {
      return 0;
    }
  }
  else {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8);
    if (*(char *)(lVar6 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    cVar7 = *(char *)(lVar6 + 0x10);
    lVar12 = *(longlong *)(lVar6 + 0xec0);
    fVar22 = fVar1 * 24.0;
    *(undefined1 *)(*(longlong *)(lVar12 + 0x1520) + 0xce) = 1;
    uVar16 = *(undefined8 *)(*(longlong *)(lVar12 + 0x1520) + 0x2c8);
    if (cVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_e8 = *(undefined8 **)(&DAT_1803dc9c8 + lVar17);
    local_e0 = *(undefined4 *)(&DAT_1803dc9d0 + lVar17);
    uVar5 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x1520) + 0x118);
    local_dc = *(float *)(&DAT_1803dc9d4 + lVar17) * 0.1;
    local_100._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
    local_110 = CONCAT44(fVar22 + local_100._4_4_,fVar22 + (float)uVar5);
    local_100 = uVar5;
    uVar9 = FUN_180268ed0(&local_e8);
    FUN_180295000(uVar16,&local_100,&local_110,uVar9,fVar1 * 6.0,0);
    local_110 = *(longlong *)(&DAT_1803dc9c8 + lVar17);
    uStack_108 = *(undefined8 *)(&DAT_1803dc9d0 + lVar17);
    fVar23 = fVar22 * 0.5 + local_100._4_4_;
    uVar9 = FUN_180268ed0(&local_110);
    FUN_18019ab20(uVar16,local_d8,CONCAT44(fVar23,fVar22 * 0.5 + (float)uVar5),uVar9,fVar1 * 6.5);
    if (*(char *)(lVar6 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = *(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x1520);
    fVar23 = *(float *)(lVar12 + 0x118);
    fVar2 = *(float *)(lVar12 + 0x28);
    fVar3 = *(float *)(lVar12 + 0x98);
    if (*(char *)(lVar6 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    cVar7 = *(char *)(lVar6 + 0x10);
    lVar12 = *(longlong *)(lVar6 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar12 + 0x1520) + 0xce) = 1;
    lVar12 = *(longlong *)(lVar12 + 0x1520);
    *(undefined1 *)(lVar12 + 0x159) = 1;
    *(float *)(lVar12 + 0x118) =
         (fVar23 - fVar2) + fVar3 + fVar22 + fVar1 * 8.0 +
         (*(float *)(lVar12 + 0x28) - *(float *)(lVar12 + 0x98));
    if (cVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = *(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x1520);
    fVar23 = *(float *)(lVar12 + 0x11c);
    fVar2 = *(float *)(lVar12 + 0x2c);
    fVar3 = *(float *)(lVar12 + 0x9c);
    if (*(char *)(lVar6 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar4 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0x1238);
    if (*(char *)(lVar6 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = *(longlong *)(lVar6 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar12 + 0x1520) + 0xce) = 1;
    lVar12 = *(longlong *)(lVar12 + 0x1520);
    *(undefined1 *)(lVar12 + 0x159) = 1;
    *(float *)(lVar12 + 0x11c) =
         (*(float *)(lVar12 + 0x2c) - *(float *)(lVar12 + 0x9c)) +
         (fVar22 - fVar4) * 0.5 + (fVar23 - fVar2) + fVar3;
    FUN_18026a810(0,&DAT_1803dca18 + lVar17);
    FUN_1802aa3c0(param_1,0,1);
    FUN_18026a890(1);
    cVar7 = *(char *)(lVar6 + 0x10);
    if (cVar7 == '\0') {
      __dyn_tls_on_demand_init();
      cVar7 = *(char *)(lVar6 + 0x10);
    }
    local_110 = *puVar18;
    lVar17 = *(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x1520);
    fVar22 = *(float *)(lVar17 + 0x118);
    fVar23 = *(float *)(lVar17 + 0x11c);
    uStack_108 = CONCAT44(*(float *)((longlong)puVar18 + 0xc) * 0.65,*(undefined4 *)(puVar18 + 1));
    uVar9 = FUN_180268ed0(&local_110);
    if (cVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar17 = *(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x1520);
    if ((*(longlong *)(lVar17 + 0x1c8) != 0) ||
       (lVar12 = 0x280, *(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x2368) != 0)) {
      lVar12 = 0x250;
    }
    fVar23 = fVar1 * 4.0 + fVar23;
    local_110 = CONCAT44(fVar23,(*(float *)(lVar17 + lVar12) - *(float *)(lVar17 + 0x118)) + fVar22)
    ;
    local_100 = CONCAT44(fVar23,fVar22);
    FUN_180294c90(uVar16,&local_100,&local_110,uVar9,0x3f800000);
    local_110 = (ulonglong)(uint)(fVar1 * 9.0) << 0x20;
    FUN_1802af260(&local_110);
  }
  return 1;
}


