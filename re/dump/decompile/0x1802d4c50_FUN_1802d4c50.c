// 0x1802d4c50  FUN_1802d4c50
// size=574 thunk=false
// signature: undefined FUN_1802d4c50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802d4c50(void *param_1,ulonglong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [64];
  undefined1 auStack_298 [56];
  undefined1 local_260 [32];
  char local_240 [256];
  char local_140 [256];
  ulonglong local_40;
  ulonglong local_38;
  undefined1 extraout_var [56];
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_298;
  if ((DAT_1803da514 & 4) == 0) {
    memset(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    do {
      if (param_2 == 0) {
        return 0xffffffffffffffff;
      }
      lVar5 = param_2 - 1;
      param_2 = param_2 - 1;
    } while (local_140[*(byte *)((longlong)param_1 + lVar5)] != '\0');
  }
  else {
    iVar6 = FUN_1802d6ad0(param_2,param_4,DAT_1803da514 >> 5 & 0xffffff01);
    if (iVar6 == 2) {
      auVar10._0_8_ = FUN_1802d6970(param_3,param_4);
      auVar10._8_56_ = extraout_var;
      local_260 = auVar10._0_32_;
      do {
        if (param_2 < 8) {
          uVar7 = (uint)param_2 & 7;
          if ((param_2 & 7) != 0) {
            memcpy(&local_40,param_1,(ulonglong)uVar7);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_40;
            auVar9 = vpmovzxbd_avx2(auVar3);
            auVar4 = vpandn_avx2(auVar9,_DAT_18030fa80);
            auVar9 = vpsrld_avx2(auVar9,5);
            auVar9 = vpermd_avx2(auVar9,local_260);
            auVar4 = vpsllvd_avx2(auVar9,auVar4);
            uVar8 = vmovmskps_avx(auVar4);
            uVar7 = ~uVar8 & (1 << (sbyte)uVar7) - 1U;
            if (uVar7 != 0) {
              return (ulonglong)(0x1f - LZCOUNT(uVar7));
            }
          }
          return 0xffffffffffffffff;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)((longlong)param_1 + (param_2 - 8));
        auVar4 = vpmovzxbd_avx2(auVar2);
        param_2 = param_2 - 8;
        auVar9 = vpsrld_avx2(auVar4,5);
        auVar9 = vpermd_avx2(auVar9,local_260);
        auVar4 = vpandn_avx2(auVar4,_DAT_18030fa80);
        auVar4 = vpsllvd_avx2(auVar9,auVar4);
        uVar7 = vmovmskps_avx(auVar4);
      } while ((uVar7 ^ 0xff) == 0);
      param_2 = (param_2 - (uint)LZCOUNT(uVar7 ^ 0xff)) + 0x1f;
    }
    else if (iVar6 == 1) {
      memset(local_240,0,0x100);
      pbVar1 = param_3 + param_4;
      for (; param_3 != pbVar1; param_3 = param_3 + 1) {
        local_240[*param_3] = '\x01';
      }
      do {
        if (param_2 == 0) {
          return 0xffffffffffffffff;
        }
        lVar5 = param_2 - 1;
        param_2 = param_2 - 1;
      } while (local_240[*(byte *)((longlong)param_1 + lVar5)] != '\0');
    }
    else {
      param_2 = FUN_1802d6110(param_1,param_2,param_3,param_4);
    }
  }
  return param_2;
}


