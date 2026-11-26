// 0x1800e9280  FUN_1800e9280
// size=91 thunk=false
// signature: undefined FUN_1800e9280()
// status: ok


undefined8 FUN_1800e9280(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    uVar2 = FUN_1800e78f0("thirdperson");
    (*pcVar1)(plVar3,uVar2);
    return 1;
  }
  return 0;
}


