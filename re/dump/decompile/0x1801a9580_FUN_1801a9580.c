// 0x1801a9580  FUN_1801a9580
// size=269 thunk=false
// signature: undefined FUN_1801a9580()
// status: ok


undefined8
FUN_1801a9580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  uVar3 = 0;
  uVar1 = FUN_18016d4c0(local_b0);
  uVar1 = FUN_1801a93b0(local_30,uVar1);
  uVar1 = FUN_1801a9250(local_50,uVar1);
  puVar2 = (undefined8 *)FUN_180204f70(local_70,uVar1,L".cfg",param_4,uVar3);
  local_d0 = *puVar2;
  uStack_c8 = puVar2[1];
  local_c0 = puVar2[2];
  uStack_b8 = puVar2[3];
  *(undefined2 *)puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 7;
  uVar1 = FUN_1801a8aa0(local_90);
  FUN_180066720(param_1,uVar1,&local_d0);
  FUN_18021e290(local_90);
  FUN_18021e290(&local_d0);
  FUN_18021e290(local_70);
  FUN_18021e290(local_50);
  FUN_18020e450(local_30);
  return param_1;
}


