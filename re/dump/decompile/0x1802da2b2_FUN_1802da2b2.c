// 0x1802da2b2  FUN_1802da2b2
// size=102 thunk=false
// signature: undefined FUN_1802da2b2()
// status: ok


undefined8 FUN_1802da2b2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  pcVar2 = (code *)((undefined8 *)*plVar1)[2];
  uVar4 = (**(code **)*plVar1)(plVar1);
  (*pcVar2)(plVar1,uVar4);
  puVar3 = *(undefined8 **)(param_2 + 0x50);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  FUN_18001d080(puVar3,&DAT_18033e5ea,0);
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  return 0;
}


