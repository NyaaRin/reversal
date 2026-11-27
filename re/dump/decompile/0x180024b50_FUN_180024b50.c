// 0x180024b50  FUN_180024b50
// size=265 thunk=false
// signature: undefined FUN_180024b50()
// status: ok


undefined8 * FUN_180024b50(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (DAT_1803fa368 == (undefined8 *)0x0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"48 8B 0D ? ? ? ? 48 83 3D ? ? ? ? 00 75 ? 48 8D 0D ? ? ? ? FF 15",0x40)
    ;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_18001d080(&local_28,"client.dll",10);
    lVar2 = FUN_180015f40(&local_28,&local_48);
    if (lVar2 == 0) {
      DAT_1803fa368 = (undefined8 *)0xffffffffffffffff;
      FUN_180014410("[LuaHooks-WARN] x64 gGM pattern NOT FOUND\n");
    }
    else {
      DAT_1803fa368 = (undefined8 *)((longlong)*(int *)(lVar2 + 10) + lVar2 + 0xf);
      FUN_180014410("[LuaHooks] x64 gGM = %p\n");
    }
    if (DAT_1803fa368 == (undefined8 *)0x0) {
      return param_1;
    }
  }
  puVar1 = DAT_1803fa368;
  if (DAT_1803fa368 != (undefined8 *)0xffffffffffffffff) {
    *param_1 = *DAT_1803fa368;
    *puVar1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}


