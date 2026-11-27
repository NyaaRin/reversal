// 0x180087ba0  FUN_180087ba0
// size=228 thunk=false
// signature: undefined FUN_180087ba0()
// status: ok


float FUN_180087ba0(undefined8 param_1,longlong *param_2,undefined8 param_3,float param_4,
                   float param_5,int param_6)

{
  double dVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 8))(param_2,0xffffffff);
  (**(code **)(*param_2 + 0xe8))(param_2,param_3,0);
  (**(code **)(*param_2 + 0xf0))(param_2,(double)param_4);
  (**(code **)(*param_2 + 0xf0))(param_2,(double)param_5);
  (**(code **)(*param_2 + 0xf0))(param_2,(double)param_6);
  iVar2 = FUN_180023180(param_2[1],4,1);
  if (iVar2 == 0) {
    dVar1 = (double)(**(code **)(*param_2 + 0xc0))(param_2,0xffffffff);
    (**(code **)(*param_2 + 0x10))(param_2,1);
    return (float)dVar1;
  }
  (**(code **)(*param_2 + 0x10))(param_2,1);
  return 0.0;
}


