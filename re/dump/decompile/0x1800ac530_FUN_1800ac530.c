// 0x1800ac530  FUN_1800ac530
// size=371 thunk=false
// signature: undefined FUN_1800ac530()
// status: ok


undefined8
FUN_1800ac530(longlong param_1,longlong param_2,longlong param_3,float *param_4,char param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  longlong *local_38 [2];
  
  FUN_1800ac1d0(local_38);
  if ((((local_38[0] == (longlong *)0x0) || (param_1 == 0)) || (param_2 == 0)) || (param_3 == 0)) {
    FUN_1800ac3b0(local_38);
    uVar3 = 0;
  }
  else {
    FUN_18001e2b0(param_1,local_38[0]);
    FUN_18002d9c0(local_38[0][1],0xffffffff,param_2);
    cVar1 = (**(code **)(*local_38[0] + 0x138))(local_38[0],0xffffffff,6);
    if (cVar1 == '\0') {
      FUN_1800ac3b0(local_38);
      uVar3 = 0;
    }
    else {
      FUN_18001e2b0(param_1,local_38[0]);
      (**(code **)(*local_38[0] + 0xe8))(local_38[0],param_3,0);
      uVar3 = 2;
      if (param_5 != '\0') {
        (**(code **)(*local_38[0] + 0xf8))(local_38[0],1);
        uVar3 = 3;
      }
      iVar2 = FUN_180023180(local_38[0][1],uVar3,1);
      if (iVar2 == 0) {
        cVar1 = (**(code **)(*local_38[0] + 0x138))(local_38[0],0xffffffff,3);
        if (cVar1 == '\0') {
          FUN_1800ac3b0(local_38);
          uVar3 = 0;
        }
        else {
          dVar4 = (double)(**(code **)(*local_38[0] + 0xc0))(local_38[0],0xffffffff);
          if (NAN((float)dVar4)) {
            FUN_1800ac3b0(local_38);
            uVar3 = 0;
          }
          else {
            *param_4 = (float)dVar4;
            FUN_1800ac3b0(local_38);
            uVar3 = 1;
          }
        }
      }
      else {
        FUN_1800ac3b0(local_38);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


