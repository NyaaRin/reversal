// 0x18018f950  FUN_18018f950
// size=2162 thunk=false
// signature: undefined FUN_18018f950()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18018f950(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,char param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  BOOL BVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int *piVar12;
  int **ppiVar13;
  int *piVar14;
  longlong lVar15;
  int **ppiVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 uStack_18c;
  undefined2 uStack_18b;
  undefined1 uStack_189;
  undefined4 local_188;
  undefined4 local_184;
  int *local_180;
  int *local_178;
  int *local_170;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  undefined8 local_150;
  undefined *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [24];
  undefined1 local_110 [56];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_1e8;
  local_188 = param_5;
  iVar18 = 0;
  uVar8 = 0;
  local_1a0 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  if ((((param_2 == (longlong *)0x0) ||
       (local_184 = param_4, BVar7 = IsBadReadPtr(param_2,8), BVar7 != 0)) ||
      (BVar7 = IsBadReadPtr((void *)*param_2,8), BVar7 != 0)) ||
     ((DAT_1803f9250 == (longlong *)0x0 || (DAT_1803fa608 == 0)))) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
    *(undefined2 *)((longlong)param_1 + 0x15) = uStack_18b;
    *(undefined1 *)((longlong)param_1 + 0x17) = uStack_189;
  }
  else {
    plVar10 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2);
    lVar11 = (**(code **)(*plVar10 + 0x48))(plVar10);
    if (lVar11 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined1 *)((longlong)param_1 + 0x14) = 0;
      *(undefined2 *)((longlong)param_1 + 0x15) = uStack_18b;
      *(undefined1 *)((longlong)param_1 + 0x17) = uStack_189;
    }
    else {
      piVar12 = (int *)(**(code **)(*DAT_1803f9250 + 0xe0))(DAT_1803f9250,lVar11);
      if (((piVar12 == (int *)0x0) || (piVar12[0x2b] < 1)) || (piVar12[0x27] < 1)) {
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined1 *)((longlong)param_1 + 0x14) = 0;
        *(undefined2 *)((longlong)param_1 + 0x15) = uStack_18b;
        *(undefined1 *)((longlong)param_1 + 0x17) = uStack_189;
      }
      else {
        local_170 = piVar12;
        if (((piVar12[0x2b] < 2) || (uVar8 = FUN_18001da00(param_2), -1 < (int)uVar8)) &&
           ((int)uVar8 < piVar12[0x2b])) {
          lVar11 = (longlong)piVar12 + (ulonglong)uVar8 * 0xc + (longlong)piVar12[0x2c];
          if ((lVar11 == 0) ||
             (iVar19 = *(int *)(lVar11 + 4), local_140 = lVar11, 0xff < iVar19 - 1U)) {
            *param_1 = 0;
            param_1[1] = 0;
            *(undefined4 *)(param_1 + 2) = 0;
            *(undefined1 *)((longlong)param_1 + 0x14) = 0;
            *(undefined2 *)((longlong)param_1 + 0x15) = uStack_18b;
            *(undefined1 *)((longlong)param_1 + 0x17) = uStack_189;
          }
          else {
            while( true ) {
              if (iVar19 <= iVar18) {
                *param_1 = CONCAT44(uStack_19c,local_1a0);
                param_1[1] = CONCAT44(uStack_194,uStack_198);
                param_1[2] = CONCAT17(uStack_189,
                                      CONCAT25(uStack_18b,CONCAT14(uStack_18c,uStack_190)));
                return param_1;
              }
              piVar14 = (int *)((longlong)iVar18 * 0x44 + lVar11 + (longlong)*(int *)(lVar11 + 8));
              if (((piVar14 != (int *)0x0) && (iVar2 = *piVar14, -1 < iVar2)) &&
                 ((iVar2 < piVar12[0x27] &&
                  ((iVar2 < 0x80 &&
                   (local_158 = iVar18, cVar5 = FUN_18018c550(piVar14 + 2,piVar14 + 5),
                   cVar5 != '\0')))))) break;
              iVar18 = iVar18 + 1;
            }
            if ((DAT_180427664 & 1) == 0) {
              DAT_180427664 = DAT_180427664 | 1;
              local_148 = &DAT_18056e780;
              lVar15 = 0x80;
              while (lVar15 != 0) {
                local_148 = local_148 + 0x30;
                lVar15 = lVar15 + -1;
              }
              local_150 = 0xffffffffffffffff;
            }
            if ((piVar12[0x27] < 2) || (param_6 != '\0')) {
              BVar7 = IsBadReadPtr(param_2,8);
              if ((BVar7 == 0) &&
                 ((BVar7 = IsBadReadPtr((void *)*param_2,8), BVar7 == 0 &&
                  (piVar12[0x27] - 1U < 0x80)))) {
                FUN_18018f400(param_2,param_3,local_110);
                local_d8 = 0;
                uStack_d0 = 0;
                local_c8 = 0;
                uStack_c0 = 0;
                local_b8 = 0;
                uStack_b0 = 0;
                local_a8 = 0;
                uStack_a0 = 0;
                local_98 = 0;
                uStack_90 = 0;
                local_88 = 0;
                uStack_80 = 0;
                local_78 = 0;
                uStack_70 = 0;
                local_68 = 0;
                uStack_60 = 0;
                cVar5 = '\0';
                local_1b8 = 0;
                iVar18 = 0;
                while (local_168 = iVar18, iVar18 < *(int *)(lVar11 + 4)) {
                  piVar14 = (int *)((longlong)iVar18 * 0x44 + lVar11 +
                                   (longlong)*(int *)(lVar11 + 8));
                  if ((((piVar14 == (int *)0x0) || (iVar19 = *piVar14, iVar19 < 0)) ||
                      (piVar12[0x27] <= iVar19)) ||
                     ((0x7f < iVar19 ||
                      (cVar6 = FUN_18018c550(piVar14 + 2,piVar14 + 5), cVar6 == '\0')))) {
                    iVar18 = iVar18 + 1;
                  }
                  else {
                    local_1c8 = &local_d8;
                    cVar5 = FUN_18018f7b0(piVar12,iVar19,local_110);
                    if (cVar5 == '\0') goto LAB_18018fce8;
                    cVar5 = '\x01';
                    local_1b8 = 1;
                    iVar18 = iVar18 + 1;
                  }
                }
              }
              else {
LAB_18018fce8:
                cVar5 = '\0';
              }
              uVar9 = 0;
            }
            else {
              cVar5 = FUN_1800c1bb0(param_2,&DAT_18056e780);
              uVar9 = 1;
            }
            uVar17 = 1;
            if (cVar5 != '\0') {
              bVar4 = false;
              local_1b7 = 0;
              iVar18 = 0;
              local_164 = 0;
              iVar19 = 0;
              local_160 = 0;
              local_15c = 0;
              uStack_1a8 = 0;
              local_1b0 = 0;
              do {
                while( true ) {
                  iVar2 = local_15c;
                  if (*(int *)(lVar11 + 4) <= local_15c) {
                    if (!bVar4) {
                      if ((0 < iVar18) && (iVar19 == iVar18)) {
                        uVar17 = 4;
                      }
                      *param_1 = CONCAT44(uStack_19c,uVar17);
                      param_1[1] = CONCAT44(uStack_194,uStack_198);
                      param_1[2] = CONCAT17(uStack_189,
                                            CONCAT25(uStack_18b,CONCAT14(uStack_18c,uStack_190)));
                      return param_1;
                    }
                    local_170 = (int *)CONCAT44(local_170._4_4_,0x40800000);
                    local_180 = (int *)CONCAT44(local_180._4_4_,0x3f000000);
                    fVar21 = (float)uStack_1a8 - (float)local_1b0;
                    if (uStack_1a8._4_4_ - local_1b0._4_4_ <= (float)uStack_1a8 - (float)local_1b0)
                    {
                      fVar21 = uStack_1a8._4_4_ - local_1b0._4_4_;
                    }
                    fVar21 = fVar21 * DAT_1803809b8;
                    local_178 = (int *)CONCAT44(local_178._4_4_,fVar21);
                    ppiVar16 = &local_180;
                    if (DAT_180380ac0 <= fVar21) {
                      ppiVar16 = &local_178;
                    }
                    ppiVar13 = &local_170;
                    if (fVar21 <= DAT_180380e9c) {
                      ppiVar13 = ppiVar16;
                    }
                    fVar21 = *(float *)ppiVar13;
                    local_1b0._0_4_ = (float)local_1b0 - fVar21;
                    local_1b0._4_4_ = local_1b0._4_4_ - fVar21;
                    uStack_1a8._0_4_ = (float)uStack_1a8 + fVar21;
                    uStack_1a8._4_4_ = uStack_1a8._4_4_ + fVar21;
                    local_138 = 0;
                    uStack_130 = 0;
                    cVar5 = FUN_18018cb40(&local_1b0,local_184,local_188,&local_138);
                    if (cVar5 == '\0') {
                      *(undefined4 *)param_1 = 1;
                      *(undefined4 *)((longlong)param_1 + 4) = 0;
                      *(undefined4 *)(param_1 + 1) = 0;
                      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
                      *(undefined4 *)(param_1 + 2) = 0;
                      *(undefined1 *)((longlong)param_1 + 0x14) = 0;
                      *(undefined2 *)((longlong)param_1 + 0x15) = uStack_18b;
                      *(undefined1 *)((longlong)param_1 + 0x17) = uStack_189;
                      return param_1;
                    }
                    *(undefined4 *)param_1 = 3;
                    *(float *)((longlong)param_1 + 4) = (float)local_1b0;
                    *(float *)(param_1 + 1) = local_1b0._4_4_;
                    *(float *)((longlong)param_1 + 0xc) = (float)uStack_1a8;
                    *(float *)(param_1 + 2) = uStack_1a8._4_4_;
                    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
                    *(undefined2 *)((longlong)param_1 + 0x15) = uStack_18b;
                    *(undefined1 *)((longlong)param_1 + 0x17) = uStack_189;
                    return param_1;
                  }
                  piVar12 = (int *)((longlong)local_15c * 0x44 + lVar11 +
                                   (longlong)*(int *)(lVar11 + 8));
                  if (piVar12 != (int *)0x0) break;
LAB_18018ff14:
                  local_15c = iVar2 + 1;
                  lVar11 = local_140;
                }
                iVar3 = *piVar12;
                if (((iVar3 < 0) || (local_170[0x27] <= iVar3)) || (0x7f < iVar3))
                goto LAB_18018ff14;
                local_178 = piVar12 + 5;
                local_180 = piVar12 + 2;
                cVar5 = FUN_18018c550(local_180,local_178);
                if (cVar5 == '\0') goto LAB_18018ff14;
                iVar18 = iVar18 + 1;
                local_1c0 = local_188;
                local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,local_184);
                local_164 = iVar18;
                piVar12 = (int *)FUN_18018df20(local_128,local_180,local_178,
                                               &DAT_18056e780 + (longlong)iVar3 * 0x30);
                fVar21 = (float)piVar12[1];
                fVar1 = (float)piVar12[3];
                lVar11 = local_140;
                if (*piVar12 == 4) {
                  iVar19 = iVar19 + 1;
                  local_15c = iVar2 + 1;
                  local_160 = iVar19;
                }
                else if ((char)piVar12[5] == '\0') {
                  if (*piVar12 == 3) {
                    if (bVar4) {
                      fVar20 = (float)local_1b0;
                      if (fVar21 <= (float)local_1b0) {
                        fVar20 = fVar21;
                      }
                      if ((float)piVar12[2] <= local_1b0._4_4_) {
                        local_1b0._4_4_ = (float)piVar12[2];
                      }
                      local_1b0 = CONCAT44(local_1b0._4_4_,fVar20);
                      fVar21 = (float)uStack_1a8;
                      if ((float)uStack_1a8 <= fVar1) {
                        fVar21 = fVar1;
                      }
                      if (uStack_1a8._4_4_ <= (float)piVar12[4]) {
                        uStack_1a8._4_4_ = (float)piVar12[4];
                      }
                      uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar21);
                    }
                    else {
                      bVar4 = true;
                      local_1b7 = 1;
                      local_1b0 = *(undefined8 *)(piVar12 + 1);
                      uStack_1a8 = *(undefined8 *)(piVar12 + 3);
                    }
                    local_15c = iVar2 + 1;
                  }
                  else {
                    local_15c = iVar2 + 1;
                  }
                }
                else {
                  local_15c = iVar2 + 1;
                }
              } while( true );
            }
            *param_1 = CONCAT44(uStack_19c,uVar9);
            param_1[1] = CONCAT44(uStack_194,uStack_198);
            param_1[2] = CONCAT17(uStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,uStack_190)));
          }
        }
        else {
          *param_1 = 0;
          param_1[1] = 0;
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined1 *)((longlong)param_1 + 0x14) = 0;
          *(undefined2 *)((longlong)param_1 + 0x15) = uStack_18b;
          *(undefined1 *)((longlong)param_1 + 0x17) = uStack_189;
        }
      }
    }
  }
  return param_1;
}


