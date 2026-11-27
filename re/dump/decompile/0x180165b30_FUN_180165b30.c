// 0x180165b30  FUN_180165b30
// size=405 thunk=false
// signature: undefined FUN_180165b30()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180165b30(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (DAT_180423a70 != (longlong *)0x0) {
    (**(code **)(*DAT_180423a70 + 0x10))();
    DAT_180423a70 = (longlong *)0x0;
  }
  if (DAT_180423ac0 != (longlong *)0x0) {
    (**(code **)(*DAT_180423ac0 + 0x10))();
    DAT_180423ac0 = (longlong *)0x0;
  }
  if (DAT_180423a90 != (longlong *)0x0) {
    (**(code **)(*DAT_180423a90 + 0x10))();
    DAT_180423a90 = (longlong *)0x0;
  }
  if (DAT_180423a80 != (longlong *)0x0) {
    (**(code **)(*DAT_180423a80 + 0x10))();
    DAT_180423a80 = (longlong *)0x0;
  }
  if (DAT_180423ab8 != (longlong *)0x0) {
    (**(code **)(*DAT_180423ab8 + 0x10))();
    DAT_180423ab8 = (longlong *)0x0;
  }
  plVar1 = DAT_1803e9ab8;
  plVar2 = DAT_1803e9ab0;
  if (DAT_1803e9ab0 != DAT_1803e9ab8) {
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x10))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    if (DAT_1803e9ab0 != DAT_1803e9ab8) {
      DAT_1803e9ab8 = DAT_1803e9ab0;
    }
  }
  FUN_180163600();
  uStack_60 = 0;
  local_58 = _DAT_1803814b0;
  uStack_50 = _UNK_1803814b8;
  local_68 = 0;
  local_48 = 0;
  local_44 = 0;
  local_42 = 0;
  local_40 = 0x3f800000;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_180164900(&DAT_1803e99f0,&local_68);
  FUN_180209700(&local_20);
  FUN_18020e450(&local_68);
  DAT_1803e9334 = 0xffffffff;
  DAT_180423a9c = 0;
  DAT_180423ab0 = 0;
  DAT_180423a68 = 0;
  return;
}


