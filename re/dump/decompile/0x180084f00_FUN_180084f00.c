// 0x180084f00  FUN_180084f00
// size=120 thunk=false
// signature: undefined FUN_180084f00()
// status: ok


void FUN_180084f00(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  char cVar1;
  double dVar2;
  
  cVar1 = FUN_180084d90(*param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(longlong **)param_1[1] + 0x138))(*(longlong **)param_1[1],0xffffffff,3);
    if (cVar1 != '\0') {
      dVar2 = (double)(**(code **)(**(longlong **)param_1[1] + 0xc0))
                                (*(longlong **)param_1[1],0xffffffff);
      *param_3 = (float)dVar2;
    }
    (**(code **)(**(longlong **)param_1[1] + 0x10))(*(longlong **)param_1[1],2);
  }
  return;
}


