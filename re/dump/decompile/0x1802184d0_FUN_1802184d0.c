// 0x1802184d0  FUN_1802184d0
// size=359 thunk=false
// signature: undefined FUN_1802184d0()
// status: ok


undefined8 *
FUN_1802184d0(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong *plVar13;
  undefined8 *local_58;
  uint local_50;
  
  puVar1 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)puVar1[1];
  uVar12 = 0;
  cVar7 = *(char *)((longlong)puVar10 + 0x19);
  puVar11 = puVar1;
  puVar6 = puVar10;
  while (puVar5 = puVar10, cVar7 == '\0') {
    cVar7 = FUN_180201cf0(puVar5 + 4,param_3);
    if (-1 < cVar7) {
      puVar10 = (undefined8 *)*puVar5;
      puVar11 = puVar5;
    }
    else {
      puVar10 = (undefined8 *)puVar5[2];
    }
    uVar12 = (uint)(-1 < cVar7);
    cVar7 = *(char *)((longlong)puVar10 + 0x19);
    puVar6 = puVar5;
  }
  if ((*(char *)((longlong)puVar11 + 0x19) == '\0') &&
     (cVar7 = FUN_180201cf0(param_3,puVar11 + 4), -1 < cVar7)) {
    *param_2 = puVar11;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    plVar13 = param_1;
    plVar8 = (longlong *)FUN_1802d8350(0x48);
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[6] = 0;
    plVar8[7] = 0;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(plVar8 + 4) = *param_3;
    *(undefined4 *)((longlong)plVar8 + 0x24) = uVar2;
    *(undefined4 *)(plVar8 + 5) = uVar3;
    *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar4;
    uVar2 = param_3[5];
    uVar3 = param_3[6];
    uVar4 = param_3[7];
    *(undefined4 *)(plVar8 + 6) = param_3[4];
    *(undefined4 *)((longlong)plVar8 + 0x34) = uVar2;
    *(undefined4 *)(plVar8 + 7) = uVar3;
    *(undefined4 *)((longlong)plVar8 + 0x3c) = uVar4;
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 6) = 0xf;
    *(undefined1 *)param_3 = 0;
    *(undefined4 *)(plVar8 + 8) = 0;
    *plVar8 = (longlong)puVar1;
    plVar8[1] = (longlong)puVar1;
    plVar8[2] = (longlong)puVar1;
    *(undefined2 *)(plVar8 + 3) = 0;
    local_58 = puVar6;
    local_50 = uVar12;
    uVar9 = FUN_18022bb90(param_1,&local_58,plVar8,param_4,plVar13,0);
    *param_2 = uVar9;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}


