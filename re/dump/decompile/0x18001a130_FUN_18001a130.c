// 0x18001a130  FUN_18001a130
// size=632 thunk=false
// signature: undefined FUN_18001a130()
// status: ok


longlong FUN_18001a130(longlong *param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint7 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  for (; 0x20 < param_3; param_3 = param_3 + -0x20) {
    iVar8 = (int)param_2[2];
    if (*(int *)((longlong)param_2 + 0xc) - iVar8 < 0x20) {
      *(int *)(param_2 + 2) = *(int *)((longlong)param_2 + 0xc);
      uVar2 = 0;
      *(undefined1 *)((longlong)param_2 + 0x14) = 1;
    }
    else {
      *(int *)(param_2 + 2) = iVar8 + 0x20;
      bVar5 = (byte)iVar8 & 0x1f;
      uVar2 = (*(int *)(*param_2 + (ulonglong)(uint)(iVar8 + 0x1f >> 5) * 4) << (-bVar5 & 0x1f) |
              *(uint *)(*param_2 + (ulonglong)(uint)(iVar8 >> 5) * 4) >> bVar5) & DAT_1803fa790;
    }
    iVar8 = (int)param_1[2];
    if (*(int *)((longlong)param_1 + 0xc) - iVar8 < 0x20) {
      *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      *(int *)(param_1 + 2) = iVar8 + 0x20;
      bVar5 = (byte)iVar8 & 0x1f;
      uVar3 = *(uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
      puVar1 = (uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
      uVar2 = uVar2 << bVar5 | uVar2 >> 0x20 - bVar5;
      uVar7 = 0x7fffffff >> (0x1f - bVar5 & 0x1f);
      uVar6 = uVar7 & 1;
      puVar1[uVar6] = puVar1[uVar6] ^ (puVar1[uVar6] ^ uVar2) & uVar7;
      *puVar1 = (uVar3 ^ uVar2) & -1 << bVar5 ^ uVar3;
    }
  }
  iVar8 = (int)param_2[2];
  if (*(int *)((longlong)param_2 + 0xc) - iVar8 < param_3) {
    *(int *)(param_2 + 2) = *(int *)((longlong)param_2 + 0xc);
    uVar2 = 0;
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    *(int *)(param_2 + 2) = iVar8 + param_3;
    bVar5 = (byte)iVar8 & 0x1f;
    uVar2 = (*(int *)(*param_2 + (ulonglong)(uint)(iVar8 + param_3 + -1 >> 5) * 4) <<
             (0x20 - bVar5 & 0x1f) |
            *(uint *)(*param_2 + (ulonglong)(uint)(iVar8 >> 5) * 4) >> bVar5) &
            *(uint *)(&DAT_1803fa710 + (longlong)param_3 * 4);
  }
  iVar8 = (int)param_1[2];
  uVar3 = *(int *)((longlong)param_1 + 0xc) - iVar8;
  if ((int)uVar3 < param_3) {
    *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 2) = iVar8 + param_3;
    bVar5 = (byte)iVar8 & 0x1f;
    uVar6 = *(uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
    puVar1 = (uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
    uVar9 = uVar2 << bVar5 | uVar2 >> 0x20 - bVar5;
    iVar8 = 1 << ((char)param_3 - 1U & 0x1f);
    uVar7 = iVar8 - 1U >> (0x1f - bVar5 & 0x1f);
    uVar2 = uVar7 & 1;
    uVar3 = uVar6 ^ uVar9;
    puVar1[uVar2] = puVar1[uVar2] ^ (puVar1[uVar2] ^ uVar9) & uVar7;
    *puVar1 = iVar8 * 2 + -1 << bVar5 & uVar3 ^ uVar6;
  }
  uVar4 = (uint7)(uint3)(uVar3 >> 8);
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') && (*(char *)((longlong)param_2 + 0x14) == '\0')
     ) {
    return CONCAT71(uVar4,1);
  }
  return (ulonglong)uVar4 << 8;
}


