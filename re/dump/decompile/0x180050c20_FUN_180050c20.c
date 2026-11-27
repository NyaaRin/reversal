// 0x180050c20  FUN_180050c20
// size=519 thunk=false
// signature: undefined FUN_180050c20()
// status: ok


undefined8 FUN_180050c20(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  
  local_res8 = param_1;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar3 + 0xf8))(plVar3,0);
      return 1;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);
    if (cVar1 == '\0') {
      fVar10 = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);
      fVar10 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    if (cVar1 == '\0') {
      fVar9 = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      fVar9 = (float)dVar8;
    }
    local_res8 = CONCAT44(fVar10,fVar9);
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    if (cVar1 == '\0') {
      iVar5 = 0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      iVar5 = (int)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    if (cVar1 == '\0') {
      iVar6 = 1;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      iVar6 = (int)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      pcVar7 = "##table";
    }
    else {
      pcVar4 = (char *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      pcVar7 = "##table";
      if (pcVar4 != (char *)0x0) {
        pcVar7 = pcVar4;
      }
    }
    uVar2 = FUN_18027b010(pcVar7);
    cVar1 = FUN_1802a0c40(pcVar7,uVar2,iVar6,iVar5,&local_res8,0);
    if (cVar1 != '\0') {
      FUN_180049be0(10);
    }
    (**(code **)(*plVar3 + 0xf8))(plVar3,cVar1);
    return 1;
  }
  return 0;
}


