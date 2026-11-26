// 0x180285df0  FUN_180285df0
// size=604 thunk=false
// signature: undefined FUN_180285df0()
// status: ok


void FUN_180285df0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if (((*(uint *)(lVar2 + 0x28) & 2) == 0) || ((*(byte *)(lVar2 + 0x2c) & 1) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((*(uint *)(lVar2 + 0x28) & 1) == 0) ||
     (cVar7 = FUN_18027bb30(0x20e,0,0xffffffff), cVar7 == '\0')) {
    if (!bVar6) {
      return;
    }
    uVar9 = 0x27b;
    if (*(char *)(lVar2 + 0x71) != '\0') {
      uVar9 = 0x27d;
    }
    cVar7 = FUN_18027bb30(uVar9,0,0xffffffff);
    if (cVar7 == '\0') {
      return;
    }
  }
  if ((*(byte *)(lVar2 + 0x28e4) & 0x10) != 0) {
    FUN_180289170();
  }
  if (*(int *)(lVar2 + 0x1594) != 0) {
    FUN_18026ea90(0,0);
    return;
  }
  if (*(int *)(lVar2 + 0x207c) != 0) {
    FUN_180283d20(0);
    FUN_180282bb0();
    return;
  }
  lVar3 = *(longlong *)(lVar2 + 0x2070);
  if ((((lVar3 != 0) && (lVar3 != *(longlong *)(lVar3 + 0x3c0))) &&
      (lVar4 = *(longlong *)(lVar3 + 0x3d8), (*(uint *)(lVar4 + 0x14) & 0x4000000) == 0)) &&
     (lVar5 = *(longlong *)(lVar4 + 0x3b0), lVar5 != 0)) {
    FUN_1802827b0(lVar5,0);
    local_18 = *(float *)(lVar4 + 0x28) - *(float *)(lVar5 + 0x128);
    local_14 = *(float *)(lVar4 + 0x2c) - *(float *)(lVar5 + 300);
    local_10 = (*(float *)(lVar4 + 0x28) + *(float *)(lVar4 + 0x30)) - *(float *)(lVar5 + 0x128);
    local_c = (*(float *)(lVar4 + 0x2c) + *(float *)(lVar4 + 0x34)) - *(float *)(lVar5 + 300);
    FUN_180282d70(*(undefined4 *)(lVar4 + 0x90),0,0,&local_18);
    FUN_180282bb0();
    return;
  }
  iVar1 = *(int *)(lVar2 + 0x2028);
  if (((0 < iVar1) &&
      (lVar4 = *(longlong *)((longlong)iVar1 * 0x38 + -0x30 + *(longlong *)(lVar2 + 0x2030)),
      lVar4 != 0)) && ((*(uint *)(lVar4 + 0x14) & 0x8000000) == 0)) {
    FUN_180281430(iVar1 + -1,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
    return;
  }
  cVar7 = *(char *)(lVar2 + 0x75);
  if ((*(char *)(lVar2 + 0x74) == '\0') && (cVar7 == '\0')) {
    cVar8 = '\0';
  }
  else {
    cVar8 = cVar7;
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x14) & 0x4000000) != 0)) {
      *(undefined4 *)(lVar3 + 0x3f0) = 0;
      cVar7 = *(char *)(lVar2 + 0x75);
      cVar8 = cVar7;
    }
  }
  if (((*(char *)(lVar2 + 0x74) != '\0') || (cVar8 = cVar7, cVar7 != '\0')) &&
     (*(undefined4 *)(lVar2 + 0x206c) = 0, cVar8 != '\0')) {
    FUN_1802827b0(0,0);
  }
  return;
}


