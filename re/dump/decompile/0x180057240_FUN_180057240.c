// 0x180057240  FUN_180057240
// size=276 thunk=false
// signature: undefined FUN_180057240()
// status: ok


undefined8 FUN_180057240(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 != '\0') {
      lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      if (lVar5 != 0) {
        lVar5 = FUN_180016fb0(lVar5);
        if (lVar5 != 0) {
          cVar2 = FUN_1800170f0(lVar5);
          if (cVar2 == '\0') {
            pcVar1 = *(code **)(*plVar4 + 0xf8);
            cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);
            if (cVar2 == '\0') {
              dVar6 = 0.0;
            }
            else {
              dVar6 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
            }
            uVar3 = FUN_1800170c0(lVar5,(int)dVar6);
            (*pcVar1)(plVar4,uVar3);
            return 1;
          }
        }
      }
    }
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
    return 1;
  }
  return 0;
}


