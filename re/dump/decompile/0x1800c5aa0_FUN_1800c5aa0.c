// 0x1800c5aa0  FUN_1800c5aa0
// size=122 thunk=false
// signature: undefined FUN_1800c5aa0()
// status: ok


double FUN_1800c5aa0(void)

{
  double dVar1;
  short sVar2;
  longlong *plVar3;
  float fVar4;
  
  if (DAT_1803fa668 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
    if (plVar3 != (longlong *)0x0) {
      fVar4 = (float)(**(code **)(*plVar3 + 0x48))(plVar3,0);
      dVar1 = (double)fVar4;
      goto LAB_1800c5ae3;
    }
  }
  dVar1 = 0.0;
LAB_1800c5ae3:
  sVar2 = _dclass(SUB84(dVar1,0));
  if ((sVar2 < 1) && (0.0 <= dVar1)) {
    return dVar1;
  }
  return 0.0;
}


