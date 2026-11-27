// 0x1800781d0  Features_Weapons_Backends_HL2WeaponBackend_vfunc32
// size=287 thunk=false
// signature: undefined Features_Weapons_Backends_HL2WeaponBackend_vfunc32()
// status: ok


undefined8 *
Features_Weapons_Backends_HL2WeaponBackend_vfunc32
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  char *_Str1;
  size_t sVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  _Str1 = (char *)FUN_18001e4e0(param_3);
  if ((char *)0x10000 < _Str1) {
    iVar2 = strcmp(_Str1,"weapon_pistol");
    if ((iVar2 == 0) && (cVar1 = FUN_180078070(param_3,&local_78), cVar1 != '\0')) {
      *param_2 = local_78;
      *(undefined4 *)(param_2 + 1) = local_70;
      return param_2;
    }
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    sVar3 = strlen(_Str1);
    uVar5 = FUN_18001d080(&local_68,_Str1,sVar3);
    cVar1 = FUN_18020bf70(uVar5,&local_68);
    FUN_18020e450(&local_68);
    if (cVar1 != '\0') {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_30 = 0;
      sVar3 = strlen(_Str1);
      uVar5 = FUN_18001d080(&local_48,_Str1,sVar3);
      puVar4 = (undefined8 *)FUN_18020c120(uVar5,&local_48);
      *param_2 = *puVar4;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar4 + 1);
      FUN_18020e450(&local_48);
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}


