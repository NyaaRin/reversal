// 0x1801070a0  FUN_1801070a0
// size=305 thunk=false
// signature: undefined FUN_1801070a0()
// status: ok


longlong FUN_1801070a0(uint param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  
  if (DAT_1803fa640 != (longlong *)0x0) {
    plVar4 = DAT_1803fa640;
    uVar6 = 0;
    if ((param_1 < 0xd) && (uVar6 = param_1, param_1 == 0xc)) {
      lVar2 = FUN_180106ec0();
      return lVar2;
    }
    do {
      lVar2 = (longlong)(int)uVar6;
      if ((&DAT_180409998)[lVar2] == '\0') {
        (&DAT_180409998)[lVar2] = 1;
        ppuVar5 = &PTR_s_models_debug_debugwhite_18033c198 + lVar2 * 5;
        while( true ) {
          if ((ppuVar5 == &PTR_s_Wireframe_18033c1b8 + lVar2 * 5) || (*ppuVar5 == (undefined *)0x0))
          goto LAB_180107178;
          plVar3 = (longlong *)(**(code **)(*plVar4 + 600))(plVar4,*ppuVar5,"Model textures",1,0);
          if ((plVar3 != (longlong *)0x0) &&
             (cVar1 = (**(code **)(*plVar3 + 0x150))(plVar3), cVar1 == '\0')) break;
          ppuVar5 = ppuVar5 + 1;
          plVar4 = DAT_1803fa640;
        }
        (**(code **)(*plVar3 + 0x60))(plVar3);
        plVar4 = DAT_1803fa640;
        *(longlong **)(&DAT_1804098a0 + lVar2 * 8) = plVar3;
LAB_180107178:
        if ((*(longlong *)(&DAT_1804098a0 + lVar2 * 8) == 0) && (uVar6 != 0)) {
          FUN_180014410("[CHAMS] material \'%s\' unavailable on this mount -> falling back to Flat\n"
                        ,(&PTR_DAT_18033c190)[lVar2 * 5]);
          plVar4 = DAT_1803fa640;
        }
      }
      if (*(longlong *)(&DAT_1804098a0 + lVar2 * 8) != 0) {
        return *(longlong *)(&DAT_1804098a0 + lVar2 * 8);
      }
      if (uVar6 == 0) {
        return 0;
      }
      uVar6 = 0;
    } while (plVar4 != (longlong *)0x0);
  }
  return 0;
}


