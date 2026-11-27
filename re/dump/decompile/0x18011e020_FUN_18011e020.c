// 0x18011e020  FUN_18011e020
// size=299 thunk=false
// signature: undefined FUN_18011e020()
// status: ok


undefined8 FUN_18011e020(char *param_1)

{
  char *pcVar1;
  undefined **ppuVar2;
  
  if (param_1 != (char *)0x0) {
    ppuVar2 = &PTR_s_PreDrawHUD_1803e9300;
    do {
      pcVar1 = strstr(param_1,*ppuVar2);
      if (pcVar1 != (char *)0x0) {
        return 1;
      }
      ppuVar2 = ppuVar2 + 1;
    } while (ppuVar2 != (undefined **)&DAT_1803e9328);
    pcVar1 = strstr(param_1,"RenderScreenspaceEffects");
    if (pcVar1 != (char *)0x0) {
      return 4;
    }
    ppuVar2 = &PTR_s_PreDrawOpaqueRenderables_1803e7900;
    do {
      pcVar1 = strstr(param_1,*ppuVar2);
      if (pcVar1 != (char *)0x0) {
        return 5;
      }
      ppuVar2 = ppuVar2 + 1;
    } while (ppuVar2 != (undefined **)&DAT_1803e7970);
    ppuVar2 = &PTR_s_PreRender_1803e78d8;
    do {
      pcVar1 = strstr(param_1,*ppuVar2);
      if (pcVar1 != (char *)0x0) {
        return 2;
      }
      ppuVar2 = ppuVar2 + 1;
    } while (ppuVar2 != (undefined **)&DAT_1803e78f0);
  }
  return 0;
}


