// 0x1800ac790  FUN_1800ac790
// size=196 thunk=false
// signature: undefined FUN_1800ac790()
// status: ok


undefined8 FUN_1800ac790(longlong param_1,longlong param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *local_38 [2];
  
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  FUN_1800ac1d0(local_38);
  if (((local_38[0] == (longlong *)0x0) || (param_1 == 0)) || (param_2 == 0)) {
    FUN_1800ac3b0(local_38);
    uVar3 = 0;
  }
  else {
    FUN_18001e2b0(param_1,local_38[0]);
    FUN_18002d9c0(local_38[0][1],0xffffffff,param_2);
    cVar1 = (**(code **)(*local_38[0] + 0x138))(local_38[0],0xffffffff,0);
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*local_38[0] + 200))(local_38[0],0xffffffff);
      *param_3 = uVar2;
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      FUN_1800ac3b0(local_38);
      uVar3 = 1;
    }
    else {
      FUN_1800ac3b0(local_38);
      uVar3 = 0;
    }
  }
  return uVar3;
}


