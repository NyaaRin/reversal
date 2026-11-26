// 0x180057140  FUN_180057140
// size=243 thunk=false
// signature: undefined FUN_180057140()
// status: ok


undefined8 FUN_180057140(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint7 uVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
  if (cVar2 != '\0') {
    lVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
    if (lVar4 != 0) {
      lVar5 = FUN_180016fb0(lVar4);
      lVar4 = *plVar3;
      if (lVar5 != 0) {
        pcVar1 = *(code **)(lVar4 + 0xf8);
        lVar6 = FUN_180017070(lVar5);
        uVar7 = (uint7)((ulonglong)lVar4 >> 8);
        if ((lVar6 != 0) && (lVar6 != lVar5)) {
          (*pcVar1)(plVar3,CONCAT71(uVar7,1));
          return 1;
        }
        (*pcVar1)(plVar3,(ulonglong)uVar7 << 8);
        return 1;
      }
      goto LAB_18005720d;
    }
  }
  lVar4 = *plVar3;
LAB_18005720d:
  (**(code **)(lVar4 + 0xe0))(plVar3);
  return 1;
}


