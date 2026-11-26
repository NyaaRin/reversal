// 0x18008fbf0  FUN_18008fbf0
// size=163 thunk=false
// signature: undefined FUN_18008fbf0()
// status: ok


undefined8 FUN_18008fbf0(longlong *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_18002db10(param_1[1],param_2,"randomseed");
  cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return 0;
  }
  (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3);
  iVar2 = FUN_180023180(param_1[1],1,0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return 0;
  }
  return 1;
}


