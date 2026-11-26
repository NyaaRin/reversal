// 0x1801f6950  FUN_1801f6950
// size=199 thunk=false
// signature: undefined FUN_1801f6950()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f6950(void)

{
  ULONGLONG UVar1;
  
  if (DAT_1803fa388 != (code *)0x0) {
    (*DAT_1803fa388)();
  }
  if (DAT_1803ff270 != '\0') {
    FUN_1801924b0();
    FUN_18006db90();
    if (DAT_1803ff25d != '\0') {
      DAT_1803ff288 = DAT_1803ff288 + 1;
      UVar1 = GetTickCount64();
      if (999 < UVar1 - _DAT_1803fe498) {
        _DAT_1803fe498 = UVar1;
        FUN_180014410("[ESPDIAG] MainRender=%u HudUpdate=%u cached=%u | present fresh=%u redraw=%u none=%u\n"
                      ,DAT_1803ff26c,DAT_1803ff288,DAT_1803ff264,DAT_1803ff260,DAT_1803ff280,
                      DAT_1803ff28c);
        DAT_1803ff264 = 0;
        DAT_1803ff288 = 0;
        DAT_1803ff26c = 0;
        DAT_1803ff28c = 0;
        DAT_1803ff280 = 0;
        DAT_1803ff260 = 0;
      }
    }
  }
  return;
}


