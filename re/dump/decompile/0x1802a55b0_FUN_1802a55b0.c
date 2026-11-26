// 0x1802a55b0  FUN_1802a55b0
// size=196 thunk=false
// signature: undefined FUN_1802a55b0()
// status: ok


void FUN_1802a55b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  lVar3 = (longlong)*(int *)(param_1 + 0x74) * 0x74 + *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x159) != '\0') {
    FUN_18027e3b0();
  }
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    lVar2 = 0x48;
    if (*(char *)(param_1 + 0x245) == '\0') {
      lVar2 = 0x44;
    }
  }
  else {
    lVar2 = 0x4c;
  }
  fVar4 = *(float *)(lVar3 + lVar2);
  if (*(float *)(lVar3 + lVar2) <= *(float *)(lVar1 + 0x130)) {
    fVar4 = *(float *)(lVar1 + 0x130);
  }
  *(float *)(lVar3 + lVar2) = fVar4;
  if (*(char *)(lVar3 + 0x66) != '\0') {
    fVar5 = *(float *)(lVar1 + 0x134) + *(float *)(param_1 + 0x88);
    fVar4 = *(float *)(param_1 + 0x80);
    if (*(float *)(param_1 + 0x80) <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x80) = fVar4;
  }
  *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(lVar1 + 0x1e8);
  fVar4 = *(float *)(param_1 + 0x8c);
  if (*(float *)(param_1 + 0x8c) <= *(float *)(lVar1 + 0x154)) {
    fVar4 = *(float *)(lVar1 + 0x154);
  }
  *(float *)(param_1 + 0x8c) = fVar4;
  return;
}


