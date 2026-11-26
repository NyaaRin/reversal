// 0x1801918f0  FUN_1801918f0
// size=275 thunk=false
// signature: undefined FUN_1801918f0()
// status: ok


void FUN_1801918f0(void)

{
  ULONGLONG UVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((DAT_18040a3d3 == '\0') && (DAT_1803fa360 != 0)) {
    UVar1 = GetTickCount64();
    if (DAT_1803fd0e0 <= UVar1) {
      DAT_1803fd0e0 = UVar1 + 5000;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_30 = 0;
      FUN_18001d080(&local_48,"48 89 5C 24 10 48 89 6C 24 18 56 48 83 EC 20 48 63 A9 40 00 08 00",
                    0x41);
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      local_10 = 0;
      FUN_18001d080(&local_28,"client.dll",10);
      pcVar2 = (code *)FUN_180015f40(&local_28,&local_48);
      if (pcVar2 == (code *)0x0) {
        FUN_180014410(
                     "[ESP] AddListenerEntity signature not found - preserving ghosts conservatively\n"
                     );
      }
      else {
        lVar3 = FUN_180191350();
        if (lVar3 == 0) {
          FUN_180014410(
                       "[ESP] CClientEntityList RTTI adjustment unavailable - listener retry deferred\n"
                       );
        }
        else {
          (*pcVar2)(lVar3,&PTR_vftable_Features_Visual_ESP_CGhostEntityListener_1803e8850);
          DAT_18040a3d3 = '\x01';
          FUN_180191780();
          FUN_180014410(
                       "[ESP] Entity lifecycle listener registered (delete + transmit/PVS tracking on)\n"
                       );
        }
      }
    }
  }
  return;
}


