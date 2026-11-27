// 0x18012aa50  FUN_18012aa50
// size=175 thunk=false
// signature: undefined FUN_18012aa50()
// status: ok


void FUN_18012aa50(void)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_180400e50 == '\0') {
    DAT_180400e50 = '\x01';
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,
                  "48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 41 56 41 57 48 81 EC B0 01 00 00"
                  ,0x50);
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_18001d080(&local_28,"engine.dll",10);
    DAT_180400ea0 = FUN_180015f40(&local_28,&local_48);
    FUN_180014410("[SKY] LoadNamedSkys(engine) @ %p\n",DAT_180400ea0);
  }
  return;
}


