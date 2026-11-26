// 0x180036cd0  FUN_180036cd0
// size=676 thunk=false
// signature: undefined FUN_180036cd0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180036cd0(void)

{
  double dVar1;
  undefined8 *puVar2;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 *local_140;
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a0 [2];
  longlong local_98 [10];
  undefined4 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 *local_30;
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  local_138[0] = 0;
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0xf;
  local_118 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 1;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0xf;
  local_e8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_28.s.LowPart = 0;
  local_a0[0] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[0] = FUN_1802d8350(0x18);
  *(longlong *)local_98[0] = local_98[0];
  *(longlong *)(local_98[0] + 8) = local_98[0];
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[5] = 7;
  local_98[6] = 8;
  local_a0[0] = 0x3f800000;
  FUN_18022c1b0(local_98 + 2,0x10,local_98[0]);
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_48 = 0;
  dVar1 = 0.0;
  local_40 = 0;
  FUN_180036960(&DAT_1803fab40,local_138);
  FUN_18021d5c0(local_98 + 7);
  local_38 = local_a0;
  FUN_180209700(local_98 + 2);
  FUN_180209770(local_98);
  local_30 = &local_e8;
  FUN_18020d5c0(&local_c0);
  FUN_18020e450(&local_e8);
  local_140 = &local_118;
  FUN_18020e450(&local_118);
  FUN_18020d0b0(&local_130);
  puVar2 = DAT_1803fab50;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0xf;
  local_168 = 0;
  local_148 = 0;
  if (DAT_1803fab50 == DAT_1803fab58) {
    FUN_1802285d0(&DAT_1803fab48,DAT_1803fab50,&local_168);
  }
  else {
    local_140 = DAT_1803fab50;
    *DAT_1803fab50 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0xf;
    local_158 = 0;
    local_150 = 0xf;
    local_168 = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    DAT_1803fab50 = DAT_1803fab50 + 5;
  }
  FUN_18020e450(&local_168);
  DAT_1803fab40 = 1;
  if (DAT_1803fe670 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1803fe670);
  }
  QueryPerformanceCounter(&local_28);
  if (DAT_1803fe670 != 0) {
    dVar1 = ((double)CONCAT44(local_28.s.HighPart,local_28.s.LowPart) * DAT_180380ec0) /
            (double)DAT_1803fe670;
  }
  DAT_180423750 = 1;
  DAT_180423748 = 0;
  _DAT_1803fac38 = dVar1;
  FUN_180014410("[TRAMP] _G scan started\n");
  return;
}


