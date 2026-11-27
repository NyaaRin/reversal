// 0x18001a770  FUN_18001a770
// size=562 thunk=false
// signature: undefined FUN_18001a770()
// status: ok


void FUN_18001a770(longlong *param_1,float param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = (int)param_1[2];
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  lVar5 = (longlong)iVar10 >> 5;
  if (param_4 == 2) {
    if (iVar6 - iVar10 < param_3) {
      *(int *)(param_1 + 2) = iVar6;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      return;
    }
    *(int *)(param_1 + 2) = iVar10 + param_3;
    bVar4 = (byte)iVar10 & 0x1f;
    uVar2 = *(uint *)(*param_1 + lVar5 * 4);
    puVar1 = (uint *)(*param_1 + lVar5 * 4);
    uVar8 = (int)param_2 << bVar4 | (uint)(int)param_2 >> 0x20 - bVar4;
    iVar10 = 1 << ((char)param_3 - 1U & 0x1f);
    uVar3 = iVar10 - 1U >> (0x1f - bVar4 & 0x1f);
    uVar7 = uVar3 & 1;
    puVar1[uVar7] = puVar1[uVar7] ^ (puVar1[uVar7] ^ uVar8) & uVar3;
    *puVar1 = iVar10 * 2 + -1 << bVar4 & (uVar2 ^ uVar8) ^ uVar2;
    return;
  }
  iVar9 = 0x20;
  if (param_4 == 1) {
    iVar9 = 8;
  }
  if (iVar6 - iVar10 < param_3) {
    *(int *)(param_1 + 2) = iVar6;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 2) = iVar10 + param_3;
    bVar4 = (byte)iVar10 & 0x1f;
    uVar2 = *(uint *)(*param_1 + lVar5 * 4);
    puVar1 = (uint *)(*param_1 + lVar5 * 4);
    uVar7 = (int)param_2 << bVar4 | (uint)(int)param_2 >> 0x20 - bVar4;
    iVar10 = 1 << ((char)param_3 - 1U & 0x1f);
    uVar3 = iVar10 - 1U >> (0x1f - bVar4 & 0x1f);
    uVar8 = uVar3 & 1;
    puVar1[uVar8] = puVar1[uVar8] ^ (puVar1[uVar8] ^ uVar7) & uVar3;
    *puVar1 = iVar10 * 2 + -1 << bVar4 & (uVar2 ^ uVar7) ^ uVar2;
  }
  iVar10 = (int)param_1[2];
  iVar6 = 5;
  if (param_4 == 1) {
    iVar6 = 3;
  }
  if (*(int *)((longlong)param_1 + 0xc) - iVar10 < iVar6) {
    *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 2) = iVar10 + iVar6;
    bVar4 = (byte)iVar10 & 0x1f;
    uVar2 = *(uint *)(*param_1 + ((longlong)iVar10 >> 5) * 4);
    puVar1 = (uint *)(*param_1 + ((longlong)iVar10 >> 5) * 4);
    uVar3 = (int)((float)iVar9 * param_2) & iVar9 - 1U;
    uVar8 = uVar3 << bVar4 | uVar3 >> 0x20 - bVar4;
    iVar10 = 1 << ((char)iVar6 - 1U & 0x1f);
    uVar3 = iVar10 - 1U >> (0x1f - bVar4 & 0x1f);
    uVar7 = uVar3 & 1;
    puVar1[uVar7] = puVar1[uVar7] ^ (puVar1[uVar7] ^ uVar8) & uVar3;
    *puVar1 = iVar10 * 2 + -1 << bVar4 & (uVar8 ^ uVar2) ^ uVar2;
  }
  return;
}


