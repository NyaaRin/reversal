// 0x180183300  FUN_180183300
// size=122 thunk=false
// signature: undefined FUN_180183300()
// status: ok


undefined1 FUN_180183300(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (DAT_1803e89e2 != '\0') {
    uVar1 = FUN_180183140();
    lVar2 = FUN_180182f40(uVar1,param_1,0);
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x19) != '\0')) &&
       ((*(char *)(lVar2 + 0x2c) != '\0' ||
        ((param_2 < 0x20 && ((*(uint *)(lVar2 + 0x30) >> (param_2 & 0x1f) & 1) != 0)))))) {
      uVar1 = *(undefined8 *)(lVar2 + 0x24);
      *param_3 = *(undefined8 *)(lVar2 + 0x1c);
      param_3[1] = uVar1;
      return 1;
    }
  }
  return 0;
}


