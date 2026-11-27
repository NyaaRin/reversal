// 0x18027a710  FUN_18027a710
// size=396 thunk=false
// signature: undefined FUN_18027a710()
// status: ok


void FUN_18027a710(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar6 = 0.0;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar3 = *(longlong *)(lVar1 + 0x1520);
  *(float *)(lVar1 + 0xc78) = *(float *)(lVar1 + 0x123c);
  if (param_1 == 0.0) {
    param_1 = *(float *)(lVar1 + 0x123c) * *(float *)(lVar1 + 0xc7c) * *(float *)(lVar1 + 0xc80);
    if (lVar3 != 0) {
      param_1 = param_1 * *(float *)(lVar3 + 0x2b8);
    }
    param_1 = param_1 * *(float *)(lVar1 + 0xbe0);
    if (*(longlong *)(lVar1 + 0x1228) != 0) {
      param_1 = param_1 * *(float *)(*(longlong *)(lVar1 + 0x1228) + 0x48);
    }
  }
  fVar5 = (float)(int)(param_1 + DAT_180380ac0);
  fVar4 = DAT_180380bb0;
  if ((DAT_180380bb0 <= fVar5) && (fVar4 = DAT_18038124c, fVar5 <= DAT_18038124c)) {
    fVar4 = fVar5;
  }
  if ((*(longlong *)(lVar1 + 0x1228) != 0) && ((*(byte *)(lVar1 + 0x2c) & 0x10) != 0)) {
    *(undefined4 *)(*(longlong *)(lVar1 + 0x1228) + 0x14) = *(undefined4 *)(lVar1 + 0x1244);
  }
  *(float *)(lVar1 + 0x1238) = fVar4;
  *(float *)(lVar1 + 0x1270) = fVar4;
  if (((lVar3 == 0) || (*(char *)(lVar3 + 0xd1) == '\0')) ||
     ((lVar2 = *(longlong *)(lVar1 + 0x2368), lVar2 != 0 &&
      ((*(int *)(lVar2 + 0x74) == -1 ||
       (*(char *)((longlong)*(int *)(lVar2 + 0x74) * 0x74 + 0x6c + *(longlong *)(lVar2 + 0x18)) !=
        '\0')))))) {
    if ((*(longlong *)(lVar1 + 0x1228) == 0) || (lVar3 == 0)) {
      *(undefined8 *)(lVar1 + 0x1230) = 0;
    }
    else {
      lVar3 = FUN_18029db30();
      *(longlong *)(lVar1 + 0x1230) = lVar3;
      if (lVar3 != 0) {
        fVar6 = *(float *)(lVar1 + 0x1238) / *(float *)(lVar3 + 0x14);
      }
    }
    *(float *)(lVar1 + 0x1240) = fVar6;
    *(float *)(lVar1 + 0x1274) = fVar6;
  }
  return;
}


