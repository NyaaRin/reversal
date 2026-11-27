// 0x1802c24e0  FUN_1802c24e0
// size=861 thunk=false
// signature: undefined FUN_1802c24e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c24e0(float *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar2 = *(longlong *)(lVar1 + 0x1520);
  *(undefined1 *)(lVar1 + 0x2450) = 0;
  fVar13 = *(float *)(lVar1 + 0x104);
  fVar12 = param_1[1];
  if ((param_1[1] <= fVar13) && (fVar12 = param_1[3], fVar13 <= param_1[3])) {
    fVar12 = fVar13;
  }
  fVar13 = *(float *)(lVar1 + 0x100);
  fVar11 = *param_1;
  if ((*param_1 <= fVar13) && (fVar11 = param_1[2], fVar13 <= param_1[2])) {
    fVar11 = fVar13;
  }
  fVar13 = *(float *)(lVar2 + 300);
  *(float *)(lVar1 + 0x2438) = fVar11 - *(float *)(lVar2 + 0x128);
  *(float *)(lVar1 + 0x243c) = fVar12 - fVar13;
  fVar13 = *(float *)(lVar1 + 0x24a0);
  if (param_1[3] <= *(float *)(lVar1 + 0x24a0)) {
    fVar13 = param_1[3];
  }
  fVar12 = *(float *)(lVar1 + 0x249c);
  if (param_1[2] <= *(float *)(lVar1 + 0x249c)) {
    fVar12 = param_1[2];
  }
  iVar8 = *(int *)(lVar2 + 0x1b0) + -1;
  fVar11 = *(float *)(lVar1 + 0x2498);
  if (*(float *)(lVar1 + 0x2498) <= param_1[1]) {
    fVar11 = param_1[1];
  }
  fVar14 = *(float *)(lVar1 + 0x2494);
  if (*(float *)(lVar1 + 0x2494) <= *param_1) {
    fVar14 = *param_1;
  }
  lVar7 = lVar2;
  local_c0 = fVar14;
  fStack_bc = fVar11;
  fStack_b8 = fVar12;
  fStack_b4 = fVar13;
  if (-1 < iVar8) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)iVar8 * 8);
      if ((*(char *)(lVar3 + 0xcc) != '\0') && (*(char *)(lVar3 + 0xd4) == '\0')) {
        lVar7 = FUN_180273680();
        break;
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  uVar4 = *(undefined8 *)(lVar7 + 0x2c8);
  uVar5 = FUN_18026a6a0(0x1d,DAT_180380a6c);
  local_d0 = 0;
  local_d8 = 0;
  FUN_180295000(uVar4,&local_c0,&fStack_b8,uVar5);
  uVar5 = DAT_180380bb0;
  lVar7 = *(longlong *)(lVar7 + 0x2c8);
  uVar6 = FUN_18026a6a0(0x39,DAT_180380bb0);
  if ((uVar6 & 0xff000000) != 0) {
    local_d8 = 0;
    if ((*(byte *)(lVar7 + 0x30) & 1) == 0) {
      local_c0 = fVar12 - _DAT_180380abc;
      fStack_bc = fVar13 - _DAT_180380abc;
      pfVar10 = &local_c0;
      pfVar9 = &local_c8;
      local_c8 = fVar14 + DAT_180380ac0;
      local_c4 = fVar11 + DAT_180380ac0;
    }
    else {
      pfVar10 = &local_c8;
      pfVar9 = &local_c0;
      local_c8 = fVar12 - DAT_180380ac0;
      local_c4 = fVar13 - DAT_180380ac0;
      local_c0 = fVar14 + DAT_180380ac0;
      fStack_bc = fVar11 + DAT_180380ac0;
    }
    FUN_180294990(lVar7,pfVar9,pfVar10,0);
    local_d0 = 0x200;
    local_d8 = uVar5;
    FUN_1802929d0(lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined4 *)(lVar7 + 0x50),uVar6);
    *(undefined4 *)(lVar7 + 0x50) = 0;
  }
  if ((param_2 & 0x900) == 0x800) {
    fStack_b4 = (float)(*(uint *)(lVar1 + 0x1238) ^ DAT_1803817f0);
    local_c0 = *param_1 - fStack_b4;
    fStack_bc = param_1[1] - fStack_b4;
    fStack_b8 = param_1[2] + fStack_b4;
    fStack_b4 = param_1[3] + fStack_b4;
    if ((((*(float *)(lVar1 + 0x100) < local_c0) || (*(float *)(lVar1 + 0x104) < fStack_bc)) ||
        (fStack_b8 <= *(float *)(lVar1 + 0x100))) || (fStack_b4 <= *(float *)(lVar1 + 0x104))) {
      FUN_1802c2200(lVar1 + 0x2420,lVar2,&local_c0);
    }
  }
  return;
}


