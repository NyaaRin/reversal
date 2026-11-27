// 0x18008b5d0  FUN_18008b5d0
// size=1413 thunk=false
// signature: undefined FUN_18008b5d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_18008b5d0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             float param_5,int *param_6,int *param_7,undefined8 param_8,undefined8 param_9,
             int *param_10)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  undefined8 extraout_XMM0_Qa;
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
  int *local_e8 [2];
  int *local_d8;
  longlong *local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  float local_b8;
  int *local_b0;
  int *piStack_a8;
  int *local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  local_e8[0] = param_6;
  uVar6 = 0;
  *param_6 = 0;
  *param_7 = 0;
  if (DAT_1803fa608 != 0) {
    uVar6 = *(undefined4 *)(DAT_1803fa608 + 0x20);
  }
  local_138[0] = '\x01';
  local_148 = local_138;
  local_150 = param_10;
  local_158 = param_9;
  local_d0 = param_2;
  iVar5 = FUN_18008af30(param_9,param_4,uVar6,param_8);
  *param_7 = iVar5;
  *param_6 = iVar5;
  if (0.0 < param_5) {
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
      cVar4 = (**(code **)(*local_120 + 0x138))(local_120,0xffffffff,5);
      if (cVar4 != '\0') {
        FUN_18002db10(local_120[1],0xffffffff,"SharedRandom");
        cVar4 = (**(code **)(*local_120 + 0x138))(local_120,0xffffffff,6);
        if (cVar4 != '\0') {
          plVar8 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
          uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
          if ((local_138[0] == '\0') && (1 < *param_10)) {
            local_b0 = (int *)0x0;
            piStack_a8 = (int *)0x0;
            local_a0 = (int *)0x0;
            FUN_18020bd70(&local_b0,(longlong)(*param_10 * 2 + 1));
            fVar1 = DAT_180380bb0;
            fVar16 = DAT_180380a88;
            for (iVar5 = *param_7 - *param_10; piVar3 = piStack_a8, piVar2 = local_b0,
                fVar15 = DAT_180380948, iVar10 = *param_7, local_100 = iVar5,
                iVar5 <= *param_10 + iVar10; iVar5 = iVar5 + 1) {
              iVar9 = iVar5 - iVar10;
              iVar7 = -iVar9;
              if (-iVar9 < 0) {
                iVar7 = iVar9;
              }
              fVar15 = fVar1 / ((float)iVar7 * (float)iVar7 + fVar1);
              if (iVar5 == iVar10) {
                fVar15 = fVar15 + fVar16;
              }
              local_150 = (int *)CONCAT44(local_150._4_4_,param_5);
              local_158 = CONCAT44(local_158._4_4_,iVar5);
              local_104 = fVar15;
              local_c8 = iVar5;
              FUN_18008b160(iVar9,&uStack_c4,local_120,uVar6);
              local_b8 = fVar15;
              if (piStack_a8 == local_a0) {
                FUN_180227310(&local_b0,piStack_a8,&local_c8);
              }
              else {
                *(ulonglong *)piStack_a8 = CONCAT44(uStack_c4,local_c8);
                *(undefined8 *)(piStack_a8 + 2) = uStack_c0;
                piStack_a8[4] = (int)fVar15;
                piStack_a8 = piStack_a8 + 5;
              }
            }
            local_fc = DAT_180381308;
            fVar16 = DAT_180381308;
            for (piVar12 = local_b0; local_d8 = piVar12, piVar12 != piVar3; piVar12 = piVar12 + 5) {
              local_108 = 0.0;
              for (piVar11 = piVar2; fVar1 = local_108, local_f0 = piVar11, piVar11 != piVar3;
                  piVar11 = piVar11 + 5) {
                fVar13 = (float)FUN_180022110();
                fVar14 = (float)FUN_180022110();
                local_108 = fVar1 + (fVar14 * fVar14 + fVar13 * fVar13) * (float)piVar11[4];
              }
              iVar10 = *piVar12 - *param_7;
              iVar5 = -iVar10;
              if (iVar5 < 0) {
                iVar5 = iVar10;
              }
              local_108 = local_108 + (float)iVar5 * fVar15;
              if (local_108 < fVar16) {
                *local_e8[0] = *piVar12;
                local_130 = *(longlong *)(piVar12 + 1);
                iStack_128 = piVar12[3];
                fVar16 = local_108;
                local_fc = local_108;
              }
            }
            FUN_18020bef0(&local_b0);
          }
          else {
            local_150 = (int *)CONCAT44(local_150._4_4_,param_5);
            local_158 = CONCAT44(local_158._4_4_,*param_7);
            plVar8 = (longlong *)FUN_18008b160(extraout_XMM0_Qa,local_e8,local_120,uVar6);
            local_130 = *plVar8;
            iStack_128 = (int)plVar8[1];
          }
        }
        (**(code **)(*local_120 + 0x10))(local_120,1);
      }
      (**(code **)(*local_120 + 0x10))(local_120,2);
      iVar10 = (**(code **)*local_120)();
      iVar5 = local_f8;
      while (iVar5 < iVar10) {
        (**(code **)(*local_120 + 0x10))(local_120,1);
        iVar10 = (**(code **)*local_120)();
      }
      *param_2 = local_130;
      *(int *)(param_2 + 1) = iStack_128;
    }
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
  else {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_2;
}


