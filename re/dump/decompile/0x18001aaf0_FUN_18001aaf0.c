// 0x18001aaf0  FUN_18001aaf0
// size=258 thunk=false
// signature: undefined FUN_18001aaf0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001aaf0(longlong *param_1,float param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 2);
  uVar5 = -(int)(param_2 * _DAT_18038127c);
  if ((int)uVar5 < 0) {
    uVar5 = (int)(param_2 * _DAT_18038127c);
  }
  if (0x7ff < uVar5) {
    uVar5 = 0x7ff;
  }
  if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
    if (DAT_180381370 < (double)param_2) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    uVar3 = (int)param_1[2] + 1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((int)(*(int *)((longlong)param_1 + 0xc) - uVar3) < 0xb) {
    *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    return;
  }
  *(uint *)(param_1 + 2) = uVar3 + 0xb;
  bVar4 = (byte)uVar3 & 0x1f;
  uVar2 = *(uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
  puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
  uVar5 = uVar5 << bVar4 | uVar5 >> 0x20 - bVar4;
  uVar3 = 0x3ff >> (0x1f - bVar4 & 0x1f);
  uVar6 = uVar3 & 1;
  puVar1[uVar6] = puVar1[uVar6] ^ (puVar1[uVar6] ^ uVar5) & uVar3;
  *puVar1 = (uVar2 ^ uVar5) & 0x7ff << bVar4 ^ uVar2;
  return;
}


