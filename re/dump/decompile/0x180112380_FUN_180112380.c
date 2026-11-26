// 0x180112380  FUN_180112380
// size=1795 thunk=false
// signature: undefined FUN_180112380()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180112380(longlong param_1)

{
  undefined1 *puVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  char cVar8;
  short sVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 local_218;
  undefined8 local_210;
  float local_208;
  float local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  float local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d0;
  longlong local_1c8;
  undefined1 *local_1c0;
  float *local_1b8;
  float *local_1b0;
  undefined **local_1a8;
  longlong lStack_1a0;
  undefined8 local_198;
  float local_188;
  float fStack_184;
  float local_180;
  undefined8 local_178;
  float local_170;
  uint local_168;
  undefined8 local_164;
  undefined1 local_158 [12];
  float local_14c;
  float local_148;
  float local_144;
  undefined1 local_e8 [64];
  undefined8 local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  puVar1 = (undefined1 *)(param_1 + 0x14);
  *puVar1 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  pfVar2 = (float *)(param_1 + 0x24);
  *pfVar2 = -1.0;
  pfVar3 = (float *)(param_1 + 0x28);
  *pfVar3 = 0.0;
  pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
  local_1c8 = param_1;
  local_1c0 = puVar1;
  local_1b8 = pfVar2;
  local_1b0 = pfVar3;
  uVar10 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar11 = (*pcVar4)(DAT_1803fa360,uVar10);
  if (((lVar11 != 0) && (cVar8 = FUN_18001c330(lVar11), cVar8 != '\0')) &&
     (DAT_1803fa668 != (longlong *)0x0)) {
    local_164 = 0;
    local_168 = 0;
    (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_168);
    if ((((local_168 & 0x7f800000) != 0x7f800000) && (((uint)local_164 & 0x7f800000) != 0x7f800000))
       && ((local_164._4_4_ & 0x7f800000) != 0x7f800000)) {
      if (((DAT_1803fa608 == 0) || (DAT_1803e9078 < 0)) ||
         ((0x1e < (uint)(*(int *)(DAT_1803fa608 + 4) - DAT_1803e9078) ||
          (((((uint)DAT_1803e9bd0 & 0x7f800000) == 0x7f800000 ||
            (((uint)DAT_1803e9bd4 & 0x7f800000) == 0x7f800000)) ||
           (((uint)DAT_1803e9bd8 & 0x7f800000) == 0x7f800000)))))) {
        bVar6 = false;
        local_218 = 0;
      }
      else {
        local_1e8 = DAT_1803e9bd0;
        local_1e4 = DAT_1803e9bd4;
        local_1e0 = DAT_1803e9bd8;
        bVar6 = true;
        local_218 = 1;
        local_188 = DAT_1803e9bd0;
        fStack_184 = DAT_1803e9bd4;
        local_180 = DAT_1803e9bd8;
        cVar8 = FUN_180021ac0(&local_188,&local_200);
        fVar17 = local_200;
        if (((cVar8 != '\0') && (sVar9 = _fdclass(local_200), uVar10 = local_1fc, sVar9 < 1)) &&
           (sVar9 = _fdclass(local_1fc), sVar9 < 1)) {
          *(float *)(param_1 + 0xc) = fVar17;
          *(undefined4 *)(param_1 + 0x10) = uVar10;
          *(undefined1 *)(param_1 + 8) = 1;
        }
      }
      uVar12 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
      uVar12 = FUN_180241610(uVar12,0xd9d9a537b635808a);
      pcVar13 = (char *)FUN_1801fcfc0(uVar12);
      if (*pcVar13 != '\0') {
        local_210 = 0;
        local_208 = 0.0;
        local_178 = 0;
        local_170 = 0.0;
        cVar8 = FUN_1800732a0(&local_168,&local_210,&local_178);
        if (cVar8 == '\0') {
          *(undefined1 *)(param_1 + 0x20) = 1;
          puVar14 = (undefined8 *)FUN_18001c430(lVar11,&local_1f8);
          local_210 = *puVar14;
          local_208 = *(float *)(puVar14 + 1);
          FUN_1802d4050(&local_168,&local_178);
        }
        fVar16 = local_208;
        fVar17 = (float)local_210;
        if (((((uint)(float)local_210 & 0x7f800000) != 0x7f800000) &&
            (fVar7 = local_210._4_4_, ((uint)local_210._4_4_ & 0x7f800000) != 0x7f800000)) &&
           ((((uint)local_208 & 0x7f800000) != 0x7f800000 &&
            ((((((uint)(float)local_178 & 0x7f800000) != 0x7f800000 &&
               (((uint)local_178._4_4_ & 0x7f800000) != 0x7f800000)) &&
              (((uint)local_170 & 0x7f800000) != 0x7f800000)) &&
             (DAT_180380938 <
              local_178._4_4_ * local_178._4_4_ + (float)local_178 * (float)local_178 +
              local_170 * local_170)))))) {
          (*(code *)PTR_FUN_1803da000)(&local_178);
          fVar15 = (float)FUN_1801122f0();
          local_188 = (float)local_178 * fVar15 + fVar17;
          fStack_184 = local_178._4_4_ * fVar15 + fVar7;
          local_1f0 = local_170 * fVar15 + fVar16;
          local_180 = local_1f0;
          if (DAT_1803fa610 != (longlong *)0x0) {
            local_1a8 = vftable_CDoubleTraceFilter;
            local_198 = DAT_1803ff0f0;
            local_a8 = 0;
            local_1f8 = CONCAT44(fStack_184,local_188);
            lStack_1a0 = lVar11;
            FUN_18001fde0(local_e8,&local_210,&local_1f8);
            local_228 = local_158;
            (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,local_e8,0x46004003,&local_1a8);
            local_1d8 = local_14c;
            if (((((uint)local_14c & 0x7f800000) == 0x7f800000) ||
                (local_1d0 = local_148, ((uint)local_148 & 0x7f800000) == 0x7f800000)) ||
               (local_200 = local_144, ((uint)local_144 & 0x7f800000) == 0x7f800000)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              local_188 = local_14c;
              fStack_184 = local_148;
              local_180 = local_144;
            }
          }
          local_1f8 = CONCAT44(fStack_184,local_188);
          local_1f0 = local_180;
          cVar8 = FUN_180021ac0(&local_1f8,&local_200);
          fVar15 = local_200;
          if (((cVar8 != '\0') && (sVar9 = _fdclass(local_200), sVar9 < 1)) &&
             (sVar9 = _fdclass(local_1fc), sVar9 < 1)) {
            *(float *)(param_1 + 0x18) = fVar15;
            *(undefined4 *)(param_1 + 0x1c) = local_1fc;
            *puVar1 = 1;
          }
          if (bVar6) {
            local_188 = local_1e8 - fVar17;
            fStack_184 = local_1e4 - fVar7;
            local_180 = local_1e0 - fVar16;
            fVar16 = (float)(*(code *)PTR_FUN_1803da018)
                                      (fStack_184 * fStack_184 + local_188 * local_188 +
                                       local_180 * local_180);
            *pfVar3 = fVar16;
            fVar17 = DAT_180380bb0;
            if (DAT_180380bb0 < fVar16) {
              (*(code *)PTR_FUN_1803da000)(&local_188);
              fVar16 = fStack_184 * local_178._4_4_ + local_188 * (float)local_178 +
                       local_180 * local_170;
              if (fVar16 <= fVar17) {
                fVar17 = fVar16;
              }
              fVar16 = DAT_180381384;
              if (DAT_180381384 <= fVar17) {
                fVar16 = fVar17;
              }
              fVar17 = acosf(fVar16);
              *pfVar2 = fVar17 * DAT_1803810c0;
            }
          }
        }
      }
    }
  }
  return;
}


