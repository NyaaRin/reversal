// 0x180295950  FUN_180295950
// size=606 thunk=false
// signature: undefined FUN_180295950()
// status: ok


void FUN_180295950(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (-1 < iVar4) {
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (3 < iVar4 + 1) {
      do {
        plVar3 = (longlong *)(param_1 + 8);
        piVar1 = param_1 + 10;
        if ((*(float *)(*(longlong *)(puVar2 + 4) + 0xc) - (float)puVar2[3]) *
            ((float)puVar2[2] - *(float *)(*(longlong *)(puVar2 + 6) + 8)) -
            ((float)puVar2[3] - *(float *)(*(longlong *)(puVar2 + 6) + 0xc)) *
            (*(float *)(*(longlong *)(puVar2 + 4) + 8) - (float)puVar2[2]) <= 0.0) {
          *puVar2 = 2;
          *(undefined4 **)(*plVar3 + (longlong)*piVar1 * 8) = puVar2;
          *piVar1 = *piVar1 + 1;
        }
        puVar2 = *(undefined4 **)(puVar2 + 4);
        if ((*(float *)(*(longlong *)(puVar2 + 4) + 0xc) - (float)puVar2[3]) *
            ((float)puVar2[2] - *(float *)(*(longlong *)(puVar2 + 6) + 8)) -
            ((float)puVar2[3] - *(float *)(*(longlong *)(puVar2 + 6) + 0xc)) *
            (*(float *)(*(longlong *)(puVar2 + 4) + 8) - (float)puVar2[2]) <= 0.0) {
          *puVar2 = 2;
          *(undefined4 **)(*plVar3 + (longlong)*piVar1 * 8) = puVar2;
          *piVar1 = *piVar1 + 1;
        }
        puVar2 = *(undefined4 **)(puVar2 + 4);
        if ((*(float *)(*(longlong *)(puVar2 + 4) + 0xc) - (float)puVar2[3]) *
            ((float)puVar2[2] - *(float *)(*(longlong *)(puVar2 + 6) + 8)) -
            ((float)puVar2[3] - *(float *)(*(longlong *)(puVar2 + 6) + 0xc)) *
            (*(float *)(*(longlong *)(puVar2 + 4) + 8) - (float)puVar2[2]) <= 0.0) {
          *puVar2 = 2;
          *(undefined4 **)(*plVar3 + (longlong)*piVar1 * 8) = puVar2;
          *piVar1 = *piVar1 + 1;
        }
        puVar2 = *(undefined4 **)(puVar2 + 4);
        if ((*(float *)(*(longlong *)(puVar2 + 4) + 0xc) - (float)puVar2[3]) *
            ((float)puVar2[2] - *(float *)(*(longlong *)(puVar2 + 6) + 8)) -
            ((float)puVar2[3] - *(float *)(*(longlong *)(puVar2 + 6) + 0xc)) *
            (*(float *)(*(longlong *)(puVar2 + 4) + 8) - (float)puVar2[2]) <= 0.0) {
          *puVar2 = 2;
          *(undefined4 **)(*plVar3 + (longlong)*piVar1 * 8) = puVar2;
          *piVar1 = *piVar1 + 1;
        }
        puVar2 = *(undefined4 **)(puVar2 + 4);
        iVar4 = iVar4 + -4;
      } while (2 < iVar4);
      if (iVar4 < 0) {
        return;
      }
    }
    do {
      if ((*(float *)(*(longlong *)(puVar2 + 4) + 0xc) - (float)puVar2[3]) *
          ((float)puVar2[2] - *(float *)(*(longlong *)(puVar2 + 6) + 8)) -
          ((float)puVar2[3] - *(float *)(*(longlong *)(puVar2 + 6) + 0xc)) *
          (*(float *)(*(longlong *)(puVar2 + 4) + 8) - (float)puVar2[2]) <= 0.0) {
        *puVar2 = 2;
        *(undefined4 **)(*(longlong *)(param_1 + 8) + (longlong)param_1[10] * 8) = puVar2;
        param_1[10] = param_1[10] + 1;
      }
      iVar4 = iVar4 + -1;
      puVar2 = *(undefined4 **)(puVar2 + 4);
    } while (-1 < iVar4);
  }
  return;
}


