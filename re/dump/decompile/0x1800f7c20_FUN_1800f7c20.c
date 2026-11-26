// 0x1800f7c20  FUN_1800f7c20
// size=271 thunk=false
// signature: undefined FUN_1800f7c20()
// status: ok


undefined8 *
FUN_1800f7c20(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 *local_10;
  
  local_10 = param_1;
  if ((ulonglong)param_2[2] <= param_3) {
    FUN_18016d4c0();
    return param_1;
  }
  param_3 = param_3 - 2;
  if (param_3 != 0) {
    do {
      puVar4 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar4 = (undefined8 *)*param_2;
      }
    } while (((*(byte *)((longlong)puVar4 + param_3) & 0xc0) == 0x80) &&
            (param_3 = param_3 - 1, param_3 != 0));
  }
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  if ((ulonglong)param_2[2] < param_3) {
    param_3 = param_2[2];
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_18001d080(&local_30,param_2,param_3,param_4,0);
  puVar5 = (undefined4 *)FUN_18021aef0(&local_30,&DAT_18034fa2c,2,param_4,2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(undefined4 *)param_1 = *puVar5;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  uVar1 = puVar5[5];
  uVar2 = puVar5[6];
  uVar3 = puVar5[7];
  *(undefined4 *)(param_1 + 2) = puVar5[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined1 *)puVar5 = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0xf;
  FUN_18020e450(&local_30);
  return param_1;
}


