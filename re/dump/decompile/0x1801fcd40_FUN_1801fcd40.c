// 0x1801fcd40  FUN_1801fcd40
// size=55 thunk=false
// signature: undefined FUN_1801fcd40()
// status: ok


undefined8 FUN_1801fcd40(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((lVar1 == 0) || (pcVar2 = *(code **)(lVar1 + 0x10), pcVar2 == (code *)0x0)) {
    uVar3 = 0;
  }
  else {
    (*pcVar2)((longlong *)(param_1 + 0x30),param_3);
    uVar3 = 1;
  }
  return uVar3;
}


