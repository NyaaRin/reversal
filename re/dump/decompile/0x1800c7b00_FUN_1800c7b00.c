// 0x1800c7b00  FUN_1800c7b00
// size=714 thunk=false
// signature: undefined FUN_1800c7b00()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800c7b00(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  float *pfVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float extraout_XMM0_Da;
  float fVar12;
  float fVar13;
  undefined1 auStack_1918 [32];
  undefined1 local_18f8 [16];
  undefined1 local_18e8 [16];
  longlong local_18d8;
  undefined8 uStack_18d0;
  undefined4 local_18a4;
  undefined4 local_18a0;
  undefined4 local_189c;
  undefined1 local_1898;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  float *local_50;
  
  local_50 = (float *)(DAT_1803da4c0 ^ (ulonglong)auStack_1918);
  pfVar7 = local_50;
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_1 + 0x20) & 1) != 0)) &&
     (pfVar7 = (float *)(ulonglong)*(uint *)(param_2 + 4),
     *(uint *)(param_1 + 4) == *(uint *)(param_2 + 4))) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar5 = (*pcVar1)(DAT_1803fa360,uVar3);
    fVar12 = DAT_1803812a8;
    pfVar7 = (float *)0x0;
    if (lVar5 != 0) {
      local_18a0 = 0;
      local_1898 = 0;
      local_84 = 0;
      local_74 = 0;
      local_88 = 0;
      local_58 = 0xf7521f28977a3033;
      local_68 = 0xfb3877511c4b6892;
      local_18d8 = 0;
      uStack_18d0 = 0;
      local_18a4 = 0xffffffff;
      local_189c = 0xffffffff;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_18f8,&local_58);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_18e8,&local_68);
      pfVar7 = (float *)FUN_180202dc0(*plVar6 + 0x28);
      uVar10 = DAT_1803fac60 + DAT_1803fac58;
      fVar13 = *pfVar7;
      for (uVar11 = DAT_1803fac58; uVar11 != uVar10; uVar11 = uVar11 + 1) {
        puVar2 = (undefined8 *)
                 (*(undefined8 **)(DAT_1803fac48 + (DAT_1803fac50 - 1U & uVar11) * 2))[1];
        pfVar7 = DAT_1803fac48;
        for (puVar8 = (undefined8 *)
                      **(undefined8 **)(DAT_1803fac48 + (DAT_1803fac50 - 1U & uVar11) * 2);
            puVar8 != puVar2; puVar8 = puVar8 + 0x30d) {
          pfVar7 = (float *)FUN_1800c60c0(puVar8);
          if ((((char)pfVar7 != '\0') &&
              (pfVar7 = (float *)FUN_1800c5030(*puVar8,lVar5), (char)pfVar7 != '\0')) &&
             (iVar9 = *(int *)((longlong)puVar8 + 0x1854), 0 < iVar9)) {
            uVar3 = *(undefined4 *)(param_1 + 4);
            pfVar7 = (float *)FUN_1800c64b0();
            iVar9 = iVar9 + (int)pfVar7;
            if (0 < iVar9) {
              uVar4 = FUN_1800c6790();
              pfVar7 = (float *)FUN_1800c6930(uVar3,iVar9,uVar4);
              if ((char)pfVar7 != '\0') {
                local_68 = *(undefined8 *)(param_1 + 8);
                local_60 = *(undefined4 *)(param_1 + 0x10);
                pfVar7 = (float *)FUN_1800c77a0(puVar8,&local_68);
                if (extraout_XMM0_Da < fVar12) {
                  pfVar7 = (float *)FUN_1800c7dd0(&local_18d8,puVar8);
                  fVar12 = extraout_XMM0_Da;
                }
              }
            }
          }
        }
      }
      if (local_18d8 != 0) {
        if (DAT_180380e68 <= fVar13) {
          fVar13 = DAT_180380e68;
        }
        if (fVar12 <= fVar13) {
          uVar11 = FUN_1800c6c50(param_1,&local_18d8,"manual");
          return uVar11;
        }
      }
    }
  }
  return (ulonglong)pfVar7 & 0xffffffffffffff00;
}


