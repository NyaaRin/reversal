// 0x180019e10  FUN_180019e10
// size=795 thunk=false
// signature: undefined FUN_180019e10()
// status: ok


bool FUN_180019e10(longlong *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar4 = *(uint *)(param_1 + 2);
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar5 < (int)(uVar4 + param_3)) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    return false;
  }
  for (; (((ulonglong)param_2 & 3) != 0 && (7 < param_3)); param_3 = param_3 + -8) {
    if ((int)(uVar5 - uVar4) < 8) {
      *(uint *)(param_1 + 2) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      uVar6 = uVar5;
    }
    else {
      uVar6 = *param_2;
      *(uint *)(param_1 + 2) = uVar4 + 8;
      bVar3 = (byte)uVar4 & 0x1f;
      uVar5 = *(uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      puVar7 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      uVar6 = (uint)(byte)uVar6 << bVar3 | (uint)(byte)((byte)uVar6 >> 0x20 - bVar3);
      uVar8 = 0x7f >> (0x1f - bVar3 & 0x1f);
      uVar4 = uVar8 & 1;
      puVar7[uVar4] = puVar7[uVar4] ^ (uVar6 ^ puVar7[uVar4]) & uVar8;
      *puVar7 = (uVar5 ^ uVar6) & 0xff << bVar3 ^ uVar5;
      uVar5 = *(uint *)(param_1 + 2);
      uVar6 = *(uint *)((longlong)param_1 + 0xc);
    }
    param_2 = (uint *)((longlong)param_2 + 1);
    uVar4 = uVar5;
    uVar5 = uVar6;
  }
  if (0x1f < param_3) {
    if ((uVar4 & 7) == 0) {
      iVar2 = param_3 >> 3;
      memcpy((void *)(((longlong)(int)uVar4 >> 3) + *param_1),param_2,(longlong)iVar2);
      *(int *)(param_1 + 2) = (int)param_1[2] + iVar2 * 8;
      param_2 = (uint *)((longlong)param_2 + (longlong)iVar2);
      uVar4 = *(uint *)(param_1 + 2);
      param_3 = param_3 + iVar2 * -8;
      if (param_3 < 0x20) goto joined_r0x000180019fd9;
    }
    uVar8 = uVar4 & 0x1f;
    uVar5 = *(uint *)(&DAT_1803f9320 + (ulonglong)uVar8 * 0x84);
    uVar6 = (&DAT_1803f92a0)[uVar8];
    puVar7 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
    do {
      uVar4 = *param_2;
      puVar1 = puVar7 + 1;
      param_2 = param_2 + 1;
      *puVar7 = uVar4 << (sbyte)uVar8 | *puVar7 & uVar5;
      if (0x20 - uVar8 < 0x20) {
        *puVar1 = uVar4 >> ((byte)(0x20 - uVar8) & 0x1f) | *puVar1 & uVar6;
      }
      param_3 = param_3 + -0x20;
      uVar4 = (int)param_1[2] + 0x20;
      *(uint *)(param_1 + 2) = uVar4;
      puVar7 = puVar1;
    } while (0x1f < param_3);
  }
joined_r0x000180019fd9:
  for (; 7 < param_3; param_3 = param_3 + -8) {
    uVar5 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)(uVar5 - uVar4) < 8) {
      *(uint *)(param_1 + 2) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      uVar6 = *param_2;
      *(uint *)(param_1 + 2) = uVar4 + 8;
      bVar3 = (byte)uVar4 & 0x1f;
      uVar5 = *(uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      puVar7 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      uVar6 = (uint)(byte)uVar6 << bVar3 | (uint)(byte)((byte)uVar6 >> 0x20 - bVar3);
      uVar8 = 0x7f >> (0x1f - bVar3 & 0x1f);
      uVar4 = uVar8 & 1;
      puVar7[uVar4] = puVar7[uVar4] ^ (uVar6 ^ puVar7[uVar4]) & uVar8;
      *puVar7 = (uVar5 ^ uVar6) & 0xff << bVar3 ^ uVar5;
      uVar5 = *(uint *)(param_1 + 2);
    }
    param_2 = (uint *)((longlong)param_2 + 1);
    uVar4 = uVar5;
  }
  if (param_3 != 0) {
    if ((int)(*(int *)((longlong)param_1 + 0xc) - uVar4) < param_3) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      uVar6 = *param_2;
      *(uint *)(param_1 + 2) = uVar4 + param_3;
      bVar3 = (byte)uVar4 & 0x1f;
      uVar5 = *(uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      puVar7 = (uint *)(*param_1 + ((longlong)(int)uVar4 >> 5) * 4);
      uVar6 = (uint)(byte)uVar6 << bVar3 | (uint)(byte)((byte)uVar6 >> 0x20 - bVar3);
      iVar2 = 1 << ((char)param_3 - 1U & 0x1f);
      uVar8 = iVar2 - 1U >> (0x1f - bVar3 & 0x1f);
      uVar4 = uVar8 & 1;
      puVar7[uVar4] = puVar7[uVar4] ^ (uVar6 ^ puVar7[uVar4]) & uVar8;
      *puVar7 = iVar2 * 2 + -1 << bVar3 & (uVar5 ^ uVar6) ^ uVar5;
    }
  }
  return *(char *)((longlong)param_1 + 0x14) == '\0';
}


