// 0x1802c2200  FUN_1802c2200
// size=726 thunk=false
// signature: undefined FUN_1802c2200()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c2200(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar9 = DAT_180381384;
  fVar3 = DAT_180380bb0;
  fVar6 = param_3[2];
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  fVar5 = *(float *)(lVar2 + 0x100);
  if (((((fVar6 < fVar5) || (fVar6 = *param_3, fVar5 < fVar6)) &&
       (fVar5 = fVar5 - fVar6, fVar5 != 0.0)) &&
      ((fVar6 = *(float *)(param_2 + 0x98), 0.0 <= fVar5 || (0.0 <= fVar6)))) &&
     ((fVar5 <= 0.0 || (fVar6 < *(float *)(param_2 + 0xa0))))) {
    fVar1 = *(float *)(lVar2 + 0x1238);
    fVar8 = ((float)((uint)fVar5 & _DAT_1803817c0) - fVar1) / (fVar1 * DAT_180380f00 - fVar1);
    if (0.0 <= fVar8) {
      fVar7 = DAT_180380bb0;
      if (fVar8 <= DAT_180380bb0) {
        fVar7 = fVar8;
      }
    }
    else {
      fVar7 = 0.0;
    }
    fVar8 = DAT_180381384;
    if ((0.0 <= fVar5) && (fVar8 = DAT_180380bb0, fVar5 <= 0.0)) {
      fVar8 = 0.0;
    }
    fVar5 = (fVar7 * DAT_180380e28 + DAT_180380bb0) * fVar1 * DAT_18038107c * fVar8 *
            *(float *)(lVar2 + 0x40) + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x20) = fVar5;
    iVar4 = (int)fVar5;
    if ((fVar5 < 0.0) && ((float)iVar4 != fVar5)) {
      iVar4 = iVar4 + -1;
    }
    fVar5 = (float)iVar4;
    if (fVar5 != 0.0) {
      *(undefined4 *)(param_2 + 0xb0) = 0;
      *(undefined4 *)(param_2 + 0xb8) = 0;
      *(float *)(param_2 + 0xa8) = fVar5 + fVar6;
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - fVar5;
    }
  }
  fVar6 = *(float *)(lVar2 + 0x104);
  fVar5 = param_3[3];
  if ((((fVar5 < fVar6) || (fVar5 = param_3[1], fVar6 < fVar5)) &&
      (fVar6 = fVar6 - fVar5, fVar6 != 0.0)) &&
     (((fVar5 = *(float *)(param_2 + 0x9c), 0.0 <= fVar6 || (0.0 <= fVar5)) &&
      ((fVar6 <= 0.0 || (fVar5 < *(float *)(param_2 + 0xa4))))))) {
    fVar1 = *(float *)(lVar2 + 0x1238);
    fVar8 = ((float)((uint)fVar6 & _DAT_1803817c0) - fVar1) / (fVar1 * DAT_180380f00 - fVar1);
    if (0.0 <= fVar8) {
      fVar7 = fVar3;
      if (fVar8 <= fVar3) {
        fVar7 = fVar8;
      }
    }
    else {
      fVar7 = 0.0;
    }
    if ((0.0 <= fVar6) && (fVar9 = fVar3, fVar6 <= 0.0)) {
      fVar9 = 0.0;
    }
    fVar6 = (fVar7 * DAT_180380e28 + fVar3) * fVar1 * DAT_18038107c * fVar9 *
            *(float *)(lVar2 + 0x40) + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = fVar6;
    iVar4 = (int)fVar6;
    if ((fVar6 < 0.0) && ((float)iVar4 != fVar6)) {
      iVar4 = iVar4 + -1;
    }
    fVar6 = (float)iVar4;
    if (fVar6 != 0.0) {
      *(float *)(param_2 + 0xac) = fVar5 + fVar6;
      *(undefined4 *)(param_2 + 0xb4) = 0;
      *(undefined4 *)(param_2 + 0xbc) = 0;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - fVar6;
    }
  }
  return;
}


