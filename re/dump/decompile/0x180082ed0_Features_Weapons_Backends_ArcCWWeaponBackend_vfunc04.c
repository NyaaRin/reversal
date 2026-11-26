// 0x180082ed0  Features_Weapons_Backends_ArcCWWeaponBackend_vfunc04
// size=564 thunk=false
// signature: undefined Features_Weapons_Backends_ArcCWWeaponBackend_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
Features_Weapons_Backends_ArcCWWeaponBackend_vfunc04
          (longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  char local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float local_94;
  float local_90;
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  uVar5 = 0;
  if ((DAT_1803fa678 != (longlong *)0x0) &&
     (lVar4 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0), lVar4 != 0)) {
    uVar5 = *(undefined8 *)(lVar4 + 8);
  }
  FUN_18002dc30(&local_c8,uVar5);
  fVar1 = *(float *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0xc);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    puVar6 = (undefined8 *)&DAT_180347810;
  }
  else {
    puVar6 = (undefined8 *)(param_1 + 0x28);
    if (0xf < *(ulonglong *)(param_1 + 0x40)) {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  FUN_180082310(param_1,param_3,param_4,puVar6);
  if (*(char *)(param_1 + 0x6d) != '\0') {
    local_98 = *(float *)(param_1 + 0x18) + *(float *)(param_4 + 8);
    local_94 = *(float *)(param_1 + 0x1c) + *(float *)(param_4 + 0xc);
    local_90 = *(float *)(param_1 + 0x20) + *(float *)(param_4 + 0x10);
    uVar7 = FUN_1802d4050(&local_98,local_88);
    FUN_180082b40(uVar7,local_88,(fVar3 * fVar1) / DAT_180380fcc);
    uVar7 = FUN_180082310(param_1,param_3,param_4,&DAT_18034124c);
    if (*(char *)(param_1 + 0x6d) != '\0') {
      FUN_180082b40(uVar7,local_88,uVar2);
      fStack_a4 = 0.0;
      fStack_a0 = 0.0;
      local_a8 = 0.0;
      FUN_1802d4540(local_88,&local_a8);
      local_a8 = local_a8 - local_98;
      fStack_a4 = fStack_a4 - local_94;
      fStack_a0 = fStack_a0 - local_90;
      local_a8 = (float)FUN_1802d3e00();
      fStack_a4 = (float)FUN_1802d3e00(fStack_a4);
      *param_2 = CONCAT44(fStack_a4,local_a8);
      *(float *)(param_2 + 1) = fStack_a0;
      if (local_b0 == '\0') {
        return param_2;
      }
      if (DAT_1803faf78 == (code *)0x0) {
        return param_2;
      }
      (*DAT_1803faf78)(local_c8,local_c0,local_b8,local_b4);
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if ((local_b0 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_c8,local_c0,local_b8,local_b4);
  }
  return param_2;
}


