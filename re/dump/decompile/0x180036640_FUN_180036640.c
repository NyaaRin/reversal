// 0x180036640  FUN_180036640
// size=794 thunk=false
// signature: undefined FUN_180036640()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180036640(void)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined4 local_178 [2];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined4 local_e0 [2];
  longlong local_d8 [10];
  undefined4 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_1a8;
  FUN_180210fb0(DAT_1803fac18,DAT_1803fac20,DAT_1803fac20 - DAT_1803fac18 >> 6,local_188);
  lVar7 = DAT_1803fac20;
  lVar6 = DAT_1803fac18;
  if (DAT_1803fe670 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1803fe670);
  }
  QueryPerformanceCounter(&local_60);
  dVar2 = 0.0;
  if (DAT_1803fe670 != 0) {
    dVar2 = ((double)local_60.QuadPart * DAT_180380ec0) / (double)DAT_1803fe670;
  }
  dVar2 = dVar2 - _DAT_1803fac38;
  local_60.QuadPart = (LONGLONG)&DAT_1803e91a0;
  iVar8 = _Mtx_lock(&DAT_1803e91a0);
  if (iVar8 == 0) {
    if (DAT_1803e91ec == 0x7fffffff) {
      DAT_1803e91ec = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    uVar5 = DAT_1803e9b30;
    uVar4 = DAT_1803e9b28;
    uVar3 = DAT_1803e9b20;
    DAT_1803e9b20 = DAT_1803fac18;
    DAT_1803fac18 = uVar3;
    DAT_1803e9b28 = DAT_1803fac20;
    DAT_1803fac20 = uVar4;
    DAT_1803e9b30 = DAT_1803fac28;
    DAT_1803fac28 = uVar5;
    _Mtx_unlock(&DAT_1803e91a0);
    DAT_180423744 = DAT_1803fac30;
    DAT_180423750 = 0;
    DAT_18042374c = (int)dVar2;
    FUN_180014410("[TRAMP] _G scan done: %d candidate(s), %d node(s), %dms\n",
                  lVar7 - lVar6 >> 6 & 0xffffffff,DAT_1803fac30,(int)dVar2);
    local_178[0] = 0;
    local_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    uStack_150 = 0;
    local_148 = 0;
    local_140 = 0xf;
    local_158 = 0;
    local_138 = 0;
    local_130 = 0;
    local_12c = 1;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0xf;
    local_128 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_60.QuadPart = local_60.QuadPart & 0xffffffff00000000;
    local_e0[0] = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_d8[0] = FUN_1802d8350(0x18);
    *(longlong *)local_d8[0] = local_d8[0];
    *(longlong *)(local_d8[0] + 8) = local_d8[0];
    local_d8[2] = 0;
    local_d8[3] = 0;
    local_d8[4] = 0;
    local_d8[5] = 7;
    local_d8[6] = 8;
    local_e0[0] = 0x3f800000;
    FUN_18022c1b0(local_d8 + 2,0x10,local_d8[0]);
    local_d8[7] = 0;
    local_d8[8] = 0;
    local_d8[9] = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_180036960(&DAT_1803fab40,local_178);
    FUN_18021d5c0(local_d8 + 7);
    local_78 = local_e0;
    FUN_180209700(local_d8 + 2);
    FUN_180209770(local_d8);
    local_70 = &local_128;
    FUN_18020d5c0(&local_100);
    FUN_18020e450(&local_128);
    local_68 = &local_158;
    FUN_18020e450(&local_158);
    FUN_18020d0b0(&local_170);
    return;
  }
  std::_Throw_Cpp_error(5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


