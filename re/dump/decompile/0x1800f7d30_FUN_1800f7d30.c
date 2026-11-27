// 0x1800f7d30  FUN_1800f7d30
// size=264 thunk=false
// signature: undefined FUN_1800f7d30()
// status: ok


undefined8 FUN_1800f7d30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  if (*(int *)(param_2 + 4) == 0) {
    FUN_1800f7c20(param_1,param_2 + 0x28,0x12,param_4,0);
  }
  else if (*(int *)(param_2 + 4) == 1) {
    FUN_1800f7c20(param_1,param_2 + 8,0x12,param_4,0);
  }
  else {
    FUN_1800f7c20(local_30,param_2 + 0x28,10,param_4,0);
    uVar1 = FUN_1800f7c20(local_50,param_2 + 8,10);
    FUN_1801fc680(local_70,uVar1,&DAT_18034fa30);
    FUN_18021e540(param_1);
    FUN_18020e450(local_70);
    FUN_18020e450(local_50);
    FUN_18020e450(local_30);
  }
  return param_1;
}


