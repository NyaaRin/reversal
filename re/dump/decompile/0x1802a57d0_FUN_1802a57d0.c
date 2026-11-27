// 0x1802a57d0  FUN_1802a57d0
// size=345 thunk=false
// signature: undefined FUN_1802a57d0()
// status: ok


void FUN_1802a57d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  iVar5 = 0;
  iVar3 = 0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  if (iVar1 < 4) {
    if (0 < iVar1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      goto LAB_1802a58b0;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x18);
    do {
      lVar6 = (longlong)iVar5;
      lVar2 = lVar6 * 0x74;
      if ((*(char *)(lVar2 + 0x66 + lVar4) != '\0') && ((*(byte *)(lVar2 + lVar4) & 8) != 0)) {
        fVar7 = fVar7 + *(float *)(lVar2 + 0x1c + lVar4);
        fVar8 = fVar8 + *(float *)(lVar2 + 0x10 + lVar4);
      }
      lVar2 = (lVar6 + 1) * 0x74;
      if ((*(char *)(lVar2 + 0x66 + lVar4) != '\0') && ((*(byte *)(lVar2 + lVar4) & 8) != 0)) {
        fVar7 = fVar7 + *(float *)(lVar2 + 0x1c + lVar4);
        fVar8 = fVar8 + *(float *)(lVar2 + 0x10 + lVar4);
      }
      lVar2 = (lVar6 + 2) * 0x74;
      if ((*(char *)(lVar2 + 0x66 + lVar4) != '\0') && ((*(byte *)(lVar2 + lVar4) & 8) != 0)) {
        fVar7 = fVar7 + *(float *)(lVar2 + 0x1c + lVar4);
        fVar8 = fVar8 + *(float *)(lVar2 + 0x10 + lVar4);
      }
      lVar2 = (lVar6 + 3) * 0x74;
      if ((*(char *)(lVar2 + 0x66 + lVar4) != '\0') && ((*(byte *)(lVar2 + lVar4) & 8) != 0)) {
        fVar7 = fVar7 + *(float *)(lVar2 + 0x1c + lVar4);
        fVar8 = fVar8 + *(float *)(lVar2 + 0x10 + lVar4);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < iVar1 + -3);
    iVar3 = iVar5;
    if (iVar1 <= iVar5) {
      iVar3 = 0;
      goto LAB_1802a58f0;
    }
LAB_1802a58b0:
    do {
      lVar2 = (longlong)iVar3 * 0x74;
      if ((*(char *)(lVar2 + 0x66 + lVar4) != '\0') && ((*(byte *)(lVar2 + lVar4) & 8) != 0)) {
        fVar7 = fVar7 + *(float *)(lVar2 + 0x1c + lVar4);
        fVar8 = fVar8 + *(float *)(lVar2 + 0x10 + lVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (iVar1 < 1) {
    return;
  }
LAB_1802a58f0:
  do {
    lVar2 = (longlong)iVar3 * 0x74;
    lVar4 = *(longlong *)(param_1 + 0x18);
    if ((*(char *)(lVar2 + 0x66 + lVar4) != '\0') && ((*(byte *)(lVar2 + lVar4) & 8) != 0)) {
      *(float *)(lVar2 + 0x1c + lVar4) = (*(float *)(lVar2 + 0x10 + lVar4) / fVar8) * fVar7;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < *(int *)(param_1 + 0x6c));
  return;
}


