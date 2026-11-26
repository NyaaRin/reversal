// 0x18016f960  FUN_18016f960
// size=939 thunk=false
// signature: undefined FUN_18016f960()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18016f960(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  byte ****ppppbVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 ***local_80;
  undefined8 uStack_78;
  longlong local_70;
  ulonglong uStack_68;
  byte ***local_60;
  undefined8 uStack_58;
  longlong local_50;
  ulonglong uStack_48;
  undefined8 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  uVar4 = 0;
  local_88 = 0;
  local_40 = param_2;
  local_38 = param_3;
  if (param_3[2] == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2,"Unknown",7);
    goto LAB_18016fcc9;
  }
  local_80 = (undefined8 ****)0x0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uVar10 = 7;
  if ((ulonglong)param_3[2] < 7) {
    uVar10 = param_3[2];
  }
  puVar9 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar9 = (undefined8 *)*param_3;
  }
  FUN_18001d080(&local_80,puVar9,uVar10);
  local_88 = 2;
  ppppuVar8 = &local_80;
  if (0xf < uStack_68) {
    ppppuVar8 = (undefined8 ****)local_80;
  }
  if (local_70 == 7) {
    iVar5 = memcmp(ppppuVar8,"CWeapon",7);
    bVar12 = iVar5 == 0;
  }
  else {
    bVar12 = false;
  }
  local_88 = 0;
  FUN_18020e450(&local_80);
  if (bVar12) {
    local_80 = (undefined8 ****)0x0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    if ((ulonglong)param_3[2] < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_18022ec00();
    }
    lVar6 = param_3[2] - 7;
    lVar11 = -1;
    if (lVar6 != -1) {
      lVar11 = lVar6;
    }
    puVar9 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar9 = (undefined8 *)*param_3;
    }
    FUN_18001d080(&local_80,(longlong)puVar9 + 7,lVar11);
    local_88 = 4;
    FUN_18020e8a0(param_3,&local_80);
LAB_18016fc8f:
    local_88 = 0;
    FUN_18020e450(&local_80);
  }
  else {
    local_60 = (byte ***)0x0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uVar10 = 2;
    if ((ulonglong)param_3[2] < 2) {
      uVar10 = param_3[2];
    }
    puVar9 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar9 = (undefined8 *)*param_3;
    }
    FUN_18001d080(&local_60,puVar9,uVar10);
    ppppbVar7 = &local_60;
    if (0xf < uStack_48) {
      ppppbVar7 = (byte ****)local_60;
    }
    if (local_50 == 2) {
      bVar12 = *(byte *)ppppbVar7 < 0x43;
      if ((*(byte *)ppppbVar7 != 0x43) ||
         (bVar12 = *(byte *)((longlong)ppppbVar7 + 1) < 0x5f,
         *(byte *)((longlong)ppppbVar7 + 1) != 0x5f)) {
        uVar4 = -(uint)bVar12 | 1;
      }
      bVar12 = uVar4 == 0;
    }
    else {
      bVar12 = false;
    }
    local_88 = 0;
    FUN_18020e450(&local_60);
    if (bVar12) {
      local_80 = (undefined8 ****)0x0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      if ((ulonglong)param_3[2] < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_18022ec00();
      }
      lVar6 = param_3[2] - 2;
      lVar11 = -1;
      if (lVar6 != -1) {
        lVar11 = lVar6;
      }
      puVar9 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        puVar9 = (undefined8 *)*param_3;
      }
      FUN_18001d080(&local_80,(longlong)puVar9 + 2,lVar11);
      local_88 = 0x10;
      FUN_18020e8a0(param_3,&local_80);
      goto LAB_18016fc8f;
    }
    local_80 = (undefined8 ****)0x0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uVar10 = 7;
    if ((ulonglong)param_3[2] < 7) {
      uVar10 = param_3[2];
    }
    puVar9 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar9 = (undefined8 *)*param_3;
    }
    FUN_18001d080(&local_80,puVar9,uVar10);
    local_88 = 0x20;
    ppppuVar8 = &local_80;
    if (0xf < uStack_68) {
      ppppuVar8 = (undefined8 ****)local_80;
    }
    if (local_70 == 7) {
      iVar5 = memcmp(ppppuVar8,"weapon_",7);
      bVar12 = iVar5 == 0;
    }
    else {
      bVar12 = false;
    }
    local_88 = 0;
    FUN_18020e450(&local_80);
    if (bVar12) {
      local_80 = (undefined8 ****)0x0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      if ((ulonglong)param_3[2] < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_18022ec00();
      }
      lVar6 = param_3[2] - 7;
      lVar11 = -1;
      if (lVar6 != -1) {
        lVar11 = lVar6;
      }
      puVar9 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        puVar9 = (undefined8 *)*param_3;
      }
      FUN_18001d080(&local_80,(longlong)puVar9 + 7,lVar11);
      local_88 = 0x40;
      FUN_18020e8a0(param_3,&local_80);
      goto LAB_18016fc8f;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)param_2 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  uVar10 = param_3[3];
  param_2[2] = param_3[2];
  param_2[3] = uVar10;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
LAB_18016fcc9:
  local_88 = 1;
  FUN_18020e450(param_3);
  return param_2;
}


