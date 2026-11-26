// 0x1801a2900  FUN_1801a2900
// size=1167 thunk=false
// signature: undefined FUN_1801a2900()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1801a2900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,float param_6,longlong param_7,longlong param_8)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  char cVar11;
  undefined1 uVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  local_c0 = param_4;
  FUN_18019a460(param_1,0);
  local_c4 = 5.60519e-45;
  pfVar15 = &local_c8;
  local_c8 = 0.0;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar15 = &DAT_1803fb24c;
  }
  pfVar14 = &local_c4;
  if ((int)DAT_1803fb24c < 5) {
    pfVar14 = pfVar15;
  }
  DAT_1803fb24c = *pfVar14;
  lVar13 = (longlong)(int)DAT_1803fb24c;
  FUN_18027abf0(param_2);
  fVar16 = DAT_180380b20;
  pfVar15 = &local_c4;
  local_c8 = 1.5;
  local_c4 = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar15 = &DAT_1803da6a4;
  }
  pfVar14 = &local_c8;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar14 = pfVar15;
  }
  fVar17 = *pfVar14;
  param_6 = fVar17 * param_6;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  fVar2 = *(float *)(lVar9 + 0x11c);
  fVar3 = *(float *)(lVar9 + 0x2c);
  fVar4 = *(float *)(lVar9 + 0x9c);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  fVar5 = *(float *)(lVar9 + 0x11c);
  uVar10 = *(undefined8 *)(lVar9 + 0x118);
  FUN_1802af4c0();
  FUN_1802aabb0(&DAT_1803dca28 + lVar13 * 200,&DAT_1803431ac,param_1);
  if (param_8 != 0) {
    pfVar15 = &local_c4;
    local_c8 = 1.5;
    local_c4 = 0.75;
    if (fVar16 <= DAT_1803da6a4) {
      pfVar15 = &DAT_1803da6a4;
    }
    pfVar14 = &local_c8;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar14 = pfVar15;
    }
    FUN_18027f5b0(0,*pfVar14 * DAT_180380fa8);
    cVar11 = FUN_18019dc00("##combo_opts",4,0);
    if (cVar11 != '\0') {
      if (*(char *)(lVar8 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
      iVar7 = *(int *)(lVar13 + 0x108);
      if (iVar7 < 2) {
        FUN_18027e9c0("Calling PopID() too many times!");
      }
      else {
        *(int *)(lVar13 + 0x108) = iVar7 + -1;
      }
      FUN_180280fd0(param_8);
      FUN_18027abf0(param_2);
    }
  }
  FUN_18027f5b0(0,DAT_180381384);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  fVar16 = *(float *)(lVar13 + 0x280);
  fVar6 = *(float *)(lVar13 + 0x28);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar11 = *(char *)(lVar8 + 0x10);
  lVar13 = *(longlong *)(lVar8 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar13 + 0x1520) + 0xce) = 1;
  lVar13 = *(longlong *)(lVar13 + 0x1520);
  *(undefined1 *)(lVar13 + 0x159) = 1;
  *(float *)(lVar13 + 0x118) =
       (*(float *)(lVar13 + 0x28) - *(float *)(lVar13 + 0x98)) + ((fVar16 - fVar6) - param_6);
  if (cVar11 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(lVar8 + 0xec0);
  puVar1 = (uint *)(lVar13 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(float *)(lVar13 + 0x1ed8) = param_6;
  local_d8 = param_5;
  uVar12 = FUN_1802b1200("##value",param_3);
  if ((param_7 != 0) && (cVar11 = FUN_18026ee60(0), cVar11 != '\0')) {
    FUN_180280d00(&DAT_1803431ac,param_7);
  }
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar17 = fVar17 * DAT_18038104c;
  fVar16 = *(float *)(*(longlong *)(lVar8 + 0xec0) + 0xcc8);
  fVar16 = fVar16 + fVar16 + *(float *)(*(longlong *)(lVar8 + 0xec0) + 0x1238) + DAT_180380e28;
  if (fVar17 <= fVar16) {
    fVar17 = fVar16;
  }
  FUN_1801a1860((fVar2 - fVar3) + fVar4 + fVar17);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar16 = *(float *)(*(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520) + 0x28);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_b4 = fVar5 + fVar17;
  lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  local_b8 = (*(float *)(lVar13 + 0x280) - *(float *)(lVar13 + 0x28)) + fVar16;
  local_c0 = uVar10;
  FUN_18019a7a0(param_1,&local_c0);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0xec0) + 0x1520);
  iVar7 = *(int *)(lVar13 + 0x108);
  if (iVar7 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar13 + 0x108) = iVar7 + -1;
  }
  return uVar12;
}


