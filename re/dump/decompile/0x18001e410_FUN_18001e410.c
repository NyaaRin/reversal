// 0x18001e410  FUN_18001e410
// size=198 thunk=false
// signature: undefined FUN_18001e410()
// status: ok


void FUN_18001e410(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_1803fa805 == '\0') {
    DAT_1803fa805 = '\x01';
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"E8 ? ? ? ? 4D 8B 47 10",0x16);
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_18001d080(&local_28,"client.dll",10);
    lVar1 = FUN_180015f40(&local_28,&local_48);
    if (lVar1 != 0) {
      DAT_1803fae80 = lVar1 + 5 + (longlong)*(int *)(lVar1 + 1);
    }
  }
  FUN_18001e3f0(param_1);
  return;
}


