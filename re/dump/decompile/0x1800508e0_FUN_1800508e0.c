// 0x1800508e0  FUN_1800508e0
// size=352 thunk=false
// signature: undefined FUN_1800508e0()
// status: ok


undefined8 FUN_1800508e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_res10;
  float local_res14;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      return 1;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
    fVar6 = 0.0;
    if (cVar1 == '\0') {
      fVar7 = 0.0;
    }
    else {
      dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);
      fVar7 = (float)dVar5;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
    if (cVar1 != '\0') {
      dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
      fVar6 = (float)dVar5;
    }
    local_res10 = fVar6;
    local_res14 = fVar7;
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 == '\0') {
      puVar4 = &DAT_180343220;
    }
    else {
      puVar3 = (undefined *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      puVar4 = &DAT_180343220;
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
      }
    }
    cVar1 = FUN_1802c3680(puVar4,&local_res10);
    if (cVar1 != '\0') {
      FUN_180049be0(9);
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);
    return 1;
  }
  return 0;
}


