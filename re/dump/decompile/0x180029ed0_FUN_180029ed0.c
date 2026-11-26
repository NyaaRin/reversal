// 0x180029ed0  FUN_180029ed0
// size=239 thunk=false
// signature: undefined FUN_180029ed0()
// status: ok


undefined8 * FUN_180029ed0(void)

{
  char **local_68;
  undefined1 *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined *local_38;
  undefined *local_30;
  char *local_28;
  undefined *local_20;
  undefined *local_18;
  char *local_10;
  
  if ((DAT_180426264 & 1) == 0) {
    DAT_180426264 = DAT_180426264 | 1;
    DAT_1805beef0 = 0;
    uRam00000001805beef8 = 0;
    DAT_1805bef00 = 0;
    local_58 = "DRPVar.rpname";
    local_50 = "rpname";
    local_48 = "sRPName";
    local_40 = "RPName";
    local_38 = &DAT_180341140;
    local_30 = &DAT_180341148;
    local_28 = "sName";
    local_20 = &DAT_180341158;
    local_18 = &DAT_180341160;
    local_10 = "dro.Nick";
    local_68 = &local_58;
    local_60 = &stack0xfffffffffffffff8;
    FUN_180029d70(&DAT_1805beef0,&local_68);
    atexit(FUN_180308cb0);
    return &DAT_1805beef0;
  }
  return &DAT_1805beef0;
}


