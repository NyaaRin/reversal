// 0x1801074d0  Features_LookBeam_LookBeamFeature_vfunc15
// size=2254 thunk=false
// signature: undefined Features_LookBeam_LookBeamFeature_vfunc15()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_LookBeam_LookBeamFeature_vfunc15(void)

{
  float fVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  char *pcVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *plVar13;
  byte *pbVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  float *pfVar19;
  int iVar20;
  longlong lVar21;
  longlong in_R9;
  longlong lVar22;
  float fVar23;
  undefined1 auStack_c8 [32];
  float local_a8 [2];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  float local_80;
  float local_7c;
  float local_78 [2];
  ulonglong local_70 [3];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_70[0] = 0x214e9812b55edc3;
  local_78[0] = -2.7634367e-25;
  local_78[1] = -6.395108e-27;
  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70 + 1,local_78);
  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_a0,local_70);
  pcVar10 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
  if (*pcVar10 != '\0') {
    local_78[0] = -2.7634367e-25;
    local_78[1] = -6.395108e-27;
    local_70[0] = 0xd7a75c528ea57217;
    plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a0,local_78);
    plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_70 + 1,local_70);
    piVar11 = (int *)FUN_1802029c0(*plVar9 + 0x28);
    if (((*piVar11 == 0) && (DAT_1804236a5 == '\0')) && (*(longlong *)(in_R9 + 0x18) != 0)) {
      pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
      plVar9 = (longlong *)(*pcVar2)(DAT_1803fa360,uVar5);
      lVar22 = DAT_1803fa608;
      if (((plVar9 != (longlong *)0x0) && (DAT_1803fa608 != 0)) &&
         (DAT_1803fa360 != (longlong *)0x0)) {
        iVar20 = *(int *)(in_R9 + 0x44);
        plVar12 = DAT_1803fa360;
        iVar6 = FUN_180071b00(iVar20);
        if (0 < iVar6) {
          iVar20 = iVar6;
        }
        if (((0 < iVar20) && (iVar20 <= *(int *)(lVar22 + 0x1c))) &&
           ((plVar12 = (longlong *)(**(code **)(*plVar12 + 0x18))(plVar12,iVar20),
            plVar12 != (longlong *)0x0 &&
            ((((plVar12 != plVar9 &&
               (plVar13 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12),
               plVar13 != (longlong *)0x0)) &&
              (cVar3 = (**(code **)(*plVar13 + 0x40))(plVar13), cVar3 == '\0')) &&
             ((0 < iVar6 || (cVar3 = FUN_18001c330(plVar12), cVar3 != '\0')))))))) {
          local_78[0] = -2.7634367e-25;
          local_78[1] = -6.395108e-27;
          plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a0,local_78);
          lVar22 = *plVar13 + 0x28;
          local_70[0] = 0x7aad0bc54d55fc8a;
          plVar13 = (longlong *)FUN_180241a30(lVar22,local_70 + 1,local_70);
          pcVar10 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
          if ((*pcVar10 == '\0') ||
             ((iVar7 = FUN_18001c560(plVar9), iVar7 < 1 ||
              (iVar8 = FUN_18001c560(plVar12), iVar8 != iVar7)))) {
            local_70[0] = 0xcd347fc1a3829be9;
            plVar13 = (longlong *)FUN_180241a30(lVar22,local_70 + 1,local_70);
            pcVar10 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
            if ((*pcVar10 == '\0') ||
               ((cVar3 = FUN_18001e0a0(plVar12), cVar3 != '\b' || (0 < iVar6)))) {
              local_70[0] = 0xa0267eea20a40d9a;
              plVar13 = (longlong *)FUN_180241a30(lVar22,local_70 + 1,local_70);
              pcVar10 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
              if (((*pcVar10 == '\0') ||
                  (pbVar14 = (byte *)FUN_18001d710(plVar12,local_78), (*pbVar14 & 0x40) == 0)) &&
                 ((0x80 < iVar20 ||
                  ((((DAT_180425fd0 == (code *)0x0 ||
                     (cVar3 = (*DAT_180425fd0)(iVar20), cVar3 == '\0')) &&
                    ((DAT_180426170 == (code *)0x0 ||
                     (cVar3 = (*DAT_180426170)(iVar20), cVar3 == '\0')))) &&
                   ((DAT_1804009f0 == (code *)0x0 ||
                    (cVar3 = (*DAT_1804009f0)(iVar20), cVar3 == '\0')))))))) {
                local_70[0] = 0xdaefe600c147795;
                local_78[0] = -2.7634367e-25;
                local_78[1] = -6.395108e-27;
                plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a0,local_78);
                plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_70 + 1,local_70);
                pfVar15 = (float *)FUN_180202dc0(*plVar13 + 0x28);
                fVar1 = *pfVar15;
                if ((0 < iVar6) &&
                   (plVar13 = (longlong *)
                              (**(code **)(*DAT_1803fa360 + 0x18))
                                        (DAT_1803fa360,*(undefined4 *)(in_R9 + 0x44)),
                   plVar13 != (longlong *)0x0)) {
                  plVar12 = plVar13;
                }
                if ((0.0 < fVar1) && (plVar12 != (longlong *)0x0)) {
                  pfVar15 = (float *)(**(code **)(*plVar9 + 0x48))(plVar9);
                  pfVar16 = (float *)(**(code **)(*plVar12 + 0x48))(plVar12);
                  fVar23 = (float)(*(code *)PTR_FUN_1803da018)
                                            ((pfVar15[1] - pfVar16[1]) * (pfVar15[1] - pfVar16[1]) +
                                             (*pfVar15 - *pfVar16) * (*pfVar15 - *pfVar16) +
                                             (pfVar15[2] - pfVar16[2]) * (pfVar15[2] - pfVar16[2]));
                  if (fVar1 < fVar23) {
                    return;
                  }
                }
                lVar22 = FUN_180107340();
                if (lVar22 != 0) {
                  local_70[0] = CONCAT44(local_70[0]._4_4_,1);
                  local_a8[0] = 0.0;
                  lVar21 = *(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                  local_78[0] = -2.7634367e-25;
                  local_78[1] = -6.395108e-27;
                  *(undefined1 *)(lVar21 + 0xf48) = 1;
                  local_70[1] = 0xd7a75c528ea57217;
                  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a0,local_78);
                  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_90,local_70 + 1);
                  pfVar16 = (float *)FUN_1802029c0(*plVar9 + 0x28);
                  local_70[1] = 0x93fd561a96ab0c67;
                  pfVar15 = local_a8;
                  if (-1 < (int)*pfVar16) {
                    pfVar15 = pfVar16;
                  }
                  pfVar19 = (float *)local_70;
                  if ((int)*pfVar16 < 2) {
                    pfVar19 = pfVar15;
                  }
                  *(float *)(lVar21 + 0xf0c) = *pfVar19;
                  *(longlong *)(lVar21 + 0xf40) = lVar22;
                  local_78[0] = 2.829359e-35;
                  local_78[1] = 4.33939e-15;
                  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_70 + 1);
                  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_a0,local_78);
                  puVar17 = (undefined4 *)FUN_1802029c0(*plVar9 + 0x28);
                  lVar22 = FUN_1801070a0(*puVar17);
                  *(longlong *)(lVar21 + 0xf28) = lVar22;
                  if (lVar22 == 0) {
                    uVar18 = FUN_1801073d0();
                    *(undefined8 *)(lVar21 + 0xf28) = uVar18;
                  }
                  local_70[1] = 0x93fd561a96ab0c67;
                  local_78[0] = 7.690321e+20;
                  local_78[1] = -1.1567695e+22;
                  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_70 + 1);
                  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_a0,local_78);
                  puVar17 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
                  local_70[1] = 0x93fd561a96ab0c67;
                  *(undefined4 *)(lVar21 + 0xf30) = *puVar17;
                  local_78[0] = 7.686341e+20;
                  local_78[1] = -1.1563948e+22;
                  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_70 + 1);
                  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_a0,local_78);
                  puVar17 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
                  local_70[1] = 0x93fd561a96ab0c67;
                  *(undefined4 *)(lVar21 + 0xf34) = *puVar17;
                  local_78[0] = 7.685423e+20;
                  local_78[1] = -1.1563083e+22;
                  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_70 + 1);
                  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_a0,local_78);
                  puVar17 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
                  local_70[1] = 0x93fd561a96ab0c67;
                  *(undefined4 *)(lVar21 + 0xf38) = *puVar17;
                  local_78[0] = 1.7498408e+09;
                  local_78[1] = -6.542809e-27;
                  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_70 + 1);
                  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_a0,local_78);
                  puVar17 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
                  local_70[1] = 0x93fd561a96ab0c67;
                  *(undefined4 *)(lVar21 + 0xf18) = *puVar17;
                  local_78[0] = 1.7486715e+09;
                  local_78[1] = -6.538668e-27;
                  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_70 + 1);
                  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_a0,local_78);
                  puVar17 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
                  local_70[1] = 0x93fd561a96ab0c67;
                  *(undefined4 *)(lVar21 + 0xf1c) = *puVar17;
                  local_78[0] = 1.7489499e+09;
                  local_78[1] = -6.539654e-27;
                  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_70 + 1);
                  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_a0,local_78);
                  puVar17 = (undefined4 *)FUN_180202dc0(*plVar9 + 0x28);
                  fVar1 = DAT_1803809c4;
                  local_7c = 1.0;
                  local_80 = 0.05;
                  *(undefined4 *)(lVar21 + 0xf20) = *puVar17;
                  local_78[0] = -0.005246196;
                  local_78[1] = -7.2624225e+19;
                  local_70[1] = 0x93fd561a96ab0c67;
                  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_70 + 1);
                  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_a0,local_78);
                  pfVar16 = (float *)FUN_180202dc0(*plVar9 + 0x28);
                  pfVar15 = &local_80;
                  if (fVar1 <= *pfVar16) {
                    pfVar15 = pfVar16;
                  }
                  pfVar19 = &local_7c;
                  if (*pfVar16 <= DAT_180380bb0) {
                    pfVar19 = pfVar15;
                  }
                  local_a8[0] = *pfVar19;
                  *(float *)(lVar21 + 0xf10) = local_a8[0];
                  fVar1 = DAT_180380ba0;
                  plVar9 = *(longlong **)(lVar21 + 0xf28);
                  if (plVar9 != (longlong *)0x0) {
                    lVar22 = (longlong)(int)DAT_1804099a8;
                    local_78[0] = 1.0;
                    local_70[0] = local_70[0] & 0xffffffff00000000;
                    pfVar15 = (float *)local_70;
                    if (0.0 <= local_a8[0]) {
                      pfVar15 = local_a8;
                    }
                    pfVar16 = local_78;
                    if (local_a8[0] <= DAT_180380bb0) {
                      pfVar16 = pfVar15;
                    }
                    iVar20 = 0;
                    fVar23 = *pfVar16;
                    if (0 < (int)DAT_1804099a8) {
                      do {
                        plVar12 = &DAT_180409910 + (longlong)iVar20 * 2;
                        if ((longlong *)*plVar12 == plVar9) goto LAB_180107cf8;
                        iVar20 = iVar20 + 1;
                      } while (iVar20 < (int)DAT_1804099a8);
                    }
                    if ((fVar23 < DAT_180380ba0) && (DAT_1804099a8 < 8)) {
                      DAT_1804099a8 = DAT_1804099a8 + 1;
                      lVar21 = lVar22 * 0x10;
                      plVar12 = &DAT_180409910 + lVar22 * 2;
                      *plVar12 = (longlong)plVar9;
                      *(undefined4 *)(&DAT_180409918 + lVar21) = 0x3f800000;
                      uVar4 = (**(code **)(*plVar9 + 0xf0))(plVar9,0x200000);
                      (&DAT_18040991c)[lVar21] = uVar4;
LAB_180107cf8:
                      if (DAT_180380964 <=
                          (float)((uint)(*(float *)(plVar12 + 1) - fVar23) & _DAT_1803817c0)) {
                        *(float *)(plVar12 + 1) = fVar23;
                        if ((fVar23 < fVar1) || (*(char *)((longlong)plVar12 + 0xc) != '\0')) {
                          uVar18 = 1;
                        }
                        else {
                          uVar18 = 0;
                        }
                        (**(code **)(*plVar9 + 0xe8))(plVar9,0x200000,uVar18);
                        (**(code **)(*plVar9 + 0xd8))(plVar9,fVar23);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


