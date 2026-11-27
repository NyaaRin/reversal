// 0x180110860  Features_BulletTracers_BulletTracersFeature_vfunc09
// size=1107 thunk=false
// signature: undefined Features_BulletTracers_BulletTracersFeature_vfunc09()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_BulletTracers_BulletTracersFeature_vfunc09(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  ulonglong uVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  char *pcVar10;
  float *pfVar11;
  float *pfVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  ulonglong *puVar19;
  uint uVar20;
  undefined1 auStack_118 [32];
  float local_f8;
  float local_f0;
  float local_e8;
  float local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98 [2];
  undefined8 local_88 [2];
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  iVar8 = FUN_180110320();
  if (iVar8 == 0) {
    local_a8 = 0x34e7dc901c246087;
    local_a0 = 0x93fd561a96ab0c67;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_a0);
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_98,&local_a8);
    pcVar10 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
    fVar3 = DAT_180380bb0;
    if (*pcVar10 == '\0') {
      if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8);
      }
    }
    else if (DAT_1803fa608 != 0) {
      local_a0._0_4_ = 1.0;
      local_a8 = local_a8 & 0xffffffff00000000;
      local_98[0] = 0x93fd561a96ab0c67;
      local_88[0] = 0xaa0b5dfd20a7f83;
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_98);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_b8,local_88);
      pfVar11 = (float *)FUN_180202dc0(*plVar9 + 0x28);
      local_88[0] = 0x93fd561a96ab0c67;
      pfVar17 = (float *)&local_a8;
      if (0.0 <= *pfVar11) {
        pfVar17 = pfVar11;
      }
      pfVar12 = (float *)&local_a0;
      if (*pfVar11 <= fVar3) {
        pfVar12 = pfVar17;
      }
      fVar1 = *pfVar12;
      local_98[0] = 0xaa0a8dfd20a696c;
      local_a8._0_4_ = 1.0;
      local_a0._0_4_ = 0.0;
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b8,local_88);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_c8,local_98);
      pfVar11 = (float *)FUN_180202dc0(*plVar9 + 0x28);
      local_88[0] = 0x93fd561a96ab0c67;
      pfVar17 = (float *)&local_a0;
      if (0.0 <= *pfVar11) {
        pfVar17 = pfVar11;
      }
      pfVar12 = (float *)&local_a8;
      if (*pfVar11 <= fVar3) {
        pfVar12 = pfVar17;
      }
      fVar2 = *pfVar12;
      local_98[0] = 0xaa0a5dfd20a6453;
      local_a8._0_4_ = 1.0;
      local_a0._0_4_ = 0.0;
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b8,local_88);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_c8,local_98);
      pfVar11 = (float *)FUN_180202dc0(*plVar9 + 0x28);
      pfVar17 = (float *)&local_a0;
      if (0.0 <= *pfVar11) {
        pfVar17 = pfVar11;
      }
      pfVar12 = (float *)&local_a8;
      if (*pfVar11 <= fVar3) {
        pfVar12 = pfVar17;
      }
      local_88[0] = 0x93fd561a96ab0c67;
      fVar3 = *pfVar12;
      local_98[0] = 0x9995061b0b99dc3b;
      local_a8 = CONCAT44(local_a8._4_4_,4);
      local_a0 = CONCAT44(local_a0._4_4_,1);
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b8,local_88);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_c8,local_98);
      puVar13 = (ulonglong *)FUN_1802029c0(*plVar9 + 0x28);
      local_88[0] = 0x93fd561a96ab0c67;
      puVar19 = &local_a0;
      if (0 < (int)*puVar13) {
        puVar19 = puVar13;
      }
      puVar14 = &local_a8;
      if ((int)*puVar13 < 5) {
        puVar14 = puVar19;
      }
      uVar5 = *puVar14;
      local_98[0] = 0xdb13c9bf8c41683a;
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b8,local_88);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_c8,local_98);
      puVar15 = (undefined8 *)FUN_1802028c0(*plVar9 + 0x28);
      if (0xf < (ulonglong)puVar15[3]) {
        puVar15 = (undefined8 *)*puVar15;
      }
      lVar16 = FUN_180020280(puVar15);
      fVar6 = DAT_180380ad4;
      if (lVar16 != 0) {
        dVar4 = *(double *)(DAT_1803fa608 + 0x10);
        uVar20 = (uint)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 5);
        while (uVar20 = uVar20 - 1, -1 < (int)uVar20) {
          local_a8._4_4_ = (undefined4)(local_a8 >> 0x20);
          local_a8 = CONCAT44(local_a8._4_4_,0x3f800000);
          cVar7 = FUN_180110230(param_1,uVar20,(float)dVar4,&local_a8);
          if (cVar7 != '\0') {
            local_d0 = 8;
            local_e0 = (float)local_a8 * fVar6;
            lVar18 = (ulonglong)uVar20 * 0x20 + *(longlong *)(param_1 + 8);
            local_e8 = (float)local_a8;
            local_f8 = fVar2;
            local_f0 = fVar3;
            local_d8 = lVar16;
            FUN_1800203f0(lVar18,lVar18 + 0xc,(float)(int)uVar5,fVar1);
          }
        }
      }
    }
  }
  return;
}


