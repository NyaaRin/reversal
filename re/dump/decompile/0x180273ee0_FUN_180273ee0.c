// 0x180273ee0  FUN_180273ee0
// size=332 thunk=false
// signature: undefined FUN_180273ee0()
// status: ok


void FUN_180273ee0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  if ((((*(char *)(param_1 + 0xcf) == '\0') || ('\0' < *(char *)(param_1 + 0xe8))) ||
      ('\0' < *(char *)(param_1 + 0xe9))) &&
     (((*(char *)(param_1 + 0xd4) == '\0' || (*(char *)(param_1 + 0xec) != '\0')) ||
      (*(char *)(param_1 + 0xeb) < '\x01')))) {
    fVar1 = *(float *)(param_1 + 0x50);
    if (fVar1 == 0.0) {
      fVar1 = (float)(longlong)(*(float *)(param_1 + 0x130) - *(float *)(param_1 + 0x128));
    }
    *param_2 = fVar1;
    fVar1 = *(float *)(param_1 + 0x54);
    if (fVar1 == 0.0) {
      fVar1 = (float)(longlong)(*(float *)(param_1 + 0x134) - *(float *)(param_1 + 300));
    }
    param_2[1] = fVar1;
    fVar1 = *(float *)(param_1 + 0x50);
    if (fVar1 == 0.0) {
      fVar1 = *(float *)(param_1 + 0x130);
      if (*(float *)(param_1 + 0x130) <= *(float *)(param_1 + 0x138)) {
        fVar1 = *(float *)(param_1 + 0x138);
      }
      fVar1 = (float)(longlong)(fVar1 - *(float *)(param_1 + 0x128));
    }
    *param_3 = fVar1;
    fVar1 = *(float *)(param_1 + 0x54);
    if (fVar1 == 0.0) {
      fVar1 = *(float *)(param_1 + 0x134);
      if (*(float *)(param_1 + 0x134) <= *(float *)(param_1 + 0x13c)) {
        fVar1 = *(float *)(param_1 + 0x13c);
      }
      fVar1 = (float)(longlong)(fVar1 - *(float *)(param_1 + 300));
    }
    param_3[1] = fVar1;
    return;
  }
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x48);
  return;
}


