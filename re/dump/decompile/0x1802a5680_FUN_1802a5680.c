// 0x1802a5680  FUN_1802a5680
// size=329 thunk=false
// signature: undefined FUN_1802a5680()
// status: ok


void FUN_1802a5680(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  float fVar8;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = (longlong)param_1 * 0x74;
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x2368);
  fVar1 = *(float *)(lVar4 + 0xb8);
  lVar5 = *(longlong *)(lVar4 + 0x18);
  fVar8 = fVar1;
  if (fVar1 <= param_2) {
    fVar2 = *(float *)(lVar6 + 0x18 + lVar5);
    if (fVar1 <= fVar2) {
      fVar8 = fVar2;
    }
    if (param_2 <= fVar8) {
      fVar8 = param_2;
    }
  }
  if (*(float *)(lVar6 + 4 + lVar5) == fVar8) {
    return;
  }
  fVar2 = *(float *)(lVar6 + 0x10 + lVar5);
  if (fVar2 == fVar8) {
    return;
  }
  sVar3 = *(short *)(lVar6 + 0x5c + lVar5);
  if (sVar3 == -1) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = (uint *)((longlong)sVar3 * 0x74 + lVar5);
  }
  if ((*(byte *)(lVar6 + lVar5) & 0x10) == 0) {
    if (puVar7 == (uint *)0x0) {
      sVar3 = *(short *)(lVar6 + 0x5a + lVar5);
      if (sVar3 == -1) {
        return;
      }
      puVar7 = (uint *)((longlong)sVar3 * 0x74 + lVar5);
      if (puVar7 == (uint *)0x0) {
        return;
      }
    }
  }
  else if (((puVar7 == (uint *)0x0) || (*(short *)(lVar4 + 0x222) == -1)) ||
          (*(short *)(lVar6 + 0x56 + lVar5) <=
           *(short *)((longlong)*(short *)(lVar4 + 0x222) * 0x74 + 0x56 + lVar5))) {
    *(float *)(lVar6 + 0x10 + lVar5) = fVar8;
    goto LAB_1802a57b2;
  }
  fVar8 = (float)puVar7[4] - (fVar8 - fVar2);
  if (fVar8 <= fVar1) {
    fVar8 = fVar1;
  }
  *(float *)(lVar6 + 0x10 + lVar5) = ((float)puVar7[4] + fVar2) - fVar8;
  puVar7[4] = (uint)fVar8;
  if (((*(uint *)(lVar6 + lVar5) | *puVar7) & 8) != 0) {
    FUN_1802a57d0(lVar4);
  }
LAB_1802a57b2:
  *(undefined1 *)(lVar4 + 0x241) = 1;
  return;
}


