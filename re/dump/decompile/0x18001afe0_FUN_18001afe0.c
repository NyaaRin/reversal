// 0x18001afe0  FUN_18001afe0
// size=128 thunk=false
// signature: undefined FUN_18001afe0()
// status: ok


uint FUN_18001afe0(longlong *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)param_1[2];
  if (*(int *)((longlong)param_1 + 0xc) - iVar1 < param_2) {
    *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
    uVar4 = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 2) = iVar1 + param_2;
    bVar2 = (byte)iVar1 & 0x1f;
    uVar4 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + param_2 + -1 >> 5) * 4) <<
             (0x20 - bVar2 & 0x1f) |
            *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar2) &
            *(uint *)(&DAT_1803fa710 + (longlong)param_2 * 4);
  }
  uVar3 = 1 << ((char)param_2 - 1U & 0x1f);
  if (uVar3 <= uVar4) {
    uVar4 = uVar4 + uVar3 * -2;
  }
  return uVar4;
}


