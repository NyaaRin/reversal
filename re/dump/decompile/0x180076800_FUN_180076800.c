// 0x180076800  FUN_180076800
// size=109 thunk=false
// signature: undefined FUN_180076800()
// status: ok


undefined4 FUN_180076800(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  if (((char *)0x10000 < param_1) && (*param_1 != '\0')) {
    ppuVar2 = &PTR_s_gmod_camera_18033acd0;
    do {
      iVar1 = _stricmp(param_1,*ppuVar2);
      if (iVar1 == 0) {
        return 1;
      }
      ppuVar2 = ppuVar2 + 1;
    } while (ppuVar2 != &Features::Visual::ESP::Editor::Elements::BaseElement::vftable_meta_ptr);
  }
  return 0;
}


