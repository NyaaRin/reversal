// 0x18002d680  FUN_18002d680
// size=64 thunk=false
// signature: undefined FUN_18002d680()
// status: ok


undefined8 FUN_18002d680(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = DAT_1803faf68;
  uVar2 = (*DAT_1803faef8)(param_1,1,2);
  (*pcVar1)(param_1,uVar2);
  return 1;
}


