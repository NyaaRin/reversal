// 0x1800516e0  FUN_1800516e0
// size=272 thunk=false
// signature: undefined FUN_1800516e0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800516e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  char *_Str2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      _Str2 = "";
    }
    else {
      pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      _Str2 = "";
      if (pcVar4 != (char *)0x0) {
        _Str2 = pcVar4;
      }
    }
    if (*_Str2 != '\0') {
      iVar6 = 0;
      do {
        pcVar4 = (char *)FUN_18026ae50(iVar6);
        if (pcVar4 != (char *)0x0) {
          iVar2 = _stricmp(pcVar4,_Str2);
          if (iVar2 == 0) {
            local_28 = _DAT_180381760;
            uStack_20 = _UNK_180381768;
            uVar5 = FUN_180049dc0(local_18,plVar3,2,&local_28);
            FUN_18026a810(iVar6,uVar5);
            DAT_1803ff7a0 = DAT_1803ff7a0 + 1;
            return 0;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x3d);
    }
    FUN_180049960("ImGui.PushStyleColor with an unknown colour name -- ignored");
  }
  return 0;
}


