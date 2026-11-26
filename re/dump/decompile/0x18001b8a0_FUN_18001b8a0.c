// 0x18001b8a0  FUN_18001b8a0
// size=191 thunk=false
// signature: undefined FUN_18001b8a0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18001b8a0(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float fVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[2];
  if (iVar1 - iVar4 < 1) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(((longlong)iVar4 >> 3) + *param_1) >> ((byte)iVar4 & 7) & 1;
    iVar4 = iVar4 + 1;
  }
  if (iVar1 - iVar4 < 0xb) {
    *(int *)(param_1 + 2) = iVar1;
    uVar3 = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 2) = iVar4 + 0xb;
    bVar2 = (byte)iVar4 & 0x1f;
    uVar3 = (*(int *)(*param_1 + (ulonglong)(uint)(iVar4 + 10 >> 5) * 4) << (0x20 - bVar2 & 0x1f) |
            *(uint *)(*param_1 + (ulonglong)(uint)(iVar4 >> 5) * 4) >> bVar2) & _DAT_1803fa73c;
  }
  fVar6 = (float)((double)uVar3 * DAT_180380b28);
  uVar7 = 0;
  if (bVar5 != 0) {
    fVar6 = (float)((uint)fVar6 ^ DAT_1803817f0);
    uVar7 = _UNK_1803817f4;
  }
  return CONCAT44(uVar7,fVar6);
}


