// 0x1800e4d10  FUN_1800e4d10
// size=400 thunk=false
// signature: undefined FUN_1800e4d10()
// status: ok


undefined8 FUN_1800e4d10(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  double dVar4;
  byte local_res10;
  byte local_res11;
  byte local_res12;
  byte local_res13;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    puVar2 = (undefined1 *)FUN_180030f20((int)dVar4);
    FUN_180030a70(&local_res10,(int)dVar4);
    (**(code **)(*plVar1 + 0x30))(plVar1);
    puVar3 = &DAT_18033e5ea;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*plVar1 + 0xe8))(plVar1,puVar3,0);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_180341148);
    (**(code **)(*plVar1 + 0x30))(plVar1);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res10);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033e668);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res11);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_180342c10);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res12);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033f594);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res13);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033f59c);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,"color");
    return 1;
  }
  return 0;
}


