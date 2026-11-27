// 0x180110d10  FUN_180110d10
// size=1134 thunk=false
// signature: undefined FUN_180110d10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180110d10(longlong param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  uint local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  longlong local_c8;
  float local_c0;
  float local_bc;
  char local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  float local_90;
  undefined8 local_8c;
  undefined8 local_80;
  float local_78;
  ulonglong local_70;
  
  local_70 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  puVar1 = (undefined1 *)(param_1 + 0x2d0);
  *puVar1 = 0;
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  local_c8 = param_1;
  local_80 = puVar1;
  cVar6 = FUN_180110cc0();
  if ((((cVar6 != '\0') && (DAT_180423988 != '\0')) && (cVar6 = FUN_180071c60(), cVar6 != '\0')) &&
     (DAT_1803fa668 != (longlong *)0x0)) {
    local_8c = 0;
    local_90 = 0.0;
    (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_90);
    cVar6 = FUN_1800732a0(&local_90,&local_e8,&local_d8);
    if (cVar6 != '\0') {
      iVar10 = 0;
      local_b0 = 0;
      local_a0 = 0;
      local_98 = 0xe;
      local_c0 = DAT_1803e9230;
      local_bc = DAT_1803e9208;
      local_b8 = DAT_18042398c;
      pcVar5 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
      local_b0 = (*pcVar5)(DAT_1803fa360,uVar7);
      local_a8 = DAT_1803ff0f0;
      cVar6 = FUN_1800aa340(&local_e8,&local_d8,&local_c0,param_1 + 8);
      if ((cVar6 != '\0') &&
         (*puVar1 = 0 < *(int *)(param_1 + 0x2a8), 0 < *(int *)(param_1 + 0x2a8))) {
        *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x2c0);
        *(undefined1 *)(param_1 + 0x2e8) = *(undefined1 *)(param_1 + 0x2ac);
        if (DAT_1803fa608 == (float *)0x0) {
          dVar14 = 0.0;
        }
        else {
          dVar14 = (double)*DAT_1803fa608;
        }
        if (_DAT_180425a00 <= dVar14) {
          _DAT_180425a00 = dVar14 + _DAT_180380cd8;
          FUN_1802d4050(&local_90,&local_80);
          bVar11 = local_b8 != '\0';
          local_118 = (double)local_bc;
          local_120 = (double)local_c0;
          local_128 = (double)local_e0;
          local_130 = (double)local_e4;
          local_138 = (double)local_e8;
          fVar15 = local_d4 * local_80._4_4_ + local_d8 * (float)local_80 + local_d0 * local_78;
          fVar12 = DAT_180381384;
          if (DAT_180381384 <= fVar15) {
            fVar12 = fVar15;
          }
          fVar15 = DAT_180380bb0;
          if (fVar12 <= DAT_180380bb0) {
            fVar15 = fVar12;
          }
          fVar12 = acosf(fVar15);
          local_f8 = *(undefined4 *)(param_1 + 0x2c8);
          local_100 = *(undefined4 *)(param_1 + 0x2c4);
          local_108 = *(undefined4 *)(param_1 + 0x2a8);
          local_110 = (uint)bVar11;
          FUN_180014410("[BP] view=(%.1f,%.1f) dRay=%.2fdeg org=(%.0f,%.0f,%.0f) pen=%.1f dmg=%.0f noric=%d segs=%d %dp %dr\n"
                        ,(double)local_90,(double)(float)local_8c,(double)(fVar12 * DAT_1803810c0));
          if (0 < *(int *)(param_1 + 0x2a8)) {
            do {
              if (5 < iVar10) {
                return;
              }
              lVar8 = (longlong)iVar10;
              iVar4 = *(int *)(param_1 + 0x20 + lVar8 * 0x30);
              if (iVar4 == 1) {
                uVar9 = 0x50;
              }
              else {
                uVar9 = 0x44;
                if (iVar4 == 2) {
                  uVar9 = 0x52;
                }
              }
              uVar7 = *(undefined4 *)(param_1 + 0x30 + lVar8 * 0x30);
              fVar12 = *(float *)(param_1 + 0x24 + lVar8 * 0x30);
              fVar15 = *(float *)(param_1 + 0x1c + lVar8 * 0x30);
              fVar2 = *(float *)(param_1 + 0x18 + lVar8 * 0x30);
              fVar3 = *(float *)(param_1 + 0x14 + lVar8 * 0x30);
              fVar17 = fVar3 - *(float *)(param_1 + 8 + lVar8 * 0x30);
              fVar13 = fVar2 - *(float *)(param_1 + 0xc + lVar8 * 0x30);
              fVar16 = fVar15 - *(float *)(param_1 + 0x10 + lVar8 * 0x30);
              fVar13 = (float)(*(code *)PTR_FUN_1803da018)
                                        (fVar13 * fVar13 + fVar17 * fVar17 + fVar16 * fVar16);
              local_120 = (double)CONCAT44(local_120._4_4_,uVar7);
              local_138 = (double)fVar2;
              local_130 = (double)fVar15;
              local_128 = (double)fVar12;
              FUN_180014410("[BP]   %c len=%.0fu end=(%.0f,%.0f,%.0f) dmg=%.0f ply=%d\n",uVar9,
                            (double)fVar13,(double)fVar3);
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(param_1 + 0x2a8));
          }
        }
      }
    }
  }
  return;
}


