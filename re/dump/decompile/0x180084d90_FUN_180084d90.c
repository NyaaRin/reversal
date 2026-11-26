// 0x180084d90  FUN_180084d90
// size=358 thunk=false
// signature: undefined FUN_180084d90()
// status: ok


undefined8 FUN_180084d90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  
  cVar3 = FUN_18001e2b0(*(undefined8 *)*param_1,*(undefined8 *)param_1[1]);
  if (cVar3 != '\0') {
    if (DAT_1803faee8 != (code *)0x0) {
      uVar1 = *(undefined8 *)(*(longlong *)param_1[1] + 8);
      FUN_180023010(&local_28,uVar1);
      (*DAT_1803faee8)(uVar1,0xffffffff,param_2);
      if ((local_10 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_28,local_20,local_18,local_14);
      }
    }
    cVar3 = (**(code **)(**(longlong **)param_1[1] + 0x138))(*(longlong **)param_1[1],0xffffffff,6);
    plVar2 = *(longlong **)param_1[1];
    if (cVar3 != '\0') {
      cVar3 = FUN_18001e2b0(*(undefined8 *)*param_1,plVar2);
      plVar2 = *(longlong **)param_1[1];
      if (cVar3 == '\0') {
        (**(code **)(*plVar2 + 0x10))(plVar2,2);
        return 0;
      }
      iVar4 = FUN_180023180(plVar2[1],1,1);
      if (iVar4 != 0) {
        (**(code **)(**(longlong **)param_1[1] + 0x10))(*(longlong **)param_1[1],1);
        (**(code **)(**(longlong **)param_1[1] + 0x10))(*(longlong **)param_1[1],1);
        return 0;
      }
      return 1;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,2);
  }
  return 0;
}


