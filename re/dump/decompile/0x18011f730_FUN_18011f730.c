// 0x18011f730  FUN_18011f730
// size=76 thunk=false
// signature: undefined FUN_18011f730()
// status: ok


void FUN_18011f730(undefined4 param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  if ((DAT_1804015d8 != (longlong *)0x0) &&
     (plVar1 = (longlong *)*DAT_1804015d8, plVar1 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x3d8))(plVar1,param_1);
    FUN_18011f690(uVar2,param_2,0x60);
    return;
  }
  return;
}


