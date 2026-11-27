// 0x1800db480  FUN_1800db480
// size=1929 thunk=false
// signature: undefined FUN_1800db480()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1800db480(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  BOOL BVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong lVar12;
  void *lp;
  char cVar13;
  float fVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_178 [32];
  int local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_140;
  int local_138;
  undefined4 local_130;
  char local_128;
  char local_127;
  uint local_124;
  char local_120;
  char local_11f;
  uint local_11c;
  int local_118;
  longlong *local_110;
  int local_108;
  uint local_104;
  float local_100;
  int local_fc;
  undefined4 local_f8;
  int local_f4 [3];
  int local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  char local_b0;
  int local_a8 [2];
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  local_d0 = param_2;
  DAT_180423a28 = FUN_1800db0b0();
  uVar10 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar10 = FUN_180241610(uVar10,0xb180266dc2efa3d2);
  pcVar11 = (char *)FUN_1801fcfc0(uVar10);
  local_11f = *pcVar11;
  if ((((local_11f == '\0') || (param_2 == (longlong *)0x0)) ||
      (plVar15 = param_2 + 1, *plVar15 == 0)) ||
     ((DAT_1803faee8 == 0 || (DAT_1803fa608 == (float *)0x0)))) {
    DAT_1803e9228 = DAT_1803813b0;
    DAT_1803ff0f0 = (void *)0x0;
  }
  else {
    fVar14 = DAT_1803fa608[7];
    if (0 < (int)fVar14) {
      local_110 = plVar15;
      local_100 = fVar14;
      local_e0 = param_2;
      local_d8 = plVar15;
      local_e8 = (**(code **)*param_2)(param_2);
      FUN_18002dc30(&local_c8,*plVar15);
      iVar16 = 0;
      local_118 = 0;
      local_108 = 0;
      local_fc = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      for (uVar17 = 1;
          (iVar7 = local_108, local_104 = uVar17, (int)uVar17 <= (int)fVar14 && ((int)uVar17 < 0x81)
          ); uVar17 = uVar17 + 1) {
        uVar6 = 0;
        local_11c = 0;
        cVar13 = '\0';
        local_128 = '\0';
        local_124 = 2;
        cVar3 = FUN_18002eb00(*plVar15,param_2,uVar17);
        if (cVar3 != '\0') {
          local_fc = local_fc + 1;
          local_f8 = (**(code **)*param_2)(param_2);
          FUN_18002d9c0(*plVar15,local_f8,"FakeRagdoll");
          if ((DAT_1803faff8 != (code *)0x0) &&
             (uVar6 = (*DAT_1803faff8)(*plVar15,0xffffffff), uVar6 < 0x10)) {
            piVar1 = (int *)((longlong)&local_78 + (longlong)(int)uVar6 * 4);
            *piVar1 = *piVar1 + 1;
          }
          cVar3 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,9);
          local_120 = cVar3;
          if (cVar3 == '\0') {
            local_124 = 2;
            uVar6 = 0;
          }
          else {
            cVar13 = '\x01';
            local_128 = '\x01';
            if (DAT_180423a28 == '\0') {
              local_124 = 0;
              uVar6 = 0;
            }
            else {
              local_f4[0] = *(int *)(&DAT_180423760 + (longlong)(int)uVar17 * 4);
              if (0 < local_f4[0]) {
                local_f4[1] = 0;
                local_11c = FUN_1800db310(param_2,local_f4 + 1,local_f4,1);
                if (0 < (int)local_11c) {
                  local_124 = 0;
                }
                uVar6 = local_11c;
                if (local_11c != 0) goto LAB_1800db748;
              }
              if (iVar16 == 0) {
                local_118 = FUN_1800db130();
                iVar16 = local_118;
              }
              uVar6 = FUN_1800db310(param_2,&local_124,&DAT_18056ffb0,iVar16);
              local_11c = uVar6;
              if (0 < (int)uVar6) {
                FUN_1800db240(uVar6);
              }
            }
          }
LAB_1800db748:
          (**(code **)(*param_2 + 0x10))(param_2,1);
          local_127 = 0;
          lVar12 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,uVar17);
          if ((lVar12 == 0) || (cVar4 = FUN_18001e0a0(lVar12), cVar4 != '\b')) {
            cVar4 = '\0';
          }
          else {
            cVar4 = '\x01';
          }
          uVar2 = local_f8;
          plVar15 = local_110;
          local_127 = cVar4;
          if (((DAT_180423a28 != '\0') && (uVar6 == 0)) && ((cVar3 != '\0' || (cVar4 != '\0')))) {
            FUN_18002d9c0(*local_110,local_f8,"GetNWEntity");
            cVar3 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,6);
            if (cVar3 == '\0') {
              (**(code **)(*local_e0 + 0x10))(param_2,1);
              plVar15 = local_110;
            }
            else {
              (**(code **)(*local_e0 + 8))(param_2,uVar2);
              (**(code **)(*param_2 + 0xe8))(param_2,"FakeRagdoll",0);
              plVar15 = local_110;
              iVar7 = FUN_180023180(*local_110,2,1);
              if (iVar7 == 0) {
                cVar3 = (**(code **)(*local_e0 + 0x138))(param_2,0xffffffff,9);
                if (cVar3 != '\0') {
                  cVar13 = '\x01';
                  local_128 = '\x01';
                  local_f4[2] = *(int *)(&DAT_180423760 + (longlong)(int)uVar17 * 4);
                  if (0 < local_f4[2]) {
                    local_f8 = 0;
                    uVar6 = FUN_1800db310(param_2,&local_f8,local_f4 + 2,1);
                    local_11c = uVar6;
                    if (uVar6 != 0) goto LAB_1800db922;
                  }
                  if (iVar16 == 0) {
                    local_118 = FUN_1800db130();
                    iVar16 = local_118;
                  }
                  uVar6 = FUN_1800db310(param_2,&local_124,&DAT_18056ffb0,iVar16);
                  local_11c = uVar6;
                  if (0 < (int)uVar6) {
                    FUN_1800db240(uVar6);
                  }
                }
LAB_1800db922:
                (**(code **)(*param_2 + 0x10))(param_2,1);
              }
              else {
                (**(code **)(*local_e0 + 0x10))(param_2,1);
              }
            }
          }
          if ((cVar13 != '\0') || (cVar13 = '\0', local_128 = cVar13, cVar4 != '\0')) {
            cVar13 = '\x01';
            local_128 = cVar13;
          }
        }
        if (local_124 < 10) {
          local_a8[(int)local_124] = local_a8[(int)local_124] + 1;
        }
        iVar7 = (**(code **)*param_2)(param_2);
        if (local_e8 < iVar7) {
          (**(code **)(*param_2 + 0x10))(param_2,iVar7 - local_e8);
        }
        if (uVar6 == uVar17) {
          uVar6 = 0;
        }
        *(uint *)(&DAT_180423760 + (longlong)(int)uVar17 * 4) = uVar6;
        if ((cVar13 == '\0') && ((int)uVar6 < 1)) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        (&DAT_1804239a0)[(int)uVar17] = uVar5;
        if (uVar6 != 0) {
          local_108 = local_108 + 1;
        }
        fVar14 = local_100;
      }
      DAT_1803e9228 = (double)*DAT_1803fa608;
      DAT_1803ff0f0 = (void *)0x0;
      DAT_1803e9240 = DAT_1803e9228;
      if (((DAT_1803fa668 != (longlong *)0x0) &&
          (((DAT_1803fa360 != (longlong *)0x0 &&
            (iVar8 = (**(code **)(*DAT_1803fa668 + 0x60))(), iVar8 - 1U < 0x80)) &&
           (0 < *(int *)(&DAT_180423760 + (longlong)iVar8 * 4))))) &&
         ((lp = (void *)(**(code **)(*DAT_1803fa360 + 0x18))(), lp != (void *)0x0 &&
          (BVar9 = IsBadReadPtr(lp,8), BVar9 == 0)))) {
        DAT_1803ff0f0 = lp;
      }
      if ((iVar7 != DAT_1803da5bc) ||
         (iVar8 = DAT_180426110 + 1, bVar18 = DAT_180426110 == (DAT_180426110 / 300) * 300,
         DAT_180426110 = iVar8, bVar18)) {
        local_158 = iVar16;
        FUN_180014410("[ZCITY-RAGDOLL] mapped %d/%d  pushed=%d scanned=%d\n",iVar7,fVar14,local_fc);
        local_138 = (int)uStack_70 + (int)local_58 + local_58._4_4_ + (int)uStack_50 +
                    uStack_50._4_4_ + (int)local_48 + local_48._4_4_ + (int)uStack_40 +
                    uStack_40._4_4_;
        local_140 = uStack_60._4_4_;
        local_148 = (undefined4)uStack_60;
        local_150 = local_68._4_4_;
        local_158 = (undefined4)local_68;
        FUN_180014410("[ZCITY-RAGDOLL] field types: nil=%d bool=%d num=%d str=%d tbl=%d fn=%d userdata=%d other=%d\n"
                      ,local_78 & 0xffffffff,local_78._4_4_,uStack_70._4_4_);
        local_130 = local_a8[1];
        local_138 = local_88._4_4_;
        local_140 = uStack_90._4_4_;
        local_148 = (undefined4)uStack_90;
        local_150 = local_98._4_4_;
        local_158 = (undefined4)local_98;
        FUN_180014410("[ZCITY-RAGDOLL] fails: notEnt=%d notTransmitted=%d badBlock=%d badEnt=%d noNet=%d badIdx=%d listMismatch=%d exc=%d noTramp=%d\n"
                      ,uStack_a0 & 0xffffffff,local_88 & 0xffffffff,uStack_a0._4_4_);
        DAT_1803da5bc = iVar7;
      }
      if ((local_b0 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
        (*DAT_1803faf78)(local_c8,local_c0,local_b8,local_b4);
      }
    }
  }
  return;
}


