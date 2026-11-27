// 0x18019e970  FUN_18019e970
// size=2167 thunk=false
// signature: undefined FUN_18019e970()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18019e970(char *param_1,undefined1 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char *pcVar15;
  undefined1 uVar16;
  char cVar17;
  undefined4 uVar18;
  uint uVar19;
  longlong lVar20;
  float *pfVar21;
  byte *pbVar22;
  uint uVar23;
  byte bVar24;
  float *pfVar25;
  longlong lVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  char *in_stack_fffffffffffffea0;
  ulonglong uVar33;
  ulonglong in_stack_fffffffffffffeb8;
  float local_120 [6];
  float local_108;
  float local_104;
  float local_100 [6];
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  float fStack_d8;
  float fStack_d4;
  
  fVar1 = DAT_1803da6a4;
  pfVar25 = local_120 + 2;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar25 = &DAT_1803fb24c;
  }
  local_120[0] = 5.60519e-45;
  local_120[2] = 0.0;
  local_e0 = param_1;
  pfVar21 = local_120;
  if ((int)DAT_1803fb24c < 5) {
    pfVar21 = pfVar25;
  }
  DAT_1803fb24c = *pfVar21;
  lVar20 = (longlong)(int)DAT_1803fb24c;
  lVar26 = lVar20 * 200;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar31 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0x1238);
  if (param_1 == (char *)0x0) {
    fVar30 = 0.0;
  }
  else {
    in_stack_fffffffffffffeb8 = 0;
    in_stack_fffffffffffffea0 = param_1;
    FUN_18029e350(local_120 + 4,*(undefined8 *)(*(longlong *)(lVar9 + 0xec0) + 0x1228),fVar31,
                  DAT_180381308,DAT_180381384,param_1,0,0,0);
    fVar30 = (float)(int)(local_120[4] + DAT_180380ba8);
    fVar31 = local_120[5];
  }
  FUN_18027abf0(param_1);
  local_120[5] = fVar1 * DAT_180381048;
  local_120[4] = local_120[5] + fVar30;
  FUN_1802ac3c0("##seg",local_120 + 4);
  uVar16 = FUN_18026ee60(0);
  cVar17 = FUN_18027bce0(0,0,0);
  if ((cVar17 == '\0') || (cVar17 = FUN_18026ee60(0), cVar17 == '\0')) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar1 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0x1f0c);
  fVar2 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0x1f10);
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar3 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0x1f04);
  fVar4 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0x1f08);
  local_120[4] = fVar3;
  local_120[5] = fVar4;
  local_108 = fVar1;
  local_104 = fVar2;
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(lVar9 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar10 + 0x1520) + 0xce) = 1;
  lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x1520) + 0x2c8);
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar7 = DAT_180380bb0;
  pbVar22 = &DAT_180363c49;
  bVar24 = 0x73;
  uVar23 = ~*(uint *)(*(longlong *)(lVar9 + 0xec0) + 0x1ef8);
  uVar19 = uVar23;
  do {
    if (((bVar24 == 0x23) && (*pbVar22 == 0x23)) && (pbVar22[1] == 0x23)) {
      pbVar22 = pbVar22 + 2;
      uVar19 = uVar23;
    }
    else {
      uVar19 = uVar19 >> 8 ^
               *(uint *)(&DAT_180331380 + ((ulonglong)(uVar19 & 0xff) ^ (ulonglong)bVar24) * 4);
    }
    bVar24 = *pbVar22;
    pbVar22 = pbVar22 + 1;
  } while (bVar24 != 0);
  local_120[0] = (float)FUN_1802d3320(~uVar19,uVar16,(ulonglong)(uint)DAT_180380bb0 << 0x20,
                                      DAT_180381004);
  pbVar22 = &DAT_180363c51;
  bVar24 = 0x73;
  uVar19 = uVar23;
  do {
    if (((bVar24 == 0x23) && (*pbVar22 == 0x23)) && (pbVar22[1] == 0x23)) {
      pbVar22 = pbVar22 + 2;
      uVar19 = uVar23;
    }
    else {
      uVar19 = uVar19 >> 8 ^
               *(uint *)(&DAT_180331380 + ((ulonglong)(uVar19 & 0xff) ^ (ulonglong)bVar24) * 4);
    }
    bVar24 = *pbVar22;
    pbVar22 = pbVar22 + 1;
  } while (bVar24 != 0);
  local_100[2] = (float)FUN_1802d3320(~uVar19,param_2,(ulonglong)(uint)fVar7 << 0x20,DAT_180380fe8);
  fVar13 = DAT_180380ac0;
  local_100[4] = 1.0;
  local_100[0] = 0.0;
  local_120[2] = local_100[2];
  pfVar25 = local_100;
  if (0.0 <= local_100[2]) {
    pfVar25 = local_100 + 2;
  }
  local_e4 = (local_120[0] * DAT_180380a6c + DAT_180380a48) * *(float *)(&DAT_1803dc9b4 + lVar26);
  pfVar21 = local_100 + 4;
  if (local_100[2] <= fVar7) {
    pfVar21 = pfVar25;
  }
  fVar32 = (fVar2 - fVar4) * DAT_180380ac0;
  fVar5 = *pfVar21;
  local_100[4] = (*(float *)(&DAT_1803dc9d8 + lVar26) - *(float *)(&DAT_1803dc9a8 + lVar26)) * fVar5
                 + *(float *)(&DAT_1803dc9a8 + lVar26);
  local_100[5] = (*(float *)(&DAT_1803dc9dc + lVar26) - *(float *)(&DAT_1803dc9ac + lVar26)) * fVar5
                 + *(float *)(&DAT_1803dc9ac + lVar26);
  local_e8 = (*(float *)(&DAT_1803dc9e0 + lVar26) - *(float *)(&DAT_1803dc9b0 + lVar26)) * fVar5 +
             *(float *)(&DAT_1803dc9b0 + lVar26);
  local_e4 = (*(float *)(&DAT_1803dc9e4 + lVar26) * DAT_180380b74 - local_e4) * fVar5 + local_e4;
  uVar18 = FUN_180268ed0(local_100 + 4);
  uVar33 = (ulonglong)in_stack_fffffffffffffea0 & 0xffffffff00000000;
  FUN_180295000(lVar10,local_120 + 4,&local_108,uVar18,fVar32,uVar33);
  uVar18 = (undefined4)(uVar33 >> 0x20);
  local_100[0] = 1.0;
  local_100[4] = 0.0;
  local_104 = (local_120[0] * DAT_180380a58 + DAT_180380ad4) * *(float *)(&DAT_1803dc9c4 + lVar26);
  pfVar25 = local_100 + 4;
  if (0.0 <= local_120[2]) {
    pfVar25 = local_100 + 2;
  }
  local_100[2] = local_120[2];
  pfVar21 = local_100;
  if (local_120[2] <= fVar7) {
    pfVar21 = pfVar25;
  }
  fVar5 = *pfVar21;
  local_120[4] = (*(float *)(&DAT_1803dc9c8 + lVar26) - *(float *)(&DAT_1803dc9b8 + lVar26)) * fVar5
                 + *(float *)(&DAT_1803dc9b8 + lVar26);
  local_120[5] = (*(float *)(&DAT_1803dc9cc + lVar26) - *(float *)(&DAT_1803dc9bc + lVar26)) * fVar5
                 + *(float *)(&DAT_1803dc9bc + lVar26);
  local_108 = (*(float *)(&DAT_1803dc9d0 + lVar26) - *(float *)(&DAT_1803dc9c0 + lVar26)) * fVar5 +
              *(float *)(&DAT_1803dc9c0 + lVar26);
  local_104 = (*(float *)(&DAT_1803dc9d4 + lVar26) * DAT_180380ae4 - local_104) * fVar5 + local_104;
  uVar19 = FUN_180268ed0(local_120 + 4);
  pcVar15 = local_e0;
  if ((uVar19 & 0xff000000) != 0) {
    local_100[5] = fVar4 + fVar13;
    local_120[4] = _DAT_180380abc;
    if ((*(byte *)(lVar10 + 0x30) & 1) != 0) {
      local_120[4] = fVar13;
    }
    local_120[5] = fVar2 - local_120[4];
    local_120[4] = fVar1 - local_120[4];
    local_100[4] = fVar3 + fVar13;
    FUN_180294990(lVar10,local_100 + 4,local_120 + 4,fVar32,0);
    FUN_1802929d0(lVar10,*(undefined8 *)(lVar10 + 0x58),*(undefined4 *)(lVar10 + 0x50),uVar19,fVar7,
                  CONCAT44(uVar18,0x200));
    *(undefined4 *)(lVar10 + 0x50) = 0;
  }
  fVar14 = local_120[2];
  fVar6 = local_120[0];
  fVar5 = *(float *)(&DAT_1803dca18 + lVar26);
  fVar32 = *(float *)(&DAT_1803dca1c + lVar26);
  fVar11 = *(float *)(&DAT_1803dca20 + lVar26);
  fVar12 = *(float *)(&DAT_1803dca24 + lVar26);
  local_100[0] = 1.0;
  fStack_d4 = *(float *)((longlong)&DAT_1803dca30 + lVar26 + 4);
  local_100[4] = 0.0;
  local_120[4] = 1.0;
  local_120[2] = 0.0;
  local_100[2] = local_120[0];
  local_120[0] = fVar14;
  pfVar25 = local_100 + 4;
  if (0.0 <= fVar6) {
    pfVar25 = local_100 + 2;
  }
  pfVar21 = local_100;
  if (fVar6 <= fVar7) {
    pfVar21 = pfVar25;
  }
  fVar6 = *pfVar21;
  pfVar25 = local_120 + 2;
  if (0.0 <= fVar14) {
    pfVar25 = local_120;
  }
  fVar28 = fVar6 * (fVar5 - *(float *)(&DAT_1803dca28 + lVar26)) +
           *(float *)(&DAT_1803dca28 + lVar26);
  fVar29 = fVar6 * (fVar32 - *(float *)(&DAT_1803dca2c + lVar26)) +
           *(float *)(&DAT_1803dca2c + lVar26);
  fStack_d8 = fVar6 * (fVar11 - *(float *)(&DAT_1803dca30 + lVar20 * 0x19)) +
              *(float *)(&DAT_1803dca30 + lVar20 * 0x19);
  fStack_d4 = fVar6 * (fVar12 - fStack_d4) + fStack_d4;
  pfVar21 = local_120 + 4;
  if (fVar14 <= fVar7) {
    pfVar21 = pfVar25;
  }
  fVar7 = *pfVar21;
  fStack_d8 = (((*(float *)(&DAT_1803dc9d0 + lVar26) - fVar11) * _UNK_1803815e8 + fVar11) -
              fStack_d8) * fVar7 + fStack_d8;
  fStack_d4 = (((*(float *)(&DAT_1803dc9d4 + lVar26) - fVar12) * _UNK_1803815ec + fVar12) -
              fStack_d4) * fVar7 + fStack_d4;
  local_e0 = (char *)CONCAT44((((*(float *)(&DAT_1803dc9cc + lVar26) - fVar32) * _UNK_1803815e4 +
                               fVar32) - fVar29) * fVar7 + fVar29,
                              (((*(float *)(&DAT_1803dc9c8 + lVar26) - fVar5) * _DAT_1803815e0 +
                               fVar5) - fVar28) * fVar7 + fVar28);
  uVar19 = FUN_180268ed0(&local_e0);
  local_120[4] = (fVar1 + fVar3) * fVar13 - fVar30 * fVar13;
  local_120[5] = (fVar2 + fVar4) * fVar13 - fVar31 * fVar13;
  if ((((uVar19 & 0xff000000) != 0) && (pcVar15 != (char *)0x0)) && (*pcVar15 != '\0')) {
    local_e0 = *(char **)(lVar10 + 0x60);
    fStack_d8 = *(float *)(lVar10 + 0x68);
    fStack_d4 = *(float *)(lVar10 + 0x6c);
    FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar10 + 0x38) + 0x18),lVar10,
                  *(undefined4 *)(*(longlong *)(lVar10 + 0x38) + 0x20),local_120 + 4,uVar19,
                  &local_e0,pcVar15,0,in_stack_fffffffffffffeb8 & 0xffffffff00000000,0);
  }
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xec0) + 0x1520);
  iVar8 = *(int *)(lVar9 + 0x108);
  if (iVar8 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar9 + 0x108) = iVar8 + -1;
  }
  return uVar27;
}


