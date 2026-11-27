// 0x1800e62f0  FUN_1800e62f0
// size=190 thunk=false
// signature: undefined FUN_1800e62f0()
// status: ok


undefined8 FUN_1800e62f0(longlong param_1)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  if ((0 < (int)dVar1) && (DAT_1803fa360 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();
    if (lVar4 != 0) {
      local_res10[0] = 0;
      cVar2 = FUN_1800e34b0(lVar4,local_res10);
      lVar4 = *plVar3;
      if (cVar2 != '\0') {
        (**(code **)(lVar4 + 0xf0))(plVar3,local_res10[0]);
        return 1;
      }
      goto LAB_1800e638b;
    }
  }
  lVar4 = *plVar3;
LAB_1800e638b:
  (**(code **)(lVar4 + 0xe0))(plVar3);
  return 1;
}


