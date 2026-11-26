// 0x180079b90  FUN_180079b90
// size=494 thunk=false
// signature: undefined FUN_180079b90()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180079b90(longlong *param_1,char param_2,float param_3,char param_4,float *param_5,
                  char param_6,float param_7)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = false;
  if (((param_2 != '\0') && ((char)param_1[6] != '\0')) &&
     (param_3 != *(float *)((longlong)param_1 + 0x34))) {
    bVar1 = true;
  }
  if (((param_4 != '\0') && ((char)param_1[7] != '\0')) &&
     ((*param_5 != *(float *)((longlong)param_1 + 0x3c) ||
      ((param_5[1] != *(float *)(param_1 + 8) ||
       (param_5[2] != *(float *)((longlong)param_1 + 0x44))))))) {
    bVar1 = true;
  }
  if ((((param_6 != '\0') && ((char)param_1[9] != '\0')) &&
      (param_7 != *(float *)((longlong)param_1 + 0x4c))) || (bVar1)) {
    *(undefined1 *)((longlong)param_1 + 0x69) = 1;
    cVar2 = (**(code **)(*param_1 + 0x118))();
    if (((cVar2 != '\0') && (param_2 != '\0')) &&
       ((param_4 != '\0' && (((char)param_1[6] != '\0' && ((char)param_1[7] != '\0')))))) {
      fVar3 = param_5[2] - *(float *)((longlong)param_1 + 0x44);
      fVar4 = *param_5 - *(float *)((longlong)param_1 + 0x3c);
      fVar3 = (param_5[1] - *(float *)(param_1 + 8)) * (param_5[1] - *(float *)(param_1 + 8)) +
              fVar4 * fVar4 + fVar3 * fVar3;
      if (fVar3 < 0.0) {
        fVar3 = sqrtf(fVar3);
      }
      else {
        fVar3 = SQRT(fVar3);
      }
      fVar3 = fVar3 * DAT_180380ac0 - *(float *)((longlong)param_1 + 0x34);
      if (((_DAT_180380968 < (float)((uint)fVar3 & _DAT_1803817c0)) &&
          (fVar3 = (param_3 - *(float *)((longlong)param_1 + 0x34)) / fVar3, DAT_180380980 < fVar3))
         && (fVar3 <= DAT_180380bb0)) {
        fVar4 = *(float *)(param_1 + 0xb);
        if (0.0 < fVar4) {
          fVar3 = (fVar3 - fVar4) * DAT_180380a6c + fVar4;
        }
        *(float *)(param_1 + 0xb) = fVar3;
      }
    }
    if ((param_6 != '\0') && ((char)param_1[9] != '\0')) {
      *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x4c);
      *(undefined1 *)(param_1 + 10) = 1;
    }
  }
  *(char *)(param_1 + 6) = param_2;
  if (param_2 != '\0') {
    *(float *)((longlong)param_1 + 0x34) = param_3;
  }
  *(char *)(param_1 + 7) = param_4;
  if (param_4 != '\0') {
    *(float *)((longlong)param_1 + 0x3c) = *param_5;
    *(float *)(param_1 + 8) = param_5[1];
    *(float *)((longlong)param_1 + 0x44) = param_5[2];
  }
  *(char *)(param_1 + 9) = param_6;
  if (param_6 == '\0') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    *(float *)((longlong)param_1 + 0x4c) = param_7;
  }
  return;
}


