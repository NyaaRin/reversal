// 0x18001b960  FUN_18001b960
// size=346 thunk=false
// signature: undefined FUN_18001b960()
// status: ok


void FUN_18001b960(longlong *param_1,float *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = (int)param_1[2];
  if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar3 = 0;
  }
  else {
    bVar1 = (byte)iVar2;
    bVar3 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 2) = iVar2;
    bVar3 = bVar3 >> (bVar1 & 7) & 1;
  }
  if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
    *(int *)(param_1 + 2) = iVar2 + 1;
    bVar1 = bVar1 >> ((byte)iVar2 & 7) & 1;
  }
  fVar5 = 0.0;
  if (bVar3 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)FUN_18001b8a0(param_1);
  }
  *param_2 = fVar4;
  if (bVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)FUN_18001b8a0(param_1);
  }
  param_2[1] = fVar4;
  iVar2 = (int)param_1[2];
  if (*(int *)((longlong)param_1 + 0xc) - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
    *(int *)(param_1 + 2) = iVar2 + 1;
    bVar3 = bVar3 >> ((byte)iVar2 & 7) & 1;
  }
  fVar4 = param_2[1] * param_2[1] + *param_2 * *param_2;
  if (fVar4 < DAT_180380bb0) {
    fVar4 = DAT_180380bb0 - fVar4;
    if (fVar4 < 0.0) {
      fVar5 = sqrtf(fVar4);
    }
    else {
      fVar5 = SQRT(fVar4);
    }
  }
  param_2[2] = fVar5;
  if (bVar3 != 0) {
    param_2[2] = (float)((uint)fVar5 ^ DAT_1803817f0);
  }
  return;
}


