// 0x18026c370  FUN_18026c370
// size=900 thunk=false
// signature: undefined FUN_18026c370()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18026c370(float *param_1,int param_2,ulonglong param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float local_res20;
  float local_res24;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar6 + 0xec0);
  if ((((param_2 == *(int *)(lVar6 + 0x206c)) &&
       ((*(char *)(lVar6 + 0x2068) != '\0' || ((param_3 & 4) != 0)))) &&
      ((param_2 != *(int *)(lVar6 + 0x1ef8) || ((*(byte *)(lVar6 + 0x1efc) & 2) == 0)))) &&
     (lVar7 = *(longlong *)(lVar6 + 0x1520), *(char *)(lVar7 + 0x179) == '\0')) {
    if ((param_3 & 8) == 0) {
      uVar17 = *(undefined4 *)(lVar6 + 0xccc);
    }
    else {
      uVar17 = 0;
    }
    fVar2 = *(float *)(lVar7 + 0x26c);
    fVar3 = *(float *)(lVar7 + 0x268);
    fVar4 = *(float *)(lVar7 + 0x274);
    fVar5 = *(float *)(lVar7 + 0x270);
    local_78 = *param_1;
    fStack_74 = param_1[1];
    fStack_70 = param_1[2];
    fStack_6c = param_1[3];
    fVar15 = fStack_74;
    if (fStack_74 <= fVar2) {
      fVar15 = fVar2;
    }
    fVar16 = local_78;
    if (local_78 <= fVar3) {
      fVar16 = fVar3;
    }
    fVar14 = fStack_6c;
    if (fVar4 <= fStack_6c) {
      fVar14 = fVar4;
    }
    fVar13 = fStack_70;
    if (fVar5 <= fStack_70) {
      fVar13 = fVar5;
    }
    if ((param_3 & 2) == 0) {
      fVar16 = fVar16 - DAT_180380e9c;
      fVar15 = fVar15 - DAT_180380e9c;
      fVar13 = fVar13 + DAT_180380e9c;
      fVar14 = fVar14 + DAT_180380e9c;
      local_78 = fVar16;
      fStack_74 = fVar15;
      fStack_70 = fVar13;
      fStack_6c = fVar14;
      if ((((fVar16 < fVar3) || (fVar15 < fVar2)) || (fVar5 < fVar13)) || (fVar4 < fVar14)) {
        bVar10 = false;
        FUN_180292550(*(undefined8 *)(lVar7 + 0x2c8),&local_78,&fStack_70,0);
      }
      else {
        bVar10 = true;
      }
      lVar6 = *(longlong *)(lVar7 + 0x2c8);
      uVar11 = FUN_18026a6a0(0x39,DAT_180380bb0);
      if ((uVar11 & 0xff000000) != 0) {
        fStack_74 = fVar15 + DAT_180380ac0;
        local_78 = fVar16 + DAT_180380ac0;
        local_res20 = _DAT_180380abc;
        if ((*(byte *)(lVar6 + 0x30) & 1) != 0) {
          local_res20 = DAT_180380ac0;
        }
        local_res24 = fVar14 - local_res20;
        local_res20 = fVar13 - local_res20;
        FUN_180294990(lVar6,&local_78,&local_res20,uVar17,0);
        FUN_1802929d0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar11,
                      DAT_180380d30,0x200);
        *(undefined4 *)(lVar6 + 0x50) = 0;
      }
      if (!bVar10) {
        lVar6 = *(longlong *)(lVar7 + 0x2c8);
        piVar1 = (int *)(lVar6 + 0xa0);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          puVar12 = (undefined4 *)(*(longlong *)(lVar6 + 0x38) + 0x38);
        }
        else {
          puVar12 = (undefined4 *)
                    ((longlong)(*(int *)(lVar6 + 0xa0) + -1) * 0x10 + *(longlong *)(lVar6 + 0xa8));
        }
        uVar17 = puVar12[1];
        uVar8 = puVar12[2];
        uVar9 = puVar12[3];
        *(undefined4 *)(lVar6 + 0x60) = *puVar12;
        *(undefined4 *)(lVar6 + 100) = uVar17;
        *(undefined4 *)(lVar6 + 0x68) = uVar8;
        *(undefined4 *)(lVar6 + 0x6c) = uVar9;
        FUN_180292360();
      }
    }
    else {
      lVar6 = *(longlong *)(lVar7 + 0x2c8);
      uVar11 = FUN_18026a6a0(0x39,DAT_180380bb0);
      if ((uVar11 & 0xff000000) != 0) {
        local_78 = fVar16 + DAT_180380ac0;
        fStack_74 = fVar15 + DAT_180380ac0;
        local_res20 = _DAT_180380abc;
        if ((*(byte *)(lVar6 + 0x30) & 1) != 0) {
          local_res20 = DAT_180380ac0;
        }
        local_res24 = fVar14 - local_res20;
        local_res20 = fVar13 - local_res20;
        FUN_180294990(lVar6,&local_78,&local_res20,uVar17,0);
        FUN_1802929d0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar11,
                      DAT_180380d30,0x200);
        *(undefined4 *)(lVar6 + 0x50) = 0;
      }
    }
  }
  return;
}


