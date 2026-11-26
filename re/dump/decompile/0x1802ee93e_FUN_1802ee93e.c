// 0x1802ee93e  FUN_1802ee93e
// size=59 thunk=false
// signature: undefined FUN_1802ee93e()
// status: ok


undefined8 FUN_1802ee93e(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_2 + 0x30);
  *puVar1 = 0;
  FUN_180212700(puVar1 + 8,"read failed",0xb);
  return 0;
}


