// 0x180243880  FUN_180243880
// size=143 thunk=false
// signature: undefined FUN_180243880()
// status: ok


longlong * FUN_180243880(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar1 != puVar2) {
    param_1[1] = (longlong)puVar1;
    puVar2 = puVar1;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  local_18 = 0;
  local_10 = 0;
  if (puVar2 == (undefined8 *)param_1[2]) {
    FUN_180263090(param_1,puVar2,&local_18);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined2 *)(puVar2 + 4) = 0x100;
    *(undefined1 *)((longlong)puVar2 + 0x22) = 1;
    puVar2[5] = 0;
    param_1[1] = param_1[1] + 0x30;
  }
  *(undefined1 *)(*param_1 + 0x20) = 1;
  *(undefined1 *)(*param_1 + 0x21) = 1;
  return param_1;
}


