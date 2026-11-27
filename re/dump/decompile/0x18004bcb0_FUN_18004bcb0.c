// 0x18004bcb0  FUN_18004bcb0
// size=481 thunk=false
// signature: undefined FUN_18004bcb0()
// status: ok


undefined8 FUN_18004bcb0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  
  local_res8 = param_1;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar4 + 0xf8))(plVar4,0);
      return 1;
    }
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar1 == '\0') {
      pcVar6 = "child";
    }
    else {
      pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      pcVar6 = "child";
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
      }
    }
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
    fVar9 = 0.0;
    if (cVar1 == '\0') {
      fVar10 = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
      fVar10 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);
    if (cVar1 != '\0') {
      dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
      fVar9 = (float)dVar8;
    }
    local_res8 = CONCAT44(fVar10,fVar9);
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,4,1);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else {
      cVar1 = (**(code **)(*plVar4 + 200))(plVar4,4);
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3);
    if (cVar2 == '\0') {
      iVar7 = 0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);
      iVar7 = (int)dVar8;
    }
    uVar3 = FUN_180272fa0(pcVar6,&local_res8,cVar1 != '\0',iVar7);
    FUN_180049be0(2);
    (**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);
    return 1;
  }
  return 0;
}


