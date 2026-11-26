// 0x180036b00  FUN_180036b00
// size=452 thunk=false
// signature: undefined FUN_180036b00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180036b00(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_90;
  longlong local_88 [10];
  undefined4 local_38;
  undefined8 local_30;
  
  local_128[0] = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0xf;
  local_108 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 1;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0xf;
  local_d8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[0] = FUN_1802d8350(0x18);
  *(longlong *)local_88[0] = local_88[0];
  *(longlong *)(local_88[0] + 8) = local_88[0];
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 7;
  local_88[6] = 8;
  local_90 = 0x3f800000;
  FUN_18022c1b0(local_88 + 2,0x10,local_88[0]);
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_180036960(&DAT_1803fab40,local_128);
  FUN_18021d5c0(local_88 + 7);
  FUN_180209700(local_88 + 2);
  FUN_180209770(local_88);
  FUN_18020d5c0(&local_b0);
  FUN_18020e450(&local_d8);
  FUN_18020e450(&local_108);
  FUN_18020d0b0(&local_120);
  lVar1 = DAT_1803fcc40;
  lVar2 = DAT_1803fcc38;
  if (DAT_1803fcc38 != DAT_1803fcc40) {
    do {
      FUN_18020c270(lVar2 + 8);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar1);
    DAT_1803fcc40 = DAT_1803fcc38;
  }
  _DAT_1803faf98 = 0;
  DAT_180423750 = 0;
  DAT_180423758 = 0;
  return;
}


