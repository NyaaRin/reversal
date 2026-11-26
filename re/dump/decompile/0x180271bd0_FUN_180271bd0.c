// 0x180271bd0  FUN_180271bd0
// size=1109 thunk=false
// signature: undefined FUN_180271bd0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180271bd0(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar13 = *(int *)(*(longlong *)(lVar2 + 0xec0) + 0x2028) + -1;
  lVar14 = 0;
  if (-1 < iVar13) {
    do {
      lVar14 = *(longlong *)
                ((longlong)iVar13 * 0x38 + 8 + *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x2030))
      ;
      if ((((lVar14 != 0) && ((*(uint *)(lVar14 + 0x14) & 0x8000000) != 0)) &&
          (*(char *)(lVar14 + 0xcc) != '\0')) && (*(char *)(lVar14 + 0xd4) == '\0')) break;
      iVar13 = iVar13 + -1;
      lVar14 = 0;
    } while (-1 < iVar13);
  }
  if ((0.0 < *(float *)(lVar3 + 0x2294)) || (0.0 < *(float *)(lVar3 + 0x2274))) {
    if ((*(longlong *)(lVar3 + 0x2260) == 0) ||
       (*(char *)(*(longlong *)(lVar3 + 0x2260) + 0xcc) == '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((lVar14 != 0) || (bVar8)) {
      if (lVar14 == 0) {
        if (bVar8) {
          uVar10 = FUN_18026a6a0(0x3b);
          FUN_180271940(*(undefined8 *)(lVar3 + 0x2260),uVar10);
          lVar14 = *(longlong *)(lVar3 + 0x2260);
          if (*(char *)(lVar2 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar16 = *(float *)(lVar3 + 0x1238);
          fVar20 = *(float *)(lVar14 + 0x28) - fVar16;
          fVar19 = *(float *)(lVar14 + 0x2c) - fVar16;
          fVar18 = *(float *)(lVar14 + 0x28) + *(float *)(lVar14 + 0x30) + fVar16;
          fVar17 = *(float *)(lVar14 + 0x2c) + *(float *)(lVar14 + 0x34) + fVar16;
          lVar2 = **(longlong **)(*(longlong *)(lVar2 + 0xec0) + 0x2060);
          if ((*(float *)(lVar2 + 0x10) <= fVar18 - fVar20) &&
             (*(float *)(lVar2 + 0x14) <= fVar17 - fVar19)) {
            fVar16 = (float)((uint)fVar16 ^ DAT_1803817f0) - DAT_180380bb0;
            fVar20 = fVar20 - fVar16;
            fVar19 = fVar19 - fVar16;
            fVar18 = fVar18 + fVar16;
            fVar17 = fVar17 + fVar16;
          }
          if (**(int **)(lVar14 + 0x2c8) == 0) {
            FUN_1802922a0();
          }
          local_resc = *(float *)(lVar2 + 0xc) + *(float *)(lVar2 + 0x14);
          local_res8 = *(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 8);
          FUN_180292550(*(undefined8 *)(lVar14 + 0x2c8),(float *)(lVar2 + 8),&local_res8,0);
          lVar2 = *(longlong *)(lVar14 + 0x2c8);
          uVar10 = *(undefined4 *)(lVar14 + 0x60);
          uVar9 = FUN_18026a6a0(0x3a,*(undefined4 *)(lVar3 + 0x2274));
          if ((uVar9 & 0xff000000) != 0) {
            local_res10 = fVar20 + DAT_180380ac0;
            local_res14 = fVar19 + DAT_180380ac0;
            local_resc = _DAT_180380abc;
            if ((*(byte *)(lVar2 + 0x30) & 1) != 0) {
              local_resc = DAT_180380ac0;
            }
            local_res8 = fVar18 - local_resc;
            local_resc = fVar17 - local_resc;
            FUN_180294990(lVar2,&local_res10,&local_res8,uVar10,0);
            FUN_1802929d0(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar9,
                          DAT_180380e28,0x200);
            *(undefined4 *)(lVar2 + 0x50) = 0;
          }
          lVar2 = *(longlong *)(lVar14 + 0x2c8);
          piVar1 = (int *)(lVar2 + 0xa0);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            puVar12 = (undefined4 *)(*(longlong *)(lVar2 + 0x38) + 0x38);
          }
          else {
            puVar12 = (undefined4 *)
                      ((longlong)(*(int *)(lVar2 + 0xa0) + -1) * 0x10 + *(longlong *)(lVar2 + 0xa8))
            ;
          }
          uVar10 = puVar12[1];
          uVar6 = puVar12[2];
          uVar7 = puVar12[3];
          *(undefined4 *)(lVar2 + 0x60) = *puVar12;
          *(undefined4 *)(lVar2 + 100) = uVar10;
          *(undefined4 *)(lVar2 + 0x68) = uVar6;
          *(undefined4 *)(lVar2 + 0x6c) = uVar7;
          FUN_180292360();
        }
      }
      else {
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar4 = *(longlong *)(lVar2 + 0xec0);
        uVar9 = FUN_180282730(lVar14);
        lVar15 = lVar14;
        if (-1 < (int)uVar9) {
          do {
            lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x14c8) + (ulonglong)uVar9 * 8);
            if ((*(uint *)(lVar5 + 0x14) >> 0x18 & 1) == 0) {
              lVar11 = lVar5;
              if (*(longlong *)(lVar5 + 0x3c0) != lVar14) {
                while (lVar11 != lVar14) {
                  lVar11 = *(longlong *)(lVar11 + 0x3b8);
                  if (lVar11 == 0) goto LAB_180271d5f;
                }
              }
              if (((*(char *)(lVar5 + 0xcc) != '\0') && (*(char *)(lVar5 + 0xd4) == '\0')) &&
                 ((*(uint *)(lVar5 + 0x14) & 0x2000000) <= (*(uint *)(lVar14 + 0x14) & 0x2000000)))
              {
                lVar15 = lVar5;
              }
            }
            uVar9 = uVar9 - 1;
          } while (-1 < (int)uVar9);
        }
LAB_180271d5f:
        fVar16 = *(float *)(lVar3 + 0x2294);
        uVar9 = *(uint *)(lVar14 + 0x1dc);
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar16 = fVar16 * *(float *)(*(longlong *)(lVar2 + 0xec0) + 0xc84);
        if (fVar16 < DAT_180380bb0) {
          uVar9 = (int)(longlong)((float)(uVar9 >> 0x18) * fVar16) << 0x18 | uVar9 & 0xffffff;
        }
        FUN_180271940(lVar15,uVar9);
      }
    }
  }
  return;
}


