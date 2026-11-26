// 0x18001b100  FUN_18001b100
// size=155 thunk=false
// signature: undefined FUN_18001b100()
// status: ok


ulonglong FUN_18001b100(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar3 = DAT_1803fa730;
  uVar5 = 0;
  iVar4 = 0;
  while( true ) {
    iVar1 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 8) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      return uVar5;
    }
    *(int *)(param_1 + 2) = iVar1 + 8;
    bVar2 = (byte)iVar1 & 0x1f;
    uVar6 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + 7 >> 5) * 4) << (0x20 - bVar2 & 0x1f) |
            *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar2) & uVar3;
    uVar5 = uVar5 | (ulonglong)(uVar6 & 0x7f) << ((char)iVar4 * '\a' & 0x3fU);
    if (-1 < (char)uVar6) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 10) {
      return uVar5;
    }
  }
  return uVar5;
}


