// 0x18030ba34  FUN_18030ba34
// size=87 thunk=false
// signature: undefined FUN_18030ba34()
// status: ok


void FUN_18030ba34(void)

{
  undefined8 *_Memory;
  longlong lVar1;
  
  while (_Memory = DAT_1803f8f38, DAT_1803f8f38 != (undefined8 *)0x0) {
    DAT_1803f8f38 = (undefined8 *)*DAT_1803f8f38;
    lVar1 = (*(code *)PTR__guard_dispatch_icall_18030cca8)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18030cca8)(lVar1,1);
    }
    free(_Memory);
  }
  return;
}


