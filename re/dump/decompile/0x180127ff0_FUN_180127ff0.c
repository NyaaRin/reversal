// 0x180127ff0  FUN_180127ff0
// size=1912 thunk=false
// signature: undefined FUN_180127ff0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180127ff0(longlong param_1,float *param_2,char ****param_3,float param_4,float param_5,
                  char ****param_6,int param_7)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  char ****ppppcVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_218 [32];
  uint local_1f8;
  char ***local_1f0;
  char ***local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  uint local_1b8;
  float local_1b0;
  float local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  float local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  float fStack_18c;
  uint local_188;
  float local_180;
  float local_17c;
  undefined8 local_178;
  char ***local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  char ***local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong uStack_140;
  char local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  char local_108 [32];
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_218;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_178 = param_2;
  local_170 = (char ***)param_3;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1228);
  if (lVar2 != 0) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar17 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x1238) * DAT_180380b6c;
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = param_4 * DAT_180380b4c;
    uVar10 = FUN_180268ed0(&local_1a8);
    local_1a8 = *(undefined8 *)((longlong)param_3 + 0x2c);
    local_1a0 = *(undefined4 *)((longlong)param_3 + 0x34);
    local_19c = param_4;
    local_188 = uVar10;
    uVar11 = FUN_180268ed0(&local_1a8);
    uVar6 = DAT_180381308;
    fVar5 = DAT_180380e28;
    fVar4 = DAT_180380bb0;
    fVar14 = DAT_180380ac0;
    local_1b8 = uVar11;
    if (*(char *)((longlong)param_3 + 0x23) != '\0') {
      if ((param_6 == (char ****)0x0) && (param_6 = param_3, (char ***)0xf < param_3[3])) {
        param_6 = (char ****)*param_3;
      }
      local_1c8 = 0;
      local_1d8 = 0;
      local_1e0 = 0;
      local_1e8 = (char ***)0x0;
      local_1f8 = 0;
      local_1f0 = (char ***)param_6;
      FUN_18029e350(&local_1b0,lVar2,fVar17,DAT_180381308);
      local_17c = ((param_2[1] - local_1ac) - fVar5) - 0.0;
      local_180 = (param_2[2] + *param_2) * fVar14 - local_1b0 * fVar14;
      local_1b0 = local_180 + fVar4;
      local_1ac = local_17c + fVar4;
      if ((((uVar10 & 0xff000000) != 0) && (param_6 != (char ****)0x0)) &&
         (*(char *)param_6 != '\0')) {
        fVar15 = fVar17;
        if (fVar17 == 0.0) {
          fVar15 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_198 = *(undefined4 *)(param_1 + 0x60);
        uStack_194 = *(undefined4 *)(param_1 + 100);
        uStack_190 = *(undefined4 *)(param_1 + 0x68);
        fStack_18c = *(float *)(param_1 + 0x6c);
        local_1d0 = 0;
        local_1d8 = local_1d8 & 0xffffffff00000000;
        local_1e0 = 0;
        local_1f0 = (char ***)&local_198;
        local_1f8 = uVar10;
        local_1e8 = (char ***)param_6;
        FUN_18029e990(lVar2,param_1,fVar15,&local_1b0);
      }
      if ((((uVar11 & 0xff000000) != 0) && (param_6 != (char ****)0x0)) &&
         (*(char *)param_6 != '\0')) {
        fVar15 = fVar17;
        if (fVar17 == 0.0) {
          fVar15 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_198 = *(undefined4 *)(param_1 + 0x60);
        uStack_194 = *(undefined4 *)(param_1 + 100);
        uStack_190 = *(undefined4 *)(param_1 + 0x68);
        fStack_18c = *(float *)(param_1 + 0x6c);
        local_1d0 = 0;
        local_1d8 = local_1d8 & 0xffffffff00000000;
        local_1e0 = 0;
        local_1f0 = (char ***)&local_198;
        local_1f8 = uVar11;
        local_1e8 = (char ***)param_6;
        FUN_18029e990(lVar2,param_1,fVar15,&local_180);
      }
    }
    uVar8 = _UNK_1803814b8;
    uVar7 = _DAT_1803814b0;
    fVar15 = DAT_180380d30;
    fVar18 = 0.0;
    uVar3 = uVar10;
    if (0 < param_7) {
      iVar13 = 1;
      do {
        uStack_150 = 0;
        local_148 = uVar7;
        uStack_140 = uVar8;
        local_158 = (char ***)0x0;
        local_138 = '\0';
        local_134 = 0x3f800000;
        local_130 = 0x3f800000;
        local_12c = 0x3f800000;
        local_128 = 0x3f800000;
        local_120 = 0;
        local_118 = 0;
        cVar9 = FUN_1800213a0(param_7,iVar13,&local_158);
        if (cVar9 != '\0') {
          if (local_138 != '\0') {
            local_198 = local_134;
            uStack_194 = local_130;
            uStack_190 = local_12c;
            fStack_18c = param_4;
            uVar11 = FUN_180268ed0(&local_198);
          }
          ppppcVar12 = &local_158;
          if (0xf < uStack_140) {
            ppppcVar12 = (char ****)local_158;
          }
          local_1c8 = 0;
          local_1d8 = 0;
          local_1e0 = 0;
          local_1e8 = (char ***)0x0;
          local_1f8 = 0;
          local_1f0 = (char ***)ppppcVar12;
          FUN_18029e350(&local_1a8,lVar2,fVar17,uVar6);
          local_1ac = local_178[3] + fVar5 + fVar18;
          local_1b0 = (*local_178 + local_178[2]) * fVar14 - (float)local_1a8 * fVar14;
          local_180 = local_1b0 + fVar4;
          local_17c = local_1ac + fVar4;
          if ((((uVar10 & 0xff000000) != 0) && (ppppcVar12 != (char ****)0x0)) &&
             (*(char *)ppppcVar12 != '\0')) {
            fVar16 = fVar17;
            if (fVar17 == 0.0) {
              fVar16 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
            }
            local_168._0_4_ = *(undefined4 *)(param_1 + 0x60);
            local_168._4_4_ = *(undefined4 *)(param_1 + 100);
            uStack_160 = *(undefined4 *)(param_1 + 0x68);
            uStack_15c = *(undefined4 *)(param_1 + 0x6c);
            local_1d0 = 0;
            local_1d8 = local_1d8 & 0xffffffff00000000;
            local_1e0 = 0;
            local_1f0 = (char ***)&local_168;
            local_1f8 = uVar10;
            local_1e8 = (char ***)ppppcVar12;
            FUN_18029e990(lVar2,param_1,fVar16,&local_180);
          }
          if ((((uVar11 & 0xff000000) != 0) && (ppppcVar12 != (char ****)0x0)) &&
             (*(char *)ppppcVar12 != '\0')) {
            fVar16 = fVar17;
            if (fVar17 == 0.0) {
              fVar16 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
            }
            local_168._0_4_ = *(undefined4 *)(param_1 + 0x60);
            local_168._4_4_ = *(undefined4 *)(param_1 + 100);
            uStack_160 = *(undefined4 *)(param_1 + 0x68);
            uStack_15c = *(undefined4 *)(param_1 + 0x6c);
            local_1d0 = 0;
            local_1d8 = local_1d8 & 0xffffffff00000000;
            local_1e0 = 0;
            local_1f0 = (char ***)&local_168;
            local_1f8 = uVar11;
            local_1e8 = (char ***)ppppcVar12;
            FUN_18029e990(lVar2,param_1,fVar16,&local_1b0);
          }
          fVar18 = fVar18 + local_1a8._4_4_ + fVar15;
        }
        FUN_18020e450(&local_158);
        iVar13 = iVar13 + 1;
        param_3 = (char ****)local_170;
        uVar11 = local_1b8;
        uVar3 = local_188;
      } while (iVar13 < 5);
    }
    if (*(char *)((longlong)param_3 + 0x25) != '\0') {
      if (DAT_180381278 <= param_5) {
        FUN_180012ac0(local_108,0x20,"%.1fkm",(double)(param_5 / DAT_180381278));
      }
      else {
        FUN_180012ac0(local_108,0x20,&DAT_180358504,(int)param_5);
      }
      local_1c8 = 0;
      local_1d8 = 0;
      local_1e0 = 0;
      local_1e8 = (char ***)0x0;
      local_1f0 = (char ***)local_108;
      local_1f8 = 0;
      FUN_18029e350(&local_170,lVar2,fVar17,uVar6);
      fVar14 = (*local_178 + local_178[2]) * fVar14 - local_170._0_4_ * fVar14;
      fVar18 = local_178[3] + fVar5 + fVar18;
      local_1a8 = CONCAT44(fVar18,fVar14);
      local_178 = (float *)CONCAT44(fVar18 + fVar4,fVar14 + fVar4);
      if (((uVar3 & 0xff000000) != 0) && (local_108[0] != '\0')) {
        fVar14 = fVar17;
        if (fVar17 == 0.0) {
          fVar14 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_168._0_4_ = *(undefined4 *)(param_1 + 0x60);
        local_168._4_4_ = *(undefined4 *)(param_1 + 100);
        uStack_160 = *(undefined4 *)(param_1 + 0x68);
        uStack_15c = *(undefined4 *)(param_1 + 0x6c);
        local_1d0 = 0;
        local_1d8 = local_1d8 & 0xffffffff00000000;
        local_1e0 = 0;
        local_1e8 = (char ***)local_108;
        local_1f0 = (char ***)&local_168;
        local_1f8 = uVar3;
        FUN_18029e990(lVar2,param_1,fVar14,&local_178);
      }
      local_198 = 0x3f4ccccd;
      uStack_194 = 0x3f4ccccd;
      uStack_190 = 0x3f4ccccd;
      fStack_18c = param_4;
      local_1f8 = FUN_180268ed0(&local_198);
      if (((local_1f8 & 0xff000000) != 0) && (local_108[0] != '\0')) {
        if (fVar17 == 0.0) {
          fVar17 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_168._0_4_ = *(undefined4 *)(param_1 + 0x60);
        local_168._4_4_ = *(undefined4 *)(param_1 + 100);
        uStack_160 = *(undefined4 *)(param_1 + 0x68);
        uStack_15c = *(undefined4 *)(param_1 + 0x6c);
        local_1d0 = 0;
        local_1d8 = local_1d8 & 0xffffffff00000000;
        local_1e0 = 0;
        local_1e8 = (char ***)local_108;
        local_1f0 = (char ***)&local_168;
        FUN_18029e990(lVar2,param_1,fVar17,&local_1a8);
      }
    }
  }
  return;
}


