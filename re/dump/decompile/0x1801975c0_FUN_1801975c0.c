// 0x1801975c0  FUN_1801975c0
// size=181 thunk=false
// signature: undefined FUN_1801975c0()
// status: ok


undefined8 *
FUN_1801975c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  uVar5 = 0;
  uVar3 = FUN_180196e70(local_30);
  uVar3 = FUN_1801fd1b0(local_50,"unknown/",uVar3,param_4,uVar5);
  puVar4 = (undefined4 *)FUN_18021aef0(uVar3,&DAT_180340d34,4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar5 = puVar4[1];
  uVar1 = puVar4[2];
  uVar2 = puVar4[3];
  *(undefined4 *)param_1 = *puVar4;
  *(undefined4 *)((longlong)param_1 + 4) = uVar5;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  uVar5 = puVar4[5];
  uVar1 = puVar4[6];
  uVar2 = puVar4[7];
  *(undefined4 *)(param_1 + 2) = puVar4[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined1 *)puVar4 = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0xf;
  FUN_18020e450(local_50);
  FUN_18020e450(local_30);
  return param_1;
}


