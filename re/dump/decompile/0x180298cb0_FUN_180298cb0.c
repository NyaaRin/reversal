// 0x180298cb0  FUN_180298cb0
// size=448 thunk=false
// signature: undefined FUN_180298cb0()
// status: ok


void FUN_180298cb0(undefined8 param_1,longlong param_2,undefined8 param_3,float param_4,
                  undefined4 *param_5,longlong param_6)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  int local_188;
  undefined1 uStack_184;
  ushort uStack_183;
  undefined1 uStack_181;
  undefined1 uStack_180;
  byte bStack_17f;
  undefined2 uStack_17e;
  float fStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_e8;
  undefined1 uStack_e4;
  undefined3 uStack_e3;
  int iStack_e0;
  float fStack_dc;
  
  iVar2 = (uint)*(byte *)(param_2 + 8) * 0x1000000 + (uint)*(byte *)(param_2 + 9) * 0x10000 +
          (uint)*(byte *)(param_2 + 10) * 0x100 + (uint)*(byte *)(param_2 + 0xb);
  uVar1 = FUN_18026f580(iVar2);
  FUN_1802a04e0(uVar1);
  if (param_5 == (undefined4 *)0x0) {
    memset(&local_1b8,0,0xa0);
    iVar3 = (uint)uStack_183 << 8;
    iStack_e0 = (uint)bStack_17f << 8;
    uStack_15c = 0x7f7fffff;
    uStack_14c = 0x3f800000;
    local_148 = 0x3f800000;
    uStack_144 = 0x3f800000;
    fStack_dc = fStack_17c;
  }
  else {
    local_1b8 = *param_5;
    uStack_1b4 = param_5[1];
    uStack_1b0 = param_5[2];
    uStack_1ac = param_5[3];
    local_1a8 = param_5[4];
    uStack_1a4 = param_5[5];
    uStack_1a0 = param_5[6];
    uStack_19c = param_5[7];
    local_198 = param_5[8];
    uStack_194 = param_5[9];
    local_188 = param_5[0xc];
    iVar3 = param_5[0xd];
    iStack_e0 = param_5[0xe];
    local_178._0_4_ = param_5[0x10];
    local_178._4_4_ = param_5[0x11];
    uStack_170 = param_5[0x12];
    uStack_16c = param_5[0x13];
    local_168 = param_5[0x14];
    uStack_164 = param_5[0x15];
    uStack_160 = param_5[0x16];
    uStack_15c = param_5[0x17];
    local_158 = param_5[0x18];
    uStack_154 = param_5[0x19];
    uStack_150 = param_5[0x1a];
    uStack_14c = param_5[0x1b];
    local_148 = param_5[0x1c];
    uStack_144 = param_5[0x1d];
    uStack_140 = param_5[0x1e];
    uStack_13c = param_5[0x1f];
    local_138 = param_5[0x20];
    uStack_134 = param_5[0x21];
    uStack_130 = param_5[0x22];
    uStack_12c = param_5[0x23];
    local_128 = param_5[0x24];
    uStack_124 = param_5[0x25];
    uStack_120 = param_5[0x26];
    uStack_11c = param_5[0x27];
    fStack_dc = (float)param_5[0xf];
  }
  _uStack_e4 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  uStack_184 = 1;
  uStack_183 = (ushort)((uint)iVar3 >> 8);
  uStack_181 = (undefined1)((uint)iVar3 >> 0x18);
  uStack_180 = (undefined1)iStack_e0;
  bStack_17f = (byte)((uint)iStack_e0 >> 8);
  uStack_17e = (undefined2)((uint)iStack_e0 >> 0x10);
  fStack_17c = fStack_dc;
  if (0.0 < param_4) {
    fStack_17c = param_4;
  }
  if (param_6 != 0) {
    local_178 = param_6;
  }
  uStack_190 = uVar1;
  local_e8 = local_188;
  local_188 = iVar2;
  FUN_1802983a0(param_1,&local_1b8);
  return;
}


