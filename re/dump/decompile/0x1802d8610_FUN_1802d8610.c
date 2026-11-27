// 0x1802d8610  FUN_1802d8610
// size=138 thunk=false
// signature: undefined FUN_1802d8610()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802d8610(uint param_1)

{
  int iVar1;
  
  if (DAT_1803f8f59 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_1802d90dc(5);
    }
    iVar1 = __scrt_is_ucrt_dll_in_use();
    if ((iVar1 == 0) || (param_1 != 0)) {
      DAT_1803f8f60 = _DAT_180381830;
      uRam00000001803f8f68 = _UNK_180381838;
      _DAT_1803f8f70 = 0xffffffffffffffff;
      _DAT_1803f8f78 = _DAT_180381830;
      uRam00000001803f8f80 = _UNK_180381838;
      _DAT_1803f8f88 = 0xffffffffffffffff;
    }
    else {
      iVar1 = _initialize_onexit_table(&DAT_1803f8f60);
      if ((iVar1 != 0) || (iVar1 = _initialize_onexit_table(&DAT_1803f8f78), iVar1 != 0)) {
        return 0;
      }
    }
    DAT_1803f8f59 = '\x01';
  }
  return 1;
}


