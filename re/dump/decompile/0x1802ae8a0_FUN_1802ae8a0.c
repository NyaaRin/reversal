// 0x1802ae8a0  FUN_1802ae8a0
// size=727 thunk=false
// signature: undefined FUN_1802ae8a0()
// status: ok


void FUN_1802ae8a0(void)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res8;
  float local_resc;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x1520);
  if (*(char *)(lVar4 + 0xd1) != '\0') {
    return;
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar1 = *(float *)(lVar4 + 0x11c);
  fVar2 = *(float *)(lVar4 + 0x118);
  lVar5 = *(longlong *)(lVar3 + 0xec0);
  fVar13 = *(float *)(lVar5 + 0x1238);
  fVar12 = fVar2 + fVar13;
  fVar10 = *(float *)(lVar5 + 0xcc8) + *(float *)(lVar5 + 0xcc8) + fVar13;
  fVar11 = *(float *)(lVar4 + 0x144);
  if (fVar10 <= *(float *)(lVar4 + 0x144)) {
    fVar11 = fVar10;
  }
  local_res8 = fVar12 - fVar2;
  if (fVar11 <= fVar13) {
    fVar11 = fVar13;
  }
  fVar13 = fVar1 + fVar11;
  local_resc = fVar13 - fVar1;
  local_78 = fVar2;
  fStack_74 = fVar1;
  fStack_70 = fVar12;
  fStack_6c = fVar13;
  FUN_18027f400(&local_res8,DAT_180381384);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  *(uint *)(lVar3 + 0x1efc) = *(uint *)(lVar3 + 0x1eb8) | *(uint *)(lVar3 + 0x1ec4);
  lVar6 = *(longlong *)(lVar3 + 0x1520);
  uVar9 = 0;
  *(undefined4 *)(lVar3 + 0x1ef8) = 0;
  *(float *)(lVar3 + 0x1f04) = local_78;
  *(float *)(lVar3 + 0x1f08) = fStack_74;
  *(float *)(lVar3 + 0x1f0c) = fStack_70;
  *(float *)(lVar3 + 0x1f10) = fStack_6c;
  *(undefined4 *)(lVar3 + 0x1f00) = 0;
  *(float *)(lVar3 + 0x1f14) = local_78;
  *(float *)(lVar3 + 0x1f18) = fStack_74;
  *(float *)(lVar3 + 0x1f1c) = fStack_70;
  *(float *)(lVar3 + 0x1f20) = fStack_6c;
  *(undefined8 *)(lVar3 + 0x1ec0) = 0;
  if ((((fVar13 < *(float *)(lVar6 + 0x26c) || fVar13 == *(float *)(lVar6 + 0x26c)) ||
       (*(float *)(lVar6 + 0x274) <= fVar1)) ||
      (fVar12 < *(float *)(lVar6 + 0x268) || fVar12 == *(float *)(lVar6 + 0x268))) ||
     (*(float *)(lVar6 + 0x270) <= fVar2)) {
    if (*(char *)(lVar3 + 0x1592) == '\0') goto LAB_1802aeb2e;
  }
  else {
    *(undefined4 *)(lVar3 + 0x1f00) = 0x100;
  }
  cVar7 = FUN_18027bdd0(&local_78,&fStack_70,1);
  if (cVar7 != '\0') {
    *(uint *)(lVar3 + 0x1f00) = *(uint *)(lVar3 + 0x1f00) | 1;
  }
  uVar8 = FUN_18026a6a0(0,DAT_180380bb0);
  local_resc = fVar11 * DAT_180380ac0 + fVar1;
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x2c8) + 0x38) + 0x20);
  local_res8 = *(float *)(lVar5 + 0x1238) * DAT_180380ac0 + *(float *)(lVar5 + 0xcc4) + fVar2;
  if (DAT_18038102c <= fVar1) {
    if (fVar1 < DAT_180381088) {
      uVar9 = 0xc;
    }
  }
  else {
    uVar9 = 8;
  }
  FUN_180295540(*(longlong *)(lVar4 + 0x2c8),&local_res8,fVar1 * DAT_180380a3c,uVar8,uVar9);
LAB_1802aeb2e:
  FUN_18027f5b0(0,*(float *)(lVar5 + 0xcc4) + *(float *)(lVar5 + 0xcc4));
  return;
}


