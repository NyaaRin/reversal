// 0x18022e600  FUN_18022e600
// size=45 thunk=false
// signature: undefined FUN_18022e600()
// status: ok


void FUN_18022e600(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1802d8350(0x48);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return;
}


