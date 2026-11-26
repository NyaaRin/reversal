// 0x180174b30  FUN_180174b30
// size=218 thunk=false
// signature: undefined FUN_180174b30()
// status: ok


undefined8 * FUN_180174b30(undefined8 *param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [48];
  
  uVar6 = 0;
  uVar3 = FUN_180013ba0(local_50);
  uVar3 = FUN_1801fd1b0(local_70,&DAT_180361cb4,uVar3,param_4,uVar6);
  uVar3 = FUN_1801fc680(local_90,uVar3,&DAT_18033ea54);
  sVar4 = strlen(param_3);
  puVar5 = (undefined4 *)FUN_18021aef0(uVar3,param_3,sVar4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar6 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *(undefined4 *)param_1 = *puVar5;
  *(undefined4 *)((longlong)param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  uVar6 = puVar5[5];
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  *(undefined4 *)(param_1 + 2) = puVar5[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined1 *)puVar5 = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0xf;
  FUN_18020e450(local_90);
  FUN_18020e450(local_70);
  FUN_18020e450(local_50);
  return param_1;
}


