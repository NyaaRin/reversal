// 0x18019dc00  FUN_18019dc00
// size=728 thunk=false
// signature: undefined FUN_18019dc00()
// status: ok


undefined1 FUN_18019dc00(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  longlong lVar13;
  undefined *puVar14;
  char cVar15;
  int iVar16;
  int *piVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_b8;
  float fStack_b0;
  float fStack_ac;
  int local_a8 [28];
  
  piVar17 = local_a8;
  local_a8[1] = 4;
  if (-1 < DAT_1803fb24c) {
    piVar17 = &DAT_1803fb24c;
  }
  local_a8[0] = 0;
  piVar12 = local_a8 + 1;
  if (DAT_1803fb24c < 5) {
    piVar12 = piVar17;
  }
  DAT_1803fb24c = *piVar12;
  lVar13 = (longlong)DAT_1803fb24c;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_b8 = param_3;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar5 + 0xec0);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar19 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0xcc8);
  fVar19 = fVar19 + fVar19 + *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1238);
  if ((float)param_3 <= 0.0) {
    local_b8 = CONCAT44(local_b8._4_4_,fVar19);
  }
  if (local_b8._4_4_ <= 0.0) {
    local_b8 = CONCAT44(fVar19,(undefined4)local_b8);
  }
  uVar8 = FUN_1802ac3c0(param_1,&local_b8);
  bVar9 = FUN_18026ee60(0);
  cVar15 = *(char *)(lVar5 + 0x10);
  if (cVar15 == '\0') {
    __dyn_tls_on_demand_init();
    cVar15 = *(char *)(lVar5 + 0x10);
  }
  iVar16 = *(int *)(*(longlong *)(lVar5 + 0xec0) + 0x1594);
  if (iVar16 == 0) {
    bVar18 = false;
  }
  else {
    bVar18 = iVar16 == *(int *)(*(longlong *)(lVar5 + 0xec0) + 0x1ef8);
  }
  if (cVar15 == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar19 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1f0c);
  fVar20 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1f10);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pfVar1 = (float *)(*(longlong *)(lVar5 + 0xec0) + 0x1f04);
  fVar3 = *pfVar1;
  fVar4 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1f08);
  local_b8 = *(undefined8 *)pfVar1;
  fStack_b0 = fVar19;
  fStack_ac = fVar20;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar5 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar5 + 0x1520) + 0xce) = 1;
  iVar16 = 0x18;
  uVar11 = *(undefined4 *)(lVar6 + 0xccc);
  uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 0x1520) + 0x2c8);
  if (!bVar18) {
    iVar16 = bVar9 + 0x16;
  }
  uVar10 = FUN_18026a6a0(iVar16,DAT_180380bb0);
  FUN_180295000(uVar7,&local_b8,&fStack_b0,uVar10,uVar11,0);
  fVar21 = fVar19 - fVar3;
  fVar22 = fVar20 - fVar4;
  puVar14 = &DAT_1803dca18;
  fVar19 = (fVar3 + fVar19) * DAT_180380ac0;
  if (bVar9 == 0) {
    puVar14 = &DAT_1803dca28;
  }
  fVar20 = (fVar4 + fVar20) * DAT_180380ac0;
  puVar2 = (undefined8 *)(puVar14 + lVar13 * 200);
  local_b8 = *puVar2;
  fStack_b0 = *(float *)(puVar2 + 1);
  fStack_ac = *(float *)((longlong)puVar2 + 0xc);
  if (fVar22 <= fVar21) {
    fVar21 = fVar22;
  }
  fVar21 = fVar21 * DAT_180380a74;
  uVar11 = FUN_180268ed0(&local_b8);
  FUN_18019ab20(uVar7,param_2,CONCAT44(fVar20,fVar19),uVar11,fVar21);
  return uVar8;
}


