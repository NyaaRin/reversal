// 0x180057040  FUN_180057040
// size=250 thunk=false
// signature: undefined FUN_180057040()
// status: ok


undefined8 FUN_180057040(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if ((cVar1 == '\0') || (lVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,1,0), lVar4 == 0)) {
      pcVar5 = *(code **)(*plVar3 + 0xf0);
    }
    else {
      lVar4 = FUN_180016fb0(lVar4);
      pcVar5 = *(code **)(*plVar3 + 0xf0);
      if ((lVar4 != 0) && (cVar1 = FUN_1800170f0(lVar4), cVar1 == '\0')) {
        uVar2 = FUN_1800170a0(lVar4);
        if ((uVar2 & 0x406012) != 0) {
          FUN_1800170c0(lVar4,~(uVar2 & 0x406012) & uVar2);
        }
      }
    }
    (*pcVar5)(plVar3);
    return 1;
  }
  return 0;
}


