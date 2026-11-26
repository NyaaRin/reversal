// 0x1800e46b0  FUN_1800e46b0
// size=432 thunk=false
// signature: undefined FUN_1800e46b0()
// status: ok


undefined8 FUN_1800e46b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  float local_48;
  float local_44;
  float local_40;
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
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,6);
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,5);
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,4);
    local_48 = (float)dVar5;
    local_44 = (float)dVar4;
    local_40 = (float)dVar3;
    cVar1 = FUN_180021be0(&local_38,&local_48,&local_res10,&local_res18);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      return 1;
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,1);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res14);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res18);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res1c);
    return 5;
  }
  return 0;
}


