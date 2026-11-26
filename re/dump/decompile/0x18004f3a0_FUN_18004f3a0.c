// 0x18004f3a0  FUN_18004f3a0
// size=334 thunk=false
// signature: undefined FUN_18004f3a0()
// status: ok


undefined8 FUN_18004f3a0(longlong param_1)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float local_res10;
  float local_res14;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,4,4);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,4,0);
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    fVar5 = 0.0;
    if (cVar2 == '\0') {
      fVar6 = 0.0;
    }
    else {
      dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      fVar6 = (float)dVar1;
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    local_res10 = DAT_180381318;
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      local_res10 = (float)dVar1;
    }
    local_res14 = fVar6;
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      fVar5 = (float)dVar1;
    }
    FUN_1802ae300(fVar5,&local_res10,uVar4);
  }
  return 0;
}


