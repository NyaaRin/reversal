// 0x18001b7a0  FUN_18001b7a0
// size=252 thunk=false
// signature: undefined FUN_18001b7a0()
// status: ok


void FUN_18001b7a0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  
  *param_2 = 0;
  bVar2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[2];
  if (iVar1 - iVar5 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar6 = bVar2;
  }
  else {
    bVar3 = (byte)iVar5;
    bVar6 = *(byte *)(((longlong)iVar5 >> 3) + *param_1);
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 2) = iVar5;
    bVar6 = bVar6 >> (bVar3 & 7) & 1;
  }
  if (iVar1 - iVar5 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar3 = 0;
  }
  else {
    bVar4 = (byte)iVar5;
    bVar3 = *(byte *)(((longlong)iVar5 >> 3) + *param_1);
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 2) = iVar5;
    bVar3 = bVar3 >> (bVar4 & 7) & 1;
  }
  if (iVar1 - iVar5 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    bVar2 = *(byte *)(((longlong)iVar5 >> 3) + *param_1);
    *(int *)(param_1 + 2) = iVar5 + 1;
    bVar2 = bVar2 >> ((byte)iVar5 & 7) & 1;
  }
  if (bVar6 != 0) {
    uVar7 = FUN_18001b1a0(param_1);
    *(undefined4 *)param_2 = uVar7;
  }
  if (bVar3 != 0) {
    uVar7 = FUN_18001b1a0(param_1);
    *(undefined4 *)((longlong)param_2 + 4) = uVar7;
  }
  if (bVar2 != 0) {
    uVar7 = FUN_18001b1a0(param_1);
    *(undefined4 *)(param_2 + 1) = uVar7;
  }
  return;
}


