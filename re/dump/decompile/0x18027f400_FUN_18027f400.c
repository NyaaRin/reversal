// 0x18027f400  FUN_18027f400
// size=418 thunk=false
// signature: undefined FUN_18027f400()
// status: ok


void FUN_18027f400(float *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  if (*(char *)(lVar3 + 0xd1) == '\0') {
    fVar9 = *(float *)(lVar3 + 0x150);
    fVar6 = 0.0;
    if ((0.0 <= param_2) && (0.0 <= fVar9 - param_2)) {
      fVar6 = fVar9 - param_2;
    }
    if (fVar9 <= param_2) {
      fVar9 = param_2;
    }
    lVar5 = 0x124;
    if (*(char *)(lVar3 + 0x158) == '\0') {
      lVar5 = 0x11c;
    }
    fVar7 = *(float *)(lVar3 + 0x118) + *param_1;
    fVar1 = *(float *)(lVar5 + lVar3);
    fVar8 = param_1[1];
    *(float *)(lVar3 + 0x124) = fVar1;
    *(float *)(lVar3 + 0x120) = fVar7;
    fVar6 = (*(float *)(lVar3 + 0x11c) - fVar1) + fVar8 + fVar6;
    fVar8 = *(float *)(lVar3 + 0x144);
    if (*(float *)(lVar3 + 0x144) <= fVar6) {
      fVar8 = fVar6;
    }
    *(float *)(lVar3 + 0x118) =
         (float)(int)(*(float *)(lVar3 + 0x15c) + *(float *)(lVar3 + 0x28) +
                     *(float *)(lVar3 + 0x160));
    fVar6 = *(float *)(lVar2 + 0xcd8);
    fVar4 = *(float *)(lVar3 + 0x130);
    if (*(float *)(lVar3 + 0x130) <= fVar7) {
      fVar4 = fVar7;
    }
    *(float *)(lVar3 + 0x130) = fVar4;
    fVar6 = (float)(int)(fVar8 + fVar1 + fVar6);
    *(float *)(lVar3 + 0x11c) = fVar6;
    fVar6 = fVar6 - *(float *)(lVar2 + 0xcd8);
    *(float *)(lVar3 + 0x154) = fVar9;
    *(float *)(lVar3 + 0x14c) = fVar8;
    *(undefined4 *)(lVar3 + 0x144) = 0;
    fVar9 = *(float *)(lVar3 + 0x134);
    if (*(float *)(lVar3 + 0x134) <= fVar6) {
      fVar9 = fVar6;
    }
    *(undefined4 *)(lVar3 + 0x150) = 0;
    *(undefined2 *)(lVar3 + 0x158) = 0;
    *(float *)(lVar3 + 0x134) = fVar9;
    if (*(int *)(lVar3 + 0x1d4) == 0) {
      FUN_18027f5b0(0x11c,DAT_180381384);
    }
  }
  return;
}


