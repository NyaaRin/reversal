// 0x18004d200  FUN_18004d200
// size=182 thunk=false
// signature: undefined FUN_18004d200()
// status: ok


undefined8 FUN_18004d200(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    if (DAT_1803ff7b4 < 1) {
      FUN_180049960("ImGui.PopID without a matching PushID -- ignored");
      return 0;
    }
    DAT_1803ff7b4 = DAT_1803ff7b4 + -1;
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar2 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
      return 0;
    }
    *(int *)(lVar2 + 0x108) = iVar1 + -1;
  }
  return 0;
}


