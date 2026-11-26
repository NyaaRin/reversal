// 0x1800b5800  FUN_1800b5800
// size=169 thunk=false
// signature: undefined FUN_1800b5800()
// status: ok


undefined8 FUN_1800b5800(void)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_1803ff110 != '\0') {
    return DAT_1803fe790;
  }
  DAT_1803ff110 = 1;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_18001d080(&local_48,"40 53 48 83 EC 30 48 8B D9 8B 89 ? ? ? ? 83 F9 FF",0x31);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_18001d080(&local_28,"client.dll",10);
  DAT_1803fe790 = FUN_180015f40(&local_28,&local_48);
  return DAT_1803fe790;
}


