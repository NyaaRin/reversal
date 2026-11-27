// 0x180281dc0  FUN_180281dc0
// size=264 thunk=false
// signature: undefined FUN_180281dc0()
// status: ok


float * FUN_180281dc0(float *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = **(longlong **)(*(longlong *)(lVar3 + 0xec0) + 0x2060);
  fVar1 = *(float *)(lVar3 + 0xc);
  fVar2 = *(float *)(lVar3 + 8);
  fVar5 = fVar1 + *(float *)(lVar3 + 0x14);
  fVar8 = fVar2 + *(float *)(lVar3 + 0x10);
  *param_1 = fVar2;
  param_1[1] = fVar1;
  param_1[3] = fVar5;
  param_1[2] = fVar8;
  fVar6 = *(float *)(lVar4 + 0xd9c);
  fVar7 = *(float *)(lVar4 + 0xd98);
  if (fVar5 - fVar1 <= fVar6 + fVar6) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (float)((uint)fVar6 ^ DAT_1803817f0);
  }
  if (fVar8 - fVar2 <= fVar7 + fVar7) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)((uint)fVar7 ^ DAT_1803817f0);
  }
  param_1[1] = fVar1 - fVar6;
  *param_1 = fVar2 - fVar7;
  param_1[2] = fVar8 + fVar7;
  param_1[3] = fVar6 + param_1[3];
  return param_1;
}


