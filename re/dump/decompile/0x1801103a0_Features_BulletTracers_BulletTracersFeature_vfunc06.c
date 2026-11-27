// 0x1801103a0  Features_BulletTracers_BulletTracersFeature_vfunc06
// size=1209 thunk=false
// signature: undefined Features_BulletTracers_BulletTracersFeature_vfunc06()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_BulletTracers_BulletTracersFeature_vfunc06(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  longlong *plVar12;
  char *pcVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_108 [32];
  float local_e8;
  float local_d8 [2];
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  iVar10 = FUN_180110320();
  if (iVar10 == 1) {
    local_a8 = 0x34e7dc901c246087;
    local_a0 = 0x93fd561a96ab0c67;
    plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_c8,&local_a0);
    plVar12 = (longlong *)FUN_180241a30(*plVar12 + 0x28,&local_b8,&local_a8);
    pcVar13 = (char *)FUN_1801fcfc0(*plVar12 + 0x28);
    if (*pcVar13 == '\0') {
      if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8);
      }
    }
    else if (DAT_1803fa608 != 0) {
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar6 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if ((*(longlong *)(lVar6 + 0xec0) != 0) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0xec0) + 0x1520) != 0)) {
        if (*(char *)(lVar6 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar7 = *(longlong *)(lVar6 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar7 + 0x1520) + 0xce) = 1;
        fVar3 = DAT_180380bb0;
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x1520) + 0x2c8);
        if (lVar7 != 0) {
          local_d0 = 1.0;
          local_d8[0] = 0.0;
          local_a0 = 0x93fd561a96ab0c67;
          local_a8 = 0xaa0b5dfd20a7f83;
          plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_c8,&local_a0);
          plVar12 = (longlong *)FUN_180241a30(*plVar12 + 0x28,&local_b8,&local_a8);
          pfVar14 = (float *)FUN_180202dc0(*plVar12 + 0x28);
          local_a0 = 0x93fd561a96ab0c67;
          pfVar16 = local_d8;
          if (0.0 <= *pfVar14) {
            pfVar16 = pfVar14;
          }
          pfVar15 = &local_d0;
          if (*pfVar14 <= fVar3) {
            pfVar15 = pfVar16;
          }
          fVar1 = *pfVar15;
          local_a8 = 0xaa0a8dfd20a696c;
          local_d8[0] = 1.0;
          local_d0 = 0.0;
          plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_c8,&local_a0);
          plVar12 = (longlong *)FUN_180241a30(*plVar12 + 0x28,&local_b8,&local_a8);
          pfVar14 = (float *)FUN_180202dc0(*plVar12 + 0x28);
          local_a0 = 0x93fd561a96ab0c67;
          pfVar16 = &local_d0;
          if (0.0 <= *pfVar14) {
            pfVar16 = pfVar14;
          }
          pfVar15 = local_d8;
          if (*pfVar14 <= fVar3) {
            pfVar15 = pfVar16;
          }
          fVar2 = *pfVar15;
          local_a8 = 0xaa0a5dfd20a6453;
          local_d8[0] = 1.0;
          local_d0 = 0.0;
          plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_c8,&local_a0);
          plVar12 = (longlong *)FUN_180241a30(*plVar12 + 0x28,&local_b8,&local_a8);
          pfVar14 = (float *)FUN_180202dc0(*plVar12 + 0x28);
          pfVar16 = &local_d0;
          if (0.0 <= *pfVar14) {
            pfVar16 = pfVar14;
          }
          pfVar15 = local_d8;
          if (*pfVar14 <= fVar3) {
            pfVar15 = pfVar16;
          }
          local_a0 = 0x93fd561a96ab0c67;
          fVar3 = *pfVar15;
          local_a8 = 0x9995061b0b99dc3b;
          local_d8[0] = 5.60519e-45;
          local_d0 = 1.4013e-45;
          plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_c8,&local_a0);
          plVar12 = (longlong *)FUN_180241a30(*plVar12 + 0x28,&local_b8,&local_a8);
          pfVar14 = (float *)FUN_1802029c0(*plVar12 + 0x28);
          pfVar16 = &local_d0;
          if (0 < (int)*pfVar14) {
            pfVar16 = pfVar14;
          }
          pfVar15 = local_d8;
          if ((int)*pfVar14 < 5) {
            pfVar15 = pfVar16;
          }
          uVar18 = (uint)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 5);
          fVar5 = *pfVar15;
          dVar4 = *(double *)(DAT_1803fa608 + 0x10);
          while (uVar18 = uVar18 - 1, -1 < (int)uVar18) {
            local_d8[0] = 1.0;
            cVar9 = FUN_180110230(param_1,uVar18,(float)dVar4,local_d8);
            if ((cVar9 != '\0') &&
               (lVar17 = (ulonglong)uVar18 * 0x20 + *(longlong *)(param_1 + 8),
               cVar9 = FUN_180021be0(lVar17,lVar17 + 0xc,&local_b8,&local_d0), fVar8 = local_d8[0],
               cVar9 != '\0')) {
              if (*(char *)(lVar6 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              local_a8 = CONCAT44(local_cc,local_d0);
              local_bc = fVar8 * *(float *)(*(longlong *)(lVar6 + 0xec0) + 0xc84);
              local_a0 = CONCAT44(local_b4,local_b8);
              local_c8 = fVar1;
              local_c4 = fVar2;
              local_c0 = fVar3;
              uVar11 = FUN_180268ed0(&local_c8);
              local_e8 = (float)(int)fVar5;
              FUN_180294c90(lVar7,&local_a0,&local_a8,uVar11);
            }
          }
        }
      }
    }
  }
  return;
}


