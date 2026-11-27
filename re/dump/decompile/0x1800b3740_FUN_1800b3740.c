// 0x1800b3740  FUN_1800b3740
// size=100 thunk=false
// signature: undefined FUN_1800b3740()
// status: ok


int FUN_1800b3740(void)

{
  int iVar1;
  
  if (DAT_1803fed50 == 0) {
    if (DAT_1803fa340 != 0) {
      DAT_1803fed50 = FUN_180016fb0("sv_maxusrcmdprocessticks");
      if (DAT_1803fed50 != 0) goto LAB_1800b3771;
    }
    return 0x18;
  }
LAB_1800b3771:
  iVar1 = FUN_1800197a0(DAT_1803fed50);
  if (iVar1 < 1) {
    return 0xf;
  }
  if (0x40 < iVar1) {
    iVar1 = 0x40;
  }
  return iVar1;
}


