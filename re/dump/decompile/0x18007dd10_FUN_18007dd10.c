// 0x18007dd10  FUN_18007dd10
// size=266 thunk=false
// signature: undefined FUN_18007dd10()
// status: ok


ulonglong FUN_18007dd10(longlong param_1,uint *param_2,float *param_3)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  ulonglong in_RAX;
  float fVar4;
  float fVar5;
  
  if ((((param_2 == (uint *)0x0) || (*(char *)(param_1 + 0x11) != '\0')) ||
      (in_RAX = (ulonglong)*param_2, *(uint *)(param_1 + 0x40) != *param_2)) ||
     ((fVar5 = *(float *)(param_1 + 0x24), fVar5 <= 0.0 ||
      (fVar4 = *(float *)(param_1 + 0x34), fVar4 <= 0.0)))) goto LAB_18007de17;
  cVar1 = *(char *)(param_1 + 0x12);
  in_RAX = 0;
  if ((*(char *)(param_1 + 0x14) != '\0') && (cVar1 == '\0')) {
    *param_3 = 0.003;
    return 1;
  }
  uVar2 = param_2[8];
  if ((((uVar2 & 8) == 0) && ((uVar2 & 0x10) == 0)) &&
     (((uVar2 >> 9 & 1) == 0 && ((uVar2 >> 10 & 1) == 0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (*(char *)(param_1 + 0x3c) == '\0') {
LAB_18007ddef:
    fVar5 = fVar4;
    if ((cVar1 == '\0') &&
       (((*(char *)(param_1 + 0x13) != '\0' && (*(char *)(param_1 + 0x3c) != '\0')) &&
        (0.0 < *(float *)(param_1 + 0x38))))) {
      fVar5 = *(float *)(param_1 + 0x38);
    }
  }
  else {
    if (bVar3) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 >> 0x11 & 1) == 0) {
          fVar4 = *(float *)(param_1 + 0x28);
        }
      }
      else {
        fVar4 = *(float *)(param_1 + 0x30);
      }
      goto LAB_18007ddef;
    }
    if ((uVar2 & 4) != 0) {
      if ((cVar1 == '\0') || (fVar4 = DAT_180380964, *(char *)(param_1 + 0x13) == '\0')) {
        fVar4 = *(float *)(param_1 + 0x2c);
      }
      goto LAB_18007ddef;
    }
    fVar4 = fVar5;
    if ((cVar1 == '\0') || (fVar5 = DAT_180380948, *(char *)(param_1 + 0x13) == '\0'))
    goto LAB_18007ddef;
  }
  if (0.0 < fVar5) {
    *param_3 = fVar5;
    return 1;
  }
LAB_18007de17:
  return in_RAX & 0xffffffffffffff00;
}


