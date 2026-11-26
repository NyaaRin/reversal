// 0x1800ce9b0  FUN_1800ce9b0
// size=1173 thunk=false
// signature: undefined FUN_1800ce9b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ce9b0(void)

{
  double dVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 uVar14;
  undefined1 auStack_188 [32];
  char local_168;
  char local_167;
  int local_164;
  uint local_160 [2];
  longlong *local_158;
  char **local_148;
  char **ppcStack_140;
  undefined1 local_138 [8];
  char *local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  undefined *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char **local_e8;
  char **ppcStack_e0;
  char **local_d8;
  char **ppcStack_d0;
  char **local_c8;
  char ***pppcStack_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  int local_58 [2];
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  if (((DAT_1803fa608 != 0) && (DAT_1803fa360 != (longlong *)0x0)) && (DAT_1803fa678 != 0)) {
    if ((DAT_1803fa668 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))(DAT_1803fa668), cVar4 != '\0')) {
      dVar1 = *(double *)(DAT_1803fa608 + 0x10);
      uVar13 = SUB84(DAT_1803fae88,0);
      uVar14 = (undefined4)((ulonglong)DAT_1803fae88 >> 0x20);
      if (dVar1 < DAT_1803fae88) {
        FUN_18020bcc0(&DAT_1803fa7b0);
        uVar13 = 0;
        uVar14 = 0;
        DAT_1803fae88 = 0.0;
      }
      if (DAT_180380c70 <= dVar1 - (double)CONCAT44(uVar14,uVar13)) {
        pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
        DAT_1803fae88 = dVar1;
        uVar13 = (**(code **)(*DAT_1803fa668 + 0x60))(DAT_1803fa668);
        plVar8 = (longlong *)(*pcVar2)(DAT_1803fa360,uVar13);
        if (plVar8 != (longlong *)0x0) {
          local_167 = 0;
          local_130 = "BuildMode";
          local_128 = "buildmode";
          local_120 = "_Kyle_Buildmode";
          local_148 = &local_130;
          ppcStack_140 = &local_118;
          local_158 = plVar8;
          local_e8 = local_148;
          ppcStack_e0 = ppcStack_140;
          local_167 = FUN_1800ce920(plVar8,&local_148);
          iVar12 = 1;
          do {
            while( true ) {
              if (*(int *)(DAT_1803fa608 + 0x1c) < iVar12) {
                return;
              }
              local_164 = iVar12;
              plVar9 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar12);
              if (plVar9 != (longlong *)0x0) break;
LAB_1800cee47:
              FUN_1800c47f0(iVar12);
LAB_1800cee6b:
              iVar12 = iVar12 + 1;
            }
            BVar5 = IsBadReadPtr(plVar9,8);
            if (BVar5 != 0) goto LAB_1800cee47;
            BVar5 = IsBadReadPtr((void *)*plVar9,8);
            if (BVar5 != 0) goto LAB_1800cee47;
            plVar10 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
            if (plVar10 == (longlong *)0x0) goto LAB_1800cee47;
            cVar4 = (**(code **)(*plVar10 + 0x40))(plVar10);
            if (cVar4 != '\0') goto LAB_1800cee47;
            if (plVar9 == plVar8) {
              FUN_1800c47f0(iVar12);
              goto LAB_1800cee6b;
            }
            iVar6 = FUN_18001c680(plVar9);
            local_168 = '\0';
            uVar13 = FUN_18001d710(plVar9,local_160);
            if ((local_160[0] >> 0x10 & 1) == 0) {
              iVar7 = FUN_18001fad0(plVar9);
              if (iVar7 == 0) {
                puVar11 = (uint *)FUN_18001d710(plVar9,local_138);
                if ((*puVar11 >> 0xf & 1) == 0) {
                  cVar4 = FUN_18002f710(iVar12);
                  if (cVar4 == '\0') {
                    local_118 = "has_god";
                    local_110 = "god_mode";
                    local_108 = &DAT_18034d244;
                    local_d8 = &local_118;
                    ppcStack_d0 = &local_100;
                    local_98 = local_d8;
                    uStack_90 = ppcStack_d0;
                    cVar4 = FUN_1800ce920(plVar9,&local_98);
                    if (cVar4 == '\0') {
                      local_100 = "BuildMode";
                      local_f8 = "buildmode";
                      local_f0 = "_Kyle_Buildmode";
                      local_c8 = &local_100;
                      pppcStack_c0 = &local_e8;
                      local_88 = local_c8;
                      uStack_80 = pppcStack_c0;
                      cVar4 = FUN_1800ce920(plVar9,&local_88);
                      uVar13 = extraout_XMM0_Da_03;
                      if (cVar4 == '\0') {
                        if (local_167 == '\0') {
                          local_b8 = "LibbyProtectedSpawn";
                          local_b0 = "SH_SZ.Safe";
                          local_a8 = "spawn_protect";
                          local_a0 = "InSpawnZone";
                          local_148 = &local_b8;
                          ppcStack_140 = (char **)&local_98;
                          local_78 = local_148;
                          uStack_70 = ppcStack_140;
                          cVar4 = FUN_1800ce920(plVar9,&local_78);
                          if (cVar4 == '\0') {
                            iVar7 = FUN_18001c560(plVar9);
                            uVar13 = extraout_XMM0_Da_05;
                            cVar4 = local_168;
                            if (iVar7 == 0x3ea) {
                              cVar4 = '\x01';
                            }
                          }
                          else {
                            uVar13 = extraout_XMM0_Da_04;
                            cVar4 = '\x01';
                          }
                        }
                        else {
                          cVar4 = '\x01';
                        }
                      }
                      else {
                        cVar4 = '\x01';
                      }
                    }
                    else {
                      uVar13 = extraout_XMM0_Da_02;
                      cVar4 = '\x01';
                    }
                  }
                  else {
                    uVar13 = extraout_XMM0_Da_01;
                    cVar4 = '\x01';
                  }
                }
                else {
                  uVar13 = extraout_XMM0_Da_00;
                  cVar4 = '\x01';
                }
              }
              else {
                uVar13 = extraout_XMM0_Da;
                cVar4 = '\x01';
              }
            }
            else {
              cVar4 = '\x01';
            }
            local_168 = cVar4;
            local_58[0] = iVar12;
            plVar9 = (longlong *)FUN_180217cb0(uVar13,local_68,local_58);
            lVar3 = *plVar9;
            if (((*(int *)(lVar3 + 0x18) < 1) || (iVar6 < 1)) || (*(int *)(lVar3 + 0x18) <= iVar6))
            {
              *(int *)(lVar3 + 0x18) = iVar6;
              if (cVar4 == '\0') {
                *(undefined4 *)(lVar3 + 0x14) = 0;
              }
              else if (*(int *)(lVar3 + 0x14) < 5) {
                *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
              }
            }
            else {
              *(undefined4 *)(lVar3 + 0x14) = 0;
              *(int *)(lVar3 + 0x18) = iVar6;
            }
            iVar12 = iVar12 + 1;
          } while( true );
        }
      }
    }
    else {
      FUN_18020bcc0(&DAT_1803fa7b0);
      DAT_1803fae88 = 0.0;
    }
  }
  return;
}


