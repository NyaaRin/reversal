// 0x180298b30  FUN_180298b30
// size=374 thunk=false
// signature: undefined FUN_180298b30()
// status: ok


void FUN_180298b30(undefined8 param_1,undefined8 param_2,undefined4 param_3,float param_4,
                  undefined4 *param_5,longlong param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined1 uStack_e4;
  undefined2 uStack_e3;
  undefined1 uStack_e1;
  undefined1 uStack_e0;
  byte bStack_df;
  undefined2 uStack_de;
  float fStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  if (param_5 == (undefined4 *)0x0) {
    memset(&local_118,0,0xa0);
    uVar1 = (uint)CONCAT21(uStack_e3,1);
    iVar2 = (uint)bStack_df << 8;
    uStack_bc = 0x7f7fffff;
    uStack_ac = 0x3f800000;
    local_a8 = 0x3f800000;
    uStack_a4 = 0x3f800000;
  }
  else {
    local_118 = *param_5;
    uStack_114 = param_5[1];
    uStack_110 = param_5[2];
    uStack_10c = param_5[3];
    local_108 = param_5[4];
    uStack_104 = param_5[5];
    uStack_100 = param_5[6];
    uStack_fc = param_5[7];
    local_f8 = param_5[8];
    uStack_f4 = param_5[9];
    uVar1 = param_5[0xd];
    iVar2 = param_5[0xe];
    fStack_dc = (float)param_5[0xf];
    local_d8._0_4_ = param_5[0x10];
    local_d8._4_4_ = param_5[0x11];
    uStack_d0 = param_5[0x12];
    uStack_cc = param_5[0x13];
    local_c8 = param_5[0x14];
    uStack_c4 = param_5[0x15];
    uStack_c0 = param_5[0x16];
    uStack_bc = param_5[0x17];
    local_b8 = param_5[0x18];
    uStack_b4 = param_5[0x19];
    uStack_b0 = param_5[0x1a];
    uStack_ac = param_5[0x1b];
    local_a8 = param_5[0x1c];
    uStack_a4 = param_5[0x1d];
    uStack_a0 = param_5[0x1e];
    uStack_9c = param_5[0x1f];
    local_98 = param_5[0x20];
    uStack_94 = param_5[0x21];
    uStack_90 = param_5[0x22];
    uStack_8c = param_5[0x23];
    local_88 = param_5[0x24];
    uStack_84 = param_5[0x25];
    uStack_80 = param_5[0x26];
    uStack_7c = param_5[0x27];
  }
  uStack_e4 = (undefined1)uVar1;
  uStack_e3 = (undefined2)(uVar1 >> 8);
  uStack_e1 = (undefined1)(uVar1 >> 0x18);
  uStack_e0 = (undefined1)iVar2;
  bStack_df = (byte)((uint)iVar2 >> 8);
  uStack_de = (undefined2)((uint)iVar2 >> 0x10);
  if (0.0 < param_4) {
    fStack_dc = param_4;
  }
  if (param_6 != 0) {
    local_d8 = param_6;
  }
  uStack_f0 = param_2;
  local_e8 = param_3;
  FUN_1802983a0(param_1,&local_118);
  return;
}


