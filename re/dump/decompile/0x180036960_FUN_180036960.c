// 0x180036960  FUN_180036960
// size=403 thunk=false
// signature: undefined FUN_180036960()
// status: ok


undefined4 * FUN_180036960(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + 2);
  puVar2 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (puVar2 != puVar1) {
    FUN_18020d0b0(puVar2);
    *puVar2 = *puVar1;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
  }
  FUN_18020e8a0(param_1 + 8,param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x13] = param_2[0x13];
  FUN_18020e8a0(param_1 + 0x14,param_2 + 0x14);
  param_1[0x1c] = param_2[0x1c];
  FUN_18020d830(param_1 + 0x1e,param_2 + 0x1e);
  puVar3 = param_1 + 0x26;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  if (puVar3 != param_2 + 0x26) {
    FUN_1802097d0(puVar3);
    *puVar3 = param_2[0x26];
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x2a);
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_2 + 0x2a) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x2c) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x2e);
    *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_2 + 0x2e) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x32);
    *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
    *(undefined8 *)(param_2 + 0x32) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_2 + 0x34) = uVar4;
  }
  puVar1 = (undefined8 *)(param_2 + 0x36);
  puVar2 = (undefined8 *)(param_1 + 0x36);
  if (puVar2 != puVar1) {
    FUN_18021d5c0(puVar2);
    *puVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x3a);
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x3a) = 0;
  }
  param_1[0x3c] = param_2[0x3c];
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
  return param_1;
}


