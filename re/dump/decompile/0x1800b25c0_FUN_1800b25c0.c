// 0x1800b25c0  FUN_1800b25c0
// size=147 thunk=false
// signature: undefined FUN_1800b25c0()
// status: ok


void FUN_1800b25c0(undefined8 param_1)

{
  char *pcVar1;
  
  if (DAT_1804099e8 < 0x14) {
    pcVar1 = "NOT ENOUGH DATA - move around on a live map first";
  }
  else if (DAT_180409a28 < 2) {
    pcVar1 = "PER FRAME - choke does NOT steer the body (anti-aim design must change)";
    if (DAT_180409a4c < 1) {
      pcVar1 = "ONLY 1 CALL/TICK SO FAR - nothing has been choked yet, enable fakelag";
    }
  }
  else {
    pcVar1 = "PER USERCMD - choked commands DO steer the server body (design holds)";
  }
  FUN_180014410("[ANIMPROBE] %s: maxCalls/tick=%d maxChoke=%d bursts=%lld calls=%lld ticks=%lld worstDrift=%.4f deg => %s\n"
                ,param_1,DAT_180409a28,DAT_180409a4c,DAT_180409a60,DAT_1804099e8,DAT_180409a00,
                (double)DAT_180409a20,pcVar1);
  return;
}


