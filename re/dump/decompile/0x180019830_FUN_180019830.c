// 0x180019830  FUN_180019830
// size=213 thunk=false
// signature: undefined FUN_180019830()
// status: ok


void FUN_180019830(longlong *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (int)param_1[2];
  if (*(int *)((longlong)param_1 + 0xc) - iVar7 < param_3) {
    *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    return;
  }
  *(int *)(param_1 + 2) = iVar7 + param_3;
  uVar4 = 0x7fffffff >> (0x20U - (char)param_3 & 0x1f);
  puVar1 = (uint *)(*param_1 + ((longlong)iVar7 >> 5) * 4);
  uVar2 = *puVar1;
  uVar4 = (int)param_2 >> 0x1f & ~uVar4 | uVar4 & param_2;
  bVar3 = (byte)iVar7 & 0x1f;
  uVar5 = uVar4 << bVar3 | uVar4 >> 0x20 - bVar3;
  iVar7 = 1 << ((char)param_3 - 1U & 0x1f);
  uVar6 = iVar7 - 1U >> (0x1f - bVar3 & 0x1f);
  uVar4 = uVar6 & 1;
  puVar1[uVar4] = puVar1[uVar4] ^ (puVar1[uVar4] ^ uVar5) & uVar6;
  *puVar1 = iVar7 * 2 + -1 << bVar3 & (uVar5 ^ uVar2) ^ uVar2;
  return;
}


