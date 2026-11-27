// 0x180057f20  FUN_180057f20
// size=194 thunk=false
// signature: undefined FUN_180057f20()
// status: ok


undefined8 FUN_180057f20(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  pcVar1 = *(code **)(*plVar2 + 0xf8);
  if ((DAT_1803ff8d0 != '\0') && (DAT_1803ff8c8 != (code *)0x0)) {
    if (DAT_1803ff8b8 < 8) {
      DAT_1803ff8b8 = DAT_1803ff8b8 + 1;
      (*DAT_1803ff8c8)(DAT_1803ff8e0,DAT_1803ff8b0,DAT_1803ff8c0,DAT_1803ff8d8);
      uVar3 = 1;
      goto LAB_180057f95;
    }
    if (DAT_1804260e8 == '\0') {
      DAT_1804260e8 = '\x01';
      FUN_180014410("[LUAHOOKS] DrawModelExecute re-issue cap (%d per model) hit\n",8);
    }
  }
  uVar3 = 0;
LAB_180057f95:
  (*pcVar1)(plVar2,uVar3);
  return 1;
}


