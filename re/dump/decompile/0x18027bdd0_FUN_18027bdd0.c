// 0x18027bdd0  FUN_18027bdd0
// size=236 thunk=false
// signature: undefined FUN_18027bdd0()
// status: ok


undefined8 FUN_18027bdd0(float *param_1,float *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar6 = *param_2;
  fVar5 = param_2[1];
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (param_3 != '\0') {
    lVar2 = *(longlong *)(lVar1 + 0x1520);
    if (fVar3 <= *(float *)(lVar2 + 0x268)) {
      fVar3 = *(float *)(lVar2 + 0x268);
    }
    if (fVar4 <= *(float *)(lVar2 + 0x26c)) {
      fVar4 = *(float *)(lVar2 + 0x26c);
    }
    if (*(float *)(lVar2 + 0x270) <= fVar6) {
      fVar6 = *(float *)(lVar2 + 0x270);
    }
    if (*(float *)(lVar2 + 0x274) <= fVar5) {
      fVar5 = *(float *)(lVar2 + 0x274);
    }
  }
  if (fVar3 - *(float *)(lVar1 + 0xcec) <= *(float *)(lVar1 + 0x100)) {
    if (((fVar4 - *(float *)(lVar1 + 0xcf0) <= *(float *)(lVar1 + 0x104)) &&
        (*(float *)(lVar1 + 0x100) < *(float *)(lVar1 + 0xcec) + fVar6)) &&
       (*(float *)(lVar1 + 0x104) < *(float *)(lVar1 + 0xcf0) + fVar5)) {
      return 1;
    }
  }
  return 0;
}


