// 0x180129b00  FUN_180129b00
// size=289 thunk=false
// signature: undefined FUN_180129b00()
// status: ok


undefined8 FUN_180129b00(void)

{
  char cVar1;
  longlong *plVar2;
  char **ppcVar3;
  char *local_28 [4];
  
  if (DAT_180409890 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_180409890 + 0x78))();
    if (cVar1 == '\0') {
      return 1;
    }
    DAT_180409890 = (longlong *)0x0;
  }
  if ((DAT_1803fa640 != (longlong *)0x0) && (DAT_180409881 == '\0')) {
    local_28[0] = "vgui/white";
    local_28[1] = "color/white";
    local_28[2] = "models/debug/debugwhite";
    for (ppcVar3 = local_28; ppcVar3 != local_28 + 3; ppcVar3 = ppcVar3 + 1) {
      plVar2 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 0x298))(DAT_1803fa640,*ppcVar3,"Other textures",0,0);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar2 + 0x78))(plVar2), cVar1 == '\0')) {
        DAT_180409890 = plVar2;
        return 1;
      }
    }
  }
  return 0;
}


