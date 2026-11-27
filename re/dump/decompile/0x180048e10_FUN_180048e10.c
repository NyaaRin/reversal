// 0x180048e10  FUN_180048e10
// size=548 thunk=false
// signature: undefined FUN_180048e10()
// status: ok


undefined8 FUN_180048e10(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  float local_res18;
  float local_res1c;
  
  local_res8 = param_1;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
    lVar4 = FUN_18003a890();
    if (lVar4 != 0) {
      cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
      fVar6 = 0.0;
      if (cVar1 == '\0') {
        fVar10 = 0.0;
      }
      else {
        dVar5 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
        fVar10 = (float)dVar5;
      }
      cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
      if (cVar1 == '\0') {
        fVar9 = 0.0;
      }
      else {
        dVar5 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
        fVar9 = (float)dVar5;
      }
      cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
      if (cVar1 == '\0') {
        fVar8 = 0.0;
      }
      else {
        dVar5 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
        fVar8 = (float)dVar5;
      }
      uVar2 = FUN_1800477e0(plVar3,6);
      cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);
      if (cVar1 == '\0') {
        fVar7 = 0.0;
      }
      else {
        dVar5 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);
        fVar7 = (float)dVar5;
      }
      cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
      if (cVar1 != '\0') {
        dVar5 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
        fVar6 = (float)dVar5;
      }
      local_res8 = CONCAT44(fVar7 + fVar8,fVar6 + fVar9);
      local_res18 = fVar9;
      local_res1c = fVar8;
      FUN_180295000(lVar4,&local_res18,&local_res8,uVar2,fVar10,0);
    }
  }
  return 0;
}


