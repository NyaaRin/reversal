// 0x18006da70  FUN_18006da70
// size=58 thunk=false
// signature: undefined FUN_18006da70()
// status: ok


undefined1 * FUN_18006da70(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    puVar2 = &DAT_18033e5ea;
  }
  else {
    puVar1 = (undefined1 *)
             (**(code **)(*param_1 + 0x40))(param_1,param_2,&DAT_18033e5ea,param_4,&DAT_18033e5ea);
    puVar2 = &DAT_18033e5ea;
    if (puVar1 != (undefined1 *)0x0) {
      puVar2 = puVar1;
    }
  }
  return puVar2;
}


