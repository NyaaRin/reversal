// 0x180052510  FUN_180052510
// size=149 thunk=false
// signature: undefined FUN_180052510()
// status: ok


undefined8 FUN_180052510(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar3 = (float)param_4;
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,1,5);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1,1,param_3);
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
      uVar4 = 0;
      fVar3 = (float)dVar1;
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  return CONCAT44(uVar4,fVar3);
}


