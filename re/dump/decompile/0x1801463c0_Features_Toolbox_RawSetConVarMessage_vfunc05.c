// 0x1801463c0  Features_Toolbox_RawSetConVarMessage_vfunc05
// size=448 thunk=false
// signature: undefined Features_Toolbox_RawSetConVarMessage_vfunc05()
// status: ok


undefined8 Features_Toolbox_RawSetConVarMessage_vfunc05(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  sbyte sVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  
  iVar3 = (int)param_2[2];
  if (*(int *)((longlong)param_2 + 0xc) - iVar3 < 6) {
    *(int *)(param_2 + 2) = *(int *)((longlong)param_2 + 0xc);
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    *(int *)(param_2 + 2) = iVar3 + 6;
    bVar7 = (byte)iVar3 & 0x1f;
    uVar6 = *(uint *)(*param_2 + ((longlong)iVar3 >> 5) * 4);
    puVar1 = (uint *)(*param_2 + ((longlong)iVar3 >> 5) * 4);
    uVar10 = 5 << bVar7 | 5U >> 0x20 - bVar7;
    uVar9 = 0x1f >> (0x1f - bVar7 & 0x1f);
    uVar5 = uVar9 & 1;
    puVar1[uVar5] = puVar1[uVar5] ^ (puVar1[uVar5] ^ uVar10) & uVar9;
    *puVar1 = (uVar6 ^ uVar10) & 0x3f << bVar7 ^ uVar6;
  }
  uVar6 = *(uint *)(param_2 + 2);
  if ((int)(*(int *)((longlong)param_2 + 0xc) - uVar6) < 8) {
    *(int *)(param_2 + 2) = *(int *)((longlong)param_2 + 0xc);
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    *(uint *)(param_2 + 2) = uVar6 + 8;
    sVar4 = (sbyte)(uVar6 & 0x1f);
    uVar5 = *(uint *)(*param_2 + ((longlong)(int)uVar6 >> 5) * 4);
    puVar1 = (uint *)(*param_2 + ((longlong)(int)uVar6 >> 5) * 4);
    uVar9 = 0x7f >> (0x1fU - sVar4 & 0x1f);
    uVar10 = 1U >> (0x20U - sVar4 & 0x1f) | 1 << (uVar6 & 0x1f);
    uVar6 = uVar9 & 1;
    puVar1[uVar6] = puVar1[uVar6] ^ (puVar1[uVar6] ^ uVar10) & uVar9;
    *puVar1 = (uVar5 ^ uVar10) & 0xff << sVar4 ^ uVar5;
  }
  pcVar8 = *(char **)(param_1 + 8);
  if (*(char **)(param_1 + 8) == (char *)0x0) {
    FUN_180019830(param_2,0,8);
  }
  else {
    do {
      FUN_180019830(param_2,(int)*pcVar8,8);
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
  }
  pcVar8 = *(char **)(param_1 + 0x10);
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_180019830(param_2,0,8);
    return 1;
  }
  do {
    FUN_180019830(param_2,(int)*pcVar8,8);
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  return 1;
}


