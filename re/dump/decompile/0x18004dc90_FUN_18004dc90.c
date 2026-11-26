// 0x18004dc90  FUN_18004dc90
// size=337 thunk=false
// signature: undefined FUN_18004dc90()
// status: ok


undefined8 FUN_18004dc90(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float local_res10;
  float local_res14;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    if (DAT_1803ff8ec != '\0') {
      cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
      fVar8 = DAT_180380bb0;
      fVar9 = DAT_180380bb0;
      if (cVar2 != '\0') {
        dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
        fVar9 = (float)dVar7;
      }
      cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);
      if (cVar2 != '\0') {
        dVar7 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
        fVar8 = (float)dVar7;
      }
      local_res10 = fVar8;
      local_res14 = fVar9;
      cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
      if (cVar2 == '\0') {
        pcVar6 = "##inv";
      }
      else {
        pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
        pcVar6 = "##inv";
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar5;
        }
      }
      uVar3 = FUN_1802ac3c0(pcVar6,&local_res10);
      (*pcVar1)(plVar4,uVar3);
      return 1;
    }
    (*pcVar1)(plVar4,0);
    return 1;
  }
  return 0;
}


