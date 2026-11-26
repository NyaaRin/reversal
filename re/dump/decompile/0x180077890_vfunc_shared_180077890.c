// 0x180077890  vfunc_shared_180077890
// size=276 thunk=false
// signature: undefined vfunc_shared_180077890()
// status: ok


undefined8 *
vfunc_shared_180077890(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char *_Str;
  size_t sVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  bVar1 = false;
  uVar7 = 0;
  _Str = (char *)FUN_18001e4e0(param_3);
  if ((char *)0x10000 < _Str) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    sVar4 = strlen(_Str);
    uVar6 = FUN_18001d080(&local_60,_Str,sVar4,param_4,uVar7);
    bVar1 = true;
    uVar7 = 1;
    cVar3 = FUN_18020bf70(uVar6,&local_60);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_180077911;
    }
  }
  bVar2 = false;
LAB_180077911:
  if (bVar1) {
    uVar7 = 0;
    FUN_18020e450(&local_60);
  }
  if (bVar2) {
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_28 = 0;
    sVar4 = strlen(_Str);
    uVar7 = FUN_18001d080(&local_40,_Str,sVar4,param_4,uVar7);
    puVar5 = (undefined8 *)FUN_18020c120(uVar7,&local_40);
    *param_2 = *puVar5;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar5 + 1);
    FUN_18020e450(&local_40);
  }
  else {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_2;
}


