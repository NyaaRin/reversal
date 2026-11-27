// 0x18016b110  FUN_18016b110
// size=211 thunk=false
// signature: undefined FUN_18016b110()
// status: ok


void FUN_18016b110(longlong *param_1)

{
  if ((DAT_1803fcb80 == '\0') && (DAT_1803fcb60 != 0)) {
    (**(code **)(*param_1 + 0x58))();
    (**(code **)(*param_1 + 0x60))(param_1);
    return;
  }
  return;
}


