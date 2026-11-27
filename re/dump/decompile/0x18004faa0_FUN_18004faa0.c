// 0x18004faa0  FUN_18004faa0
// size=489 thunk=false
// signature: undefined FUN_18004faa0()
// status: ok


undefined8 FUN_18004faa0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  
  local_res8 = param_1;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
    if (DAT_1803ff8ec == '\0') {
      uVar4 = FUN_18004a240(param_2);
      return uVar4;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else {
      cVar1 = (**(code **)(*plVar3 + 200))(plVar3,2);
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);
    fVar9 = 0.0;
    if (cVar2 == '\0') {
      fVar10 = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);
      fVar10 = (float)dVar8;
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    if (cVar2 != '\0') {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      fVar9 = (float)dVar8;
    }
    local_res8 = CONCAT44(fVar10,fVar9);
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    if (cVar2 == '\0') {
      iVar7 = 0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      iVar7 = (int)dVar8;
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar2 == '\0') {
      puVar6 = &DAT_18033e5ea;
    }
    else {
      puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar6 = &DAT_18033e5ea;
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = puVar5;
      }
    }
    cVar2 = FUN_1802c1850(puVar6,cVar1,iVar7,&local_res8);
    if (cVar2 != '\0') {
      cVar1 = cVar1 == '\0';
    }
    (**(code **)(*plVar3 + 0xf8))(plVar3,cVar1);
    (**(code **)(*plVar3 + 0xf8))(plVar3,cVar2);
    return 2;
  }
  return 0;
}


