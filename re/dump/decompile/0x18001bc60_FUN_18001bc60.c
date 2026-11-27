// 0x18001bc60  FUN_18001bc60
// size=98 thunk=false
// signature: undefined FUN_18001bc60()
// status: ok


void FUN_18001bc60(longlong *param_1)

{
  longlong local_18;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    DAT_1803fa338 = param_1[2] != 0;
    if ((bool)DAT_1803fa338) {
      local_18 = param_1[2];
    }
    DAT_1803fa339 = local_f;
    DAT_1803fa33d = local_b;
    DAT_1803fa33f = local_9;
    DAT_1803fa330 = local_18;
  }
  return;
}


