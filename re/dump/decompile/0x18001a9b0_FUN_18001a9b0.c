// 0x18001a9b0  FUN_18001a9b0
// size=315 thunk=false
// signature: undefined FUN_18001a9b0()
// status: ok


void FUN_18001a9b0(longlong *param_1,float *param_2)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  
  bVar2 = true;
  if ((DAT_1803809b4 <= *param_2) || (*param_2 <= DAT_18038132c)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((DAT_1803809b4 <= param_2[1]) || (param_2[1] <= DAT_18038132c)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((param_2[2] < DAT_1803809b4) && (DAT_18038132c < param_2[2])) {
    bVar2 = false;
  }
  uVar5 = *(uint *)(param_1 + 2);
  if ((int)uVar5 < *(int *)((longlong)param_1 + 0xc)) {
    if (bVar4) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar5 = *(uint *)(param_1 + 2);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((int)uVar5 < *(int *)((longlong)param_1 + 0xc)) {
    if (bVar3) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar5 = *(uint *)(param_1 + 2);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((int)uVar5 < *(int *)((longlong)param_1 + 0xc)) {
    if (bVar2) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar5 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar5 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if (bVar4) {
    FUN_18001a550(param_1,*param_2);
  }
  if (bVar3) {
    FUN_18001a550(param_1,param_2[1]);
  }
  if (bVar2) {
    FUN_18001a550(param_1,param_2[2]);
  }
  return;
}


