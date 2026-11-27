// 0x180050730  FUN_180050730
// size=345 thunk=false
// signature: undefined FUN_180050730()
// status: ok


undefined8 FUN_180050730(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  double dVar8;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      return 1;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,3,3);
    if (cVar1 == '\0') {
      iVar7 = 0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,3);
      iVar7 = (int)dVar8;
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);
    if (cVar1 == '\0') {
      puVar6 = &DAT_18033e5ea;
    }
    else {
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,2,0);
      puVar6 = &DAT_18033e5ea;
      if (puVar3 != (undefined1 *)0x0) {
        puVar6 = puVar3;
      }
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 == '\0') {
      pcVar5 = "##combo";
    }
    else {
      pcVar4 = (char *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      pcVar5 = "##combo";
      if (pcVar4 != (char *)0x0) {
        pcVar5 = pcVar4;
      }
    }
    cVar1 = FUN_1802b0590(pcVar5,puVar6,iVar7);
    if (cVar1 != '\0') {
      FUN_180049be0(6);
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);
    return 1;
  }
  return 0;
}


