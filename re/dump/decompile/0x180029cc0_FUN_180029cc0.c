// 0x180029cc0  FUN_180029cc0
// size=175 thunk=false
// signature: undefined FUN_180029cc0()
// status: ok


undefined8 * FUN_180029cc0(void)

{
  char **local_48;
  undefined1 *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  undefined1 local_10 [8];
  
  if ((DAT_1805c5a1c & 1) == 0) {
    DAT_1805c5a1c = DAT_1805c5a1c | 1;
    DAT_18042a8b8 = 0;
    uRam000000018042a8c0 = 0;
    DAT_18042a8c8 = 0;
    local_38 = "netvars.stored";
    local_30 = "axe.netvar.data";
    local_28 = "nw.Data";
    local_20 = "@nwvars";
    local_18 = "@nw2vars";
    local_48 = &local_38;
    local_40 = local_10;
    FUN_180029d70(&DAT_18042a8b8,&local_48);
    atexit(FUN_180308c30);
    return &DAT_18042a8b8;
  }
  return &DAT_18042a8b8;
}


