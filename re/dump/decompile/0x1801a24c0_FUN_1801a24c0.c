// 0x1801a24c0  FUN_1801a24c0
// size=1074 thunk=false
// signature: undefined FUN_1801a24c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1801a24c0(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  undefined1 uVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_b8 [32];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  ulonglong local_80;
  
  local_80 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  FUN_18019a460("Enable aimbot",param_3);
  local_94 = 5.60519e-45;
  pfVar13 = &local_98;
  local_98 = 0.0;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar13 = &DAT_1803fb24c;
  }
  pfVar12 = &local_94;
  if ((int)DAT_1803fb24c < 5) {
    pfVar12 = pfVar13;
  }
  DAT_1803fb24c = *pfVar12;
  lVar11 = (longlong)(int)DAT_1803fb24c;
  FUN_18027abf0("aim_enabled");
  pfVar13 = &local_94;
  local_98 = 1.5;
  local_94 = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar13 = &DAT_1803da6a4;
  }
  pfVar12 = &local_98;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar12 = pfVar13;
  }
  fVar1 = *pfVar12;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar14 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  fVar2 = *(float *)(lVar14 + 0x11c);
  fVar3 = *(float *)(lVar14 + 0x2c);
  fVar4 = *(float *)(lVar14 + 0x9c);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar14 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  fVar6 = *(float *)(lVar14 + 0x118);
  fVar5 = *(float *)(lVar14 + 0x11c);
  FUN_1802af4c0();
  lVar14 = 0xa8;
  if (*param_3 == '\0') {
    lVar14 = 0xb8;
  }
  FUN_1802aabb0((longlong)&PTR_s_Obsidian_1803dc970 + lVar14 + lVar11 * 200,&DAT_1803431ac,
                "Enable aimbot");
  FUN_18027f5b0(0,fVar1 * DAT_180380fa8);
  cVar9 = FUN_18019dc00("##bound_opts",4,0);
  if (cVar9 != '\0') {
    if (*(char *)(lVar8 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
    iVar7 = *(int *)(lVar11 + 0x108);
    if (iVar7 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar11 + 0x108) = iVar7 + -1;
    }
    FUN_180280fd0("##aim_enabled_popup");
    FUN_18027abf0("aim_enabled");
  }
  FUN_18027f5b0(0,DAT_180381384);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar15 = fVar1 * _DAT_18038114c;
  lVar11 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  fVar17 = *(float *)(lVar11 + 0x280);
  fVar16 = *(float *)(lVar11 + 0x28);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar8 + 0xec0);
  local_90 = 0.0;
  local_94 = fVar1 * _DAT_1803810fc;
  *(undefined1 *)(*(longlong *)(lVar11 + 0x1520) + 0xce) = 1;
  lVar11 = *(longlong *)(lVar11 + 0x1520);
  *(undefined1 *)(lVar11 + 0x159) = 1;
  *(float *)(lVar11 + 0x118) =
       (*(float *)(lVar11 + 0x28) - *(float *)(lVar11 + 0x98)) + ((fVar17 - fVar16) - fVar15);
  FUN_1802d31a0("##bind",param_4,&local_94,1);
  FUN_18027f5b0(0,fVar1 * DAT_180380f40);
  uVar10 = FUN_1801a0b60("##state",param_3);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar17 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0xcc8);
  fVar16 = fVar17 + fVar17 + *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x1238) + DAT_180380e28;
  fVar17 = fVar1 * DAT_18038104c;
  if (fVar1 * DAT_18038104c <= fVar16) {
    fVar17 = fVar16;
  }
  FUN_1801a1860(fVar17 + (fVar2 - fVar3) + fVar4);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520) + 0x28);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_88 = fVar17 + fVar5;
  lVar11 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  local_8c = (*(float *)(lVar11 + 0x280) - *(float *)(lVar11 + 0x28)) + fVar1;
  local_94 = fVar6;
  local_90 = fVar5;
  FUN_18019a7a0("Enable aimbot",&local_94);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  iVar7 = *(int *)(lVar11 + 0x108);
  if (iVar7 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar11 + 0x108) = iVar7 + -1;
  }
  return uVar10;
}


