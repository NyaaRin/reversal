// 0x180048a70  FUN_180048a70
// size=199 thunk=false
// signature: undefined FUN_180048a70()
// status: ok


undefined8 FUN_180048a70(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  float local_res10;
  float local_res14;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 == '\0') {
      puVar3 = &DAT_18033e5ea;
    }
    else {
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
    }
    puVar4 = &DAT_18033e5ea;
    if (puVar3 != (undefined1 *)0x0) {
      puVar4 = puVar3;
    }
    FUN_1800476f0(&local_res10,puVar4,DAT_1803ff908);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res14);
    return 2;
  }
  return 0;
}


