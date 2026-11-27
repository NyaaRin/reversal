// 0x1800ac1d0  FUN_1800ac1d0
// size=445 thunk=false
// signature: undefined FUN_1800ac1d0()
// status: ok


longlong * FUN_1800ac1d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 **ppuVar2;
  bool bVar3;
  undefined4 local_77;
  undefined2 local_73;
  undefined1 local_71;
  longlong local_70;
  undefined4 local_67;
  undefined2 local_63;
  undefined1 local_61;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  longlong local_50;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  undefined8 *local_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 *local_28 [2];
  longlong local_18;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  bVar3 = DAT_1803fa678 == 0;
  if (bVar3) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    local_30 = 0;
    ppuVar2 = &local_40;
  }
  else {
    ppuVar2 = (undefined8 **)FUN_18001bcd0(param_1,local_28,param_3,param_4,0);
  }
  *param_1 = (longlong)*ppuVar2;
  if (bVar3) {
    if (local_40 != (undefined8 *)0x0) {
      (**(code **)*local_40)();
      if (local_30 == 0) {
        DAT_1803fa330 = local_70;
        DAT_1803fa339 = local_67;
        DAT_1803fa33d = local_63;
        local_71 = local_61;
      }
      else {
        DAT_1803fa330 = local_30;
        DAT_1803fa339 = local_77;
        DAT_1803fa33d = local_73;
      }
      DAT_1803fa338 = local_30 != 0;
      DAT_1803fa33f = local_71;
    }
  }
  if (!bVar3) {
    if (local_28[0] != (undefined8 *)0x0) {
      (**(code **)*local_28[0])();
      if (local_18 == 0) {
        DAT_1803fa330 = local_50;
        DAT_1803fa339 = local_47;
        DAT_1803fa33d = local_43;
        local_51 = local_41;
      }
      else {
        DAT_1803fa330 = local_18;
        DAT_1803fa339 = local_57;
        DAT_1803fa33d = local_53;
      }
      DAT_1803fa338 = local_18 != 0;
      DAT_1803fa33f = local_51;
    }
  }
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    uVar1 = (*(code *)**(undefined8 **)*param_1)();
    *(undefined4 *)(param_1 + 1) = uVar1;
  }
  return param_1;
}


