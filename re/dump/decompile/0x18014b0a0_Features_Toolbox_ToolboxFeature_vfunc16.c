// 0x18014b0a0  Features_Toolbox_ToolboxFeature_vfunc16
// size=208 thunk=false
// signature: undefined Features_Toolbox_ToolboxFeature_vfunc16()
// status: ok


void Features_Toolbox_ToolboxFeature_vfunc16(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar3 = (undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  DAT_180409ae0 = 0;
  DAT_1803e83a4 = 0xffffffff;
  DAT_180409b88 = 0;
  DAT_1803e8450 = 0xffffffff;
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  if (*(longlong *)(param_1 + 0x68) != *(longlong *)(param_1 + 0x70)) {
    *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x68);
  }
  FUN_1801488a0();
  if (((lVar1 != 0) && (DAT_180423571 != '\0')) && (DAT_1803fa668 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();
    if (cVar2 != '\0') {
      cVar2 = FUN_180147b80();
      pcVar4 = "UNAVAILABLE";
      if (cVar2 != '\0') {
        pcVar4 = "OK";
      }
      FUN_180014410("[Toolbox] unload with override worn: delta reset -> %s\n",pcVar4);
      return;
    }
  }
  return;
}


