// 0x180055f00  FUN_180055f00
// size=119 thunk=false
// signature: undefined FUN_180055f00()
// status: ok


undefined8 FUN_180055f00(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803fa608 != 0)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      *(float *)(DAT_1803fa608 + 0x18) = (float)dVar3;
    }
  }
  return 0;
}


