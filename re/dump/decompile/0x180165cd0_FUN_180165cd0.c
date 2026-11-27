// 0x180165cd0  FUN_180165cd0
// size=928 thunk=false
// signature: undefined FUN_180165cd0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180165cd0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  ulonglong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  void *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (DAT_180423a68 != '\0') {
    return 0;
  }
  uVar5 = 0;
  if (DAT_180423ac0 == (longlong *)0x0) {
    local_28 = 0;
    local_30 = &DAT_180423ac0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40 = (undefined8 *)CONCAT44(local_40._4_4_,0x15);
    local_48 = 1;
    iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,0x154,0x21c,1);
    if ((((iVar1 < 0) || (DAT_180423ac0 == (longlong *)0x0)) ||
        (iVar1 = (**(code **)(*DAT_180423ac0 + 0x90))(DAT_180423ac0,0,&DAT_180423a70), iVar1 < 0))
       || (DAT_180423a70 == 0)) {
      FUN_180014410("[MP] RT create failed\n");
      DAT_180423a68 = 1;
      return 0;
    }
  }
  if (DAT_180423a90 == 0) {
    local_28 = 0;
    local_30 = &DAT_180423a90;
    local_38 = CONCAT44(local_38._4_4_,1);
    local_40 = (undefined8 *)((ulonglong)local_40 & 0xffffffff00000000);
    local_48 = 0;
    iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,0x154,0x21c,0x4b);
    if (iVar1 < 0) {
      FUN_180014410("[MP] zbuf create failed\n");
      DAT_180423a68 = 1;
      return 0;
    }
  }
  if (DAT_180423a80 == (longlong *)0x0) {
    uVar4 = (int)DAT_1803eb368 - (int)DAT_1803eb360 & 0xffffffe0;
    local_38 = 0;
    local_40 = &DAT_180423a80;
    local_18 = (void *)0x0;
    local_48 = 0;
    iVar1 = (**(code **)(*param_1 + 0xd0))(param_1,uVar4,0x208,0x112);
    if ((iVar1 < 0) || (DAT_180423a80 == (longlong *)0x0)) {
LAB_180166042:
      FUN_180014410("[MP] VB create failed\n");
      DAT_180423a68 = 1;
      return 0;
    }
    local_48 = 0x2000;
    iVar1 = (**(code **)(*DAT_180423a80 + 0x58))(DAT_180423a80,0,uVar4,&local_18);
    if (iVar1 < 0) goto LAB_180166042;
    memcpy(local_18,DAT_1803eb360,(ulonglong)uVar4);
    (**(code **)(*DAT_180423a80 + 0x60))();
  }
  if (DAT_180423ab8 == (longlong *)0x0) {
    uVar4 = (int)DAT_1803e9a70 - (int)DAT_1803e9a68 & 0xfffffffc;
    local_38 = 0;
    local_40 = &DAT_180423ab8;
    local_18 = (void *)0x0;
    local_48 = 0;
    iVar1 = (**(code **)(*param_1 + 0xd8))(param_1,uVar4,0x208,0x66);
    if ((-1 < iVar1) && (DAT_180423ab8 != (longlong *)0x0)) {
      local_48 = 0x2000;
      iVar1 = (**(code **)(*DAT_180423ab8 + 0x58))(DAT_180423ab8,0,uVar4,&local_18);
      if (-1 < iVar1) {
        memcpy(local_18,DAT_1803e9a68,(ulonglong)uVar4);
        (**(code **)(*DAT_180423ab8 + 0x60))();
        goto LAB_180165f68;
      }
    }
    FUN_180014410("[MP] IB create failed\n");
    uVar2 = 0;
    DAT_180423a68 = '\x01';
  }
  else {
LAB_180165f68:
    if (DAT_180423a9c == '\0') {
      DAT_180423a9c = '\x01';
      local_18 = (void *)0x0;
      FUN_180209e10();
      if (DAT_1803ea2c8 - DAT_1803ea2c0 >> 5 != 0) {
        do {
          puVar3 = (undefined8 *)(uVar5 * 0x20 + DAT_1803ea2c0);
          if (0xf < (ulonglong)puVar3[3]) {
            puVar3 = (undefined8 *)*puVar3;
          }
          uVar2 = FUN_180165310(param_1,puVar3,0,0);
          *(undefined8 *)(DAT_1803e9ab0 + uVar5 * 8) = uVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong)(DAT_1803ea2c8 - DAT_1803ea2c0 >> 5));
      }
      FUN_180014410("[MP] textures: %zu requested\n",DAT_1803ea2c8 - DAT_1803ea2c0 >> 5);
    }
    uVar2 = 1;
  }
  return uVar2;
}


