// 0x1802202b0  FUN_1802202b0
// size=215 thunk=false
// signature: undefined FUN_1802202b0()
// status: ok


undefined8 * FUN_1802202b0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  uVar8 = param_1[1];
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar5 = 2;
    puVar3 = param_3;
    puVar4 = *(undefined8 **)
              (*(longlong *)(lVar1 + 8) + (*(longlong *)(lVar1 + 0x10) - 1U & uVar8) * 8);
    do {
      puVar7 = puVar4;
      puVar6 = puVar3;
      uVar2 = puVar7[1];
      *puVar6 = *puVar7;
      puVar6[1] = uVar2;
      uVar2 = puVar7[3];
      puVar6[2] = puVar7[2];
      puVar6[3] = uVar2;
      uVar2 = puVar7[5];
      puVar6[4] = puVar7[4];
      puVar6[5] = uVar2;
      uVar2 = puVar7[7];
      puVar6[6] = puVar7[6];
      puVar6[7] = uVar2;
      uVar2 = puVar7[9];
      puVar6[8] = puVar7[8];
      puVar6[9] = uVar2;
      uVar2 = puVar7[0xb];
      puVar6[10] = puVar7[10];
      puVar6[0xb] = uVar2;
      uVar2 = puVar7[0xd];
      puVar6[0xc] = puVar7[0xc];
      puVar6[0xd] = uVar2;
      uVar2 = puVar7[0xf];
      puVar6[0xe] = puVar7[0xe];
      puVar6[0xf] = uVar2;
      lVar5 = lVar5 + -1;
      puVar3 = puVar6 + 0x10;
      puVar4 = puVar7 + 0x10;
    } while (lVar5 != 0);
    uVar2 = puVar7[0x11];
    param_3 = (undefined8 *)((longlong)param_3 + 0x154);
    uVar8 = uVar8 + 1;
    puVar6[0x10] = puVar7[0x10];
    puVar6[0x11] = uVar2;
    uVar2 = puVar7[0x13];
    puVar6[0x12] = puVar7[0x12];
    puVar6[0x13] = uVar2;
    uVar2 = puVar7[0x15];
    puVar6[0x14] = puVar7[0x14];
    puVar6[0x15] = uVar2;
    uVar2 = puVar7[0x17];
    puVar6[0x16] = puVar7[0x16];
    puVar6[0x17] = uVar2;
    uVar2 = puVar7[0x19];
    puVar6[0x18] = puVar7[0x18];
    puVar6[0x19] = uVar2;
    *(undefined4 *)(puVar6 + 0x1a) = *(undefined4 *)(puVar7 + 0x1a);
  }
  return param_3;
}


