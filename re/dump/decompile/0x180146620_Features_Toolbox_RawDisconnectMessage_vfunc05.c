// 0x180146620  Features_Toolbox_RawDisconnectMessage_vfunc05
// size=256 thunk=false
// signature: undefined Features_Toolbox_RawDisconnectMessage_vfunc05()
// status: ok


undefined8 Features_Toolbox_RawDisconnectMessage_vfunc05(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  sbyte sVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  
  uVar5 = *(uint *)(param_2 + 2);
  if ((int)(*(int *)((longlong)param_2 + 0xc) - uVar5) < 6) {
    *(int *)(param_2 + 2) = *(int *)((longlong)param_2 + 0xc);
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    *(uint *)(param_2 + 2) = uVar5 + 6;
    uVar3 = *(uint *)(*param_2 + ((longlong)(int)uVar5 >> 5) * 4);
    puVar1 = (uint *)(*param_2 + ((longlong)(int)uVar5 >> 5) * 4);
    sVar4 = (sbyte)(uVar5 & 0x1f);
    uVar8 = 1U >> (0x20U - sVar4 & 0x1f) | 1 << (uVar5 & 0x1f);
    uVar5 = 0x1f >> (0x1fU - sVar4 & 0x1f);
    uVar6 = uVar5 & 1;
    puVar1[uVar6] = puVar1[uVar6] ^ (puVar1[uVar6] ^ uVar8) & uVar5;
    *puVar1 = (uVar3 ^ uVar8) & 0x3f << sVar4 ^ uVar3;
  }
  pcVar7 = *(char **)(param_1 + 8);
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    do {
      FUN_180019830(param_2,(int)*pcVar7,8);
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    return 1;
  }
  FUN_180019830(param_2,0,8);
  return 1;
}


