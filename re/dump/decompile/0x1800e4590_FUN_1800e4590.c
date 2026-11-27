// 0x1800e4590  FUN_1800e4590
// size=281 thunk=false
// signature: undefined FUN_1800e4590()
// status: ok


undefined8 FUN_1800e4590(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_res10;
  float local_res14;
  float local_38;
  float local_34;
  float local_30;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,3);
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,2);
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    local_38 = (float)dVar5;
    local_34 = (float)dVar4;
    local_30 = (float)dVar3;
    cVar1 = FUN_180021ac0(&local_38,&local_res10);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      return 1;
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,1);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res14);
    return 3;
  }
  return 0;
}


