// 0x1800ae2d0  FUN_1800ae2d0
// size=958 thunk=false
// signature: undefined FUN_1800ae2d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ae2d0(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  float fVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  int local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  char local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  local_a8 = param_1;
  local_a0 = param_2;
  local_98 = param_3;
  cVar3 = FUN_1800acf70();
  plVar2 = DAT_1804236d0;
  if ((cVar3 != '\0') && (param_2 != 0)) {
    local_b0 = DAT_1804236d0;
    if (DAT_1804236d0 == (longlong *)0x0) {
      DAT_1804236b8 = 1;
    }
    else {
      local_b8 = (**(code **)(*DAT_1804236d0 + 0x20))(DAT_1804236d0);
      if (local_b8 == '\0') {
        DAT_1804236b8 = 2;
      }
      else {
        local_90 = 0;
        local_80 = 0;
        local_70 = FUN_1800ad020();
        pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
        local_90 = (*pcVar1)(DAT_1803fa360,uVar4);
        local_88 = DAT_1803ff0f0;
        local_78 = param_2;
        if (param_4 != '\0') {
          local_78 = 0;
          local_80 = param_2;
        }
        local_68 = 0;
        local_64 = 0;
        local_5c = 0;
        local_54 = 0;
        cVar3 = FUN_1800ad340(param_1,param_3,&local_90,&local_68);
        if ((cVar3 != '\0') && ((char)local_68 != '\0')) {
          if (local_68._1_1_ == '\0') {
            fVar12 = (float)local_64;
LAB_1800ae493:
            uVar4 = local_64._4_4_;
            puVar5 = (undefined1 *)(**(code **)(*plVar2 + 8))(plVar2);
            if (DAT_1803fa608 == 0) {
              dVar10 = 0.0;
            }
            else {
              dVar10 = *(double *)(DAT_1803fa608 + 0x10);
            }
            if ((((DAT_1803e7970 != -2) || (DAT_1803e73a0 < 0.0)) || (dVar10 < DAT_1803e73a0)) ||
               (DAT_180380cb0 <= dVar10 - DAT_1803e73a0)) {
              DAT_1803e7970 = -2;
              puVar7 = &DAT_18033e9cc;
              if (puVar5 != (undefined1 *)0x0) {
                puVar7 = puVar5;
              }
              DAT_1803e73a0 = dVar10;
              FUN_180014410("[Autowall] %s: HIT through %d wall(s), %.1f dmg left\n",puVar7,uVar4,
                            (double)fVar12);
            }
            return 1;
          }
          fVar9 = (float)FUN_1800acfc0();
          fVar12 = (float)local_64;
          if (fVar9 <= (float)local_64) goto LAB_1800ae493;
          DAT_1804236b8 = 9;
          DAT_1804236bc = (float)local_64;
        }
      }
      puVar5 = (undefined1 *)(**(code **)(*plVar2 + 8))(plVar2);
      if (DAT_1803fa608 == 0) {
        dVar10 = 0.0;
      }
      else {
        dVar10 = *(double *)(DAT_1803fa608 + 0x10);
      }
      if (((DAT_1804236b8 != DAT_1803e7970) || (DAT_1803e73a0 < 0.0)) ||
         ((dVar10 < DAT_1803e73a0 || (DAT_180380cb0 <= dVar10 - DAT_1803e73a0)))) {
        DAT_1803e7970 = DAT_1804236b8;
        cVar3 = (char)DAT_1804236c4;
        DAT_1803e73a0 = dVar10;
        if (DAT_1804236c0 == '\0') {
          dVar10 = (double)DAT_1804236bc;
          if (0x5e < DAT_1804236c4 - 0x20U) {
            cVar3 = '?';
          }
          iVar8 = (int)cVar3;
          uVar6 = FUN_1800aced0((double)DAT_1804236b4);
          puVar7 = &DAT_18033e9cc;
          if (puVar5 != (undefined1 *)0x0) {
            puVar7 = puVar5;
          }
          local_d8 = iVar8;
          local_d0 = dVar10;
          local_c8 = (double)extraout_XMM0_Qa_00;
          FUN_180014410("[Autowall] %s: no - %s (surface %d, mat %c, budget %.1f, allowed %.1f, wall thicker than that)\n"
                        ,puVar7,uVar6,DAT_1804236c8);
        }
        else {
          dVar10 = (double)DAT_1804236b4;
          dVar11 = (double)DAT_1804236bc;
          if (0x5e < DAT_1804236c4 - 0x20U) {
            cVar3 = '?';
          }
          iVar8 = (int)cVar3;
          uVar6 = FUN_1800aced0((double)DAT_1804236d8);
          puVar7 = &DAT_18033e9cc;
          if (puVar5 != (undefined1 *)0x0) {
            puVar7 = puVar5;
          }
          local_d8 = iVar8;
          local_d0 = dVar11;
          local_c8 = dVar10;
          local_c0 = extraout_XMM0_Qa;
          FUN_180014410("[Autowall] %s: no - %s (surface %d, mat %c, budget %.1f, allowed %.1f, wall %.1f)\n"
                        ,puVar7,uVar6,DAT_1804236c8);
        }
      }
    }
  }
  return 0;
}


