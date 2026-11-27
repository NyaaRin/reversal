// 0x180105840  FUN_180105840
// size=288 thunk=false
// signature: undefined FUN_180105840()
// status: ok


ulonglong FUN_180105840(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [48];
  
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_18001d080(&local_90,"DT_BasePlayer",0xd);
  puVar6 = local_50;
  uVar2 = FUN_18016d4c0(local_50,&local_90);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_90);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  sVar3 = strlen(param_2);
  FUN_18001d080(&local_70,param_2,sVar3,param_4,puVar6);
  uVar4 = FUN_18016d4c0(local_50,&local_70);
  iVar1 = FUN_180018c10(uVar2,uVar4);
  uVar5 = FUN_18020e450(&local_70);
  if (iVar1 == 0) {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    uVar5 = (ulonglong)*(byte *)(iVar1 + param_1);
  }
  return uVar5;
}


