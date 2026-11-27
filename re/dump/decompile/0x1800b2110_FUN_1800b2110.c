// 0x1800b2110  FUN_1800b2110
// size=122 thunk=false
// signature: undefined FUN_1800b2110()
// status: ok


void * FUN_1800b2110(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  void *lp;
  void *pvVar2;
  int local_res10 [6];
  
  if ((DAT_1803fa660 != (longlong *)0x0) && (-1 < param_1)) {
    lp = (void *)(**(code **)(*DAT_1803fa660 + 0x40))(DAT_1803fa660,param_1);
    if (lp != (void *)0x0) {
      pvVar2 = lp;
      local_res10[0] = IsBadReadPtr(lp,0x140);
      if (local_res10[0] == 0) {
        cVar1 = FUN_1800b2030(lp,local_res10,param_3,param_4,pvVar2);
        if (cVar1 != '\0') {
          pvVar2 = (void *)0x0;
          if (local_res10[0] == param_1) {
            pvVar2 = lp;
          }
          return pvVar2;
        }
      }
    }
  }
  return (void *)0x0;
}


