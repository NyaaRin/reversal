// 0x18001b1a0  FUN_18001b1a0
// size=493 thunk=false
// signature: undefined FUN_18001b1a0()
// status: ok


void FUN_18001b1a0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[2];
  if (iVar1 - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar3 = 0;
  }
  else {
    bVar4 = (byte)iVar2;
    bVar3 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 2) = iVar2;
    bVar3 = bVar3 >> (bVar4 & 7) & 1;
  }
  if (iVar1 - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar4 = 0;
  }
  else {
    bVar5 = (byte)iVar2;
    bVar4 = *(byte *)(((longlong)iVar2 >> 3) + *param_1);
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 2) = iVar2;
    bVar4 = bVar4 >> (bVar5 & 7) & 1;
  }
  if ((bVar3 == 0) && (bVar4 == 0)) {
    return;
  }
  if (iVar1 - iVar2 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 2) = iVar2;
  }
  if (bVar3 != 0) {
    if (iVar1 - iVar2 < 0xe) {
      *(int *)(param_1 + 2) = iVar1;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      iVar2 = iVar1;
    }
    else {
      iVar2 = iVar2 + 0xe;
      *(int *)(param_1 + 2) = iVar2;
    }
  }
  if (bVar4 != 0) {
    if (iVar1 - iVar2 < 5) {
      *(int *)(param_1 + 2) = iVar1;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(int *)(param_1 + 2) = iVar2 + 5;
    }
  }
  return;
}


