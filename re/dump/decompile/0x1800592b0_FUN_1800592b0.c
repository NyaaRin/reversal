// 0x1800592b0  FUN_1800592b0
// size=135 thunk=false
// signature: undefined FUN_1800592b0()
// status: ok


void FUN_1800592b0(void)

{
  longlong lVar1;
  char *pcVar2;
  
  FUN_18003b280();
  FUN_180041420();
  lVar1 = FUN_180039770();
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) {
    pcVar2 = "[LUAGUARD] lua teardown skipped: no client state\n";
  }
  else {
    FUN_180058850(lVar1);
    FUN_180039a50(lVar1);
    FUN_180058d90(lVar1,0x2736efefe1fb290);
    FUN_180058d90(lVar1,0xa66cb242adaa3914);
    FUN_180058f10(lVar1);
    pcVar2 = "[LUAGUARD] lua teardown complete\n";
  }
  FUN_180014410(pcVar2);
  DAT_1803ff7c8 = 2;
  return;
}


