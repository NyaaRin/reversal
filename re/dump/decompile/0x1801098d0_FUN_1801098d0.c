// 0x1801098d0  FUN_1801098d0
// size=1114 thunk=false
// signature: undefined FUN_1801098d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801098d0(int param_1)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  char *pcVar13;
  byte *pbVar14;
  float *pfVar15;
  longlong lVar16;
  float extraout_XMM0_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  if ((((DAT_1803fa608 != (float *)0x0) && (DAT_1803fa360 != (longlong *)0x0)) && (0 < param_1)) &&
     (param_1 <= (int)DAT_1803fa608[7])) {
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
    plVar10 = (longlong *)(*pcVar2)(DAT_1803fa360,uVar6);
    if (((plVar10 != (longlong *)0x0) &&
        (plVar11 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,param_1),
        dVar3 = DAT_180380cb0, plVar11 != (longlong *)0x0)) && (plVar11 != plVar10)) {
      if (((0x80 < param_1) || (DAT_1803e9228 < 0.0)) ||
         ((DAT_1803fa608 == (float *)0x0 ||
          (((double)*DAT_1803fa608 - DAT_1803e9228 < 0.0 ||
           (DAT_180380cb0 < (double)*DAT_1803fa608 - DAT_1803e9228)))))) {
        cVar5 = '\0';
      }
      else {
        cVar5 = (&DAT_1804239a0)[param_1];
      }
      BVar7 = IsBadReadPtr(plVar11,8);
      if (((((BVar7 == 0) && (BVar7 = IsBadReadPtr((void *)*plVar11,8), BVar7 == 0)) &&
           (plVar12 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11),
           plVar12 != (longlong *)0x0)) &&
          (cVar4 = (**(code **)(*plVar12 + 0x40))(plVar12), cVar4 == '\0')) &&
         ((cVar5 != '\0' || (cVar4 = FUN_18001c330(plVar11), cVar4 != '\0')))) {
        local_a0 = 0x93fd561a96ab0c67;
        plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b8,&local_a0);
        lVar16 = *plVar12 + 0x28;
        local_a8 = 0x7aad0bc54d55fc8a;
        plVar12 = (longlong *)FUN_180241a30(lVar16,local_c8,&local_a8);
        pcVar13 = (char *)FUN_1801fcfc0(*plVar12 + 0x28);
        if ((*pcVar13 == '\0') ||
           ((iVar8 = FUN_18001c560(plVar10), iVar8 < 1 ||
            (iVar9 = FUN_18001c560(plVar11), iVar9 != iVar8)))) {
          local_a8 = 0xcd347fc1a3829be9;
          plVar12 = (longlong *)FUN_180241a30(lVar16,local_c8,&local_a8);
          pcVar13 = (char *)FUN_1801fcfc0(*plVar12 + 0x28);
          if ((*pcVar13 == '\0') ||
             ((cVar4 = FUN_18001e0a0(plVar11), cVar4 != '\b' || (cVar5 != '\0')))) {
            local_a8 = 0xa0267eea20a40d9a;
            plVar12 = (longlong *)FUN_180241a30(lVar16,local_c8,&local_a8);
            pcVar13 = (char *)FUN_1801fcfc0(*plVar12 + 0x28);
            if (((*pcVar13 == '\0') ||
                (pbVar14 = (byte *)FUN_18001d710(plVar11,&local_a8), (*pbVar14 & 0x40) == 0)) &&
               ((0x80 < param_1 ||
                ((((DAT_180425fd0 == (code *)0x0 ||
                   (cVar5 = (*DAT_180425fd0)(param_1), cVar5 == '\0')) &&
                  ((DAT_180426170 == (code *)0x0 ||
                   (cVar5 = (*DAT_180426170)(param_1), cVar5 == '\0')))) &&
                 ((DAT_1804009f0 == (code *)0x0 ||
                  (cVar5 = (*DAT_1804009f0)(param_1), cVar5 == '\0')))))))) {
              local_a8 = 0xdaefe600c147795;
              plVar12 = (longlong *)FUN_180241a30(lVar16,local_c8,&local_a8);
              pfVar15 = (float *)FUN_180202dc0(*plVar12 + 0x28);
              fVar1 = *pfVar15;
              if (0.0 < fVar1) {
                pfVar15 = (float *)(**(code **)(*plVar11 + 0x48))(plVar11);
                fVar17 = *pfVar15;
                fVar18 = pfVar15[1];
                fVar19 = pfVar15[2];
                if ((((0.0 <= DAT_1803e9240) && (DAT_1803fa608 != (float *)0x0)) &&
                    (0.0 <= (double)*DAT_1803fa608 - DAT_1803e9240)) &&
                   ((((double)*DAT_1803fa608 - DAT_1803e9240 <= dVar3 && (param_1 - 1U < 0x80)) &&
                    ((0 < *(int *)(&DAT_180423760 + (longlong)param_1 * 4) &&
                     (plVar11 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(),
                     plVar11 != (longlong *)0x0)))))) {
                  pfVar15 = (float *)(**(code **)(*plVar11 + 0x48))(plVar11);
                  fVar17 = *pfVar15;
                  fVar18 = pfVar15[1];
                  fVar19 = pfVar15[2];
                }
                pfVar15 = (float *)(**(code **)(*plVar10 + 0x48))(plVar10);
                (*(code *)PTR_FUN_1803da018)
                          ((pfVar15[1] - fVar18) * (pfVar15[1] - fVar18) +
                           (*pfVar15 - fVar17) * (*pfVar15 - fVar17) +
                           (pfVar15[2] - fVar19) * (pfVar15[2] - fVar19));
                if (fVar1 < extraout_XMM0_Da) {
                  return 0;
                }
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


