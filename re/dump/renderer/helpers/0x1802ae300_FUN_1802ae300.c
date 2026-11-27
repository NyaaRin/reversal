// 1802ae300  FUN_1802ae300
// signature: undefined FUN_1802ae300()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ae300(float param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_188 [32];
  float *local_168;
  float *local_160;
  float *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_138;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined1 local_100 [32];
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar2 + 0x1520);
  if (*(char *)(lVar2 + 0xd1) == '\0') {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar1 + 0xec0);
    fVar15 = *(float *)(lVar2 + 0x118);
    fVar17 = *(float *)(lVar2 + 0x11c);
    fVar13 = *(float *)(lVar3 + 0x1238);
    fVar14 = *(float *)(lVar3 + 0xcc8);
    uVar9 = FUN_18027f9c0();
    FUN_18027faa0(&local_128,*param_2,uVar9,fVar14 + fVar14 + fVar13);
    fVar14 = local_128 + fVar15;
    fVar13 = local_124 + fVar17;
    local_120 = fVar13;
    local_110 = fVar15;
    fStack_10c = fVar17;
    fStack_108 = fVar14;
    fStack_104 = fVar13;
    FUN_18027f400(&local_128);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar1 + 0xec0);
    *(uint *)(lVar4 + 0x1efc) = *(uint *)(lVar4 + 0x1eb8) | *(uint *)(lVar4 + 0x1ec4);
    lVar5 = *(longlong *)(lVar4 + 0x1520);
    *(undefined4 *)(lVar4 + 0x1ef8) = 0;
    *(float *)(lVar4 + 0x1f04) = local_110;
    *(float *)(lVar4 + 0x1f08) = fStack_10c;
    *(float *)(lVar4 + 0x1f0c) = fStack_108;
    *(float *)(lVar4 + 0x1f10) = fStack_104;
    *(undefined4 *)(lVar4 + 0x1f00) = 0;
    *(float *)(lVar4 + 0x1f14) = local_110;
    *(float *)(lVar4 + 0x1f18) = fStack_10c;
    *(float *)(lVar4 + 0x1f1c) = fStack_108;
    *(float *)(lVar4 + 0x1f20) = fStack_104;
    *(undefined8 *)(lVar4 + 0x1ec0) = 0;
    if ((((fVar13 < *(float *)(lVar5 + 0x26c) || fVar13 == *(float *)(lVar5 + 0x26c)) ||
         (*(float *)(lVar5 + 0x274) <= fVar17)) ||
        (fVar14 < *(float *)(lVar5 + 0x268) || fVar14 == *(float *)(lVar5 + 0x268))) ||
       (*(float *)(lVar5 + 0x270) <= fVar15)) {
      if (*(char *)(lVar4 + 0x1592) == '\0') {
        return;
      }
    }
    else {
      *(undefined4 *)(lVar4 + 0x1f00) = 0x100;
    }
    cVar7 = FUN_18027bdd0(&local_110,&fStack_108,1);
    if (cVar7 != '\0') {
      *(uint *)(lVar4 + 0x1f00) = *(uint *)(lVar4 + 0x1f00) | 1;
    }
    bVar6 = 0.0 <= param_1;
    fVar13 = param_1;
    if (bVar6) {
      if (0.0 <= param_1) {
        fVar13 = 1.0;
        if (param_1 <= 1.0) {
          fVar13 = param_1;
        }
      }
      else {
        fVar13 = 0.0;
      }
    }
    fVar10 = fVar13;
    if (NAN(fVar13)) {
      fVar10 = 0.0;
    }
    fVar16 = 0.0;
    if (!bVar6) {
      fVar10 = fmodf(-fVar13,1.0);
      fVar11 = fVar10 * 1.2 - 0.2;
      fVar12 = fVar11 + 0.2;
      if (0.0 <= fVar12) {
        fVar10 = 1.0;
        if (fVar12 <= 1.0) {
          fVar10 = fVar12;
        }
      }
      else {
        fVar10 = 0.0;
      }
      if ((0.0 <= fVar11) && (fVar16 = 1.0, fVar11 <= 1.0)) {
        fVar16 = fVar11;
      }
    }
    fVar11 = *(float *)(lVar3 + 0xccc);
    uVar9 = FUN_18026a6a0(7);
    local_168._0_4_ = fVar11;
    FUN_18026c020(CONCAT44(fStack_10c,local_110),CONCAT44(fStack_104,fStack_108),uVar9,1);
    fStack_104 = -*(float *)(lVar3 + 0xcd0);
    fVar15 = fVar15 - fStack_104;
    fVar14 = fStack_104 + fVar14;
    fVar17 = fVar17 - fStack_104;
    fStack_104 = fStack_104 + local_120;
    fVar10 = (fVar14 - fVar15) * fVar10 + fVar15;
    local_120 = (fVar14 - fVar15) * fVar16 + fVar15;
    local_110 = fVar15;
    fStack_10c = fVar17;
    fStack_108 = fVar14;
    if (local_120 < fVar10) {
      uVar9 = *(undefined4 *)(lVar3 + 0xccc);
      uVar8 = FUN_18026a6a0(0x2c);
      local_160 = (float *)CONCAT44(local_160._4_4_,uVar9);
      local_168._0_4_ = fVar10;
      FUN_18029f4a0(*(undefined8 *)(lVar2 + 0x2c8),&local_110,uVar8,local_120);
    }
    if (bVar6) {
      if (param_3 == (undefined1 *)0x0) {
        FUN_180268750(local_100,0x20,"%.0f%%",(double)(fVar13 * 100.0 + 0.01));
        param_3 = local_100;
      }
    }
    else if (param_3 == (undefined1 *)0x0) {
      return;
    }
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (param_3 != (undefined1 *)0x0) {
      local_138 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = (float *)0x0;
      local_168 = (float *)CONCAT44(local_168._4_4_,0xbf800000);
      local_160 = (float *)param_3;
      FUN_18029e350(&local_128,*(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar1 + 0xec0) + 0x1238),0x7f7fffff);
      local_11c = local_124;
      local_120 = (float)(int)(local_128 + 0.99999);
      if (0.0 < local_120) {
        if (bVar6) {
          fVar10 = fVar10 + *(float *)(lVar3 + 0xcd4);
        }
        else {
          fVar10 = ((fVar15 + fVar14) - local_120) * 0.5;
        }
        local_128 = 0.0;
        local_124 = 0.5;
        local_118 = fVar15;
        if ((fVar15 <= fVar10) &&
           (local_118 = (fVar14 - local_120) - *(float *)(lVar3 + 0xcdc), fVar10 <= local_118)) {
          local_118 = fVar10;
        }
        local_158 = &local_110;
        local_160 = &local_128;
        local_168 = &local_120;
        local_114 = fVar17;
        FUN_18026ba40(&local_118,&fStack_108,param_3,0);
      }
    }
  }
  return;
}


