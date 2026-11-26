// 0x1802d54d0  FUN_1802d54d0
// size=921 thunk=false
// signature: undefined FUN_1802d54d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [32]
FUN_1802d54d0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             ulonglong param_4)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined1 (*pauVar12) [32];
  longlong lVar13;
  undefined1 (*pauVar14) [32];
  uint uVar15;
  undefined1 uVar16;
  undefined1 auStack_1b8 [56];
  undefined1 (*local_180) [32];
  ulonglong local_178;
  undefined1 (*local_170) [32];
  undefined1 (*local_168) [32];
  undefined1 (*local_160) [32];
  undefined1 (*local_158) [32];
  undefined1 local_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined1 uStack_136;
  undefined1 uStack_135;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined1 local_120 [32];
  undefined1 (**local_100 [4]) [32];
  undefined1 local_e0 [32];
  undefined1 (*local_c0) [32];
  ulonglong local_b8;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_100[0] = &local_180;
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  lVar13 = (longlong)param_2 - (longlong)param_1;
  local_178 = lVar13;
  local_170 = param_1;
  local_168 = param_2;
  local_160 = param_3;
  if (param_4 < 0x21) {
    lVar13 = -param_4;
    uVar3 = *(undefined8 *)*(undefined1 (*) [32])(&DAT_18030fa30 + lVar13);
    uVar4 = *(undefined8 *)(&UNK_18030fa38 + lVar13);
    uVar5 = *(undefined8 *)(&UNK_18030fa40 + lVar13);
    uVar6 = *(undefined8 *)(&UNK_18030fa48 + lVar13);
    local_140 = (undefined1)uVar3;
    uStack_13f = (undefined1)((ulonglong)uVar3 >> 8);
    uStack_13e = (undefined1)((ulonglong)uVar3 >> 0x10);
    uStack_13d = (undefined1)((ulonglong)uVar3 >> 0x18);
    uStack_13c = (undefined1)((ulonglong)uVar3 >> 0x20);
    uStack_13b = (undefined1)((ulonglong)uVar3 >> 0x28);
    uStack_13a = (undefined1)((ulonglong)uVar3 >> 0x30);
    uStack_139 = (undefined1)((ulonglong)uVar3 >> 0x38);
    uStack_138 = (undefined1)uVar4;
    uStack_137 = (undefined1)((ulonglong)uVar4 >> 8);
    uStack_136 = (undefined1)((ulonglong)uVar4 >> 0x10);
    uStack_135 = (undefined1)((ulonglong)uVar4 >> 0x18);
    uStack_134 = (undefined1)((ulonglong)uVar4 >> 0x20);
    uStack_133 = (undefined1)((ulonglong)uVar4 >> 0x28);
    uStack_132 = (undefined1)((ulonglong)uVar4 >> 0x30);
    uStack_131 = (undefined1)((ulonglong)uVar4 >> 0x38);
    uStack_130 = (undefined1)uVar5;
    uStack_12f = (undefined1)((ulonglong)uVar5 >> 8);
    uStack_12e = (undefined1)((ulonglong)uVar5 >> 0x10);
    uStack_12d = (undefined1)((ulonglong)uVar5 >> 0x18);
    uStack_12c = (undefined1)((ulonglong)uVar5 >> 0x20);
    uStack_12b = (undefined1)((ulonglong)uVar5 >> 0x28);
    uStack_12a = (undefined1)((ulonglong)uVar5 >> 0x30);
    uStack_129 = (undefined1)((ulonglong)uVar5 >> 0x38);
    uStack_128 = (undefined1)uVar6;
    uStack_127 = (undefined1)((ulonglong)uVar6 >> 8);
    uStack_126 = (undefined1)((ulonglong)uVar6 >> 0x10);
    uStack_125 = (undefined1)((ulonglong)uVar6 >> 0x18);
    uStack_124 = (undefined1)((ulonglong)uVar6 >> 0x20);
    uStack_123 = (undefined1)((ulonglong)uVar6 >> 0x28);
    uStack_122 = (undefined1)((ulonglong)uVar6 >> 0x30);
    uStack_121 = (undefined1)((ulonglong)uVar6 >> 0x38);
    memcpy(local_a0,param_3,param_4);
    uVar16 = local_a0[0];
    local_120[1] = uVar16;
    local_120[0] = uVar16;
    local_120[2] = uVar16;
    local_120[3] = uVar16;
    local_120[4] = uVar16;
    local_120[5] = uVar16;
    local_120[6] = uVar16;
    local_120[7] = uVar16;
    local_120[8] = uVar16;
    local_120[9] = uVar16;
    local_120[10] = uVar16;
    local_120[0xb] = uVar16;
    local_120[0xc] = uVar16;
    local_120[0xd] = uVar16;
    local_120[0xe] = uVar16;
    local_120[0xf] = uVar16;
    local_120[0x10] = uVar16;
    local_120[0x11] = uVar16;
    local_120[0x12] = uVar16;
    local_120[0x13] = uVar16;
    local_120[0x14] = uVar16;
    local_120[0x15] = uVar16;
    local_120[0x16] = uVar16;
    local_120[0x17] = uVar16;
    local_120[0x18] = uVar16;
    local_120[0x19] = uVar16;
    local_120[0x1a] = uVar16;
    local_120[0x1b] = uVar16;
    local_120[0x1c] = uVar16;
    local_120[0x1d] = uVar16;
    local_120[0x1e] = uVar16;
    local_120[0x1f] = uVar16;
    auVar2 = vpcmpeqb_avx2(local_120,local_168[-1]);
    pauVar12 = local_168 + -1;
    uVar15 = ((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
             ) & (1 << (0x21U - (char)param_4 & 0x1f)) - 1U;
    if (uVar15 == 0) {
      auVar1[1] = uStack_13f;
      auVar1[0] = local_140;
      auVar1[2] = uStack_13e;
      auVar1[3] = uStack_13d;
      auVar1[4] = uStack_13c;
      auVar1[5] = uStack_13b;
      auVar1[6] = uStack_13a;
      auVar1[7] = uStack_139;
      auVar1[8] = uStack_138;
      auVar1[9] = uStack_137;
      auVar1[10] = uStack_136;
      auVar1[0xb] = uStack_135;
      auVar1[0xc] = uStack_134;
      auVar1[0xd] = uStack_133;
      auVar1[0xe] = uStack_132;
      auVar1[0xf] = uStack_131;
      auVar1[0x10] = uStack_130;
      auVar1[0x11] = uStack_12f;
      auVar1[0x12] = uStack_12e;
      auVar1[0x13] = uStack_12d;
      auVar1[0x14] = uStack_12c;
      auVar1[0x15] = uStack_12b;
      auVar1[0x16] = uStack_12a;
      auVar1[0x17] = uStack_129;
      auVar1[0x18] = uStack_128;
      auVar1[0x19] = uStack_127;
      auVar1[0x1a] = uStack_126;
      auVar1[0x1b] = uStack_125;
      auVar1[0x1c] = uStack_124;
      auVar1[0x1d] = uStack_123;
      auVar1[0x1e] = uStack_122;
      auVar1[0x1f] = uStack_121;
    }
    else {
      do {
        pauVar14 = (undefined1 (*) [32])(*pauVar12 + (0x1fU - LZCOUNT(uVar15)));
        memcpy(local_80,pauVar14,(longlong)local_168 - (longlong)pauVar14);
        auVar1 = *(undefined1 (*) [32])(&DAT_18030fa30 + lVar13);
        if ((auVar1 & (local_a0 ^ local_80)) == (undefined1  [32])0x0) {
          return pauVar14;
        }
        uVar15 = uVar15 ^ 1 << ((byte)(0x1fU - LZCOUNT(uVar15)) & 0x1f);
        param_1 = local_170;
      } while (uVar15 != 0);
    }
    uVar15 = (uint)local_178 & 0x1f;
    while (pauVar12 != (undefined1 (*) [32])(*param_1 + uVar15)) {
      auVar2 = vpcmpeqb_avx2(local_120,pauVar12[-1]);
      pauVar12 = pauVar12 + -1;
      for (uVar10 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
                    (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
                    (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
                    (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
                    (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
                    (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
                    (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
                    (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
                    (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe |
                    (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
                    (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
                    (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
                    (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
                    (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 |
                    (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
                    (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                    (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                    (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                    (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
                    (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f; uVar10 != 0;
          uVar10 = uVar10 ^ 1 << ((byte)(0x1fU - LZCOUNT(uVar10)) & 0x1f)) {
        if ((auVar1 & (local_a0 ^ *(undefined1 (*) [32])(*pauVar12 + (0x1fU - LZCOUNT(uVar10))))) ==
            (undefined1  [32])0x0) {
          return (undefined1 (*) [32])(*pauVar12 + (0x1fU - LZCOUNT(uVar10)));
        }
      }
    }
    if ((ulonglong)uVar15 != 0) {
      auVar2 = vpcmpeqb_avx2(*param_1,local_120);
      uVar10 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
      if ((uVar10 != 0) && (uVar10 = (1 << (sbyte)uVar15) - 1U & uVar10, uVar10 != 0)) {
        auVar7[1] = uStack_13f;
        auVar7[0] = local_140;
        auVar7[2] = uStack_13e;
        auVar7[3] = uStack_13d;
        auVar7[4] = uStack_13c;
        auVar7[5] = uStack_13b;
        auVar7[6] = uStack_13a;
        auVar7[7] = uStack_139;
        auVar7[8] = uStack_138;
        auVar7[9] = uStack_137;
        auVar7[10] = uStack_136;
        auVar7[0xb] = uStack_135;
        auVar7[0xc] = uStack_134;
        auVar7[0xd] = uStack_133;
        auVar7[0xe] = uStack_132;
        auVar7[0xf] = uStack_131;
        auVar7[0x10] = uStack_130;
        auVar7[0x11] = uStack_12f;
        auVar7[0x12] = uStack_12e;
        auVar7[0x13] = uStack_12d;
        auVar7[0x14] = uStack_12c;
        auVar7[0x15] = uStack_12b;
        auVar7[0x16] = uStack_12a;
        auVar7[0x17] = uStack_129;
        auVar7[0x18] = uStack_128;
        auVar7[0x19] = uStack_127;
        auVar7[0x1a] = uStack_126;
        auVar7[0x1b] = uStack_125;
        auVar7[0x1c] = uStack_124;
        auVar7[0x1d] = uStack_123;
        auVar7[0x1e] = uStack_122;
        auVar7[0x1f] = uStack_121;
        do {
          uVar15 = 0x1f - LZCOUNT(uVar10);
          if ((auVar7 & (local_a0 ^ *(undefined1 (*) [32])(*param_1 + uVar15))) ==
              (undefined1  [32])0x0) {
            return (undefined1 (*) [32])(*param_1 + uVar15);
          }
          uVar10 = uVar10 ^ 1 << ((byte)uVar15 & 0x1f);
        } while (uVar10 != 0);
      }
    }
  }
  else {
    local_e0 = *param_3;
    local_140 = local_e0[0];
    param_2 = (undefined1 (*) [32])((longlong)param_2 - param_4);
    param_3 = param_3 + 1;
    uStack_13f = local_140;
    uStack_13e = local_140;
    uStack_13d = local_140;
    uStack_13c = local_140;
    uStack_13b = local_140;
    uStack_13a = local_140;
    uStack_139 = local_140;
    uStack_138 = local_140;
    uStack_137 = local_140;
    uStack_136 = local_140;
    uStack_135 = local_140;
    uStack_134 = local_140;
    uStack_133 = local_140;
    uStack_132 = local_140;
    uStack_131 = local_140;
    uStack_130 = local_140;
    uStack_12f = local_140;
    uStack_12e = local_140;
    uStack_12d = local_140;
    uStack_12c = local_140;
    uStack_12b = local_140;
    uStack_12a = local_140;
    uStack_129 = local_140;
    uStack_128 = local_140;
    uStack_127 = local_140;
    uStack_126 = local_140;
    uStack_125 = local_140;
    uStack_124 = local_140;
    uStack_123 = local_140;
    uStack_122 = local_140;
    uStack_121 = local_140;
    local_c0 = param_3;
    local_b8 = param_4;
    if ((local_e0 == *param_2) &&
       (local_180 = param_2, iVar11 = memcmp(param_2 + 1,param_3,param_4 - 0x20), iVar11 == 0)) {
      return param_2;
    }
    local_178 = (ulonglong)((int)lVar13 - (int)param_4 & 0x1f);
    pauVar12 = (undefined1 (*) [32])(*local_170 + local_178);
    pauVar14 = local_160;
    local_158 = pauVar12;
    if (param_2 != pauVar12) {
      do {
        param_2 = param_2 + -1;
        auVar2[1] = uStack_13f;
        auVar2[0] = local_140;
        auVar2[2] = uStack_13e;
        auVar2[3] = uStack_13d;
        auVar2[4] = uStack_13c;
        auVar2[5] = uStack_13b;
        auVar2[6] = uStack_13a;
        auVar2[7] = uStack_139;
        auVar2[8] = uStack_138;
        auVar2[9] = uStack_137;
        auVar2[10] = uStack_136;
        auVar2[0xb] = uStack_135;
        auVar2[0xc] = uStack_134;
        auVar2[0xd] = uStack_133;
        auVar2[0xe] = uStack_132;
        auVar2[0xf] = uStack_131;
        auVar2[0x10] = uStack_130;
        auVar2[0x11] = uStack_12f;
        auVar2[0x12] = uStack_12e;
        auVar2[0x13] = uStack_12d;
        auVar2[0x14] = uStack_12c;
        auVar2[0x15] = uStack_12b;
        auVar2[0x16] = uStack_12a;
        auVar2[0x17] = uStack_129;
        auVar2[0x18] = uStack_128;
        auVar2[0x19] = uStack_127;
        auVar2[0x1a] = uStack_126;
        auVar2[0x1b] = uStack_125;
        auVar2[0x1c] = uStack_124;
        auVar2[0x1d] = uStack_123;
        auVar2[0x1e] = uStack_122;
        auVar2[0x1f] = uStack_121;
        auVar2 = vpcmpeqb_avx2(*param_2,auVar2);
        local_180 = param_2;
        for (uVar15 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
                      (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
                      (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
                      (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
                      (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
                      (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 |
                      (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
                      (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 |
                      (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
                      (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
                      (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
                      (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
                      (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
                      (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe |
                      (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
                      (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
                      (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
                      (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
                      (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
                      (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
                      (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
                      (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 |
                      (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
                      (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
                      (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                      (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                      (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                      (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                      (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                      (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
                      (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f; uVar15 != 0;
            uVar15 = uVar15 ^ 1 << ((byte)uVar10 & 0x1f)) {
          uVar10 = 0x1f - LZCOUNT(uVar15);
          if ((*(undefined1 (*) [32])(*param_2 + uVar10) == *pauVar14) &&
             (iVar11 = memcmp((undefined1 (*) [32])(*param_2 + uVar10) + 1,param_3,param_4 - 0x20),
             pauVar14 = local_160, iVar11 == 0)) {
            return (undefined1 (*) [32])(*param_2 + uVar10);
          }
          pauVar12 = local_158;
        }
      } while (param_2 != pauVar12);
    }
    if (local_178 != 0) {
      local_180 = local_170;
      auVar8[1] = uStack_13f;
      auVar8[0] = local_140;
      auVar8[2] = uStack_13e;
      auVar8[3] = uStack_13d;
      auVar8[4] = uStack_13c;
      auVar8[5] = uStack_13b;
      auVar8[6] = uStack_13a;
      auVar8[7] = uStack_139;
      auVar8[8] = uStack_138;
      auVar8[9] = uStack_137;
      auVar8[10] = uStack_136;
      auVar8[0xb] = uStack_135;
      auVar8[0xc] = uStack_134;
      auVar8[0xd] = uStack_133;
      auVar8[0xe] = uStack_132;
      auVar8[0xf] = uStack_131;
      auVar8[0x10] = uStack_130;
      auVar8[0x11] = uStack_12f;
      auVar8[0x12] = uStack_12e;
      auVar8[0x13] = uStack_12d;
      auVar8[0x14] = uStack_12c;
      auVar8[0x15] = uStack_12b;
      auVar8[0x16] = uStack_12a;
      auVar8[0x17] = uStack_129;
      auVar8[0x18] = uStack_128;
      auVar8[0x19] = uStack_127;
      auVar8[0x1a] = uStack_126;
      auVar8[0x1b] = uStack_125;
      auVar8[0x1c] = uStack_124;
      auVar8[0x1d] = uStack_123;
      auVar8[0x1e] = uStack_122;
      auVar8[0x1f] = uStack_121;
      auVar2 = vpcmpeqb_avx2(*local_170,auVar8);
      uVar15 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
      if ((uVar15 != 0) &&
         (cVar9 = FUN_1802d6d50(local_100,(1 << ((byte)local_178 & 0x1f)) - 1U & uVar15),
         cVar9 != '\0')) {
        return local_180;
      }
    }
  }
  return local_168;
}


