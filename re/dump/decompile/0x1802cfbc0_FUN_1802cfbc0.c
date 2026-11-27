// 0x1802cfbc0  FUN_1802cfbc0
// size=1628 thunk=false
// signature: undefined FUN_1802cfbc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802cfbc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  longlong *plVar10;
  code *pcVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_198 [32];
  int local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined4 *local_148;
  longlong *local_140;
  void *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined1 local_118 [64];
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  if (*(float *)(param_1 + 0x28) <= 0.0) {
    return;
  }
  if (*(float *)(param_1 + 0x2c) <= 0.0) {
    return;
  }
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar8 + 0xec0) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    if (*(char *)(lVar8 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar13 = *(undefined8 **)(*(longlong *)(lVar8 + 0xec0) + 0xc0);
  }
  piVar9 = *(int **)(param_1 + 0x40);
  plVar10 = (longlong *)*puVar13;
  if (piVar9 != (int *)0x0) {
    plVar14 = *(longlong **)(piVar9 + 2);
    plVar3 = plVar14 + *piVar9;
    for (; plVar14 != plVar3; plVar14 = plVar14 + 1) {
      if (*(int *)(*plVar14 + 4) != 0) {
        FUN_1802d0360();
      }
    }
  }
  puVar1 = puVar13 + 1;
  if ((longlong *)puVar13[1] == (longlong *)0x0) {
LAB_1802cfcb6:
    iVar12 = *(int *)(param_1 + 0xc) + 5000;
    local_168 = 0;
    *(int *)(puVar13 + 3) = iVar12;
    local_178 = 0;
    local_170 = puVar1;
    iVar12 = (**(code **)(*plVar10 + 0xd0))(plVar10,iVar12 * 0x18,0x208,0x142);
    if (iVar12 < 0) {
      return;
    }
  }
  else if (*(int *)(puVar13 + 3) < *(int *)(param_1 + 0xc)) {
    (**(code **)(*(longlong *)puVar13[1] + 0x10))();
    *puVar1 = 0;
    goto LAB_1802cfcb6;
  }
  puVar2 = puVar13 + 2;
  if ((longlong *)puVar13[2] != (longlong *)0x0) {
    if (*(int *)(param_1 + 8) <= *(int *)((longlong)puVar13 + 0x1c)) goto LAB_1802cfd5c;
    (**(code **)(*(longlong *)puVar13[2] + 0x10))();
    *puVar2 = 0;
  }
  iVar12 = *(int *)(param_1 + 8) + 10000;
  local_168 = 0;
  *(int *)((longlong)puVar13 + 0x1c) = iVar12;
  local_178 = 0;
  local_170 = puVar2;
  iVar12 = (**(code **)(*plVar10 + 0xd8))(plVar10,iVar12 * 2,0x208,0x65);
  if (iVar12 < 0) {
    return;
  }
LAB_1802cfd5c:
  local_140 = (longlong *)0x0;
  iVar12 = (**(code **)(*plVar10 + 0x1d8))(plVar10,1,&local_140);
  if (-1 < iVar12) {
    iVar12 = (**(code **)(*local_140 + 0x20))();
    if (-1 < iVar12) {
      (**(code **)(*plVar10 + 0x168))(plVar10,0x100,local_118);
      (**(code **)(*plVar10 + 0x168))(plVar10,2,local_d8);
      (**(code **)(*plVar10 + 0x168))(plVar10,3,local_98);
      local_178 = 0x2000;
      iVar12 = (**(code **)(*(longlong *)puVar13[1] + 0x58))
                         ((longlong *)puVar13[1],0,*(int *)(param_1 + 0xc) * 0x18,&local_148);
      if (-1 < iVar12) {
        local_178 = 0x2000;
        iVar12 = (**(code **)(*(longlong *)*puVar2 + 0x58))
                           ((longlong *)*puVar2,0,*(int *)(param_1 + 8) * 2);
        if (-1 < iVar12) {
          plVar14 = *(longlong **)(param_1 + 0x18);
          plVar3 = plVar14 + *(int *)(param_1 + 0x10);
          for (; plVar14 != plVar3; plVar14 = plVar14 + 1) {
            lVar8 = *plVar14;
            iVar12 = 0;
            puVar16 = *(undefined4 **)(lVar8 + 0x28);
            if (0 < *(int *)(lVar8 + 0x20)) {
              do {
                *local_148 = *puVar16;
                iVar12 = iVar12 + 1;
                local_148[1] = puVar16[1];
                local_148[2] = 0;
                uVar7 = puVar16[4];
                local_148[3] = uVar7 >> 0x10 & 0xff | (uVar7 & 0xff) << 0x10 | uVar7 & 0xff00ff00;
                local_148[4] = puVar16[2];
                local_148[5] = puVar16[3];
                local_148 = local_148 + 6;
                puVar16 = puVar16 + 5;
              } while (iVar12 < *(int *)(lVar8 + 0x20));
            }
            memcpy(local_138,*(void **)(lVar8 + 0x18),(longlong)*(int *)(lVar8 + 0x10) * 2);
            local_138 = (void *)((longlong)local_138 + (longlong)*(int *)(lVar8 + 0x10) * 2);
          }
          iVar18 = 0;
          (**(code **)(*(longlong *)*puVar1 + 0x60))();
          (**(code **)(*(longlong *)*puVar2 + 0x60))();
          local_178 = 0x18;
          (**(code **)(*plVar10 + 800))(plVar10,0,*puVar1,0);
          (**(code **)(*plVar10 + 0x340))(plVar10,*puVar2);
          (**(code **)(*plVar10 + 0x2c8))(plVar10,0x142);
          local_130 = 0;
          local_12c = 0;
          (**(code **)(*plVar10 + 0x1d0))(plVar10,0xc2,&local_130);
          (**(code **)(*plVar10 + 0x220))(plVar10,0,0xb,&local_12c);
          FUN_1802cf520(param_1);
          local_158 = *(undefined8 **)(param_1 + 0x18);
          fVar5 = *(float *)(param_1 + 0x20);
          fVar6 = *(float *)(param_1 + 0x24);
          puVar13 = local_158 + *(int *)(param_1 + 0x10);
          iVar12 = iVar18;
          local_150 = puVar13;
          if (local_158 != puVar13) {
            do {
              iVar15 = 0;
              piVar9 = (int *)*local_158;
              if (0 < *piVar9) {
                do {
                  pfVar4 = (float *)(*(longlong *)(piVar9 + 2) + (longlong)iVar15 * 0x48);
                  pcVar11 = *(code **)(*(longlong *)(piVar9 + 2) + 0x30 + (longlong)iVar15 * 0x48);
                  if (pcVar11 == (code *)0x0) {
                    fVar19 = *pfVar4 - fVar5;
                    fVar20 = pfVar4[2] - fVar5;
                    if (fVar19 < fVar20) {
                      fVar21 = pfVar4[1] - fVar6;
                      fVar22 = pfVar4[3] - fVar6;
                      if (fVar21 < fVar22) {
                        local_128 = (int)fVar19;
                        local_124 = (int)fVar21;
                        local_120 = (int)fVar20;
                        local_11c = (int)fVar22;
                        (**(code **)(*plVar10 + 600))(plVar10,&local_128);
                        if (*(longlong *)(pfVar4 + 4) == 0) {
                          uVar17 = *(undefined8 *)(pfVar4 + 6);
                        }
                        else {
                          uVar17 = *(undefined8 *)(*(longlong *)(pfVar4 + 4) + 0x10);
                        }
                        (**(code **)(*plVar10 + 0x208))(plVar10,0,uVar17);
                        local_178 = piVar9[8];
                        local_168 = CONCAT44(local_168._4_4_,(uint)pfVar4[10] / 3);
                        local_170 = (undefined8 *)CONCAT44(local_170._4_4_,(int)pfVar4[9] + iVar18);
                        (**(code **)(*plVar10 + 0x290))(plVar10,4,(int)pfVar4[8] + iVar12,0);
                      }
                    }
                  }
                  else if (pcVar11 == vfunc_shared_18001e3e0) {
                    FUN_1802cf520(param_1);
                  }
                  else {
                    (*pcVar11)(piVar9,pfVar4);
                  }
                  iVar15 = iVar15 + 1;
                  puVar13 = local_150;
                } while (iVar15 < *piVar9);
              }
              iVar18 = iVar18 + piVar9[4];
              local_158 = local_158 + 1;
              iVar12 = iVar12 + piVar9[8];
            } while (local_158 != puVar13);
          }
          (**(code **)(*plVar10 + 0x160))(plVar10,0x100,local_118);
          (**(code **)(*plVar10 + 0x160))(plVar10,2,local_d8);
          (**(code **)(*plVar10 + 0x160))(plVar10,3,local_98);
          (**(code **)(*local_140 + 0x28))();
          (**(code **)(*local_140 + 0x10))();
          (**(code **)(*plVar10 + 0x1c8))(plVar10,0xc2,local_130);
          (**(code **)(*plVar10 + 0x228))(plVar10,0,0xb,local_12c);
          return;
        }
        (**(code **)(*(longlong *)*puVar1 + 0x60))();
      }
    }
    (**(code **)(*local_140 + 0x10))();
  }
  return;
}


