// 0x1800e9580  FUN_1800e9580
// size=140 thunk=false
// signature: undefined FUN_1800e9580()
// status: ok


undefined8 FUN_1800e9580(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      iVar3 = (int)dVar4;
      if (iVar3 < -0x1e) {
        iVar3 = -0x1e;
      }
      else if (0x1e < iVar3) {
        iVar3 = 0x1e;
      }
      FUN_1800e7a20("thirdperson",&DAT_18034eee4,iVar3);
    }
  }
  return 0;
}


