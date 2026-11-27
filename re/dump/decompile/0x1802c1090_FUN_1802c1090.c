// 0x1802c1090  FUN_1802c1090
// size=574 thunk=false
// signature: undefined FUN_1802c1090()
// status: ok


void FUN_1802c1090(float *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res10;
  float local_res14;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  if ((*(int *)(lVar3 + 0x1a0) != 0) &&
     ((*(uint *)(lVar3 + 0x1a4) >> (*(int *)(lVar3 + 0x1a0) - 1U & 0x1f) & 1) != 0)) {
    lVar6 = (longlong)*(int *)(lVar2 + 0x2048);
    lVar4 = *(longlong *)(lVar2 + 0x2050);
    fVar7 = *(float *)(lVar2 + 0xd50);
    fVar10 = (float)(int)*(float *)(lVar4 + -0xc + lVar6 * 0x28);
    fVar11 = (float)(int)param_1[1];
    fVar9 = (float)(int)(*param_1 - *(float *)(lVar2 + 0xcdc));
    if (fVar7 <= 0.0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = fVar9 - fVar10;
      if (fVar7 <= fVar9 - fVar10) {
        fVar8 = fVar7;
      }
    }
    fVar7 = *(float *)(lVar4 + -8 + lVar6 * 0x28);
    local_res14 = fVar11 - fVar8;
    if (fVar7 <= local_res14) {
      fVar7 = local_res14;
    }
    *(float *)(lVar4 + -8 + lVar6 * 0x28) = fVar7;
    if (fVar10 < fVar9) {
      lVar4 = *(longlong *)(lVar3 + 0x2c8);
      if (fVar8 <= 0.0) {
        uVar1 = *(undefined4 *)(lVar2 + 0xd4c);
        uVar5 = FUN_18026a6a0(0x35,DAT_180380bb0);
        FUN_180294d60(lVar4,fVar10,fVar9,fVar11,uVar5,uVar1);
      }
      else {
        fVar10 = fVar8 + DAT_180380ac0 + fVar10;
        local_res10 = fVar10;
        if (DAT_180380ac0 <= fVar8) {
          FUN_180293e00(lVar4,&local_res10,fVar8,0x18,0xc);
        }
        else {
          FUN_18020dc30(lVar4 + 0x50);
        }
        if (fVar10 < fVar9) {
          local_res10 = fVar9;
          local_res14 = fVar11;
          FUN_18020dc30(*(longlong *)(lVar3 + 0x2c8) + 0x50,&local_res10);
        }
        lVar3 = *(longlong *)(lVar3 + 0x2c8);
        uVar1 = *(undefined4 *)(lVar2 + 0xd4c);
        uVar5 = FUN_18026a6a0(0x35,DAT_180380bb0);
        FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),uVar5,uVar1,
                      0);
        *(undefined4 *)(lVar3 + 0x50) = 0;
      }
    }
  }
  return;
}


