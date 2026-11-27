// 0x180019910  FUN_180019910
// size=554 thunk=false
// signature: undefined FUN_180019910()
// status: ok


void FUN_180019910(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = *(uint *)(param_1 + 2);
  uVar6 = (ulonglong)(int)uVar8;
  if (((uVar6 & 7) != 0) || ((int)uVar9 < (int)(uVar8 + 0x28))) {
    for (; 0x7f < param_2; param_2 = param_2 >> 7) {
      iVar5 = (int)uVar6;
      if ((int)(uVar9 - iVar5) < 8) {
        *(uint *)(param_1 + 2) = uVar9;
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
        uVar8 = uVar9;
      }
      else {
        *(int *)(param_1 + 2) = iVar5 + 8;
        bVar3 = (byte)uVar6 & 0x1f;
        uVar8 = *(uint *)(*param_1 + ((longlong)iVar5 >> 5) * 4);
        puVar1 = (uint *)(*param_1 + ((longlong)iVar5 >> 5) * 4);
        uVar9 = param_2 & 0x7f | 0x80;
        uVar10 = uVar9 << bVar3 | uVar9 >> 0x20 - bVar3;
        uVar7 = 0x7f >> (0x1f - bVar3 & 0x1f);
        uVar9 = uVar7 & 1;
        puVar1[uVar9] = puVar1[uVar9] ^ (puVar1[uVar9] ^ uVar10) & uVar7;
        *puVar1 = (uVar8 ^ uVar10) & 0xff << bVar3 ^ uVar8;
        uVar8 = *(uint *)(param_1 + 2);
        uVar9 = *(uint *)((longlong)param_1 + 0xc);
      }
      uVar6 = (ulonglong)uVar8;
    }
    if ((int)(uVar9 - uVar8) < 8) {
      *(uint *)(param_1 + 2) = uVar9;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(uint *)(param_1 + 2) = uVar8 + 8;
      bVar3 = (byte)uVar8 & 0x1f;
      uVar7 = (param_2 & 0x7f) << bVar3 | (param_2 & 0x7f) >> 0x20 - bVar3;
      uVar9 = *(uint *)(*param_1 + ((longlong)(int)uVar8 >> 5) * 4);
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar8 >> 5) * 4);
      uVar10 = 0x7f >> (0x1f - bVar3 & 0x1f);
      uVar8 = uVar10 & 1;
      puVar1[uVar8] = puVar1[uVar8] ^ (puVar1[uVar8] ^ uVar7) & uVar10;
      *puVar1 = (uVar9 ^ uVar7) & 0xff << bVar3 ^ uVar9;
    }
    return;
  }
  lVar2 = *param_1;
  lVar4 = (longlong)uVar6 >> 3;
  *(byte *)(lVar4 + lVar2) = (byte)param_2 | 0x80;
  if (param_2 < 0x80) {
    *(byte *)(lVar4 + lVar2) = (byte)param_2 & 0x7f;
    *(int *)(param_1 + 2) = (int)param_1[2] + 8;
    return;
  }
  bVar3 = (byte)(param_2 >> 7);
  *(byte *)(lVar4 + 1 + lVar2) = bVar3 | 0x80;
  if (param_2 < 0x4000) {
    *(byte *)(lVar4 + 1 + lVar2) = bVar3 & 0x7f;
    *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
    return;
  }
  bVar3 = (byte)(param_2 >> 0xe);
  *(byte *)(lVar4 + 2 + lVar2) = bVar3 | 0x80;
  if (param_2 < 0x200000) {
    *(byte *)(lVar4 + 2 + lVar2) = bVar3 & 0x7f;
    *(int *)(param_1 + 2) = (int)param_1[2] + 0x18;
    return;
  }
  bVar3 = (byte)(param_2 >> 0x15);
  *(byte *)(lVar4 + 3 + lVar2) = bVar3 | 0x80;
  if (param_2 < 0x10000000) {
    *(byte *)(lVar4 + 3 + lVar2) = bVar3 & 0x7f;
    *(int *)(param_1 + 2) = (int)param_1[2] + 0x20;
    return;
  }
  *(byte *)(lVar4 + 4 + lVar2) = (byte)(param_2 >> 0x1c);
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x28;
  return;
}


