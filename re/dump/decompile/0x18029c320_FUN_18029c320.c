// 0x18029c320  FUN_18029c320
// size=1105 thunk=false
// signature: undefined FUN_18029c320()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_18029c320(longlong param_1,uint param_2,uint param_3,uint *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  float fVar6;
  undefined2 uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  void *_Dst;
  int iVar13;
  uint uVar14;
  int *piVar15;
  longlong lVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  longlong *plVar22;
  int iVar23;
  undefined1 auStack_d8 [32];
  int local_b8;
  uint local_b4;
  int local_b0;
  uint *local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined8 local_74;
  undefined4 local_6c;
  ulonglong local_68;
  
  fVar6 = DAT_180380a3c;
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  local_b0 = *(int *)(param_1 + 8);
  iVar23 = 3;
  local_b8 = local_b0 + param_3;
  uVar11 = param_2;
  if ((int)param_2 <= (int)*(uint *)(lVar2 + 0xa8)) {
    uVar11 = *(uint *)(lVar2 + 0xa8);
  }
  iVar20 = local_b0 + param_2;
  *(uint *)(lVar2 + 0xa8) = uVar11;
  uVar11 = param_3;
  if ((int)param_3 <= (int)*(uint *)(lVar2 + 0xac)) {
    uVar11 = *(uint *)(lVar2 + 0xac);
  }
  *(uint *)(lVar2 + 0xac) = uVar11;
  local_b4 = param_3;
  local_a8 = param_4;
  do {
    iVar10 = local_b8;
    local_80 = 0;
    local_74 = 0;
    local_6c = 0;
    local_7c = iVar20;
    local_78 = local_b8;
    if ((iVar20 == 0) || (local_b8 == 0)) {
      iVar9 = 0;
      local_74 = 0;
      iVar18 = 0;
    }
    else {
      pauVar12 = (undefined1 (*) [16])FUN_18028afe0(local_90,lVar2,iVar20,local_b8);
      local_a0 = *pauVar12;
      plVar22 = *(longlong **)(*pauVar12 + 8);
      local_74 = local_a0._0_8_;
      iVar18 = local_a0._0_4_;
      iVar9 = local_a0._4_4_;
      if (((plVar22 == (longlong *)0x0) || (iVar13 = iVar9 + iVar10, *(int *)(lVar2 + 4) < iVar13))
         || (piVar3 = *(int **)(lVar2 + 0x20), piVar3 == (int *)0x0)) {
        plVar22 = (longlong *)0x0;
      }
      else {
        *piVar3 = iVar18;
        piVar3[1] = iVar13;
        *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(piVar3 + 2);
        piVar15 = (int *)*plVar22;
        if (*piVar15 < iVar18) {
          plVar1 = (longlong *)(piVar15 + 2);
          piVar15 = *(int **)(piVar15 + 2);
          *plVar1 = (longlong)piVar3;
        }
        else {
          *plVar22 = (longlong)piVar3;
        }
        lVar4 = *(longlong *)(piVar15 + 2);
        while ((lVar4 != 0 && (piVar5 = *(int **)(piVar15 + 2), *piVar5 <= iVar18 + iVar20))) {
          *(undefined8 *)(piVar15 + 2) = *(undefined8 *)(lVar2 + 0x20);
          *(int **)(lVar2 + 0x20) = piVar15;
          lVar4 = *(longlong *)(piVar5 + 2);
          piVar15 = piVar5;
        }
        *(int **)(piVar3 + 2) = piVar15;
        if (*piVar15 < iVar18 + iVar20) {
          *piVar15 = iVar18 + iVar20;
        }
      }
      if (plVar22 == (longlong *)0x0) {
        iVar9 = 0x7fffffff;
        iVar18 = 0x7fffffff;
        local_74 = 0x7fffffff7fffffff;
      }
    }
    if ((iVar18 != 0x7fffffff) || (iVar9 != 0x7fffffff)) {
      local_6c = 1;
      uVar17 = (ushort)iVar18;
      uVar8 = (ushort)iVar9;
      break;
    }
    local_6c = 0;
    if ((iVar23 == 0) || (*(char *)(lVar2 + 0xb8) != '\0')) {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar2 + 0xec0);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x28e4) & 0x100) != 0)) {
        FUN_180289170("[font] Failed packing %dx%d rectangle. Returning fallback.\n",param_2,
                      local_b4);
      }
      return 0xffffffff;
    }
    uVar17 = (ushort)local_74;
    uVar8 = local_74._4_2_;
    lVar4 = *(longlong *)(param_1 + 0x2b0);
    FUN_18029afd0(param_1,2);
    if ((float)*(int *)(lVar4 + 0x98) * fVar6 <= (float)*(int *)(lVar4 + 0xa0)) {
      FUN_18029b3c0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x1c),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20));
    }
    else {
      FUN_18029b960(param_1,0xffffffff,0xffffffff);
    }
    iVar23 = iVar23 + -1;
    iVar10 = local_b8;
  } while (-1 < iVar23);
  uVar7 = (undefined2)local_b4;
  iVar23 = (uint)uVar17 + local_b0 + (param_2 & 0xffff);
  if (iVar23 <= *(int *)(lVar2 + 0xb0)) {
    iVar23 = *(int *)(lVar2 + 0xb0);
  }
  *(int *)(lVar2 + 0xb0) = iVar23;
  iVar23 = (uint)uVar8 + local_b0 + (local_b4 & 0xffff);
  if (iVar23 <= *(int *)(lVar2 + 0xb4)) {
    iVar23 = *(int *)(lVar2 + 0xb4);
  }
  *(int *)(lVar2 + 0x94) = *(int *)(lVar2 + 0x94) + 1;
  *(int *)(lVar2 + 0xb4) = iVar23;
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + iVar10 * iVar20;
  iVar23 = *(int *)(lVar2 + 100);
  if (*(int *)(lVar2 + 0x60) == iVar23) {
    iVar20 = *(int *)(lVar2 + 0x60) + 1;
    if (iVar23 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar23 / 2 + iVar23;
    }
    if (iVar20 < iVar10) {
      iVar20 = iVar10;
    }
    if (iVar23 < iVar20) {
      _Dst = (void *)FUN_18026f580((longlong)iVar20 << 3);
      if (*(void **)(lVar2 + 0x68) != (void *)0x0) {
        memcpy(_Dst,*(void **)(lVar2 + 0x68),(longlong)*(int *)(lVar2 + 0x60) << 3);
        FUN_18026f680(*(undefined8 *)(lVar2 + 0x68));
      }
      *(void **)(lVar2 + 0x68) = _Dst;
      *(int *)(lVar2 + 100) = iVar20;
    }
  }
  lVar16 = (longlong)*(int *)(lVar2 + 0x60);
  lVar4 = *(longlong *)(lVar2 + 0x68);
  *(ushort *)(lVar4 + lVar16 * 8) = uVar17;
  *(ushort *)(lVar4 + 2 + lVar16 * 8) = uVar8;
  *(short *)(lVar4 + 4 + lVar16 * 8) = (short)param_2;
  *(undefined2 *)(lVar4 + 6 + lVar16 * 8) = uVar7;
  uVar11 = *(uint *)(lVar2 + 0x60);
  *(uint *)(lVar2 + 0x60) = uVar11 + 1;
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  if (local_a8 == (uint *)0x0) {
    uVar19 = *(uint *)(lVar2 + 0x90);
    if ((int)uVar19 < 0) {
      FUN_18028a770(lVar2 + 0x70,*(int *)(lVar2 + 0x70) + 1);
      uVar19 = *(int *)(lVar2 + 0x70) - 1;
      puVar21 = (uint *)(*(longlong *)(lVar2 + 0x78) + (longlong)(int)uVar19 * 4);
      uVar14 = 0;
    }
    else {
      puVar21 = (uint *)(*(longlong *)(lVar2 + 0x78) + (longlong)(int)uVar19 * 4);
      *(int *)(lVar2 + 0x90) =
           (*(int *)(*(longlong *)(lVar2 + 0x78) + (longlong)(int)uVar19 * 4) << 0xc) >> 0xc;
      uVar14 = *puVar21;
    }
    uVar11 = (uVar11 ^ uVar14) & 0xfff00000 ^ uVar11;
    *puVar21 = uVar11 | 0x40000000;
    uVar19 = uVar11 & 0x3ff00000 | uVar19;
  }
  else {
    uVar11 = *(int *)(lVar2 + 0x60) - 1;
    uVar11 = (uVar11 ^ *local_a8) & 0xfff00000 ^ uVar11;
    *local_a8 = uVar11;
    uVar19 = (uint)((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) >> 2)
             | (uVar11 >> 0x14 & 0x3ff) << 0x14;
  }
  return uVar19;
}


