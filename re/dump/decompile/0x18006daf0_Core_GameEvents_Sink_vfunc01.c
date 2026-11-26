// 0x18006daf0  Core_GameEvents_Sink_vfunc01
// size=78 thunk=false
// signature: undefined Core_GameEvents_Sink_vfunc01()
// status: ok


void Core_GameEvents_Sink_vfunc01(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = 0;
    while (iVar1 < *(int *)(param_1 + 0x50)) {
      if (*(longlong *)(param_1 + ((longlong)iVar1 + 1) * 0x10) == 0) {
        iVar1 = iVar1 + 1;
      }
      else {
        (**(code **)(param_1 + ((longlong)iVar1 + 1) * 0x10))(param_2);
        iVar1 = iVar1 + 1;
      }
    }
  }
  return;
}


