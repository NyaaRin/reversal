// 18019dc00  FUN_18019dc00
// signature: undefined FUN_18019dc00()
// status: ok


undefined1 FUN_18019dc00(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  longlong lVar14;
  undefined *puVar15;
  char cVar16;
  int iVar17;
  int *piVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_b8;
  float fStack_b0;
  float fStack_ac;
  int local_a8 [28];
  
  piVar18 = local_a8;
  local_a8[1] = 4;
  if (-1 < DAT_1803fb24c) {
    piVar18 = &DAT_1803fb24c;
  }
  local_a8[0] = 0;
  piVar13 = local_a8 + 1;
  if (DAT_1803fb24c < 5) {
    piVar13 = piVar18;
  }
  DAT_1803fb24c = *piVar13;
  lVar14 = (longlong)DAT_1803fb24c;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_b8 = param_3;
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar6 + 0xec0);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar20 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0xcc8);
  fVar20 = fVar20 + fVar20 + *(float *)(*(longlong *)(lVar6 + 0xec0) + 0x1238);
  if ((float)param_3 <= 0.0) {
    local_b8 = CONCAT44(local_b8._4_4_,fVar20);
  }
  if (local_b8._4_4_ <= 0.0) {
    local_b8 = CONCAT44(fVar20,(undefined4)local_b8);
  }
  uVar9 = FUN_1802ac3c0(param_1,&local_b8);
  bVar10 = FUN_18026ee60(0);
  cVar16 = *(char *)(lVar6 + 0x10);
  if (cVar16 == '\0') {
    __dyn_tls_on_demand_init();
    cVar16 = *(char *)(lVar6 + 0x10);
  }
  iVar17 = *(int *)(*(longlong *)(lVar6 + 0xec0) + 0x1594);
  if (iVar17 == 0) {
    bVar19 = false;
  }
  else {
    bVar19 = iVar17 == *(int *)(*(longlong *)(lVar6 + 0xec0) + 0x1ef8);
  }
  if (cVar16 == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar20 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0x1f0c);
  fVar3 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0x1f10);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pfVar1 = (float *)(*(longlong *)(lVar6 + 0xec0) + 0x1f04);
  fVar4 = *pfVar1;
  fVar5 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0x1f08);
  local_b8 = *(undefined8 *)pfVar1;
  fStack_b0 = fVar20;
  fStack_ac = fVar3;
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar6 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
  iVar17 = 0x18;
  uVar12 = *(undefined4 *)(lVar7 + 0xccc);
  uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 0x1520) + 0x2c8);
  if (!bVar19) {
    iVar17 = bVar10 + 0x16;
  }
  uVar11 = FUN_18026a6a0(iVar17,0x3f800000);
  FUN_180295000(uVar8,&local_b8,&fStack_b0,uVar11,uVar12,0);
  fVar21 = fVar20 - fVar4;
  fVar22 = fVar3 - fVar5;
  puVar15 = &DAT_1803dca18;
  if (bVar10 == 0) {
    puVar15 = &DAT_1803dca28;
  }
  puVar2 = (undefined8 *)(puVar15 + lVar14 * 200);
  local_b8 = *puVar2;
  fStack_b0 = *(float *)(puVar2 + 1);
  fStack_ac = *(float *)((longlong)puVar2 + 0xc);
  if (fVar22 <= fVar21) {
    fVar21 = fVar22;
  }
  uVar12 = FUN_180268ed0(&local_b8);
  FUN_18019ab20(uVar8,param_2,CONCAT44((fVar5 + fVar3) * 0.5,(fVar4 + fVar20) * 0.5),uVar12,
                fVar21 * 0.34);
  return uVar9;
}


