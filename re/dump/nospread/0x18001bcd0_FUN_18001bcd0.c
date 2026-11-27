// 18001bcd0  FUN_18001bcd0
// signature: undefined FUN_18001bcd0()
// status: ok


longlong * FUN_18001bcd0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  
  puVar2 = (undefined8 *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0,param_3,param_4,0);
  *param_2 = (longlong)puVar2;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (**(code **)*puVar2)(puVar2);
    *(undefined4 *)(param_2 + 1) = uVar1;
    if (DAT_1803fa338 != '\0') {
      param_2[2] = DAT_1803fa330;
    }
    DAT_1803fa330 = *(longlong *)(*param_2 + 8);
    DAT_1803fa338 = '\x01';
    DAT_1803fa339 = local_17;
    DAT_1803fa33d = local_13;
    DAT_1803fa33f = local_11;
  }
  return param_2;
}


