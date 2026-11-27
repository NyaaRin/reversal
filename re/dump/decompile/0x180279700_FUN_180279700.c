// 0x180279700  FUN_180279700
// size=251 thunk=false
// signature: undefined FUN_180279700()
// status: ok


void FUN_180279700(longlong param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  uint uVar4;
  float fVar5;
  
  if ((param_3 != 0) && ((param_3 & (int)*(char *)(param_1 + 0xf2)) == 0)) {
    return;
  }
  *(uint *)(param_1 + 0xf0) =
       (*(uint *)(param_1 + 0xf0) >> 0x10 & 0xf1) << 0x10 | *(uint *)(param_1 + 0xf0) & 0xff00ffff;
  uVar4 = *(uint *)(param_1 + 0x14) & 0x1000000;
  if (((uVar4 == 0) || (*(char *)(param_1 + 0xd3) != '\0')) ||
     ((*(byte *)(param_1 + 0x18) & 0x40) != 0)) {
    uVar3 = 0;
    if (*param_2 <= 0.0) {
      uVar3 = 2;
    }
    *(undefined1 *)(param_1 + 0xe8) = uVar3;
    if (uVar4 != 0) goto LAB_180279775;
  }
  else {
LAB_180279775:
    if ((*(char *)(param_1 + 0xd3) == '\0') && ((*(byte *)(param_1 + 0x18) & 0x40) == 0))
    goto LAB_180279794;
  }
  uVar3 = 0;
  if (param_2[1] <= 0.0) {
    uVar3 = 2;
  }
  *(undefined1 *)(param_1 + 0xe9) = uVar3;
LAB_180279794:
  fVar1 = *(float *)(param_1 + 0x38);
  fVar2 = *(float *)(param_1 + 0x3c);
  if (0.0 < *param_2) {
    fVar5 = (float)(int)*param_2;
    *(float *)(param_1 + 0x38) = fVar5;
  }
  else {
    *(undefined1 *)(param_1 + 0xea) = 0;
    fVar5 = fVar1;
  }
  if (0.0 < param_2[1]) {
    *(float *)(param_1 + 0x3c) = (float)(int)param_2[1];
  }
  else {
    *(undefined1 *)(param_1 + 0xea) = 0;
  }
  if ((fVar1 == fVar5) && (fVar2 == *(float *)(param_1 + 0x3c))) {
    return;
  }
  FUN_180287ee0();
  return;
}


