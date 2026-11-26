// 0x1800b4050  FUN_1800b4050
// size=369 thunk=false
// signature: undefined FUN_1800b4050()
// status: ok


int FUN_1800b4050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_48 [32];
  
  puVar7 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  while( true ) {
    if (puVar7 == puVar1) {
      return -1;
    }
    uVar6 = *param_1;
    local_78 = &local_b8;
    pcVar2 = (char *)*puVar7;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    sVar4 = strlen(pcVar2);
    FUN_18001d080(&local_b8,pcVar2,sVar4);
    local_70 = &local_b8;
    local_68 = local_48;
    uVar5 = FUN_18016d4c0(local_48,&local_b8);
    uVar6 = FUN_180018ef0(uVar6,uVar5);
    FUN_18020e450(&local_b8);
    local_60 = &local_98;
    pcVar2 = (char *)puVar7[1];
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    sVar4 = strlen(pcVar2);
    FUN_18001d080(&local_98,pcVar2,sVar4);
    local_58 = &local_98;
    local_50 = local_48;
    uVar5 = FUN_18016d4c0(local_48,&local_98);
    iVar3 = FUN_180018c10(uVar6,uVar5);
    FUN_18020e450(&local_98);
    if (0 < iVar3) break;
    puVar7 = puVar7 + 2;
  }
  return iVar3;
}


