// 0x1800b59b0  FUN_1800b59b0
// size=141 thunk=false
// signature: undefined FUN_1800b59b0()
// status: ok


undefined8 FUN_1800b59b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = 2;
  do {
    puVar4 = param_2;
    puVar3 = param_1;
    uVar1 = puVar3[1];
    *puVar4 = *puVar3;
    puVar4[1] = uVar1;
    uVar1 = puVar3[3];
    puVar4[2] = puVar3[2];
    puVar4[3] = uVar1;
    uVar1 = puVar3[5];
    puVar4[4] = puVar3[4];
    puVar4[5] = uVar1;
    uVar1 = puVar3[7];
    puVar4[6] = puVar3[6];
    puVar4[7] = uVar1;
    uVar1 = puVar3[9];
    puVar4[8] = puVar3[8];
    puVar4[9] = uVar1;
    uVar1 = puVar3[0xb];
    puVar4[10] = puVar3[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar3[0xd];
    puVar4[0xc] = puVar3[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar3[0xf];
    puVar4[0xe] = puVar3[0xe];
    puVar4[0xf] = uVar1;
    lVar2 = lVar2 + -1;
    param_1 = puVar3 + 0x10;
    param_2 = puVar4 + 0x10;
  } while (lVar2 != 0);
  uVar1 = puVar3[0x11];
  puVar4[0x10] = puVar3[0x10];
  puVar4[0x11] = uVar1;
  uVar1 = puVar3[0x13];
  puVar4[0x12] = puVar3[0x12];
  puVar4[0x13] = uVar1;
  uVar1 = puVar3[0x15];
  puVar4[0x14] = puVar3[0x14];
  puVar4[0x15] = uVar1;
  uVar1 = puVar3[0x17];
  puVar4[0x16] = puVar3[0x16];
  puVar4[0x17] = uVar1;
  uVar1 = puVar3[0x19];
  puVar4[0x18] = puVar3[0x18];
  puVar4[0x19] = uVar1;
  return 1;
}


