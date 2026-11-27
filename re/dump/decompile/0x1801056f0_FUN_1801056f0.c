// 0x1801056f0  FUN_1801056f0
// size=318 thunk=false
// signature: undefined FUN_1801056f0()
// status: ok


undefined4 FUN_1801056f0(longlong param_1,char *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [56];
  
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_18001d080(&local_90,"DT_BasePlayer",0xd);
  puVar5 = local_50;
  uVar2 = FUN_18016d4c0(local_50,&local_90);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_90);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  sVar3 = strlen(param_2);
  FUN_18001d080(&local_70,param_2,sVar3,param_4,puVar5);
  uVar4 = FUN_18016d4c0(local_50,&local_70);
  iVar1 = FUN_180018c10(uVar2,uVar4);
  FUN_18020e450(&local_70);
  if (iVar1 != 0) {
    param_3 = *(undefined4 *)(iVar1 + param_1);
  }
  return param_3;
}


