// 0x1800ac860  FUN_1800ac860
// size=282 thunk=false
// signature: undefined FUN_1800ac860()
// status: ok


undefined8 FUN_1800ac860(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  longlong *local_18 [2];
  
  FUN_1800ac1d0(local_18);
  if ((local_18[0] == (longlong *)0x0) || (param_1 == 0)) {
    FUN_1800ac3b0(local_18);
    uVar2 = 0;
  }
  else {
    FUN_18001e2b0(param_1,local_18[0]);
    FUN_18002d9c0(local_18[0][1],0xffffffff,"Primary");
    cVar1 = (**(code **)(*local_18[0] + 0x138))(local_18[0],0xffffffff,5);
    if (cVar1 == '\0') {
      FUN_1800ac3b0(local_18);
      uVar2 = 0;
    }
    else {
      FUN_18002db10(local_18[0][1],0xffffffff,"Damage");
      cVar1 = (**(code **)(*local_18[0] + 0x138))(local_18[0],0xffffffff,3);
      if (cVar1 == '\0') {
        FUN_1800ac3b0(local_18);
        uVar2 = 0;
      }
      else {
        dVar3 = (double)(**(code **)(*local_18[0] + 0xc0))(local_18[0],0xffffffff);
        if (NAN((float)dVar3)) {
          FUN_1800ac3b0(local_18);
          uVar2 = 0;
        }
        else {
          *param_4 = (float)dVar3;
          FUN_1800ac3b0(local_18);
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}


