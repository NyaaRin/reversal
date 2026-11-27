// 0x18004c020  FUN_18004c020
// size=273 thunk=false
// signature: undefined FUN_18004c020()
// status: ok


undefined8 FUN_18004c020(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float local_res10;
  float local_res14;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
    if (cVar1 == '\0') {
      iVar3 = 4;
    }
    else {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);
      iVar3 = (int)dVar4;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
    fVar5 = 0.0;
    if (cVar1 == '\0') {
      fVar6 = 0.0;
    }
    else {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
      fVar6 = (float)dVar4;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      fVar5 = (float)dVar4;
    }
    local_res10 = fVar5;
    local_res14 = fVar6;
    FUN_180279880(&local_res10,iVar3);
  }
  return 0;
}


