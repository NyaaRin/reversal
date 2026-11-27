// 0x1801073d0  FUN_1801073d0
// size=245 thunk=false
// signature: undefined FUN_1801073d0()
// status: ok


longlong * FUN_1801073d0(void)

{
  char cVar1;
  longlong *plVar2;
  char **ppcVar3;
  char *local_28 [3];
  char *local_10;
  
  if ((DAT_1804015b8 == (longlong *)0x0) && (DAT_1803fa640 != (longlong *)0x0)) {
    local_28[0] = "models/debug/debugwhite";
    local_28[1] = "debug/debugdrawflat";
    ppcVar3 = local_28;
    local_28[2] = "vgui/white";
    do {
      plVar2 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,*ppcVar3,"Model textures",1,0);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar2 + 0x150))(plVar2), cVar1 == '\0')) {
        (**(code **)(*plVar2 + 0x60))(plVar2);
        DAT_1804015b8 = plVar2;
        break;
      }
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_10);
    if (DAT_1804015b8 == (longlong *)0x0) {
      DAT_1804015b8 = (longlong *)FUN_180107340();
      return DAT_1804015b8;
    }
  }
  return DAT_1804015b8;
}


