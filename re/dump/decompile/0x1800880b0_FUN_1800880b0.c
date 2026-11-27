// 0x1800880b0  FUN_1800880b0
// size=1538 thunk=false
// signature: undefined FUN_1800880b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180088201) */
/* WARNING: Removing unreachable block (ram,0x000180088214) */

longlong *
FUN_1800880b0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,char param_5,
             undefined1 param_6,int *param_7,int *param_8,undefined4 *param_9,undefined8 param_10,
             undefined8 param_11,int *param_12)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  int *local_150;
  char *local_148;
  char local_138 [8];
  longlong local_130;
  int iStack_128;
  undefined1 uStack_124;
  undefined2 local_123;
  undefined1 local_121;
  longlong *local_120;
  undefined8 uStack_118;
  longlong local_110;
  float local_108;
  float local_104;
  int local_100;
  float local_fc;
  int local_f8;
  int *local_f0;
  int *local_e8;
  int *local_e0 [2];
  int *local_d0;
  longlong *local_c8;
  int local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  float local_b0;
  int *local_a8;
  int *piStack_a0;
  int *local_98;
  ulonglong local_90;
  
  local_90 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  local_e0[0] = param_7;
  local_f0 = param_8;
  *param_7 = 0;
  *param_8 = 0;
  if (DAT_1803fa608 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(DAT_1803fa608 + 0x20);
  }
  *param_9 = uVar7;
  local_138[0] = '\x01';
  local_148 = local_138;
  local_150 = param_12;
  local_158 = param_11;
  local_c8 = param_2;
  iVar6 = FUN_180087c90(param_1,param_4,uVar7,param_10);
  *param_8 = iVar6;
  *param_7 = iVar6;
  if ((param_5 != '\0') ||
     ((*(char *)(param_1 + 0x34) != '\0' && (0.0 < *(float *)(param_1 + 0x38))))) {
    local_120 = (longlong *)0x0;
    uStack_118 = 0;
    local_110 = 0;
    FUN_18001bcd0();
    if (local_120 == (longlong *)0x0) {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
    }
    else {
      local_f8 = (**(code **)*local_120)();
      local_130 = 0;
      iStack_128 = 0;
      FUN_180023e60(local_120,0);
      FUN_18002db10(local_120[1],0xffffffff,&DAT_180340e34);
      cVar5 = (**(code **)(*local_120 + 0x138))(local_120,0xffffffff,5);
      if (cVar5 != '\0') {
        FUN_18002db10(local_120[1],0xffffffff,"SharedRandom");
        cVar5 = (**(code **)(*local_120 + 0x138))(local_120,0xffffffff,6);
        if (cVar5 != '\0') {
          plVar9 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
          uVar7 = (**(code **)(*plVar9 + 0x48))(plVar9);
          if ((local_138[0] == '\0') && (1 < *param_12)) {
            local_a8 = (int *)0x0;
            piStack_a0 = (int *)0x0;
            local_98 = (int *)0x0;
            FUN_18020bd70(&local_a8,(longlong)(*param_12 * 2 + 1));
            fVar1 = DAT_180380bb0;
            fVar16 = DAT_180380a88;
            for (iVar6 = *local_f0 - *param_12; piVar4 = piStack_a0, piVar3 = local_a8,
                piVar2 = local_f0, fVar15 = DAT_180380948, iVar10 = *local_f0, local_100 = iVar6,
                iVar6 <= *param_12 + iVar10; iVar6 = iVar6 + 1) {
              iVar8 = -(iVar6 - iVar10);
              if (iVar8 < 0) {
                iVar8 = iVar6 - iVar10;
              }
              fVar15 = fVar1 / ((float)iVar8 * (float)iVar8 + fVar1);
              if (iVar6 == iVar10) {
                fVar15 = fVar15 + fVar16;
              }
              local_148 = (char *)CONCAT71(local_148._1_7_,param_6);
              local_150 = (int *)CONCAT71(local_150._1_7_,param_5);
              local_158 = CONCAT44(local_158._4_4_,iVar6);
              local_104 = fVar15;
              local_c0 = iVar6;
              FUN_180087eb0(param_1,&uStack_bc,local_120,uVar7);
              local_b0 = fVar15;
              if (piStack_a0 == local_98) {
                FUN_180227310(&local_a8,piStack_a0,&local_c0);
              }
              else {
                *(ulonglong *)piStack_a0 = CONCAT44(uStack_bc,local_c0);
                *(undefined8 *)(piStack_a0 + 2) = uStack_b8;
                piStack_a0[4] = (int)fVar15;
                piStack_a0 = piStack_a0 + 5;
              }
            }
            local_fc = DAT_180381308;
            fVar16 = DAT_180381308;
            for (piVar12 = local_a8; local_d0 = piVar12, piVar12 != piVar4; piVar12 = piVar12 + 5) {
              local_108 = 0.0;
              for (piVar11 = piVar3; fVar1 = local_108, local_e8 = piVar11, piVar11 != piVar4;
                  piVar11 = piVar11 + 5) {
                fVar13 = (float)FUN_180022110();
                fVar14 = (float)FUN_180022110();
                local_108 = fVar1 + (fVar14 * fVar14 + fVar13 * fVar13) * (float)piVar11[4];
              }
              iVar10 = *piVar12 - *piVar2;
              iVar6 = -iVar10;
              if (iVar6 < 0) {
                iVar6 = iVar10;
              }
              local_108 = local_108 + (float)iVar6 * fVar15;
              if (local_108 < fVar16) {
                *local_e0[0] = *piVar12;
                local_130 = *(longlong *)(piVar12 + 1);
                iStack_128 = piVar12[3];
                fVar16 = local_108;
                local_fc = local_108;
              }
            }
            FUN_18020bef0(&local_a8);
          }
          else {
            local_148 = (char *)CONCAT71(local_148._1_7_,param_6);
            local_150 = (int *)CONCAT71(local_150._1_7_,param_5);
            local_158 = CONCAT44(local_158._4_4_,*param_8);
            plVar9 = (longlong *)FUN_180087eb0(param_1,local_e0,local_120,uVar7);
            local_130 = *plVar9;
            iStack_128 = (int)plVar9[1];
          }
        }
        (**(code **)(*local_120 + 0x10))(local_120,1);
      }
      (**(code **)(*local_120 + 0x10))(local_120,2);
      iVar10 = (**(code **)*local_120)();
      iVar6 = local_f8;
      while (iVar6 < iVar10) {
        (**(code **)(*local_120 + 0x10))(local_120,1);
        iVar10 = (**(code **)*local_120)();
      }
      *param_2 = local_130;
      *(int *)(param_2 + 1) = iStack_128;
      if (local_120 != (longlong *)0x0) {
        (**(code **)*local_120)();
        DAT_1803fa338 = local_110 != 0;
        DAT_1803fa330 = local_130;
        if ((bool)DAT_1803fa338) {
          DAT_1803fa330 = local_110;
        }
        DAT_1803fa339 = CONCAT13(uStack_124,iStack_128._1_3_);
        DAT_1803fa33d = local_123;
        DAT_1803fa33f = local_121;
      }
    }
  }
  else {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_2;
}


