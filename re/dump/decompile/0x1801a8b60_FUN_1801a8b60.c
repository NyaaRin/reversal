// 0x1801a8b60  FUN_1801a8b60
// size=179 thunk=false
// signature: undefined FUN_1801a8b60()
// status: ok


undefined8
FUN_1801a8b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined1 local_30 [40];
  
  local_38 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = param_1;
  FUN_180211510(&local_60,L"last_config.txt",0xf,param_4,0);
  uVar2 = 0;
  uVar1 = FUN_1801a8740(local_30);
  FUN_180066720(param_1,uVar1,&local_60,param_4,uVar2);
  FUN_18021e290(local_30);
  FUN_18021e290(&local_60);
  return param_1;
}


