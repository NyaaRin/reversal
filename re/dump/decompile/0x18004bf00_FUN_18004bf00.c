// 0x18004bf00  FUN_18004bf00
// size=287 thunk=false
// signature: undefined FUN_18004bf00()
// status: ok


undefined8 FUN_18004bf00(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined8 local_res10;
  float local_res18;
  float local_res1c;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    fVar5 = 0.0;
    local_res10 = 0;
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
    if (cVar1 == '\0') {
      iVar3 = 4;
    }
    else {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);
      iVar3 = (int)dVar4;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
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
    local_res18 = fVar5;
    local_res1c = fVar6;
    FUN_180279800(&local_res18,iVar3,&local_res10);
  }
  return 0;
}


