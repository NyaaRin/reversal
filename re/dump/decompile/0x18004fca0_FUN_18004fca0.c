// 0x18004fca0  FUN_18004fca0
// size=477 thunk=false
// signature: undefined FUN_18004fca0()
// status: ok


undefined8 FUN_18004fca0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  float local_res18;
  float local_res1c;
  
  local_res8 = param_1;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
    if (DAT_1803ff8ec == '\0') {
      uVar5 = FUN_18004a240(param_2);
      return uVar5;
    }
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);
    if (cVar1 == '\0') {
      iVar3 = 0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
      iVar3 = (int)dVar8;
    }
    local_res8 = CONCAT44(local_res8._4_4_,iVar3);
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,5,1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar4 + 200))(plVar4,5);
    }
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);
    fVar9 = 0.0;
    if (cVar1 == '\0') {
      fVar10 = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);
      fVar10 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
    if (cVar1 != '\0') {
      dVar8 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
      fVar9 = (float)dVar8;
    }
    local_res18 = fVar9;
    local_res1c = fVar10;
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar1 == '\0') {
      puVar7 = &DAT_180343228;
    }
    else {
      puVar6 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      puVar7 = &DAT_180343228;
      if (puVar6 != (undefined *)0x0) {
        puVar7 = puVar6;
      }
    }
    uVar2 = FUN_1802d31a0(puVar7,&local_res8,&local_res18,uVar2);
    (**(code **)(*plVar4 + 0xf0))(plVar4,(double)(int)local_res8);
    (**(code **)(*plVar4 + 0xf8))(plVar4,uVar2);
    return 2;
  }
  return 0;
}


