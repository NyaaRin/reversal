// 0x1800486c0  FUN_1800486c0
// size=385 thunk=false
// signature: undefined FUN_1800486c0()
// status: ok


undefined8 FUN_1800486c0(longlong param_1)

{
  double dVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    lVar5 = FUN_18003a890();
    uVar2 = DAT_1803e7748;
    if (lVar5 != 0) {
      cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);
      fVar6 = 0.0;
      if (cVar3 == '\0') {
        fVar7 = 0.0;
      }
      else {
        dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);
        fVar7 = (float)dVar1;
      }
      cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
      if (cVar3 == '\0') {
        local_res10 = 0.0;
      }
      else {
        dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
        local_res10 = (float)dVar1;
      }
      local_res14 = fVar7;
      cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);
      if (cVar3 == '\0') {
        fVar7 = 0.0;
      }
      else {
        dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
        fVar7 = (float)dVar1;
      }
      cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);
      if (cVar3 != '\0') {
        dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
        fVar6 = (float)dVar1;
      }
      local_res18 = fVar6;
      local_res1c = fVar7;
      FUN_180294c90(lVar5,&local_res18,&local_res10,uVar2,DAT_180380bb0);
    }
  }
  return 0;
}


