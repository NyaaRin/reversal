// 0x18001ad50  FUN_18001ad50
// size=489 thunk=false
// signature: undefined FUN_18001ad50()
// status: ok


void FUN_18001ad50(longlong *param_1,uint *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  bVar2 = (byte)DAT_1803fa730;
  uVar3 = DAT_1803fa790;
  for (; (DAT_1803fa790 = uVar3, ((ulonglong)param_2 & 3) != 0 && (7 < param_3));
      param_3 = param_3 + -8) {
    iVar1 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 8) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      bVar4 = 0;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(int *)(param_1 + 2) = iVar1 + 8;
      bVar4 = (byte)iVar1 & 0x1f;
      bVar4 = ((byte)(*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + 7 >> 5) * 4) << (-bVar4 & 0x1f))
              | (byte)(*(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar4)) & bVar2;
    }
    *(byte *)param_2 = bVar4;
    param_2 = (uint *)((longlong)param_2 + 1);
    uVar3 = DAT_1803fa790;
  }
  for (; 0x1f < param_3; param_3 = param_3 + -0x20) {
    iVar1 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 0x20) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      uVar5 = 0;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(int *)(param_1 + 2) = iVar1 + 0x20;
      bVar4 = (byte)iVar1 & 0x1f;
      uVar5 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + 0x1f >> 5) * 4) << (-bVar4 & 0x1f) |
              *(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar4) & uVar3;
    }
    *param_2 = uVar5;
    param_2 = param_2 + 1;
  }
  for (; 7 < param_3; param_3 = param_3 + -8) {
    iVar1 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar1 < 8) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      bVar4 = 0;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(int *)(param_1 + 2) = iVar1 + 8;
      bVar4 = (byte)iVar1 & 0x1f;
      bVar4 = ((byte)(*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + 7 >> 5) * 4) << (-bVar4 & 0x1f))
              | (byte)(*(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar4)) & bVar2;
    }
    *(byte *)param_2 = bVar4;
    param_2 = (uint *)((longlong)param_2 + 1);
  }
  if (param_3 != 0) {
    iVar1 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar1 < param_3) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      *(byte *)param_2 = 0;
      return;
    }
    *(int *)(param_1 + 2) = iVar1 + param_3;
    bVar2 = (byte)iVar1 & 0x1f;
    *(byte *)param_2 =
         ((byte)(*(int *)(*param_1 + (ulonglong)(uint)(iVar1 + param_3 + -1 >> 5) * 4) <<
                (0x20 - bVar2 & 0x1f)) |
         (byte)(*(uint *)(*param_1 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar2)) &
         (byte)*(undefined4 *)(&DAT_1803fa710 + (longlong)param_3 * 4);
  }
  return;
}


