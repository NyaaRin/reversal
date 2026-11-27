// 0x180023290  FUN_180023290
// size=156 thunk=false
// signature: undefined FUN_180023290()
// status: ok


void FUN_180023290(void)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_1803fd090 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,
                  "48 89 5C 24 08 57 48 83 EC 20 48 8B DA 48 8B F9 0F B6 52 09 0F B6 43 08 24 FC 88 43 08 83 FA 0C"
                  ,0x5f);
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_18001d080(&local_28,"lua_shared.dll",0xe);
    DAT_1803fd090 = FUN_180015f40(&local_28,&local_48);
  }
  return;
}


