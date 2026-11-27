// 0x18019f1f0  FUN_18019f1f0
// size=2510 thunk=false
// signature: undefined FUN_18019f1f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18019f1f0(undefined8 param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined4 uVar8;
  longlong lVar9;
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  char ****ppppcVar17;
  byte *pbVar18;
  char *pcVar19;
  byte bVar20;
  longlong lVar21;
  uint uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  char *pcVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_218 [32];
  float local_1f8;
  char ***local_1f0;
  char ***local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  char local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0 [2];
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188 [2];
  float local_180;
  float local_17c;
  undefined4 local_178;
  float local_174;
  undefined8 local_170;
  float fStack_168;
  float fStack_164;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  longlong local_128;
  ulonglong local_120;
  char ***local_118 [2];
  undefined8 local_108;
  ulonglong local_100;
  ulonglong local_f8;
  
  uVar8 = DAT_180381384;
  uVar12 = DAT_180381308;
  fVar29 = DAT_180380ba8;
  local_f8 = DAT_1803da4c0 ^ (ulonglong)auStack_218;
  local_1b4 = 5.60519e-45;
  local_1a0[0] = 0.0;
  pfVar16 = local_1a0;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar16 = &DAT_1803fb24c;
  }
  pfVar15 = &local_1b4;
  if ((int)DAT_1803fb24c < 5) {
    pfVar15 = pfVar16;
  }
  DAT_1803fb24c = *pfVar15;
  local_170 = (longlong)(int)DAT_1803fb24c * 200;
  local_188[0] = DAT_1803da6a4 * DAT_180380fc4;
  fVar30 = DAT_1803da6a4 * DAT_180380e9c;
  local_1a0[0] = DAT_1803da6a4 * DAT_180380ffc;
  fVar31 = DAT_1803da6a4 * DAT_180380f40;
  fVar28 = fVar31 + local_1a0[0] + local_188[0] + local_188[0];
  local_128 = 0;
  local_120 = 0xf;
  local_138._1_15_ = SUB1615(ZEXT416(0),1);
  auVar6[0xf] = 0;
  auVar6._0_15_ = local_138._1_15_;
  local_138 = auVar6 << 8;
  pcVar25 = "Documents\\mayrrX64\\settings";
  uVar24 = (ulonglong)_tls_index;
  if (0.0 < param_3) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_1c8 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = (char ***)0x0;
    local_1f0 = (char ***)0x180378d50;
    local_1f8 = (float)uVar8;
    FUN_18029e350(&local_198,*(undefined8 *)(*(longlong *)(lVar4 + 0xec0) + 0x1228),
                  *(undefined4 *)(*(longlong *)(lVar4 + 0xec0) + 0x1238),uVar12);
    if (param_3 < (float)(int)((float)local_198 + fVar29) + fVar28) {
      pcVar19 = "Documents\\mayrrX64\\settings";
      cVar10 = 'D';
      do {
        if ((cVar10 == '\\') || (cVar10 == '/')) {
          local_158 = 0;
          uStack_150 = 0;
          local_148 = ZEXT816(0);
          FUN_18001d080(&local_158,&DAT_18034f96c,3);
          FUN_1801fc680(local_118,&local_158,pcVar19);
          FUN_18020e450(&local_158);
          ppppcVar17 = local_118;
          if (0xf < local_100) {
            ppppcVar17 = (char ****)local_118[0];
          }
          if (*(char *)(lVar4 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (ppppcVar17 == (char ****)0x0) {
            fVar26 = 0.0;
          }
          else {
            local_1c8 = 0;
            local_1d8 = 0;
            local_1e0 = 0;
            local_1e8 = (char ***)0x0;
            local_1f8 = (float)uVar8;
            local_1f0 = (char ***)ppppcVar17;
            FUN_18029e350(&local_198,*(undefined8 *)(*(longlong *)(lVar4 + 0xec0) + 0x1228),
                          *(undefined4 *)(*(longlong *)(lVar4 + 0xec0) + 0x1238),uVar12);
            fVar26 = (float)(int)((float)local_198 + fVar29);
            local_198 = CONCAT44(local_198._4_4_,fVar26);
          }
          if (fVar26 + fVar28 <= param_3) {
            ppppcVar17 = local_118;
            if (0xf < local_100) {
              ppppcVar17 = (char ****)local_118[0];
            }
            FUN_180212700(local_138,ppppcVar17,local_108);
            FUN_18020e450(local_118);
            break;
          }
          FUN_18020e450(local_118);
        }
        pcVar19 = pcVar19 + 1;
        cVar10 = *pcVar19;
      } while (cVar10 != '\0');
      if (local_128 != 0) {
        pcVar25 = local_138;
        if (0xf < local_120) {
          pcVar25 = (char *)local_138._0_8_;
        }
      }
    }
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar26 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1238);
  if ((char ****)pcVar25 == (char ****)0x0) {
    fVar29 = 0.0;
  }
  else {
    local_1c8 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = (char ***)0x0;
    local_1f8 = (float)uVar8;
    local_1f0 = (char ***)pcVar25;
    FUN_18029e350(&local_198,*(undefined8 *)(*(longlong *)(lVar4 + 0xec0) + 0x1228),fVar26,uVar12);
    fVar29 = (float)(int)((float)local_198 + fVar29);
    fVar26 = local_198._4_4_;
  }
  FUN_18027abf0("##storage_path");
  local_198 = CONCAT44(fVar30 + fVar30 + fVar26,fVar29 + fVar28);
  FUN_1802ac3c0("##path",&local_198);
  cVar10 = FUN_18026ee60(0);
  local_1b8 = cVar10;
  cVar11 = FUN_18027bce0(0,0,0);
  if ((cVar11 == '\0') || (cVar11 = FUN_18026ee60(0), cVar11 == '\0')) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar29 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1f0c);
  fVar28 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1f10);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar30 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1f04);
  fVar1 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1f08);
  local_1b0 = fVar30;
  local_1ac = fVar1;
  local_1a8 = fVar29;
  local_1a4 = fVar28;
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar5 + 0x1520) + 0xce) = 1;
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1520) + 0x2c8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar7 = DAT_180380bb0;
  uVar22 = ~*(uint *)(*(longlong *)(lVar4 + 0xec0) + 0x1ef8);
  pbVar18 = &DAT_180363c61;
  bVar20 = 0x70;
  uVar13 = uVar22;
  do {
    if (((bVar20 == 0x23) && (*pbVar18 == 0x23)) && (pbVar18[1] == 0x23)) {
      pbVar18 = pbVar18 + 2;
      uVar13 = uVar22;
    }
    else {
      uVar13 = uVar13 >> 8 ^
               *(uint *)(&DAT_180331380 + ((ulonglong)(uVar13 & 0xff) ^ (ulonglong)bVar20) * 4);
    }
    bVar20 = *pbVar18;
    pbVar18 = pbVar18 + 1;
  } while (bVar20 != 0);
  fVar27 = (float)FUN_1802d3320(~uVar13,cVar10,(ulonglong)(uint)DAT_180380bb0 << 0x20,DAT_180381004)
  ;
  lVar9 = local_170;
  local_198 = CONCAT44(local_198._4_4_,fVar27);
  local_180 = *(float *)(&DAT_1803dc9a8 + local_170);
  local_17c = *(float *)(&DAT_1803dc9ac + local_170);
  local_178 = *(undefined4 *)(&DAT_1803dc9b0 + local_170);
  local_174 = (fVar27 * DAT_180380a74 + DAT_180380a6c) * *(float *)(&DAT_1803dc9b4 + local_170);
  uVar12 = FUN_180268ed0(&local_180);
  local_1f0 = (char ***)((ulonglong)local_1f0 & 0xffffffff00000000);
  local_1f8 = fVar31;
  FUN_180295000(lVar5,&local_1b0,&local_1a8,uVar12);
  lVar21 = 0x180000000;
  local_180 = fVar27;
  local_1b0 = 1.0;
  local_1b4 = 0.0;
  pfVar16 = &local_1b4;
  if (0.0 <= fVar27) {
    pfVar16 = &local_180;
  }
  pfVar15 = &local_1b0;
  if (fVar27 <= fVar7) {
    pfVar15 = pfVar16;
  }
  fVar2 = *pfVar15;
  local_1b0 = (*(float *)(&DAT_1803dc9c8 + lVar9) - *(float *)(&DAT_1803dc9b8 + lVar9)) * fVar2 +
              *(float *)(&DAT_1803dc9b8 + lVar9);
  local_1ac = (*(float *)(&DAT_1803dc9cc + lVar9) - *(float *)(&DAT_1803dc9bc + lVar9)) * fVar2 +
              *(float *)(&DAT_1803dc9bc + lVar9);
  local_1a8 = (*(float *)(&DAT_1803dc9d0 + lVar9) - *(float *)(&DAT_1803dc9c0 + lVar9)) * fVar2 +
              *(float *)(&DAT_1803dc9c0 + lVar9);
  local_1a4 = (*(float *)(&DAT_1803dc9d4 + lVar9) * DAT_180380b3c -
              *(float *)(&DAT_1803dc9c4 + lVar9) * DAT_180380ae4) * fVar2 +
              *(float *)(&DAT_1803dc9c4 + lVar9) * DAT_180380ae4;
  uVar13 = FUN_180268ed0(&local_1b0);
  fVar2 = DAT_180380ac0;
  if ((uVar13 & 0xff000000) != 0) {
    local_1f8 = 0.0;
    local_180 = fVar30 + DAT_180380ac0;
    local_1b0 = _DAT_180380abc;
    if ((*(byte *)(lVar5 + 0x30) & 1) != 0) {
      local_1b0 = DAT_180380ac0;
    }
    local_1ac = fVar28 - local_1b0;
    local_1b0 = fVar29 - local_1b0;
    local_17c = fVar1 + DAT_180380ac0;
    FUN_180294990(lVar5,&local_180,&local_1b0,fVar31);
    local_1f0 = (char ***)CONCAT44(local_1f0._4_4_,0x200);
    local_1f8 = fVar7;
    FUN_1802929d0(lVar5,*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x50),uVar13);
    *(undefined4 *)(lVar5 + 0x50) = 0;
    lVar21 = 0x180000000;
  }
  lVar9 = local_170;
  pfVar16 = (float *)(lVar21 + 0x3dca28 + local_170);
  local_180 = fVar27;
  local_1b4 = 1.0;
  local_1b0 = 0.0;
  pfVar15 = &local_1b0;
  if (0.0 <= fVar27) {
    pfVar15 = &local_180;
  }
  pfVar14 = &local_1b4;
  if (fVar27 <= fVar7) {
    pfVar14 = pfVar15;
  }
  fVar29 = *pfVar14;
  pfVar15 = (float *)(lVar21 + 0x3dc9c8 + local_170);
  fStack_168 = fVar29 * (pfVar15[2] - pfVar16[2]) + pfVar16[2];
  fStack_164 = fVar29 * (pfVar15[3] - pfVar16[3]) + pfVar16[3];
  local_170 = CONCAT44(fVar29 * (pfVar15[1] - pfVar16[1]) + pfVar16[1],
                       fVar29 * (*pfVar15 - *pfVar16) + *pfVar16);
  fVar27 = (fVar28 + fVar1) * fVar2;
  fVar30 = fVar30 + local_188[0];
  fVar29 = local_1a0[0] * fVar2;
  fVar28 = (fVar28 - fVar1) * DAT_180380a74;
  uVar12 = FUN_180268ed0(&local_170);
  local_1f8 = fVar28;
  FUN_18019ab20(lVar5,6,CONCAT44(fVar27,fVar29 + fVar30),uVar12);
  fStack_164 = *(float *)((longlong)&DAT_1803dca30 + lVar9 + 4);
  fVar29 = (float)local_198;
  local_188[0] = (float)local_198;
  local_1b0 = 1.0;
  local_198 = local_198 & 0xffffffff00000000;
  pfVar16 = (float *)&local_198;
  if (0.0 <= fVar29) {
    pfVar16 = local_188;
  }
  pfVar15 = &local_1b0;
  if (fVar29 <= fVar7) {
    pfVar15 = pfVar16;
  }
  fVar29 = *pfVar15;
  fStack_168 = fVar29 * (*(float *)(&DAT_1803dca20 + lVar9) -
                        *(float *)((longlong)&DAT_1803dca30 + lVar9)) +
               *(float *)((longlong)&DAT_1803dca30 + lVar9);
  fStack_164 = fVar29 * (*(float *)(&DAT_1803dca24 + lVar9) - fStack_164) + fStack_164;
  local_170 = CONCAT44(fVar29 * (*(float *)(&DAT_1803dca1c + lVar9) -
                                *(float *)(&DAT_1803dca2c + lVar9)) +
                       *(float *)(&DAT_1803dca2c + lVar9),
                       fVar29 * (*(float *)(&DAT_1803dca18 + lVar9) -
                                *(float *)(&DAT_1803dca28 + lVar9)) +
                       *(float *)(&DAT_1803dca28 + lVar9));
  fVar29 = (float)FUN_180268ed0(&local_170);
  local_170 = CONCAT44(fVar27 - fVar26 * fVar2,fVar30 + local_1a0[0] + fVar31);
  if (((((uint)fVar29 & 0xff000000) != 0) && ((char ****)pcVar25 != (char ****)0x0)) &&
     (*pcVar25 != '\0')) {
    local_198 = *(ulonglong *)(lVar5 + 0x60);
    uStack_190 = *(undefined8 *)(lVar5 + 0x68);
    local_1d0 = 0;
    local_1d8 = local_1d8 & 0xffffffff00000000;
    local_1e0 = 0;
    local_1f0 = (char ***)&local_198;
    local_1f8 = fVar29;
    local_1e8 = (char ***)pcVar25;
    FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 0x18),lVar5,
                  *(undefined4 *)(*(longlong *)(lVar5 + 0x38) + 0x20),&local_170);
  }
  if (local_1b8 != '\0') {
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(undefined4 *)(*(longlong *)(lVar4 + 0xec0) + 0x2508) = 7;
  }
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
  iVar3 = *(int *)(lVar4 + 0x108);
  if (iVar3 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar4 + 0x108) = iVar3 + -1;
  }
  FUN_18020e450(local_138);
  return uVar23;
}


