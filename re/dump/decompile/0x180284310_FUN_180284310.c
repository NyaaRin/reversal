// 0x180284310  FUN_180284310
// size=328 thunk=false
// signature: undefined FUN_180284310()
// status: ok


float FUN_180284310(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(int *)(lVar2 + 0x20c0) == 3) {
    uVar8 = 0x281;
    uVar9 = 0x280;
    if (param_1 == 0) {
      uVar9 = 0x27e;
    }
    uVar4 = 0x27f;
  }
  else {
    uVar8 = 0x204;
    uVar9 = 0x203;
    if (param_1 == 0) {
      uVar9 = 0x201;
    }
    uVar4 = 0x202;
  }
  if (param_1 == 0) {
    uVar8 = uVar4;
  }
  iVar5 = FUN_18027b2f0(uVar8);
  iVar6 = FUN_18027b2f0(uVar9);
  fVar10 = (float)iVar5 - (float)iVar6;
  if ((((fVar10 != 0.0) && (pcVar7 = (char *)FUN_180267330(uVar9), *pcVar7 != '\0')) &&
      (cVar3 = FUN_18027deb0(uVar9,0), cVar3 != '\0')) &&
     ((pcVar7 = (char *)FUN_180267330(uVar8), *pcVar7 != '\0' &&
      (cVar3 = FUN_18027deb0(uVar8,0), cVar3 != '\0')))) {
    fVar10 = 0.0;
  }
  return fVar10;
}


