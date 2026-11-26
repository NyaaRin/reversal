// 0x1800200b0  FUN_1800200b0
// size=464 thunk=false
// signature: undefined FUN_1800200b0()
// status: ok


void FUN_1800200b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (DAT_1803f925a == '\0') {
    DAT_1803f925a = '\x01';
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_18001d080(&local_58,
                  "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 48 89 91 28 03 00 00"
                  ,0x50);
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_18001d080(&local_38,"client.dll",10);
    DAT_1803f9268 = FUN_180015f40(&local_38,&local_58);
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_18001d080(&local_38,
                  "4C 8B DC 49 89 5B 18 49 89 6B 20 57 48 81 EC 90 00 00 00 8B 81 14 03 00 00",0x4a)
    ;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_18001d080(&local_58,"client.dll",10);
    DAT_1803f9270 = FUN_180015f40(&local_58,&local_38);
    puVar1 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_18001d080(&local_38,"48 83 79 10 00 74 09 48 C7 41 10 00 00 00 00 C3 48 83 C1 20",0x3b);
    puVar2 = &local_58;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_18001d080(&local_58,"client.dll",10);
    DAT_1803f9260 = FUN_180015f40(&local_58,&local_38);
    FUN_180014410("[PAT] BeamSeg Start=%p NextSeg=%p End=%p\n",DAT_1803f9268,DAT_1803f9270,
                  DAT_1803f9260,puVar1,puVar2);
    if (((DAT_1803f9268 != 0) && (DAT_1803f9270 != 0)) && (DAT_1803f9260 != 0)) {
      DAT_1803f9259 = 1;
      return;
    }
    DAT_1803f9259 = 0;
    FUN_180014410("[PAT-WARN] CBeamSegDraw x64 incomplete\n");
  }
  return;
}


