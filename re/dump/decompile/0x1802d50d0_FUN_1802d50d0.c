// 0x1802d50d0  FUN_1802d50d0
// size=501 thunk=false
// signature: undefined FUN_1802d50d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802d50d0(longlong param_1,ulonglong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [32];
  undefined1 auStack_198 [56];
  undefined1 local_160 [32];
  char local_140 [256];
  ulonglong local_40;
  ulonglong local_38;
  undefined1 extraout_var [56];
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  iVar5 = FUN_1802d6ad0(param_2,param_4,DAT_1803da514 >> 5 & 0xffffff01);
  if (iVar5 == 2) {
    auVar11._0_8_ = FUN_1802d6970(param_3,param_4);
    auVar11._8_56_ = extraout_var;
    uVar6 = 0;
    local_160 = auVar11._0_32_;
    uVar10 = param_2 & 0xfffffffffffffff8;
    if (uVar10 != 0) {
      do {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(uVar6 + param_1);
        auVar4 = vpmovzxbd_avx2(auVar2);
        auVar12 = vpsrld_avx2(auVar4,5);
        auVar12 = vpermd_avx2(auVar12,local_160);
        auVar4 = vpandn_avx2(auVar4,_DAT_18030fa80);
        auVar4 = vpsllvd_avx2(auVar12,auVar4);
        uVar8 = vmovmskps_avx(auVar4);
        uVar8 = uVar8 ^ 0xff;
        if (uVar8 != 0) {
          uVar9 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          return uVar9 + uVar6;
        }
        uVar6 = uVar6 + 8;
      } while (uVar6 != uVar10);
    }
    uVar8 = (uint)param_2 & 7;
    if ((param_2 & 7) != 0) {
      memcpy(&local_40,(void *)(uVar10 + param_1),(ulonglong)uVar8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_40;
      auVar12 = vpmovzxbd_avx2(auVar3);
      auVar4 = vpandn_avx2(auVar12,_DAT_18030fa80);
      auVar12 = vpsrld_avx2(auVar12,5);
      auVar12 = vpermd_avx2(auVar12,local_160);
      auVar4 = vpsllvd_avx2(auVar12,auVar4);
      uVar9 = vmovmskps_avx(auVar4);
      uVar8 = ~uVar9 & (1 << (sbyte)uVar8) - 1U;
      if (uVar8 != 0) {
        uVar9 = 0;
        for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        return uVar9 + uVar10;
      }
    }
    uVar6 = 0xffffffffffffffff;
  }
  else if (iVar5 == 1) {
    memset(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        if (local_140[*(byte *)(param_1 + uVar6)] == '\0') {
          return uVar6;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != param_2);
    }
    uVar6 = 0xffffffffffffffff;
  }
  else {
    lVar7 = FUN_1802d6570(param_1,param_2,param_3,param_4);
    uVar6 = 0xffffffffffffffff;
    if (lVar7 != param_2 + param_1) {
      uVar6 = lVar7 - param_1;
    }
  }
  return uVar6;
}


