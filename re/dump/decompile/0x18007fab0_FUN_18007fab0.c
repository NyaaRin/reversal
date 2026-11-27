// 0x18007fab0  FUN_18007fab0
// size=341 thunk=false
// signature: undefined FUN_18007fab0()
// status: ok


void FUN_18007fab0(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  iVar3 = (**(code **)**(undefined8 **)*param_1)();
  FUN_18001e2b0(*(undefined8 *)param_1[1],*(undefined8 *)*param_1);
  FUN_18002d9c0(*(undefined8 *)(*(longlong *)*param_1 + 8),0xffffffff,param_2);
  cVar2 = (**(code **)(**(longlong **)*param_1 + 0x138))(*(longlong **)*param_1,0xffffffff,6);
  if (cVar2 != '\0') {
    FUN_18001e2b0(*(undefined8 *)param_1[1],*(undefined8 *)*param_1);
    iVar4 = FUN_180023180(*(undefined8 *)(*(longlong *)*param_1 + 8),1,1);
    plVar1 = *(longlong **)*param_1;
    if (iVar4 != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,1);
      goto LAB_18007fb9f;
    }
    cVar2 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,3);
    if (cVar2 != '\0') {
      dVar5 = (double)(**(code **)(**(longlong **)*param_1 + 0xc0))
                                (*(longlong **)*param_1,0xffffffff);
      *param_3 = (float)dVar5;
    }
  }
  (**(code **)(**(longlong **)*param_1 + 0x10))(*(longlong **)*param_1,1);
LAB_18007fb9f:
  (**(code **)(**(longlong **)*param_1 + 0x10))(*(longlong **)*param_1,1);
  iVar4 = (**(code **)**(undefined8 **)*param_1)();
  while (iVar3 < iVar4) {
    (**(code **)(**(longlong **)*param_1 + 0x10))(*(longlong **)*param_1,1);
    iVar4 = (**(code **)**(undefined8 **)*param_1)();
  }
  return;
}


