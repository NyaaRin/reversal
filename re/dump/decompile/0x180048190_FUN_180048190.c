// 0x180048190  FUN_180048190
// size=69 thunk=false
// signature: undefined FUN_180048190()
// status: ok


undefined8 FUN_180048190(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180039770();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) {
    lVar2 = FUN_18003a890();
    if (lVar2 != 0) {
      DAT_1803e774c = FUN_180047a10(lVar1);
    }
  }
  return 0;
}


