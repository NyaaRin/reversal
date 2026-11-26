// 0x180107f80  Features_LookBeam_LookBeamFeature_vfunc06
// size=1007 thunk=false
// signature: undefined Features_LookBeam_LookBeamFeature_vfunc06()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_LookBeam_LookBeamFeature_vfunc06(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  char *pcVar10;
  short *psVar11;
  longlong lVar12;
  undefined4 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_e8 [32];
  float local_c8;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  local_70 = 0x93fd561a96ab0c67;
  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a0,&local_70);
  lVar18 = *plVar9 + 0x28;
  local_80 = 0x77529aa166dd40cf;
  plVar9 = (longlong *)FUN_180241a30(lVar18,&local_b0,&local_80);
  pcVar10 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
  if (*pcVar10 != '\0') {
    local_80 = 0x2571ed13f906d189;
    plVar9 = (longlong *)FUN_180241a30(lVar18,&local_b0,&local_80);
    psVar11 = (short *)FUN_1802028c0(*plVar9 + 0x28);
    plVar9 = (longlong *)(psVar11 + 8);
    if (0xf < *(ulonglong *)(psVar11 + 0xc)) {
      psVar11 = *(short **)psVar11;
    }
    if ((((*plVar9 == 2) && (*psVar11 == 0x6432)) && (DAT_1803fa608 != 0)) &&
       (DAT_1803fa360 != (longlong *)0x0)) {
      pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar8 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar12 = (*pcVar4)(DAT_1803fa360,uVar8);
      if (lVar12 != 0) {
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar5 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if (((*(longlong *)(lVar5 + 0xec0) != 0) &&
            (lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520), lVar6 != 0)) &&
           (lVar6 = *(longlong *)(lVar6 + 0x2c8), lVar6 != 0)) {
          if (*(char *)(lVar5 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          uVar8 = *(undefined4 *)(*(longlong *)(lVar5 + 0xec0) + 0xc84);
          local_80 = 0x7a0431ca2acf40d6;
          plVar9 = (longlong *)FUN_180241a30(lVar18,&local_b0,&local_80);
          puVar13 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
          uVar1 = *puVar13;
          local_80 = 0x7a0436ca2acf4955;
          plVar9 = (longlong *)FUN_180241a30(lVar18,&local_b0,&local_80);
          puVar13 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
          uVar2 = *puVar13;
          local_80 = 0x7a0421ca2acf25a6;
          plVar9 = (longlong *)FUN_180241a30(lVar18,&local_b0,&local_80);
          puVar13 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
          local_80 = CONCAT44(uVar2,*puVar13);
          local_78 = uVar1;
          local_74 = uVar8;
          uVar8 = FUN_180268ed0(&local_80);
          fVar3 = DAT_180380ac0;
          local_b0 = 8.0;
          local_b8 = 0.5;
          local_80 = 0x2191660276572982;
          plVar9 = (longlong *)FUN_180241a30(lVar18,local_90,&local_80);
          pfVar14 = (float *)FUN_180202dc0(*plVar9 + 0x28);
          pfVar16 = &local_b8;
          if (fVar3 <= *pfVar14) {
            pfVar16 = pfVar14;
          }
          pfVar15 = &local_b0;
          if (*pfVar14 <= DAT_180380fa8) {
            pfVar15 = pfVar16;
          }
          fVar3 = *pfVar15;
          if (*(int *)(param_1 + 0x1a70) != *(int *)(DAT_1803fa608 + 4)) {
            *(int *)(param_1 + 0x1a70) = *(int *)(DAT_1803fa608 + 4);
            FUN_180108920(param_1,lVar12);
          }
          iVar17 = 1;
          if (0 < *(int *)(DAT_1803fa608 + 0x1c)) {
            do {
              if (0x81 < iVar17) {
                return;
              }
              lVar18 = (longlong)iVar17 * 0x1c + 0xc38 + param_1;
              if ((*(char *)(lVar18 + 0x18) != '\0') &&
                 (cVar7 = FUN_180021be0(lVar18,lVar18 + 0xc,&local_b8,&local_b0), cVar7 != '\0')) {
                local_80 = CONCAT44(local_ac,local_b0);
                local_70 = CONCAT44(local_b4,local_b8);
                local_c8 = fVar3;
                FUN_180294c90(lVar6,&local_70,&local_80,uVar8);
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 <= *(int *)(DAT_1803fa608 + 0x1c));
          }
        }
      }
    }
  }
  return;
}


