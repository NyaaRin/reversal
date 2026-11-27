// 0x1800482b0  FUN_1800482b0
// size=459 thunk=false
// signature: undefined FUN_1800482b0()
// status: ok


undefined8 FUN_1800482b0(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    lVar4 = FUN_18003a890();
    if (lVar4 != 0) {
      cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
      if (cVar2 == '\0') {
        fVar8 = 0.0;
      }
      else {
        dVar5 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
        fVar8 = (float)dVar5;
      }
      cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
      if (cVar2 == '\0') {
        fVar7 = 0.0;
      }
      else {
        dVar5 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
        fVar7 = (float)dVar5;
      }
      uVar1 = DAT_1803e7748;
      cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
      if (cVar2 == '\0') {
        fVar6 = 0.0;
      }
      else {
        dVar5 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
        fVar6 = (float)dVar5;
      }
      cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
      if (cVar2 == '\0') {
        local_res10 = 0.0;
      }
      else {
        dVar5 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
        local_res10 = (float)dVar5;
      }
      local_res10 = local_res10 + fVar8;
      local_res14 = fVar6 + fVar7;
      local_res18 = fVar8;
      local_res1c = fVar7;
      FUN_180295000(lVar4,&local_res18,&local_res10,uVar1,0,0);
    }
  }
  return 0;
}


