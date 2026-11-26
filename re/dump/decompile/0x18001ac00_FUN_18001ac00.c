// 0x18001ac00  FUN_18001ac00
// size=327 thunk=false
// signature: undefined FUN_18001ac00()
// status: ok


void FUN_18001ac00(longlong *param_1,float *param_2)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  double dVar5;
  
  dVar5 = DAT_180381370;
  bVar2 = true;
  if ((DAT_180380b28 <= (double)*param_2) || ((double)*param_2 <= DAT_180381370)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((double)param_2[1] < DAT_180380b28) && (DAT_180381370 < (double)param_2[1])) {
    bVar2 = false;
  }
  uVar4 = *(uint *)(param_1 + 2);
  if ((int)uVar4 < *(int *)((longlong)param_1 + 0xc)) {
    if (bVar3) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar4 = *(uint *)(param_1 + 2);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((int)uVar4 < *(int *)((longlong)param_1 + 0xc)) {
    if (bVar2) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if (bVar3) {
    FUN_18001aaf0(param_1,*param_2);
  }
  if (bVar2) {
    FUN_18001aaf0(param_1,param_2[1]);
  }
  uVar4 = *(uint *)(param_1 + 2);
  if (*(int *)((longlong)param_1 + 0xc) <= (int)uVar4) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    return;
  }
  if ((double)param_2[2] <= dVar5) {
    puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
    *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    return;
  }
  puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
  *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}


