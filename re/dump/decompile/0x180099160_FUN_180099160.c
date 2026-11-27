// 0x180099160  FUN_180099160
// size=237 thunk=false
// signature: undefined FUN_180099160()
// status: ok


float FUN_180099160(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  double dVar3;
  float fVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  char local_20;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar1 = param_1[1];
    FUN_180023010(&local_38,lVar1);
    (*DAT_1803faee8)(lVar1,param_2,"pitch");
    if ((local_20 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_38,local_30,local_28,local_24);
    }
  }
  fVar4 = 0.0;
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
  if (((cVar2 != '\0') &&
      (dVar3 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff), 0.0 < dVar3)) &&
     (dVar3 < DAT_180380cf0)) {
    fVar4 = (float)dVar3;
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return fVar4;
}


