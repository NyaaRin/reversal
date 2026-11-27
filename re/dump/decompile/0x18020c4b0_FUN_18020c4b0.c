// 0x18020c4b0  FUN_18020c4b0
// size=344 thunk=false
// signature: undefined FUN_18020c4b0()
// status: ok


void FUN_18020c4b0(undefined8 param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if (DAT_1805c7ab8 <= DAT_1805c7ac8 + 1U) {
    FUN_18022d7a0();
  }
  DAT_1805c7ac0 = DAT_1805c7ab8 - 1 & DAT_1805c7ac0;
  uVar1 = DAT_1805c7ac0 + DAT_1805c7ac8;
  uVar6 = uVar1 & DAT_1805c7ab8 - 1;
  if (*(longlong *)(DAT_1805c7ab0 + uVar6 * 8) == 0) {
    uVar5 = FUN_1802d8350(0x68);
    *(undefined8 *)(DAT_1805c7ab0 + uVar6 * 8) = uVar5;
  }
  puVar2 = *(undefined4 **)(DAT_1805c7ab0 + (DAT_1805c7ab8 - 1 & uVar1) * 8);
  *puVar2 = *param_2;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  uVar5 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(puVar2 + 4) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(puVar2 + 8) = uVar5;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0xf;
  *(undefined1 *)(param_2 + 2) = 0;
  puVar2[10] = param_2[10];
  puVar2[0xb] = param_2[0xb];
  *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar5 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0x12) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(puVar2 + 0xe) = uVar4;
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x12) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_2 + 0x16) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(puVar2 + 0x14) = uVar4;
  *(undefined8 *)(puVar2 + 0x16) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  DAT_1805c7ac8 = DAT_1805c7ac8 + 1;
  return;
}


