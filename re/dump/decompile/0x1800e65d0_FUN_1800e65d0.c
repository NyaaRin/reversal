// 0x1800e65d0  FUN_1800e65d0
// size=192 thunk=false
// signature: undefined FUN_1800e65d0()
// status: ok


undefined8 FUN_1800e65d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  float local_res10 [6];
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
      local_res10[0] = 0.0;
      if (lVar3 != 0) {
        cVar1 = FUN_1800b5f30(lVar3,local_res10);
        if (cVar1 != '\0') {
          (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);
          return 1;
        }
      }
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


