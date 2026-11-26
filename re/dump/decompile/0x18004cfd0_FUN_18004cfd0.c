// 0x18004cfd0  FUN_18004cfd0
// size=85 thunk=false
// signature: undefined FUN_18004cfd0()
// status: ok


undefined8 FUN_18004cfd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180039770();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    if (DAT_1803ff7a8 < 1) {
      FUN_180049960("ImGui.PopItemWidth without a matching PushItemWidth -- ignored");
      return 0;
    }
    DAT_1803ff7a8 = DAT_1803ff7a8 + -1;
    FUN_18027f940();
  }
  return 0;
}


