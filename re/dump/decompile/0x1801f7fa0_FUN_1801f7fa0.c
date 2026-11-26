// 0x1801f7fa0  FUN_1801f7fa0
// size=476 thunk=false
// signature: undefined FUN_1801f7fa0()
// status: ok


void FUN_1801f7fa0(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  FUN_18001d080(&local_a8,
                "40 53 57 41 54 41 55 41 56 48 81 EC ? ? ? ? 4C 8D 72 ? 4C 8B EA 4C 8B E1 33 D2 49 8B CE"
                ,0x57);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_18001d080(&local_88,"engine.dll",10);
  lVar3 = FUN_180015f40(&local_88,&local_a8);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_18001d080(&local_68,
                "40 55 53 56 57 41 55 41 56 41 57 48 8D AC 24 ? ? ? ? B8 ? ? ? ? E8 ? ? ? ? 48 2B E0 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 83 B9 B8 ? ? ? ? 48 8B F2 4C 8B F1"
                ,0xa1);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_18001d080(&local_48,"engine.dll",10);
  lVar4 = FUN_180015f40(&local_48,&local_68);
  puVar6 = &DAT_180346a84;
  puVar7 = &DAT_180346a84;
  if (lVar3 != 0) {
    puVar7 = &DAT_180346438;
  }
  FUN_180014410("[PAT] CNetChan::ProcessPacket = %p %s\n",lVar3,puVar7);
  if (lVar4 != 0) {
    puVar6 = &DAT_180346438;
  }
  FUN_180014410("[PAT] CNetChan::SendDatagram  = %p %s\n",lVar4,puVar6);
  if ((lVar3 != 0) && (lVar4 != 0)) {
    iVar1 = FUN_180242fc0(lVar3,FUN_1801f7680,&DAT_1803fa4a8);
    iVar2 = FUN_180242fc0(lVar4,FUN_1801f76e0,&DAT_1803fa488);
    FUN_1802436b0(iVar2);
    uVar5 = FUN_1802436b0(iVar1);
    FUN_180014410("[MH] ProcessPacket: %s | SendDatagram: %s\n",uVar5);
    if ((iVar1 == 0) && (iVar2 == 0)) {
      DAT_1803facfa = 1;
      return;
    }
    DAT_1803facfa = 0;
    return;
  }
  FUN_180014410("[FAKEPING] signature missing; fakeping disabled this session\n");
  return;
}


