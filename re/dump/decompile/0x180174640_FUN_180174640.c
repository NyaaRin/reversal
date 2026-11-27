// 0x180174640  FUN_180174640
// size=637 thunk=false
// signature: undefined FUN_180174640()
// status: ok


longlong * FUN_180174640(longlong *param_1,float *param_2)

{
  void *_Dst;
  longlong lVar1;
  undefined4 local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined *local_138;
  undefined4 local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  char *local_110;
  undefined4 local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  char *local_c0;
  longlong *local_b8;
  
  local_f8 = param_2[3];
  local_100 = param_2[1];
  local_f0 = (local_100 + local_f8) * DAT_180380ac0;
  local_dc = param_2[2];
  local_fc = *param_2;
  local_144 = (local_fc + local_dc) * DAT_180380ac0;
  local_158 = 0;
  local_148 = local_100 - DAT_180380f40;
  local_14c = local_dc + DAT_180381024;
  local_154 = local_fc - DAT_180381024;
  local_150 = local_148 - DAT_1803810a0;
  local_140 = local_148 - DAT_18038103c;
  local_138 = &DAT_18034262c;
  local_130 = 1;
  local_128 = local_f8 + DAT_180380f40;
  local_120 = local_128 + DAT_1803810a0;
  local_118 = local_128 + DAT_18038103c;
  local_110 = "Bottom";
  local_108 = 2;
  local_f8 = local_f8 + DAT_180381024;
  local_fc = local_fc - DAT_180380f40;
  local_100 = local_100 - DAT_180381024;
  local_104 = local_fc - DAT_1803810a0;
  local_f4 = local_fc - DAT_18038103c;
  local_e8 = &DAT_180360a40;
  local_e0 = 3;
  local_dc = local_dc + DAT_180380f40;
  local_d4 = local_dc + DAT_1803810a0;
  local_cc = local_dc + DAT_18038103c;
  local_c0 = "Right";
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_12c = local_154;
  local_124 = local_14c;
  local_11c = local_144;
  local_d8 = local_100;
  local_d0 = local_f8;
  local_c8 = local_f0;
  local_b8 = param_1;
  lVar1 = FUN_1802d8350(0xa0,local_118,local_154,local_14c,0);
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + 0xa0;
  _Dst = (void *)*param_1;
  memmove(_Dst,&local_158,0xa0);
  param_1[1] = (longlong)_Dst + 0xa0;
  return param_1;
}


