// 0x1801488a0  FUN_1801488a0
// size=340 thunk=false
// signature: undefined FUN_1801488a0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801488a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined2 local_177;
  undefined1 local_175;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined1 local_148 [328];
  
  local_158 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  memset(local_148,0,0x140);
  FUN_1802053a0(local_148);
  _DAT_1803e8298 = 2;
  puVar5 = &DAT_1803e8130;
  puVar6 = &local_158;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    uVar1 = puVar8[4];
    uVar4 = puVar8[5];
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = puVar8[6];
    uVar3 = puVar8[7];
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = puVar8[8];
    uVar4 = puVar8[9];
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = puVar8[10];
    uVar3 = puVar8[0xb];
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = puVar8[0xc];
    uVar4 = puVar8[0xd];
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = puVar8[0xe];
    uVar3 = puVar8[0xf];
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    _DAT_1803e8298 = _DAT_1803e8298 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar8 + 0x10;
  } while (_DAT_1803e8298 != 0);
  uVar1 = puVar8[0x11];
  DAT_1803e8118._0_2_ = 0;
  uVar2 = puVar8[0x12];
  uVar3 = puVar8[0x13];
  DAT_1803e8118._2_1_ = 1;
  puVar7[0x10] = puVar8[0x10];
  puVar7[0x11] = uVar1;
  uVar1 = puVar8[0x14];
  uVar4 = puVar8[0x15];
  DAT_1803e8124 = 0xffffffff;
  _DAT_1803e811c = _DAT_1803e8298;
  puVar7[0x12] = uVar2;
  puVar7[0x13] = uVar3;
  DAT_1803e8128 = 0;
  uVar2 = puVar8[0x16];
  uVar3 = puVar8[0x17];
  DAT_1803e812c = 0xbf800000;
  puVar7[0x14] = uVar1;
  puVar7[0x15] = uVar4;
  DAT_1803e8280 = 0;
  uVar1 = puVar8[0x18];
  uVar4 = puVar8[0x19];
  DAT_1803e8284 = 0xffffffff;
  puVar7[0x16] = uVar2;
  puVar7[0x17] = uVar3;
  DAT_1803e8288 = 0;
  puVar7[0x18] = uVar1;
  puVar7[0x19] = uVar4;
  DAT_1803e8118._3_1_ = local_175;
  _DAT_1803e8281 = local_177;
  DAT_1803e8283 = local_175;
  DAT_1803e828c = 0x3f800000;
  _DAT_1803e8290 = 0xffffffffffffffff;
  return;
}


