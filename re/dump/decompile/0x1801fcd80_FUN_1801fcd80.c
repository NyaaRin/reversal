// 0x1801fcd80  FUN_1801fcd80
// size=59 thunk=false
// signature: undefined FUN_1801fcd80()
// status: ok


undefined8 FUN_1801fcd80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((lVar1 == 0) || (pcVar2 = *(code **)(lVar1 + 8), pcVar2 == (code *)0x0)) {
    uVar3 = 0;
  }
  else {
    (*pcVar2)((longlong *)(param_1 + 0x30),param_3);
    uVar3 = 1;
  }
  return uVar3;
}


