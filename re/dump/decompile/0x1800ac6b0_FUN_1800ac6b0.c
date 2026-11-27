// 0x1800ac6b0  FUN_1800ac6b0
// size=215 thunk=false
// signature: undefined FUN_1800ac6b0()
// status: ok


undefined8 FUN_1800ac6b0(longlong param_1,longlong param_2,float *param_3)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  longlong *local_38 [3];
  
  FUN_1800ac1d0(local_38);
  if (((local_38[0] == (longlong *)0x0) || (param_1 == 0)) || (param_2 == 0)) {
    FUN_1800ac3b0(local_38);
    uVar2 = 0;
  }
  else {
    FUN_18001e2b0(param_1,local_38[0]);
    FUN_18002d9c0(local_38[0][1],0xffffffff,param_2);
    cVar1 = (**(code **)(*local_38[0] + 0x138))(local_38[0],0xffffffff,3);
    if (cVar1 == '\0') {
      FUN_1800ac3b0(local_38);
      uVar2 = 0;
    }
    else {
      dVar3 = (double)(**(code **)(*local_38[0] + 0xc0))(local_38[0],0xffffffff);
      if (NAN((float)dVar3)) {
        FUN_1800ac3b0(local_38);
        uVar2 = 0;
      }
      else {
        *param_3 = (float)dVar3;
        FUN_1800ac3b0(local_38);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


