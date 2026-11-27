// 0x180163260  FUN_180163260
// size=105 thunk=false
// signature: undefined FUN_180163260()
// status: ok


void FUN_180163260(void)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((DAT_180423aa4 == '\0') && (DAT_180423a88 == '\0')) {
    cVar1 = FUN_180161a50(s_models_player_gman_high_mdl_1803e9340);
    uVar2 = 0;
    while (cVar1 == '\0') {
      if (1 < uVar2) {
        DAT_180423a88 = 1;
        return;
      }
      cVar1 = FUN_180161a50((&PTR_s_models_player_group01_male_07_md_18033c978)[uVar2]);
      uVar2 = uVar2 + 1;
    }
    DAT_180423aa4 = '\x01';
  }
  return;
}


