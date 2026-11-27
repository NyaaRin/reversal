// 0x180183220  FUN_180183220
// size=53 thunk=false
// signature: undefined FUN_180183220()
// status: ok


undefined1 FUN_180183220(undefined4 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180183140();
  lVar2 = FUN_180182f40(uVar1,param_1,0);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x36) != '\0')) {
    return 1;
  }
  return 0;
}


