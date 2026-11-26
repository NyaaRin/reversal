// 0x1802ab240  FUN_1802ab240
// size=947 thunk=false
// signature: undefined FUN_1802ab240()
// status: ok


void FUN_1802ab240(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar3 + 0x1520) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar3 + 0x1520);
  if (*(char *)(lVar3 + 0xd1) != '\0') {
    return;
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar2 + 0xec0);
  FUN_1802687f0(&local_b0,&local_b8,param_1,param_2);
  lVar6 = CONCAT44(fStack_b4,local_b8);
  lVar7 = CONCAT44(fStack_ac,local_b0);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar12 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x1238);
  uVar10 = 0;
  if (lVar7 != lVar6) {
    FUN_18029e350(&local_b8,*(undefined8 *)(*(longlong *)(lVar2 + 0xec0) + 0x1228),fVar12,
                  DAT_180381308,DAT_180381384,lVar7,lVar6,lVar6,0);
    fVar12 = fStack_b4;
    if (0.0 < (float)(int)(local_b8 + DAT_180380ba8)) {
      fVar11 = *(float *)(lVar4 + 0xcc4) + *(float *)(lVar4 + 0xcc4) +
               (float)(int)(local_b8 + DAT_180380ba8);
      goto LAB_1802ab3bc;
    }
  }
  fVar11 = 0.0;
LAB_1802ab3bc:
  fVar11 = fVar11 + *(float *)(lVar4 + 0x1238);
  fVar1 = *(float *)(lVar3 + 0x118);
  fVar13 = *(float *)(lVar3 + 0x11c) + *(float *)(lVar3 + 0x150);
  local_b8 = fVar11;
  fStack_b4 = fVar12;
  FUN_18027f400(&local_b8);
  fVar12 = fVar12 + fVar13;
  fVar11 = fVar1 + fVar11;
  local_b0 = fVar1;
  fStack_ac = fVar13;
  fStack_a8 = fVar11;
  fStack_a4 = fVar12;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  *(uint *)(lVar2 + 0x1efc) = *(uint *)(lVar2 + 0x1eb8) | *(uint *)(lVar2 + 0x1ec4);
  lVar5 = *(longlong *)(lVar2 + 0x1520);
  *(undefined4 *)(lVar2 + 0x1ef8) = 0;
  *(float *)(lVar2 + 0x1f04) = local_b0;
  *(float *)(lVar2 + 0x1f08) = fStack_ac;
  *(float *)(lVar2 + 0x1f0c) = fStack_a8;
  *(float *)(lVar2 + 0x1f10) = fStack_a4;
  *(undefined4 *)(lVar2 + 0x1f00) = 0;
  *(float *)(lVar2 + 0x1f14) = local_b0;
  *(float *)(lVar2 + 0x1f18) = fStack_ac;
  *(float *)(lVar2 + 0x1f1c) = fStack_a8;
  *(float *)(lVar2 + 0x1f20) = fStack_a4;
  *(undefined8 *)(lVar2 + 0x1ec0) = 0;
  if ((((fVar12 < *(float *)(lVar5 + 0x26c) || fVar12 == *(float *)(lVar5 + 0x26c)) ||
       (*(float *)(lVar5 + 0x274) <= fVar13)) ||
      (fVar11 < *(float *)(lVar5 + 0x268) || fVar11 == *(float *)(lVar5 + 0x268))) ||
     (*(float *)(lVar5 + 0x270) <= fVar1)) {
    if (*(char *)(lVar2 + 0x1592) == '\0') {
      return;
    }
  }
  else {
    *(undefined4 *)(lVar2 + 0x1f00) = 0x100;
  }
  cVar8 = FUN_18027bdd0(&local_b0,&fStack_a8,1);
  if (cVar8 != '\0') {
    *(uint *)(lVar2 + 0x1f00) = *(uint *)(lVar2 + 0x1f00) | 1;
  }
  uVar9 = FUN_18026a6a0(0);
  fVar11 = *(float *)(lVar4 + 0x1238) * DAT_180380ac0;
  fStack_b4 = fVar11 + fVar13;
  fVar12 = *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x2c8) + 0x38) + 0x20);
  local_b8 = fVar11 + *(float *)(lVar4 + 0xcc4) + fVar1;
  if (DAT_18038102c <= fVar12) {
    if (fVar12 < DAT_180381088) {
      uVar10 = 0xc;
    }
  }
  else {
    uVar10 = 8;
  }
  FUN_180295540(*(longlong *)(lVar3 + 0x2c8),&local_b8,fVar12 * DAT_180380a3c,uVar9,uVar10);
  FUN_18026b160(CONCAT44(fVar13 + 0.0,
                         *(float *)(lVar4 + 0xcc4) + *(float *)(lVar4 + 0xcc4) +
                         *(float *)(lVar4 + 0x1238) + fVar1),lVar7,lVar6,0);
  return;
}


