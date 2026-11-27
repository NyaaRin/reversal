// 0x180299180  FUN_180299180
// size=801 thunk=false
// signature: undefined FUN_180299180()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180299180(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  float fVar5;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 uStack_124;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined2 uStack_11e;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 uStack_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined2 uStack_7e;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x38) + 0x18) != *(int *)(param_1 + 4))) {
    FUN_18029bcc0(param_1);
  }
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    FUN_18029bdd0(param_1);
  }
  if (*(int *)(param_1 + 0x78) != 0) goto LAB_180299434;
  lVar2 = *(longlong *)(param_1 + 0x2d8);
  if (lVar2 == 0) {
LAB_180299319:
    memset(&local_b8,0,0xa0);
    local_158 = local_b8;
    uStack_150 = uStack_b0;
    uStack_84 = 1;
    local_148 = local_a8;
    uStack_140 = uStack_a0;
    uStack_81 = 0;
    uStack_80 = 0;
    local_138 = local_98;
    uStack_130 = uStack_90;
    uStack_7e = 0;
    uStack_120 = 0;
    uStack_124 = 1;
    uStack_121 = 0;
    uStack_11e = 0;
    uStack_60 = CONCAT44(0x7f7fffff,(undefined4)uStack_60);
    local_118 = local_78;
    uStack_110 = uStack_70;
    local_108 = local_68;
    uStack_100 = uStack_60;
    uStack_50 = CONCAT44(0x3f800000,(undefined4)uStack_50);
    local_f8 = local_58;
    uStack_f0 = uStack_50;
    local_48 = 0x3f8000003f800000;
    local_e8 = 0x3f8000003f800000;
    uStack_122 = 1;
    local_d8 = local_38;
    uStack_d4 = uStack_34;
    uStack_d0 = uStack_30;
    uStack_cc = uStack_2c;
    fStack_11c = 13.0;
    local_c8 = local_28;
    uStack_c4 = uStack_24;
    uStack_c0 = uStack_20;
    uStack_bc = uStack_1c;
    _uStack_e0 = CONCAT44((int)((ulonglong)_uStack_40 >> 0x20),0x10);
    FUN_180268750(&local_158,0x28,"ProggyForever.ttf");
    local_168 = &local_158;
    puVar4 = &DAT_180331d20;
    local_e8 = CONCAT44(local_e8._4_4_ * _DAT_180380bb8,(undefined4)local_e8);
    local_108 = CONCAT44(local_108._4_4_ + fStack_11c * DAT_1803809d8 * DAT_180380ac0,
                         (undefined4)local_108);
  }
  else {
    fVar5 = *(float *)(lVar2 + 0xc78);
    if (*(float *)(lVar2 + 0xc78) <= 0.0) {
      fVar5 = DAT_180380fdc;
    }
    if (DAT_180380fe4 <= fVar5 * *(float *)(lVar2 + 0xc7c) * *(float *)(lVar2 + 0xc80))
    goto LAB_180299319;
    memset(&local_158,0,0xa0);
    local_b8 = local_158;
    uStack_b0 = uStack_150;
    uStack_124 = 1;
    local_a8 = local_148;
    uStack_a0 = uStack_140;
    uStack_121 = 0;
    uStack_120 = 0;
    local_98 = local_138;
    uStack_90 = uStack_130;
    uStack_11e = 0;
    uStack_80 = 0;
    uStack_84 = 1;
    uStack_81 = 0;
    uStack_7e = 0;
    uStack_100 = CONCAT44(0x7f7fffff,(undefined4)uStack_100);
    local_78 = local_118;
    uStack_70 = uStack_110;
    local_68 = local_108;
    uStack_60 = uStack_100;
    uStack_f0 = CONCAT44(0x3f800000,(undefined4)uStack_f0);
    local_58 = local_f8;
    uStack_50 = uStack_f0;
    local_e8 = 0x3f8000003f800000;
    local_48 = 0x3f8000003f800000;
    uStack_82 = 1;
    local_38 = local_d8;
    uStack_34 = uStack_d4;
    uStack_30 = uStack_d0;
    uStack_2c = uStack_cc;
    fStack_7c = 13.0;
    local_28 = local_c8;
    uStack_24 = uStack_c4;
    uStack_20 = uStack_c0;
    uStack_1c = uStack_bc;
    _uStack_40 = CONCAT44((int)((ulonglong)_uStack_e0 >> 0x20),0x10);
    FUN_180268750(&local_b8,0x28,"ProggyClean.ttf");
    puVar4 = &DAT_180335610;
    uStack_7e = 0x85;
    local_168 = &local_b8;
    local_68 = CONCAT44(local_68._4_4_ + fStack_7c / DAT_180380fdc,(undefined4)local_68);
  }
  local_160 = 0;
  FUN_180298cb0(param_1,puVar4);
LAB_180299434:
  plVar3 = *(longlong **)(param_1 + 0x2a8);
  plVar1 = plVar3 + *(int *)(param_1 + 0x2a0);
  do {
    if (plVar3 == plVar1) {
LAB_180299472:
      if (*(char *)(param_1 + 0x51) == '\0') {
        FUN_1802996c0(param_1);
      }
      *(undefined1 *)(param_1 + 0x52) = 1;
      return;
    }
    if (*(longlong *)(*plVar3 + 0x68) != 0) {
      *(byte *)(param_1 + 0x51) = (byte)(*(uint *)(*(longlong *)(*plVar3 + 0x68) + 0x2c) >> 4) & 1;
      goto LAB_180299472;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}


