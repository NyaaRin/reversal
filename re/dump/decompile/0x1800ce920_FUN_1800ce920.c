// 0x1800ce920  FUN_1800ce920
// size=129 thunk=false
// signature: undefined FUN_1800ce920()
// status: ok


undefined8 FUN_1800ce920(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_1 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x20))();
    if (plVar4 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
      if ((0 < iVar3) && (cVar2 = FUN_18002e100(), cVar2 != '\0')) {
        puVar1 = (undefined8 *)param_2[1];
        for (param_2 = (undefined8 *)*param_2; param_2 != puVar1; param_2 = param_2 + 1) {
          cVar2 = FUN_18002f1c0(iVar3,*param_2);
          if (cVar2 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


