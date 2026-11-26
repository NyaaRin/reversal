// 0x1801a2180  FUN_1801a2180
// size=824 thunk=false
// signature: undefined FUN_1801a2180()
// status: ok


undefined1 FUN_1801a2180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 uVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  
  FUN_18019a460("Color",0);
  local_94 = 5.60519e-45;
  pfVar15 = &local_98;
  local_98 = 0.0;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar15 = &DAT_1803fb24c;
  }
  pfVar14 = &local_94;
  if ((int)DAT_1803fb24c < 5) {
    pfVar14 = pfVar15;
  }
  DAT_1803fb24c = *pfVar14;
  lVar13 = (longlong)(int)DAT_1803fb24c;
  FUN_18027abf0("draw_fov_col");
  pfVar15 = &local_94;
  local_98 = 1.5;
  local_94 = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar15 = &DAT_1803da6a4;
  }
  pfVar14 = &local_98;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar14 = pfVar15;
  }
  fVar1 = *pfVar14;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  fVar2 = *(float *)(lVar11 + 0x11c);
  fVar3 = *(float *)(lVar11 + 0x2c);
  fVar4 = *(float *)(lVar11 + 0x9c);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  uVar8 = *(undefined4 *)(lVar11 + 0x118);
  fVar5 = *(float *)(lVar11 + 0x11c);
  FUN_1802af4c0();
  FUN_1802aabb0(&DAT_1803dca28 + lVar13 * 200,&DAT_1803431ac,"Color");
  FUN_18027f5b0(0,DAT_180381384);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  fVar17 = *(float *)(lVar13 + 0x280);
  fVar16 = *(float *)(lVar13 + 0x28);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar6 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0xcc8);
  fVar7 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1238);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(lVar10 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar13 + 0x1520) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar13 + 0x1520);
  *(undefined1 *)(lVar13 + 0x159) = 1;
  *(float *)(lVar13 + 0x118) =
       (*(float *)(lVar13 + 0x28) - *(float *)(lVar13 + 0x98)) +
       ((fVar17 - fVar16) - (fVar6 + fVar6 + fVar7));
  uVar12 = FUN_1802bac60("##value",param_3,0x40020);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar17 = *(float *)(*(longlong *)(lVar10 + 0xec0) + 0xcc8);
  fVar16 = fVar17 + fVar17 + *(float *)(*(longlong *)(lVar10 + 0xec0) + 0x1238) + DAT_180380e28;
  fVar17 = fVar1 * DAT_18038104c;
  if (fVar1 * DAT_18038104c <= fVar16) {
    fVar17 = fVar16;
  }
  FUN_1801a1860(fVar17 + (fVar2 - fVar3) + fVar4);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520) + 0x28);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_84 = fVar17 + fVar5;
  lVar13 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  local_88 = (*(float *)(lVar13 + 0x280) - *(float *)(lVar13 + 0x28)) + fVar1;
  local_90 = uVar8;
  local_8c = fVar5;
  FUN_18019a7a0("Color",&local_90);
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(*(longlong *)(lVar10 + 0xec0) + 0x1520);
  iVar9 = *(int *)(lVar13 + 0x108);
  if (iVar9 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar13 + 0x108) = iVar9 + -1;
  }
  return uVar12;
}


