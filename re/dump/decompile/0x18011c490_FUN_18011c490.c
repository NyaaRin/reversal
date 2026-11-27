// 0x18011c490  FUN_18011c490
// size=625 thunk=false
// signature: undefined FUN_18011c490()
// status: ok


undefined8 FUN_18011c490(void)

{
  int iVar1;
  HMODULE pHVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((DAT_180423738 == '\0') && (DAT_180423719 == '\0')) ||
     ((DAT_180423728 == '\0' && (DAT_180423718 == '\0')))) {
    pHVar2 = GetModuleHandleA("menusystem.dll");
    if (pHVar2 == (HMODULE)0x0) {
      return 0;
    }
    if ((DAT_180423738 == '\0') && (DAT_180423719 == '\0')) {
      lVar3 = FUN_18011bac0("GameDetails",0xc,0);
      if (lVar3 == 0) {
        DAT_180423719 = '\x01';
        FUN_180014410("[LOADURL] CMenuSystem::GameDetails not found - falling back to menu Lua\n");
      }
      else {
        iVar1 = FUN_180242fc0(lVar3,FUN_18011c060,&DAT_180423710);
        if (iVar1 == 0) {
          iVar1 = FUN_180243560(lVar3,1);
          if (iVar1 == 0) {
            DAT_180423738 = '\x01';
            pHVar2 = GetModuleHandleA("menusystem.dll");
            FUN_180014410("[LOADURL] hooked CMenuSystem::GameDetails @ %p (menusystem.dll+0x%llX)\n"
                          ,lVar3,lVar3 - (longlong)pHVar2);
          }
          else {
            FUN_180243300(lVar3);
            DAT_180423710 = 0;
            DAT_180423719 = '\x01';
            uVar4 = FUN_1802436b0(iVar1);
            FUN_180014410("[LOADURL] MH_EnableHook failed: %s\n",uVar4);
          }
        }
        else {
          DAT_180423719 = '\x01';
          uVar4 = FUN_1802436b0(iVar1);
          FUN_180014410("[LOADURL] MH_CreateHook failed: %s\n",uVar4);
        }
      }
    }
    if ((DAT_180423728 == '\0') && (DAT_180423718 == '\0')) {
      lVar3 = FUN_18011bac0("asset://garrysmod/html/loading.html",0x24,1);
      if (lVar3 == 0) {
        DAT_180423718 = '\x01';
        FUN_180014410(
                     "[LOADURL] GetDefaultLoadingHTML not found - only servers that set a URL can be replaced\n"
                     );
      }
      else {
        iVar1 = FUN_180242fc0(lVar3,FUN_18011bd60,&DAT_180423730);
        if (iVar1 == 0) {
          iVar1 = FUN_180243560(lVar3,1);
          if (iVar1 == 0) {
            DAT_180423728 = '\x01';
            pHVar2 = GetModuleHandleA("menusystem.dll");
            FUN_180014410("[LOADURL] hooked GetDefaultLoadingHTML @ %p (menusystem.dll+0x%llX)\n",
                          lVar3,lVar3 - (longlong)pHVar2);
          }
          else {
            FUN_180243300(lVar3);
            DAT_180423730 = 0;
            DAT_180423718 = '\x01';
            uVar4 = FUN_1802436b0(iVar1);
            FUN_180014410("[LOADURL] default page MH_EnableHook failed: %s\n",uVar4);
          }
        }
        else {
          DAT_180423718 = '\x01';
          uVar4 = FUN_1802436b0(iVar1);
          FUN_180014410("[LOADURL] default page MH_CreateHook failed: %s\n",uVar4);
        }
      }
    }
  }
  if ((DAT_180423738 == '\0') && (DAT_180423728 == '\0')) {
    DAT_180423738 = 0;
    return 0;
  }
  return 1;
}


