// 0x180019b40  FUN_180019b40
// size=718 thunk=false
// signature: undefined FUN_180019b40()
// status: ok


void FUN_180019b40(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  
  uVar6 = *(uint *)(param_1 + 2);
  uVar4 = (ulonglong)(int)uVar6;
  uVar7 = *(uint *)((longlong)param_1 + 0xc);
  if (((uVar4 & 7) != 0) || ((int)uVar7 < (int)(uVar6 + 0x50))) {
    for (; 0x7f < param_2; param_2 = param_2 >> 7) {
      iVar3 = (int)uVar4;
      if ((int)(uVar7 - iVar3) < 8) {
        *(uint *)(param_1 + 2) = uVar7;
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
        uVar6 = uVar7;
      }
      else {
        *(int *)(param_1 + 2) = iVar3 + 8;
        bVar2 = (byte)uVar4 & 0x1f;
        uVar6 = *(uint *)(*param_1 + ((longlong)iVar3 >> 5) * 4);
        puVar1 = (uint *)(*param_1 + ((longlong)iVar3 >> 5) * 4);
        uVar7 = (uint)param_2 & 0x7f | 0x80;
        uVar5 = uVar7 << bVar2 | uVar7 >> 0x20 - bVar2;
        uVar9 = 0x7f >> (0x1f - bVar2 & 0x1f);
        uVar7 = uVar9 & 1;
        puVar1[uVar7] = puVar1[uVar7] ^ (puVar1[uVar7] ^ uVar5) & uVar9;
        *puVar1 = (uVar5 ^ uVar6) & 0xff << bVar2 ^ uVar6;
        uVar6 = *(uint *)(param_1 + 2);
        uVar7 = *(uint *)((longlong)param_1 + 0xc);
      }
      uVar4 = (ulonglong)uVar6;
    }
    if ((int)(uVar7 - uVar6) < 8) {
      *(uint *)(param_1 + 2) = uVar7;
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      uVar5 = (uint)param_2 & 0x7f;
      *(uint *)(param_1 + 2) = uVar6 + 8;
      bVar2 = (byte)uVar6 & 0x1f;
      uVar7 = *(uint *)(*param_1 + ((longlong)(int)uVar6 >> 5) * 4);
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar6 >> 5) * 4);
      uVar6 = uVar5 << bVar2 | uVar5 >> 0x20 - bVar2;
      uVar9 = 0x7f >> (0x1f - bVar2 & 0x1f);
      uVar5 = uVar9 & 1;
      puVar1[uVar5] = puVar1[uVar5] ^ (puVar1[uVar5] ^ uVar6) & uVar9;
      *puVar1 = (uVar6 ^ uVar7) & 0xff << bVar2 ^ uVar7;
    }
    return;
  }
  pbVar8 = (byte *)(((longlong)uVar4 >> 3) + *param_1);
  uVar6 = (uint)(param_2 >> 0x1c);
  uVar7 = (uint)param_2;
  if (param_2 < 0x100000000000000) {
    if (uVar6 != 0) {
      if (0x3fff < uVar6) {
        if (0x1fffff < uVar6) {
          iVar3 = 8;
          goto LAB_180019c43;
        }
        iVar3 = 7;
        goto LAB_180019c4e;
      }
      if (0x7f < uVar6) {
        iVar3 = 6;
        goto LAB_180019c59;
      }
      iVar3 = 5;
      goto LAB_180019c64;
    }
    if (0x3fff < uVar7) {
      if (0x1fffff < uVar7) {
        iVar3 = 4;
        goto LAB_180019c6b;
      }
      iVar3 = 3;
      goto LAB_180019c76;
    }
    if (uVar7 < 0x80) {
      iVar3 = 1;
      goto LAB_180019c8c;
    }
    iVar3 = 2;
  }
  else {
    bVar2 = (byte)(param_2 >> 0x38);
    if (param_2 < 0x8000000000000000) {
      iVar3 = 9;
    }
    else {
      iVar3 = 10;
      pbVar8[9] = bVar2 >> 7 | 0x80;
    }
    pbVar8[8] = bVar2 | 0x80;
LAB_180019c43:
    pbVar8[7] = (byte)(param_2 >> 0x31) | 0x80;
LAB_180019c4e:
    pbVar8[6] = (byte)(param_2 >> 0x2a) | 0x80;
LAB_180019c59:
    pbVar8[5] = (byte)(param_2 >> 0x23) | 0x80;
LAB_180019c64:
    pbVar8[4] = (byte)(param_2 >> 0x1c) | 0x80;
LAB_180019c6b:
    pbVar8[3] = (byte)(param_2 >> 0x15) | 0x80;
LAB_180019c76:
    pbVar8[2] = (byte)(param_2 >> 0xe) | 0x80;
  }
  pbVar8[1] = (byte)(param_2 >> 7) | 0x80;
LAB_180019c8c:
  *pbVar8 = (byte)param_2 | 0x80;
  pbVar8[(longlong)iVar3 + -1] = pbVar8[(longlong)iVar3 + -1] & 0x7f;
  *(int *)(param_1 + 2) = (int)param_1[2] + iVar3 * 8;
  return;
}


