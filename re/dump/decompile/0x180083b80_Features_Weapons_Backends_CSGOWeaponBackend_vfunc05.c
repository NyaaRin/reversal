// 0x180083b80  Features_Weapons_Backends_CSGOWeaponBackend_vfunc05
// size=377 thunk=false
// signature: undefined Features_Weapons_Backends_CSGOWeaponBackend_vfunc05()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * Features_Weapons_Backends_CSGOWeaponBackend_vfunc05
                  (undefined8 param_1,float *param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auStack_78 [32];
  float local_58 [4];
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  FUN_1802d3e70((float *)(param_4 + 8),&local_48,&local_38,&local_28);
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar5 = (*pcVar2)(DAT_1803fa360,uVar4);
  if (lVar5 == 0) {
    fVar7 = 0.0;
    local_58[0] = 0.0;
    local_58[1] = 0.0;
    local_58[2] = 0.0;
    pfVar6 = local_58;
  }
  else {
    pfVar6 = (float *)FUN_18001f9d0(lVar5,local_58);
    fVar7 = *pfVar6;
  }
  fVar3 = DAT_1803809c0;
  fVar1 = pfVar6[1];
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  *param_2 = 0.0;
  local_48 = (local_48 - fVar1 * local_38 * fVar3) - fVar7 * local_28 * fVar3;
  local_44 = (local_44 - fVar1 * local_34 * fVar3) - fVar7 * local_24 * fVar3;
  local_40 = (local_40 - fVar1 * local_30 * fVar3) - fVar7 * local_20 * fVar3;
  FUN_1802d4540(&local_48,param_2);
  *param_2 = *param_2 - *(float *)(param_4 + 8);
  fVar7 = *(float *)(param_4 + 0xc);
  param_2[2] = 0.0;
  param_2[1] = param_2[1] - fVar7;
  return param_2;
}


