// 0x1800713d0  FUN_1800713d0
// size=427 thunk=false
// signature: undefined FUN_1800713d0()
// status: ok


void FUN_1800713d0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_18001d080(&local_a8,"48 89 5C 24 08 48 89 74 24 10 57 48 8B F9",0x29);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_18001d080(&local_88,"engine.dll",10);
  lVar2 = FUN_180015f40(&local_88,&local_a8);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_18001d080(&local_68,
                "48 89 5C 24 08 57 48 83 EC 20 48 8B 01 48 8B FA 48 8B D9 FF 50 38 41 B1 01 41 B8 06 00 00 00 8B D0 48 8B CF E8 ? ? ? ? 8B 53 20 41 B1 01 41 B8 14"
                ,0x91);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_18001d080(&local_48,"engine.dll",10);
  lVar3 = FUN_180015f40(&local_48,&local_68);
  puVar5 = &DAT_180346a84;
  puVar6 = &DAT_180346a84;
  if (lVar2 != 0) {
    puVar6 = &DAT_180346438;
  }
  FUN_180014410("[PAT] GMod NetRead(in)   = %p %s\n",lVar2,puVar6);
  if (lVar3 != 0) {
    puVar5 = &DAT_180346438;
  }
  FUN_180014410("[PAT] GMod NetWrite(out) = %p %s\n",lVar3,puVar5);
  DAT_1803fe370 = FUN_18006e130;
  if (lVar2 != 0) {
    uVar1 = FUN_180242fc0(lVar2,FUN_18006e480,&DAT_1803fefa8);
    uVar4 = FUN_1802436b0(uVar1);
    FUN_180014410("[MH] GMod NetRead: %s\n",uVar4);
  }
  if (lVar3 != 0) {
    uVar1 = FUN_180242fc0(lVar3,FUN_18006e640,&DAT_1803fefb8);
    uVar4 = FUN_1802436b0(uVar1);
    FUN_180014410("[MH] GMod NetWrite: %s\n",uVar4);
  }
  return;
}


