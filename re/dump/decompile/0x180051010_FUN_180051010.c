// 0x180051010  FUN_180051010
// size=262 thunk=false
// signature: undefined FUN_180051010()
// status: ok


undefined8 FUN_180051010(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  double dVar6;
  float fVar7;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
    if (cVar1 == '\0') {
      fVar7 = 0.0;
    }
    else {
      dVar6 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);
      fVar7 = (float)dVar6;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
    if (cVar1 == '\0') {
      iVar5 = 0;
    }
    else {
      dVar6 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
      iVar5 = (int)dVar6;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 == '\0') {
      puVar4 = &DAT_18033e5ea;
    }
    else {
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      puVar4 = &DAT_18033e5ea;
      if (puVar3 != (undefined1 *)0x0) {
        puVar4 = puVar3;
      }
    }
    FUN_1802a4790(puVar4,iVar5,fVar7);
  }
  return 0;
}


