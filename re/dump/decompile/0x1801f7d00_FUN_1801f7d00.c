// 0x1801f7d00  FUN_1801f7d00
// size=667 thunk=false
// signature: undefined FUN_1801f7d00()
// status: ok


bool FUN_1801f7d00(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_f8 = 0;
  uStack_f0 = 0;
  lVar5 = 0;
  local_e8 = 0;
  local_e0 = 0;
  FUN_18001d080(&local_f8,
                "48 89 5C 24 ? 57 48 83 EC ? F2 0F 10 15 ? ? ? ? 0F 57 C9 48 8B 0D ? ? ? ? B3 01",
                0x4f);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_18001d080(&local_d8,"engine.dll",10);
  lVar2 = FUN_180015f40(&local_d8,&local_f8);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"F3 0F 11 0D ? ? ? ? E8 ? ? ? ? F3 0F 10 15 ? ? ? ? F3 0F 10 0D",0x3e);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"engine.dll",10);
  lVar3 = FUN_180015f40(&local_98,&local_b8);
  local_38 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_18001d080(&local_78,"F3 0F 10 05 ? ? ? ? 33 DB",0x19);
  local_30 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_18001d080(&local_58,"engine.dll",10);
  lVar4 = FUN_180015f40(&local_58,&local_78);
  DAT_1803fa428 = lVar5;
  if (lVar3 != 0) {
    DAT_1803fa428 = (longlong)*(int *)(lVar3 + 4) + 8 + lVar3;
  }
  if (lVar4 != 0) {
    lVar5 = (longlong)*(int *)(lVar4 + 4) + 8 + lVar4;
  }
  puVar7 = &DAT_180346a84;
  if (lVar2 != 0) {
    puVar7 = &DAT_180346438;
  }
  DAT_1803fa480 = lVar5;
  FUN_180014410("[PAT] Host_AccumulateTime      = %p %s\n",lVar2,puVar7);
  FUN_180014410("[PAT] host_frametime           = %p\n",DAT_1803fa428);
  FUN_180014410("[PAT] host_frametime_unbounded = %p\n",DAT_1803fa480);
  if (((DAT_1803fa428 != 0) && (DAT_1803fa480 != 0)) && (DAT_1803fa480 - DAT_1803fa428 != 4)) {
    FUN_180014410("[SPEED] frametime globals are not adjacent (%p / %p) - refusing to hook\n",
                  DAT_1803fa428,DAT_1803fa480);
    DAT_1803fa428 = 0;
    DAT_1803fa480 = 0;
    return false;
  }
  if (((lVar2 != 0) && (DAT_1803fa428 != 0)) && (DAT_1803fa480 != 0)) {
    iVar1 = FUN_180242fc0(lVar2,FUN_1801f7810,&DAT_1803fa460);
    uVar6 = FUN_1802436b0(iVar1);
    FUN_180014410("[SPEED] Host_AccumulateTime hook=%s\n",uVar6);
    DAT_180423572 = iVar1 == 0;
    return iVar1 == 0;
  }
  FUN_180014410("[SPEED] speedhack disabled (missing signature)\n");
  return false;
}


