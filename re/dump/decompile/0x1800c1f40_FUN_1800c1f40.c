// 0x1800c1f40  FUN_1800c1f40
// size=1019 thunk=false
// signature: undefined FUN_1800c1f40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800c1f40(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 local_158;
  uint7 uStack_157;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  char local_f0 [44];
  uint local_c4 [23];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  lVar9 = (longlong)param_2;
  local_1b8 = param_2;
  local_1a8 = param_1;
  cVar5 = FUN_1800c1ae0();
  if ((((((cVar5 != '\0') && (param_1 != 0)) && (DAT_1803fa608 != 0)) &&
       ((param_2 - 1U < 0x80 && (cVar5 = FUN_1800b81b0(), cVar5 != '\0')))) &&
      ((iVar6 = FUN_1800b82e0(), iVar6 == 0 &&
       ((*(char *)((longlong)&DAT_180561188 + lVar9 * 0x168 + 1) != '\0' ||
        ((float)*(double *)(DAT_1803fa608 + 0x10) < *(float *)(&DAT_18056118c + lVar9 * 0x2d)))))))
     && (cVar5 = FUN_1800b86f0(), cVar5 == '\0')) {
    uVar1 = *(uint *)(DAT_1803fa608 + 0x20);
    if (((DAT_1803e8760 != '\0') && (DAT_1803e8720 == param_1)) && (DAT_1803e8728 == uVar1)) {
      return &DAT_1803e8720;
    }
    if (uVar1 == DAT_1803e6ed4) {
      if (1 < DAT_1803ffc44) {
        return (undefined8 *)0x0;
      }
    }
    else {
      DAT_1803ffc44 = 0;
      DAT_1803e6ed4 = uVar1;
    }
    DAT_1803ffc44 = DAT_1803ffc44 + 1;
    local_198 = 0;
    uStack_190 = 0x80000000;
    uStack_18c = 0;
    local_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    _DAT_1803e8730 = 0;
    uRam00000001803e8738 = 0;
    _DAT_1803e8740 = 0;
    _DAT_1803e8748 = 0;
    _DAT_1803e8750 = 0;
    uRam00000001803e8754 = 0;
    uRam00000001803e8758 = 0;
    uRam00000001803e875c = 0;
    _DAT_1803e8760 = (ulonglong)uStack_157 << 8;
    _DAT_1803e8728 = (ulonglong)uVar1;
    DAT_1803e8720 = param_1;
    lVar7 = FUN_18001d620(param_1);
    uVar12 = *(undefined4 *)(lVar7 + 4);
    cVar5 = FUN_1800b86f0();
    if ((cVar5 != '\0') && ((&DAT_18056114c)[lVar9 * 0x168] != '\0')) {
      uVar12 = (&DAT_180561148)[lVar9 * 0x5a];
    }
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    local_f0[0] = '\0';
    local_f0[1] = '\0';
    local_f0[2] = '\0';
    local_f0[3] = '\0';
    local_f0[4] = '\0';
    local_f0[5] = '\0';
    local_f0[6] = '\0';
    local_f0[7] = '\0';
    local_f0[8] = '\0';
    local_f0[9] = '\0';
    local_f0[10] = '\0';
    local_f0[0xb] = '\0';
    local_f0[0xc] = '\0';
    local_f0[0xd] = '\0';
    local_f0[0xe] = '\0';
    local_f0[0xf] = '\0';
    local_f0[0x10] = '\0';
    local_f0[0x11] = '\0';
    local_f0[0x12] = '\0';
    local_f0[0x13] = '\0';
    local_f0[0x14] = '\0';
    local_f0[0x15] = '\0';
    local_f0[0x16] = '\0';
    local_f0[0x17] = '\0';
    local_f0[0x18] = '\0';
    local_f0[0x19] = '\0';
    local_f0[0x1a] = '\0';
    local_f0[0x1b] = '\0';
    local_f0[0x1c] = '\0';
    local_f0[0x1d] = '\0';
    local_f0[0x1e] = '\0';
    local_f0[0x1f] = '\0';
    local_f0[0x20] = '\0';
    local_f0[0x21] = '\0';
    local_f0[0x22] = '\0';
    local_f0[0x23] = '\0';
    local_f0[0x24] = '\0';
    local_f0[0x25] = '\0';
    local_f0[0x26] = '\0';
    local_f0[0x27] = '\0';
    local_f0[0x28] = '\0';
    local_f0[0x29] = '\0';
    local_f0[0x2a] = '\0';
    local_f0[0x2b] = '\0';
    local_c4[0] = 0;
    local_c4[1] = 0;
    local_c4[2] = 0;
    local_c4[3] = 0;
    local_c4[4] = 0;
    local_c4[5] = 0;
    local_c4[6] = 0;
    local_c4[7] = 0;
    local_c4[8] = 0;
    local_c4[9] = 0;
    local_c4[10] = 0;
    local_c4[0xb] = 0;
    local_c4[0xc] = 0;
    local_c4[0xd] = 0;
    local_c4[0xe] = 0;
    local_c4[0xf] = 0;
    local_c4[0x10] = 0;
    local_c4[0x11] = 0;
    local_c4[0x12] = 0;
    local_c4[0x13] = 0;
    local_c4[0x14] = 0;
    local_c4[0x15] = 0;
    local_c4[0x16] = 0;
    local_1b0 = uVar12;
    FUN_1800b9590(param_2,uVar12,&local_148);
    uVar1 = local_c4[0x16];
    if (0 < (int)local_c4[0x16]) {
      local_1b4 = FUN_1800c1b30();
      uVar4 = _DAT_1803817c0;
      fVar3 = DAT_180380d30;
      iVar6 = DAT_1803e872c;
      iVar10 = 0;
      if (0 < (int)uVar1) {
        do {
          if (local_1b4 <= iVar6) break;
          uVar2 = local_c4[iVar10];
          if ((uVar2 < 0x16) && (local_f0[(int)uVar2] != '\0')) {
            uVar12 = *(undefined4 *)((longlong)&local_148 + (longlong)(int)uVar2 * 4);
            iVar8 = 0;
            if (0 < iVar6) {
              do {
                uVar11 = FUN_180022110(uVar12,*(undefined4 *)(&DAT_1803e8748 + (longlong)iVar8 * 4))
                ;
                if ((float)(uVar11 & uVar4) < fVar3) goto LAB_1800c22d9;
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar6);
            }
            cVar5 = FUN_1800c1c30(local_1a8,local_1b8,uVar12,
                                  &DAT_1805580f0 + (longlong)iVar6 * 0x1800);
            iVar6 = DAT_1803e872c;
            if (cVar5 != '\0') {
              *(uint *)(&DAT_1803e8730 + (longlong)DAT_1803e872c * 4) = uVar2;
              *(undefined4 *)(&DAT_1803e8748 + (longlong)DAT_1803e872c * 4) = uVar12;
              iVar6 = DAT_1803e872c + 1;
              _DAT_1803e8728 = CONCAT44(iVar6,DAT_1803e8728);
            }
          }
LAB_1800c22d9:
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar1);
      }
      _DAT_1803e8760 = CONCAT71(DAT_1803e8760_1,0 < iVar6);
      if (0 < iVar6) {
        return &DAT_1803e8720;
      }
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}


