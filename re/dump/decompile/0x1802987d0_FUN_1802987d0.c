// 0x1802987d0  FUN_1802987d0
// size=859 thunk=false
// signature: undefined FUN_1802987d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802987d0(undefined8 param_1,char *param_2,float param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long _Offset;
  int iVar3;
  long lVar4;
  FILE *_File;
  void *_DstBuf;
  size_t sVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  long local_1b8;
  undefined1 uStack_1b4;
  undefined2 uStack_1b3;
  undefined1 uStack_1b1;
  undefined1 uStack_1b0;
  byte bStack_1af;
  undefined2 uStack_1ae;
  float fStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
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
  undefined4 local_118;
  uint uStack_114;
  int iStack_110;
  float fStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
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
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  _File = (FILE *)FUN_180268a40(param_2,&DAT_1803589f0);
  if (_File != (FILE *)0x0) {
    _Offset = ftell(_File);
    if ((_Offset != -1) && (iVar3 = fseek(_File,0,2), iVar3 == 0)) {
      lVar4 = ftell(_File);
      sVar7 = (size_t)lVar4;
      if ((lVar4 != -1) &&
         (((iVar3 = fseek(_File,_Offset,0), iVar3 == 0 && (sVar7 != 0xffffffffffffffff)) &&
          (_DstBuf = (void *)FUN_18026f580(sVar7), _DstBuf != (void *)0x0)))) {
        sVar5 = fread(_DstBuf,1,sVar7,_File);
        if (sVar5 == sVar7) {
          fclose(_File);
          if (param_4 == (undefined4 *)0x0) {
            memset(&local_1e8,0,0xa0);
            uStack_1b4 = 1;
            uStack_1ae = 0;
            uStack_1b1 = 0;
            uStack_1b0 = 0;
            uStack_114 = (uint)CONCAT21(uStack_1b3,1);
            iStack_110 = (uint)bStack_1af << 8;
            uStack_174 = 0x3f800000;
            uStack_18c = 0x7f7fffff;
            uStack_ec = 0x7f7fffff;
            uStack_17c = 0x3f800000;
            uStack_dc = 0x3f800000;
            local_178 = 0x3f800000;
            local_d8 = 0x3f800000;
            uStack_d4 = 0x3f800000;
          }
          else {
            local_1e8 = *param_4;
            uStack_1e4 = param_4[1];
            uStack_1e0 = param_4[2];
            uStack_1dc = param_4[3];
            local_1d8 = param_4[4];
            uStack_1d4 = param_4[5];
            uStack_1d0 = param_4[6];
            uStack_1cc = param_4[7];
            local_1c8 = param_4[8];
            uStack_1c4 = param_4[9];
            uStack_1c0._0_4_ = param_4[10];
            uStack_1c0._4_4_ = param_4[0xb];
            local_1b8 = param_4[0xc];
            uStack_114 = param_4[0xd];
            iStack_110 = param_4[0xe];
            fStack_1ac = (float)param_4[0xf];
            local_1a8._0_4_ = param_4[0x10];
            local_1a8._4_4_ = param_4[0x11];
            uStack_1a0 = param_4[0x12];
            uStack_19c = param_4[0x13];
            local_198 = param_4[0x14];
            uStack_194 = param_4[0x15];
            uStack_190 = param_4[0x16];
            uStack_ec = param_4[0x17];
            local_188 = param_4[0x18];
            uStack_184 = param_4[0x19];
            uStack_180 = param_4[0x1a];
            uStack_dc = param_4[0x1b];
            local_d8 = param_4[0x1c];
            uStack_d4 = param_4[0x1d];
            uStack_170 = param_4[0x1e];
            uStack_16c = param_4[0x1f];
            local_168 = param_4[0x20];
            uStack_164 = param_4[0x21];
            uStack_160 = param_4[0x22];
            uStack_15c = param_4[0x23];
            local_158 = param_4[0x24];
            uStack_154 = param_4[0x25];
            uStack_150 = param_4[0x26];
            uStack_14c = param_4[0x27];
          }
          local_148 = local_1e8;
          uStack_144 = uStack_1e4;
          uStack_140 = uStack_1e0;
          uStack_13c = uStack_1dc;
          local_138 = local_1d8;
          uStack_134 = uStack_1d4;
          uStack_130 = uStack_1d0;
          uStack_12c = uStack_1cc;
          local_128 = local_1c8;
          uStack_124 = uStack_1c4;
          uStack_120 = (undefined4)uStack_1c0;
          uStack_11c = uStack_1c0._4_4_;
          local_118 = local_1b8;
          fStack_10c = fStack_1ac;
          local_108 = (undefined4)local_1a8;
          uStack_104 = local_1a8._4_4_;
          uStack_100 = uStack_1a0;
          uStack_fc = uStack_19c;
          local_f8 = local_198;
          uStack_f4 = uStack_194;
          uStack_f0 = uStack_190;
          local_e8 = local_188;
          uStack_e4 = uStack_184;
          uStack_e0 = uStack_180;
          uStack_d0 = uStack_170;
          uStack_cc = uStack_16c;
          local_c8 = local_168;
          uStack_c4 = uStack_164;
          uStack_c0 = uStack_160;
          uStack_bc = uStack_15c;
          local_b8 = local_158;
          uStack_b4 = uStack_154;
          uStack_b0 = uStack_150;
          uStack_ac = uStack_14c;
          if ((char)local_1e8 == '\0') {
            sVar7 = strlen(param_2);
            pcVar2 = param_2 + sVar7;
            while (param_2 < pcVar2) {
              pcVar1 = pcVar2 + -1;
              pcVar2 = pcVar2 + -1;
              if ((*pcVar1 == '/') || (*pcVar1 == '\\')) break;
            }
            FUN_180268750(&local_148,0x28,&DAT_1803431ac);
          }
          uStack_1b4 = (undefined1)uStack_114;
          uStack_1b3 = (undefined2)(uStack_114 >> 8);
          uStack_1b1 = (undefined1)(uStack_114 >> 0x18);
          uStack_1b0 = (undefined1)iStack_110;
          bStack_1af = (byte)((uint)iStack_110 >> 8);
          uStack_1ae = (undefined2)((uint)iStack_110 >> 0x10);
          fStack_1ac = fStack_10c;
          if (0.0 < param_3) {
            fStack_1ac = param_3;
          }
          local_1a8 = &DAT_18033b380;
          local_1e8 = local_148;
          uStack_1e4 = uStack_144;
          uStack_1e0 = uStack_140;
          uStack_1dc = uStack_13c;
          local_1d8 = local_138;
          uStack_1d4 = uStack_134;
          uStack_1d0 = uStack_130;
          uStack_1cc = uStack_12c;
          local_1c8 = local_128;
          uStack_1c4 = uStack_124;
          uStack_1c0 = _DstBuf;
          local_1b8 = lVar4;
          uStack_1a0 = uStack_100;
          uStack_19c = uStack_fc;
          local_198 = local_f8;
          uStack_194 = uStack_f4;
          uStack_190 = uStack_f0;
          uStack_18c = uStack_ec;
          local_188 = local_e8;
          uStack_184 = uStack_e4;
          uStack_180 = uStack_e0;
          uStack_17c = uStack_dc;
          local_178 = local_d8;
          uStack_174 = uStack_d4;
          uStack_170 = uStack_d0;
          uStack_16c = uStack_cc;
          local_168 = local_c8;
          uStack_164 = uStack_c4;
          uStack_160 = uStack_c0;
          uStack_15c = uStack_bc;
          local_158 = local_b8;
          uStack_154 = uStack_b4;
          uStack_150 = uStack_b0;
          uStack_14c = uStack_ac;
          uVar6 = FUN_1802983a0(param_1,&local_1e8);
          return uVar6;
        }
        fclose(_File);
        FUN_18026f680(_DstBuf);
        goto LAB_180298ada;
      }
    }
    fclose(_File);
  }
LAB_180298ada:
  if ((param_4 == (undefined4 *)0x0) || ((*(byte *)(param_4 + 0x1e) & 2) == 0)) {
    FUN_180289170("While loading \'%s\'\n",param_2);
    FUN_18027e9c0("Could not load font file!");
  }
  return 0;
}


