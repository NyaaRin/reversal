// 0x180147a10  FUN_180147a10
// size=298 thunk=false
// signature: undefined FUN_180147a10()
// status: ok


char FUN_180147a10(void)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_180426115 == '\0') {
    DAT_180426115 = '\x01';
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"40 53 48 83 EC 20 83 B9 ? ? ? ? FF 48 8B D9 74 ? E8",0x33);
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_18001d080(&local_28,"engine.dll",10);
    lVar1 = FUN_180015f40(&local_28,&local_48);
    if (lVar1 == 0) {
      FUN_180014410("[Toolbox] ForceFullUpdate sig OUTDATED - full-update restore disabled\n");
      return DAT_1803ff0e8;
    }
    DAT_180409a88 = (longlong)*(int *)(lVar1 + 8);
    DAT_180409a80 = lVar1;
    DAT_180409a78 = FUN_180147920();
    if ((DAT_180409a78 == 0) || (DAT_180409a88 == 0)) {
      DAT_1803ff0e8 = '\0';
    }
    else {
      DAT_1803ff0e8 = '\x01';
    }
    pcVar2 = "cl NOT FOUND - full-update restore disabled";
    if (DAT_1803ff0e8 != '\0') {
      pcVar2 = "OK";
    }
    FUN_180014410("[Toolbox] ForceFullUpdate=%p cl=%p m_nDeltaTick=+0x%zX %s\n",lVar1,DAT_180409a78,
                  DAT_180409a88,pcVar2);
  }
  return DAT_1803ff0e8;
}


