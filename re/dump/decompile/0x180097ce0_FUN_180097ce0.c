// 0x180097ce0  FUN_180097ce0
// size=69 thunk=false
// signature: undefined FUN_180097ce0()
// status: ok


undefined8 FUN_180097ce0(void)

{
  undefined8 uVar1;
  
  if (DAT_1803ff0a8 == 0) {
    if (DAT_1803fa340 != 0) {
      DAT_1803ff0a8 = FUN_180016fb0("hg_aimtoshoot");
      if (DAT_1803ff0a8 != 0) goto LAB_180097d11;
    }
    uVar1 = 0xffffffff;
  }
  else {
LAB_180097d11:
    uVar1 = FUN_1800197a0(DAT_1803ff0a8);
  }
  return uVar1;
}


