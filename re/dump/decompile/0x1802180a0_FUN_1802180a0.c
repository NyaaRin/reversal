// 0x1802180a0  FUN_1802180a0
// size=341 thunk=false
// signature: undefined FUN_1802180a0()
// status: ok


undefined8 *
FUN_1802180a0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *local_68;
  uint local_60;
  
  puVar6 = DAT_180427620;
  puVar8 = (undefined8 *)DAT_180427620[1];
  uVar10 = 0;
  cVar7 = *(char *)((longlong)puVar8 + 0x19);
  puVar5 = puVar8;
  puVar11 = DAT_180427620;
  while (puVar4 = puVar8, cVar7 == '\0') {
    cVar7 = FUN_180201cf0(puVar4 + 4,param_3);
    if (-1 < cVar7) {
      puVar8 = (undefined8 *)*puVar4;
      puVar11 = puVar4;
    }
    else {
      puVar8 = (undefined8 *)puVar4[2];
    }
    uVar10 = (uint)(-1 < cVar7);
    cVar7 = *(char *)((longlong)puVar8 + 0x19);
    puVar5 = puVar4;
  }
  if ((*(char *)((longlong)puVar11 + 0x19) == '\0') &&
     (cVar7 = FUN_180201cf0(param_3,puVar11 + 4), -1 < cVar7)) {
    *param_2 = puVar11;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (DAT_180427628 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    puVar11 = &DAT_180427620;
    puVar8 = (undefined8 *)FUN_1802d8350(0x48);
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(puVar8 + 4) = *param_3;
    *(undefined4 *)((longlong)puVar8 + 0x24) = uVar1;
    *(undefined4 *)(puVar8 + 5) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar3;
    uVar1 = param_3[5];
    uVar2 = param_3[6];
    uVar3 = param_3[7];
    *(undefined4 *)(puVar8 + 6) = param_3[4];
    *(undefined4 *)((longlong)puVar8 + 0x34) = uVar1;
    *(undefined4 *)(puVar8 + 7) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar3;
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 6) = 0xf;
    *(undefined1 *)param_3 = 0;
    *(undefined1 *)(puVar8 + 8) = 0;
    *puVar8 = puVar6;
    puVar8[1] = puVar6;
    puVar8[2] = puVar6;
    *(undefined2 *)(puVar8 + 3) = 0;
    local_68 = puVar5;
    local_60 = uVar10;
    uVar9 = FUN_18022bb90(&DAT_180427620,&local_68,puVar8,param_4,puVar11,0);
    *param_2 = uVar9;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}


