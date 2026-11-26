// 0x180018990  FUN_180018990
// size=145 thunk=false
// signature: undefined FUN_180018990()
// status: ok


longlong * FUN_180018990(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_res10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = DAT_1803f9278;
  if (DAT_1803f9278 != (longlong *)0x0) {
    if (*param_1 != param_1[1]) {
      param_1[1] = *param_1;
    }
    for (lVar3 = (**(code **)(*plVar2 + 0x40))(); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {
      local_res10 = *(undefined8 *)(lVar3 + 0x18);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_180221c00(param_1,puVar1,&local_res10);
      }
      else {
        *puVar1 = local_res10;
        param_1[1] = param_1[1] + 8;
      }
    }
  }
  return param_1;
}


