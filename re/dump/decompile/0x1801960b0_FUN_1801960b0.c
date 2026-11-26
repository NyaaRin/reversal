// 0x1801960b0  FUN_1801960b0
// size=658 thunk=false
// signature: undefined FUN_1801960b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1801960b0(void)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  float local_d8;
  int local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  longlong local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  char local_a0;
  int local_98;
  int local_94;
  ulonglong local_90;
  
  local_90 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if (((DAT_1803fa668 != (longlong *)0x0) && (DAT_1803fa360 != (longlong *)0x0)) &&
     (DAT_1803fa608 != 0)) {
    pfVar7 = (float *)FUN_1800ce370(&local_b8);
    fVar1 = *pfVar7;
    fVar2 = pfVar7[1];
    if ((0.0 < fVar1) && (0.0 < fVar2)) {
      local_98 = 0;
      local_94 = 0;
      local_c0 = fVar2;
      local_bc = fVar1;
      (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_98,&local_94);
      if ((1 < local_98) && (1 < local_94)) {
        pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar8 = (*pcVar3)(DAT_1803fa360,uVar6);
        fVar4 = DAT_180380bb0;
        if (lVar8 != 0) {
          fVar15 = (float)local_98 * DAT_180380ac0;
          fVar16 = (float)local_94 * DAT_180380ac0;
          iVar11 = 0x80;
          if (*(int *)(DAT_1803fa608 + 0x1c) < 0x80) {
            iVar11 = *(int *)(DAT_1803fa608 + 0x1c);
          }
          local_d0 = 0;
          local_d8 = DAT_180381308;
          iVar10 = 1;
          fVar17 = DAT_180381308;
          local_cc = fVar15;
          local_c8 = fVar16;
          local_c4 = iVar11;
          local_b8 = lVar8;
          do {
            while( true ) {
              if (iVar11 < iVar10) {
                return local_d0;
              }
              local_d4 = iVar10;
              lVar9 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar10);
              if (((lVar9 != 0) && (cVar5 = FUN_1800c5030(lVar9,lVar8), cVar5 != '\0')) &&
                 (FUN_18018ac10(&local_b0,lVar9,0), local_a0 != '\0')) break;
LAB_18019632e:
              iVar10 = iVar10 + 1;
            }
            fVar13 = local_b0;
            if ((local_b0 <= fVar15) && (fVar13 = fVar15, local_a8 < fVar15)) {
              fVar13 = local_a8;
            }
            fVar12 = local_ac;
            if ((local_ac <= fVar16) && (fVar12 = fVar16, local_a4 < fVar16)) {
              fVar12 = local_a4;
            }
            fVar14 = (fVar13 - fVar15) / fVar1;
            fVar13 = (fVar12 - fVar16) / fVar2;
            fVar13 = fVar13 * fVar13 + fVar14 * fVar14;
            if (fVar4 < fVar13) goto LAB_18019632e;
            if (fVar13 < fVar17) {
              fVar17 = fVar13;
              local_d8 = fVar13;
              local_d0 = iVar10;
            }
            iVar10 = iVar10 + 1;
          } while( true );
        }
      }
    }
  }
  return 0;
}


