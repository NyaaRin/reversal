// 0x18015de60  FUN_18015de60
// size=1758 thunk=false
// signature: undefined FUN_18015de60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015de60(undefined4 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  size_t sVar12;
  longlong lVar13;
  undefined8 ****ppppuVar14;
  undefined8 *puVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar16;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  longlong *local_230;
  undefined1 local_228;
  int local_224;
  int local_220;
  int local_21c;
  longlong *local_218;
  int *local_208;
  longlong *local_200;
  undefined1 *local_1f8;
  int *local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  int local_178 [2];
  longlong *local_170;
  int local_168 [2];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined1 local_11c;
  undefined8 ***local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_100;
  char local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_258;
  plVar1 = param_2 + 1;
  puVar8 = (undefined8 *)*plVar1;
  puVar15 = (undefined8 *)*param_2;
  local_230 = param_2;
  local_218 = param_2;
  local_170 = plVar1;
  if (puVar15 != puVar8) {
    do {
      local_238 = puVar15;
      FUN_18020e450(puVar15 + 5);
      FUN_18020e450(puVar15 + 1);
      puVar15 = puVar15 + 10;
    } while (puVar15 != puVar8);
    *plVar1 = *param_2;
    local_238 = puVar15;
  }
  local_21c = FUN_18015d7f0();
  if ((0 < local_21c) && (DAT_1803fa360 != (longlong *)0x0)) {
    if (0x200 < DAT_1803fad50) {
      if (DAT_1803fad50 < DAT_1803fad78 >> 3) {
        FUN_18021bd90(&DAT_1803fad40,*DAT_1803fad48,DAT_1803fad48);
      }
      else {
        FUN_18022a280();
        *DAT_1803fad48 = DAT_1803fad48;
        DAT_1803fad48[1] = DAT_1803fad48;
        DAT_1803fad50 = 0;
        local_238 = DAT_1803fad48;
        FUN_180214d00(DAT_1803fad58,DAT_1803fad60,&local_238);
      }
    }
    puVar8 = (undefined8 *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,param_1);
    if (((puVar8 != (undefined8 *)0x0) &&
        (local_238 = puVar8, BVar6 = IsBadReadPtr(puVar8,8), BVar6 == 0)) &&
       (BVar6 = IsBadReadPtr((void *)*puVar8,8), BVar6 == 0)) {
      local_224 = -1;
      plVar9 = (longlong *)FUN_18001dbf0(puVar8);
      if (((plVar9 != (longlong *)0x0) && (BVar6 = IsBadReadPtr(plVar9,8), BVar6 == 0)) &&
         ((BVar6 = IsBadReadPtr((void *)*plVar9,8), BVar6 == 0 &&
          (plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9), plVar9 != (longlong *)0x0))))
      {
        local_224 = (**(code **)(*plVar9 + 0x48))(plVar9);
      }
      local_220 = 0;
      local_200 = plVar1;
      while ((iVar4 = local_220, local_220 < 0x100 &&
             ((int)(*plVar1 - *local_230 >> 4) * -0x33333333 < 0x40))) {
        iVar7 = *(int *)((longlong)puVar8 + (longlong)local_21c + (longlong)(local_220 * 4));
        if (iVar7 - 1U < 0xfffffffe) {
          local_170 = (longlong *)CONCAT44(local_170._4_4_,iVar7);
          plVar9 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,&local_170);
          puVar8 = local_238;
          if ((((plVar9 != (longlong *)0x0) &&
               (BVar6 = IsBadReadPtr(plVar9,8), puVar8 = local_238, BVar6 == 0)) &&
              (BVar6 = IsBadReadPtr((void *)*plVar9,8), puVar8 = local_238, BVar6 == 0)) &&
             ((cVar5 = (**(code **)(*plVar9 + 0x548))(plVar9), cVar5 != '\0' ||
              (cVar5 = (**(code **)(*plVar9 + 0x450))(plVar9), puVar8 = local_238, cVar5 != '\0'))))
          {
            plVar10 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
            uVar16 = extraout_XMM0_Da;
            iVar7 = 0;
            if (plVar10 != (longlong *)0x0) {
              iVar7 = (**(code **)(*plVar10 + 0x48))(plVar10);
              uVar16 = extraout_XMM0_Da_00;
            }
            puVar8 = local_238;
            local_178[0] = iVar7;
            if (0 < iVar7) {
              plVar10 = (longlong *)FUN_1802161d0(uVar16,local_1e8,local_178);
              lVar2 = *plVar10;
              if ((*(longlong **)(lVar2 + 0x18) != plVar9) || (*(longlong *)(lVar2 + 0x50) == 0)) {
                *(longlong **)(lVar2 + 0x18) = plVar9;
                uVar11 = FUN_18015dce0(local_1d8,plVar9);
                FUN_18020e8a0(lVar2 + 0x40,uVar11);
                FUN_18020e450(local_1d8);
                lVar13 = lVar2 + 0x40;
                if (0xf < *(ulonglong *)(lVar2 + 0x58)) {
                  lVar13 = *(longlong *)(lVar2 + 0x40);
                }
                cVar5 = FUN_18001ef10(plVar9,lVar13,local_f8);
                if (cVar5 == '\0') {
                  local_1f8 = local_1b8;
                  uVar11 = FUN_18016d4c0(local_1b8,lVar2 + 0x40);
                  uVar11 = FUN_18015d930(local_198,uVar11);
                  FUN_18020e8a0(lVar2 + 0x20,uVar11);
                  FUN_18020e450(local_198);
                }
                else {
                  sVar12 = strlen(local_f8);
                  FUN_180212700(lVar2 + 0x20,local_f8,sVar12);
                }
              }
              puVar8 = local_238;
              if (*(longlong *)(lVar2 + 0x50) != 0) {
                uStack_158 = 0;
                local_150 = 0;
                local_148 = 0xf;
                local_160 = 0;
                uStack_138 = 0;
                local_130 = 0;
                local_128 = 0xf;
                local_140 = 0;
                local_120 = 0xffffffff;
                local_11c = 0;
                local_168[0] = local_178[0];
                plVar10 = (longlong *)(lVar2 + 0x20);
                if (&local_160 != plVar10) {
                  if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
                    plVar10 = (longlong *)*plVar10;
                  }
                  FUN_180212700(&local_160,plVar10,*(undefined8 *)(lVar2 + 0x30));
                }
                plVar10 = (longlong *)(lVar2 + 0x40);
                if (&local_140 != plVar10) {
                  if (0xf < *(ulonglong *)(lVar2 + 0x58)) {
                    plVar10 = (longlong *)*plVar10;
                  }
                  FUN_180212700(&local_140,plVar10,*(undefined8 *)(lVar2 + 0x50));
                }
                cVar5 = FUN_18003a090("ESP_WeaponName");
                if (cVar5 != '\0') {
                  uStack_110 = 0;
                  local_108 = 0;
                  local_100 = 0xf;
                  local_118 = (undefined8 ****)0x0;
                  local_208 = local_168;
                  cVar5 = FUN_180206e60();
                  if (cVar5 != '\0') {
                    ppppuVar14 = &local_118;
                    if (0xf < local_100) {
                      ppppuVar14 = (undefined8 ****)local_118;
                    }
                    FUN_180212700(&local_160,ppppuVar14,local_108);
                  }
                  FUN_18020e450(&local_118);
                }
                local_120 = FUN_18001e5b0(plVar9);
                local_11c = local_178[0] == local_224;
                piVar3 = (int *)*plVar1;
                if (piVar3 == (int *)param_2[2]) {
                  FUN_180223a10(param_2,piVar3,local_168);
                }
                else {
                  *piVar3 = local_168[0];
                  local_1f0 = piVar3;
                  FUN_18016d4c0(piVar3 + 2,&local_160);
                  FUN_18016d4c0(piVar3 + 10,&local_140);
                  piVar3[0x12] = local_120;
                  *(undefined1 *)(piVar3 + 0x13) = local_11c;
                  *plVar1 = *plVar1 + 0x50;
                }
                FUN_18020e450(&local_140);
                FUN_18020e450(&local_160);
                puVar8 = local_238;
              }
            }
          }
        }
        local_220 = iVar4 + 1;
      }
      FUN_180213480(*local_230,*plVar1,(*plVar1 - *local_230 >> 4) * -0x3333333333333333,local_228);
    }
  }
  return;
}


