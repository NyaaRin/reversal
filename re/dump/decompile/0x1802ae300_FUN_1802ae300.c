// 0x1802ae300  FUN_1802ae300
// size=1439 thunk=false
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
  uint uVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
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
    fVar16 = *(float *)(lVar2 + 0x118);
    fVar19 = *(float *)(lVar2 + 0x11c);
    fVar14 = *(float *)(lVar3 + 0x1238);
    fVar15 = *(float *)(lVar3 + 0xcc8);
    uVar10 = FUN_18027f9c0();
    FUN_18027faa0(&local_128,*param_2,uVar10,fVar15 + fVar15 + fVar14);
    fVar15 = local_128 + fVar16;
    fVar14 = local_124 + fVar19;
    local_120 = fVar14;
    local_110 = fVar16;
    fStack_10c = fVar19;
    fStack_108 = fVar15;
    fStack_104 = fVar14;
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
    if ((((fVar14 < *(float *)(lVar5 + 0x26c) || fVar14 == *(float *)(lVar5 + 0x26c)) ||
         (*(float *)(lVar5 + 0x274) <= fVar19)) ||
        (fVar15 < *(float *)(lVar5 + 0x268) || fVar15 == *(float *)(lVar5 + 0x268))) ||
       (*(float *)(lVar5 + 0x270) <= fVar16)) {
      if (*(char *)(lVar4 + 0x1592) == '\0') {
        return;
      }
    }
    else {
      *(undefined4 *)(lVar4 + 0x1f00) = 0x100;
    }
    cVar8 = FUN_18027bdd0(&local_110,&fStack_108,1);
    if (cVar8 != '\0') {
      *(uint *)(lVar4 + 0x1f00) = *(uint *)(lVar4 + 0x1f00) | 1;
    }
    uVar7 = DAT_1803817f0;
    fVar14 = DAT_180380bb0;
    bVar6 = 0.0 <= param_1;
    fVar17 = param_1;
    if (bVar6) {
      if (0.0 <= param_1) {
        fVar17 = DAT_180380bb0;
        if (param_1 <= DAT_180380bb0) {
          fVar17 = param_1;
        }
      }
      else {
        fVar17 = 0.0;
      }
    }
    fVar11 = fVar17;
    if (NAN(fVar17)) {
      fVar11 = 0.0;
    }
    fVar18 = 0.0;
    if (!bVar6) {
      fVar11 = fmodf((float)((uint)fVar17 ^ DAT_1803817f0),DAT_180380bb0);
      fVar12 = fVar11 * DAT_180380bf0 - DAT_180380a3c;
      fVar13 = fVar12 + DAT_180380a3c;
      if (0.0 <= fVar13) {
        fVar11 = fVar14;
        if (fVar13 <= fVar14) {
          fVar11 = fVar13;
        }
      }
      else {
        fVar11 = 0.0;
      }
      if ((0.0 <= fVar12) && (fVar18 = fVar14, fVar12 <= fVar14)) {
        fVar18 = fVar12;
      }
    }
    fVar14 = *(float *)(lVar3 + 0xccc);
    uVar10 = FUN_18026a6a0(7);
    local_168._0_4_ = fVar14;
    FUN_18026c020(CONCAT44(fStack_10c,local_110),CONCAT44(fStack_104,fStack_108),uVar10,1);
    fStack_104 = (float)(*(uint *)(lVar3 + 0xcd0) ^ uVar7);
    fVar16 = fVar16 - fStack_104;
    fVar15 = fStack_104 + fVar15;
    fVar19 = fVar19 - fStack_104;
    fStack_104 = fStack_104 + local_120;
    fVar14 = (fVar15 - fVar16) * fVar11 + fVar16;
    local_120 = (fVar15 - fVar16) * fVar18 + fVar16;
    local_110 = fVar16;
    fStack_10c = fVar19;
    fStack_108 = fVar15;
    if (local_120 < fVar14) {
      uVar10 = *(undefined4 *)(lVar3 + 0xccc);
      uVar9 = FUN_18026a6a0(0x2c);
      local_160 = (float *)CONCAT44(local_160._4_4_,uVar10);
      local_168._0_4_ = fVar14;
      FUN_18029f4a0(*(undefined8 *)(lVar2 + 0x2c8),&local_110,uVar9,local_120);
    }
    if (bVar6) {
      if (param_3 == (undefined1 *)0x0) {
        FUN_180268750(local_100,0x20,"%.0f%%",(double)(fVar17 * DAT_180381120 + DAT_180380980));
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
      local_168 = (float *)CONCAT44(local_168._4_4_,DAT_180381384);
      local_160 = (float *)param_3;
      FUN_18029e350(&local_128,*(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar1 + 0xec0) + 0x1238),DAT_180381308);
      local_11c = local_124;
      local_120 = (float)(int)(local_128 + DAT_180380ba8);
      if (0.0 < local_120) {
        if (bVar6) {
          fVar14 = fVar14 + *(float *)(lVar3 + 0xcd4);
        }
        else {
          fVar14 = ((fVar16 + fVar15) - local_120) * DAT_180380ac0;
        }
        local_128 = 0.0;
        local_124 = 0.5;
        local_118 = fVar16;
        if ((fVar16 <= fVar14) &&
           (local_118 = (fVar15 - local_120) - *(float *)(lVar3 + 0xcdc), fVar14 <= local_118)) {
          local_118 = fVar14;
        }
        local_158 = &local_110;
        local_160 = &local_128;
        local_168 = &local_120;
        local_114 = fVar19;
        FUN_18026ba40(&local_118,&fStack_108,param_3,0);
      }
    }
  }
  return;
}


