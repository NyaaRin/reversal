// 1801582f0  FUN_1801582f0
// signature: undefined FUN_1801582f0()
// status: ok


void FUN_1801582f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [48];
  
  puVar5 = DAT_1803e9df8;
  puVar7 = DAT_1803e9df0;
  if (DAT_1803e9df0 != DAT_1803e9df8) {
    do {
      FUN_18020e450(puVar7);
      puVar7 = puVar7 + 5;
    } while (puVar7 != puVar5);
    DAT_1803e9df8 = DAT_1803e9df0;
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_18001d080(&local_e8,"addons",6);
  puVar6 = (undefined4 *)FUN_180157fb0(local_88,&local_e8,1);
  puVar5 = DAT_1803e9df8;
  if (DAT_1803e9df8 == DAT_1803e9e00) {
    FUN_180223cb0();
  }
  else {
    *DAT_1803e9df8 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *(undefined4 *)puVar5 = *puVar6;
    *(undefined4 *)((longlong)puVar5 + 4) = uVar1;
    *(undefined4 *)(puVar5 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
    uVar4 = *(undefined8 *)(puVar6 + 6);
    puVar5[2] = *(undefined8 *)(puVar6 + 4);
    puVar5[3] = uVar4;
    *(undefined1 *)puVar6 = 0;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined4 *)(puVar5 + 4) = puVar6[8];
    *(undefined1 *)((longlong)puVar5 + 0x24) = *(undefined1 *)(puVar6 + 9);
    DAT_1803e9df8 = DAT_1803e9df8 + 5;
  }
  FUN_18020e450(local_88);
  FUN_18020e450(&local_e8);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_18001d080(&local_c8,"lua/bin",7);
  puVar6 = (undefined4 *)FUN_180157fb0(local_60,&local_c8,0);
  puVar5 = DAT_1803e9df8;
  if (DAT_1803e9df8 == DAT_1803e9e00) {
    FUN_180223cb0();
  }
  else {
    *DAT_1803e9df8 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *(undefined4 *)puVar5 = *puVar6;
    *(undefined4 *)((longlong)puVar5 + 4) = uVar1;
    *(undefined4 *)(puVar5 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
    uVar4 = *(undefined8 *)(puVar6 + 6);
    puVar5[2] = *(undefined8 *)(puVar6 + 4);
    puVar5[3] = uVar4;
    *(undefined1 *)puVar6 = 0;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined4 *)(puVar5 + 4) = puVar6[8];
    *(undefined1 *)((longlong)puVar5 + 0x24) = *(undefined1 *)(puVar6 + 9);
    DAT_1803e9df8 = DAT_1803e9df8 + 5;
  }
  FUN_18020e450(local_60);
  FUN_18020e450(&local_c8);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_18001d080(&local_a8,"lua/*.lua",9);
  puVar6 = (undefined4 *)FUN_180157fb0(local_38,&local_a8,0);
  puVar5 = DAT_1803e9df8;
  if (DAT_1803e9df8 == DAT_1803e9e00) {
    FUN_180223cb0();
  }
  else {
    *DAT_1803e9df8 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *(undefined4 *)puVar5 = *puVar6;
    *(undefined4 *)((longlong)puVar5 + 4) = uVar1;
    *(undefined4 *)(puVar5 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
    uVar4 = *(undefined8 *)(puVar6 + 6);
    puVar5[2] = *(undefined8 *)(puVar6 + 4);
    puVar5[3] = uVar4;
    *(undefined1 *)puVar6 = 0;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined4 *)(puVar5 + 4) = puVar6[8];
    *(undefined1 *)((longlong)puVar5 + 0x24) = *(undefined1 *)(puVar6 + 9);
    DAT_1803e9df8 = DAT_1803e9df8 + 5;
  }
  FUN_18020e450(local_38);
  FUN_18020e450(&local_a8);
  return;
}


