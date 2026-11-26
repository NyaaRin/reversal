// 0x1801732d0  FUN_1801732d0
// size=385 thunk=false
// signature: undefined FUN_1801732d0()
// status: ok


void FUN_1801732d0(longlong *param_1,ulonglong param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 8);
  uVar7 = ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (longlong)param_2 >> 8 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x10 & 0xffU)
               * 0x100000001b3 ^ (longlong)param_2 >> 0x18 & 0xffU) * 0x100000001b3 ^
             (longlong)param_2 >> 0x20 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x28 & 0xffU)
            * 0x100000001b3 ^ (longlong)param_2 >> 0x30 & 0xffU) * 0x100000001b3 ^
          (longlong)param_2 >> 0x38 & 0xffU) * 0x100000001b3 & *(ulonglong *)(lVar3 + 0x30);
  lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 8 + uVar7 * 0x10);
  if (lVar6 == lVar4) {
LAB_1801733a8:
    lVar6 = 0;
  }
  else {
    uVar5 = *(ulonglong *)(lVar6 + 0x10);
    while (param_2 != uVar5) {
      if (lVar6 == *(longlong *)(*(longlong *)(lVar3 + 0x18) + uVar7 * 0x10)) goto LAB_1801733a8;
      lVar6 = *(longlong *)(lVar6 + 8);
      uVar5 = *(ulonglong *)(lVar6 + 0x10);
    }
  }
  if (lVar6 == 0) {
    lVar6 = lVar4;
  }
  if (lVar6 != lVar4) {
    iVar2 = *(int *)(param_2 + 8);
    if ((((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 6)) || (iVar2 == 7)) {
      fVar1 = *param_3;
      fVar8 = *(float *)(lVar6 + 0x18) - *(float *)param_1[1];
      if ((fVar8 <= fVar1) &&
         (fVar8 = *(float *)(lVar6 + 0x18) + *(float *)param_1[1], fVar1 <= fVar8)) {
        fVar8 = fVar1;
      }
      *param_3 = fVar8;
    }
    iVar2 = *(int *)(param_2 + 8);
    if (((iVar2 == 9) || (iVar2 == 10)) || ((iVar2 == 0xb || (iVar2 == 0xc)))) {
      fVar1 = param_3[1];
      fVar8 = *(float *)(lVar6 + 0x1c) - *(float *)param_1[2];
      if ((fVar8 <= fVar1) &&
         (fVar8 = *(float *)(lVar6 + 0x1c) + *(float *)param_1[2], fVar1 <= fVar8)) {
        fVar8 = fVar1;
      }
      param_3[1] = fVar8;
    }
  }
  return;
}


