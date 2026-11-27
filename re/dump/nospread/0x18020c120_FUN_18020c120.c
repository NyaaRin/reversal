// 18020c120  FUN_18020c120
// signature: undefined FUN_18020c120()
// status: ok


undefined8 *
FUN_18020c120(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *local_58;
  uint local_50;
  
  puVar6 = DAT_1803fa8b0;
  puVar8 = (undefined8 *)DAT_1803fa8b0[1];
  uVar9 = 0;
  cVar7 = *(char *)((longlong)puVar8 + 0x19);
  puVar5 = puVar8;
  puVar10 = DAT_1803fa8b0;
  while (puVar4 = puVar8, cVar7 == '\0') {
    cVar7 = FUN_180201cf0(puVar4 + 4,param_2);
    if (-1 < cVar7) {
      puVar8 = (undefined8 *)*puVar4;
      puVar10 = puVar4;
    }
    else {
      puVar8 = (undefined8 *)puVar4[2];
    }
    uVar9 = (uint)(-1 < cVar7);
    cVar7 = *(char *)((longlong)puVar8 + 0x19);
    puVar5 = puVar4;
  }
  if ((*(char *)((longlong)puVar10 + 0x19) != '\0') ||
     (cVar7 = FUN_180201cf0(param_2,puVar10 + 4), cVar7 < '\0')) {
    if (DAT_1803fa8b8 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
      FUN_180013b80();
    }
    puVar10 = &DAT_1803fa8b0;
    puVar8 = (undefined8 *)FUN_1802d8350(0x50);
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(puVar8 + 4) = *param_2;
    *(undefined4 *)((longlong)puVar8 + 0x24) = uVar1;
    *(undefined4 *)(puVar8 + 5) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    *(undefined4 *)(puVar8 + 6) = param_2[4];
    *(undefined4 *)((longlong)puVar8 + 0x34) = uVar1;
    *(undefined4 *)(puVar8 + 7) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar3;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0xf;
    *(undefined1 *)param_2 = 0;
    *puVar8 = puVar6;
    puVar8[1] = puVar6;
    puVar8[2] = puVar6;
    *(undefined2 *)(puVar8 + 3) = 0;
    local_58 = puVar5;
    local_50 = uVar9;
    puVar10 = (undefined8 *)FUN_18022bb90(&DAT_1803fa8b0,&local_58,puVar8,param_4,puVar10,0);
  }
  return puVar10 + 8;
}


