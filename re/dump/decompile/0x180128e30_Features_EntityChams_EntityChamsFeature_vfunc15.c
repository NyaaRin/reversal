// 0x180128e30  Features_EntityChams_EntityChamsFeature_vfunc15
// size=1218 thunk=false
// signature: undefined Features_EntityChams_EntityChamsFeature_vfunc15()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_EntityChams_EntityChamsFeature_vfunc15(void)

{
  float fVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  undefined4 uVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong in_R9;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  int local_80 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  longlong *local_58;
  undefined8 local_50;
  float local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  if ((((((((DAT_1804236a5 == '\0') && (DAT_1803fa608 != 0)) && (DAT_1803fa360 != (longlong *)0x0))
         && ((*(longlong *)(in_R9 + 0x18) != 0 && (DAT_1803eb378 != DAT_1803eb380)))) &&
        (0 < *(int *)(in_R9 + 0x44))) &&
       (((*(int *)(DAT_1803fa608 + 0x1c) < *(int *)(in_R9 + 0x44) &&
         (iVar5 = FUN_180071b00(), iVar5 < 1)) &&
        ((cVar4 = FUN_180121200(in_R9), cVar4 == '\0' &&
         (((plVar8 = (longlong *)
                     (**(code **)(*DAT_1803fa360 + 0x18))
                               (DAT_1803fa360,*(undefined4 *)(in_R9 + 0x44)),
           plVar8 != (longlong *)0x0 &&
           (local_58 = plVar8, BVar6 = IsBadReadPtr(plVar8,8), BVar6 == 0)) &&
          (BVar6 = IsBadReadPtr((void *)*plVar8,8), BVar6 == 0)))))))) &&
      (((pcVar9 = (char *)FUN_18001e410(plVar8), (char *)0x10000 < pcVar9 && (*pcVar9 != '\0')) ||
       ((lVar10 = (**(code **)(*plVar8 + 0x78))(plVar8), lVar10 != 0 &&
        (pcVar9 = *(char **)(lVar10 + 0x10), (char *)0x10000 < pcVar9)))))) &&
     (puVar3 = DAT_1803eb380, *pcVar9 != '\0')) {
    puVar21 = (undefined8 *)0x0;
    for (puVar20 = DAT_1803eb378; puVar19 = puVar21, puVar20 != puVar3; puVar20 = puVar20 + 0xe) {
      if ((*(char *)(puVar20 + 4) != '\0') && (*(char *)((longlong)puVar20 + 0x3c) != '\0')) {
        puVar19 = puVar20;
        if (0xf < (ulonglong)puVar20[3]) {
          puVar19 = (undefined8 *)*puVar20;
        }
        if (((puVar20[2] == 0) ||
            (lVar10 = puVar20[2] + (longlong)puVar19,
            lVar11 = thunk_FUN_1802d5c20(puVar19,lVar10,0x2a), lVar11 == lVar10)) ||
           (lVar11 - (longlong)puVar19 == -1)) {
          cVar4 = FUN_180128ae0(puVar20,pcVar9);
          puVar19 = puVar20;
          if (cVar4 != '\0') break;
        }
        else if ((puVar21 == (undefined8 *)0x0) &&
                (cVar4 = FUN_180128b70(puVar20,pcVar9), cVar4 != '\0')) {
          puVar21 = puVar20;
        }
      }
    }
    if (puVar19 != (undefined8 *)0x0) {
      pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
      local_88 = puVar19;
      uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
      plVar12 = (longlong *)(*pcVar2)(DAT_1803fa360,uVar7);
      if (plVar12 != (longlong *)0x0) {
        local_50 = plVar12;
        plVar13 = (longlong *)FUN_18001dbf0(plVar12);
        if ((plVar13 != (longlong *)0x0) && (plVar13 == plVar8)) {
          return;
        }
        cVar4 = FUN_18001de40(plVar8);
        if (cVar4 != '\0') {
          return;
        }
        plVar13 = (longlong *)FUN_18001dd10(plVar8);
        if ((plVar13 != (longlong *)0x0) && (plVar13 == plVar12)) {
          return;
        }
        local_50 = (longlong *)0x93fd561a96ab0c67;
        local_58 = (longlong *)0xdaefe600c147795;
        plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
        plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_68,&local_58);
        pfVar14 = (float *)FUN_180202dc0(*plVar13 + 0x28);
        fVar1 = *pfVar14;
        if (0.0 < fVar1) {
          pfVar14 = (float *)(**(code **)(*plVar12 + 0x48))(plVar12);
          pfVar15 = (float *)(**(code **)(*plVar8 + 0x48))(plVar8);
          fVar23 = *pfVar14 - *pfVar15;
          fVar22 = pfVar14[1] - pfVar15[1];
          local_50 = (longlong *)CONCAT44(fVar22,fVar23);
          local_48 = pfVar14[2] - pfVar15[2];
          fVar22 = (float)(*(code *)PTR_FUN_1803da018)
                                    (fVar22 * fVar22 + fVar23 * fVar23 + local_48 * local_48);
          if (fVar1 < fVar22) {
            return;
          }
        }
      }
      local_50 = (longlong *)0x93fd561a96ab0c67;
      local_58 = (longlong *)0x279c57cf06166f3d;
      plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,&local_50);
      plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_78,&local_58);
      puVar16 = (undefined4 *)FUN_1802029c0(*plVar8 + 0x28);
      lVar10 = FUN_1801070a0(*puVar16);
      if ((lVar10 != 0) || (lVar10 = FUN_1801073d0(), lVar10 != 0)) {
        local_80[1] = 1;
        local_80[0] = 0;
        iVar5 = *(int *)(puVar19 + 8);
        piVar18 = local_80;
        if (-1 < iVar5) {
          piVar18 = (int *)(puVar19 + 8);
        }
        piVar17 = local_80 + 1;
        if (iVar5 < 2) {
          piVar17 = piVar18;
        }
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*piVar17 == 1) {
          *(undefined1 *)(lVar11 + 0xf6d) = 1;
          *(undefined4 *)(lVar11 + 0xf60) = *(undefined4 *)((longlong)puVar19 + 0x44);
          *(undefined4 *)(lVar11 + 0xf64) = *(undefined4 *)(puVar19 + 9);
          *(undefined4 *)(lVar11 + 0xf68) = *(undefined4 *)((longlong)puVar19 + 0x4c);
          *(undefined4 *)(lVar11 + 0xf50) = *(undefined4 *)((longlong)puVar19 + 0x54);
          *(undefined4 *)(lVar11 + 0xf54) = *(undefined4 *)(puVar19 + 0xb);
          *(undefined4 *)(lVar11 + 0xf58) = *(undefined4 *)((longlong)puVar19 + 0x5c);
          *(undefined1 *)(lVar11 + 0xf6c) = *(undefined1 *)((longlong)puVar19 + 100);
          *(undefined4 *)(lVar11 + 0xf4c) = *(undefined4 *)(puVar19 + 0xd);
        }
        else {
          *(undefined1 *)(lVar11 + 0xf48) = 1;
          *(undefined4 *)(lVar11 + 0xf0c) = 0;
          *(longlong *)(lVar11 + 0xf40) = lVar10;
          *(longlong *)(lVar11 + 0xf28) = lVar10;
          *(undefined4 *)(lVar11 + 0xf10) = 0x3f800000;
          *(undefined4 *)(lVar11 + 0xf30) = *(undefined4 *)((longlong)puVar19 + 0x44);
          *(undefined4 *)(lVar11 + 0xf34) = *(undefined4 *)(puVar19 + 9);
          *(undefined4 *)(lVar11 + 0xf38) = *(undefined4 *)((longlong)puVar19 + 0x4c);
          *(undefined4 *)(lVar11 + 0xf18) = *(undefined4 *)((longlong)puVar19 + 0x54);
          *(undefined4 *)(lVar11 + 0xf1c) = *(undefined4 *)(puVar19 + 0xb);
          *(undefined4 *)(lVar11 + 0xf20) = *(undefined4 *)((longlong)puVar19 + 0x5c);
        }
      }
    }
  }
  return;
}


