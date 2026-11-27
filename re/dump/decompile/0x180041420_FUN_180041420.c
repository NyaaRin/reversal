// 0x180041420  FUN_180041420
// size=145 thunk=false
// signature: undefined FUN_180041420()
// status: ok


void FUN_180041420(void)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (DAT_1803e7564 != -1) {
    lVar1 = FUN_180039770();
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) &&
       (*(longlong *)(lVar1 + 8) == DAT_1803ff7d0)) {
      FUN_18002d8c0(lVar1,DAT_1803e7564);
    }
  }
  if (DAT_1803ff8a8 != 0) {
    FUN_180014410("[LUASTACK] private stack released\n");
  }
  DAT_1803e7564 = 0xffffffff;
  DAT_1803ff8a8 = 0;
  DAT_1803ff7d0 = 0;
  DAT_1803ff8a0 = 0;
  puVar2 = (undefined4 *)&DAT_1803ff7e0;
  do {
    *(undefined1 *)puVar2 = 0;
    puVar2 = puVar2 + 6;
  } while (puVar2 != &DAT_1803ff8a0);
  return;
}


