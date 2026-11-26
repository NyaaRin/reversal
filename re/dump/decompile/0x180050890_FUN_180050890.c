// 0x180050890  FUN_180050890
// size=65 thunk=false
// signature: undefined FUN_180050890()
// status: ok


undefined8 FUN_180050890(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = FUN_180049c40(6,"EndCombo");
    if (cVar1 != '\0') {
      FUN_1802b1130();
    }
  }
  return 0;
}


