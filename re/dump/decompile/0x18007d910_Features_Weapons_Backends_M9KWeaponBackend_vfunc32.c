// 0x18007d910  Features_Weapons_Backends_M9KWeaponBackend_vfunc32
// size=411 thunk=false
// signature: undefined Features_Weapons_Backends_M9KWeaponBackend_vfunc32()
// status: ok


float * Features_Weapons_Backends_M9KWeaponBackend_vfunc32
                  (longlong param_1,float *param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char *_Str;
  size_t sVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  bVar1 = false;
  if (param_3 == 0) {
    _Str = (char *)0x0;
LAB_18007d9ae:
    bVar2 = false;
  }
  else {
    _Str = (char *)FUN_18001e4e0(param_3);
    bVar1 = false;
    if (_Str < (char *)0x10001) goto LAB_18007d9ae;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    sVar4 = strlen(_Str);
    uVar6 = FUN_18001d080(&local_80,_Str,sVar4);
    bVar1 = true;
    cVar3 = FUN_18020bf70(uVar6,&local_80);
    if (cVar3 == '\0') goto LAB_18007d9ae;
    bVar2 = true;
  }
  if (bVar1) {
    FUN_18020e450(&local_80);
  }
  if (bVar2) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    sVar4 = strlen(_Str);
    uVar6 = FUN_18001d080(&local_60,_Str,sVar4);
    puVar5 = (undefined8 *)FUN_18020c120(uVar6,&local_60);
    *(undefined8 *)param_2 = *puVar5;
    param_2[2] = *(float *)(puVar5 + 1);
    FUN_18020e450(&local_60);
    return param_2;
  }
  if (((param_3 == 0) || (param_3 != *(longlong *)(param_1 + 8))) ||
     (*(char *)(param_1 + 0x10) == '\0')) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    goto LAB_18007dab7;
  }
  if ((*(char *)(param_1 + 0x11) == '\0') &&
     ((param_4 == 0 || ((*(uint *)(param_4 + 0x20) & 0x800) == 0)))) {
    bVar1 = false;
LAB_18007da88:
    fVar7 = *(float *)(param_1 + 0x18);
    if (((fVar7 <= 0.0) && (fVar7 = *(float *)(param_1 + 0x1c), fVar7 <= 0.0)) && (!bVar1)) {
      fVar7 = *(float *)(param_1 + 0x20);
    }
  }
  else {
    bVar1 = true;
    fVar7 = *(float *)(param_1 + 0x14);
    if (fVar7 <= 0.0) goto LAB_18007da88;
  }
  *param_2 = fVar7;
  param_2[1] = fVar7;
LAB_18007dab7:
  param_2[2] = 0.0;
  return param_2;
}


