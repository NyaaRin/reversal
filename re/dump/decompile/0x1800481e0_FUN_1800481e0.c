// 0x1800481e0  FUN_1800481e0
// size=204 thunk=false
// signature: undefined FUN_1800481e0()
// status: ok


undefined8 FUN_1800481e0(longlong param_1)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  
  plVar3 = (longlong *)FUN_180039770();
  fVar1 = DAT_1803e7754;
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) &&
     (lVar4 = FUN_18003a890(), fVar1 = DAT_1803e7754, lVar4 != 0)) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 == '\0') {
      DAT_1803e7750 = 0.0;
    }
    else {
      dVar5 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      DAT_1803e7750 = (float)dVar5;
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    fVar1 = 0.0;
    if (cVar2 != '\0') {
      dVar5 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      fVar1 = (float)dVar5;
    }
  }
  DAT_1803e7754 = fVar1;
  return 0;
}


