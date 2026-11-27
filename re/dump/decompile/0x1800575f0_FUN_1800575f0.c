// 0x1800575f0  FUN_1800575f0
// size=134 thunk=false
// signature: undefined FUN_1800575f0()
// status: ok


void FUN_1800575f0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = FUN_18003a090();
  if (cVar2 != '\0') {
    if (param_2 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x48))(plVar3);
      }
    }
    uVar1 = DAT_1803ff960;
    DAT_1803ff960 = param_3;
    FUN_1801feff0(param_1);
    DAT_1803ff960 = uVar1;
  }
  return;
}


