// 0x1800b2680  FUN_1800b2680
// size=1423 thunk=false
// signature: undefined FUN_1800b2680()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b2680(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res20 [2];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_df;
  undefined2 local_de;
  float local_d8 [2];
  float local_d0;
  float local_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined2 local_c6;
  
  if (DAT_180409a10 != (code *)0x0) {
    local_res20[0] = 0.0;
    local_e8 = (double)((ulonglong)local_e8 & 0xffffffff00000000);
    cVar5 = FUN_1800b2660(param_1,0x90,&local_e8);
    fVar19 = 0.0;
    if ((cVar5 == '\0') ||
       (cVar5 = FUN_1800b2660(param_1,0x94,local_res20), fVar19 = local_res20[0], cVar5 == '\0')) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    (*DAT_180409a10)(param_1,param_2,param_3);
    cVar6 = FUN_1800b21b0();
    if (cVar6 != '\0') {
      local_d8[0] = 0.0;
      local_res20[0] = 0.0;
      cVar6 = FUN_1800b2660(param_1,0x90,local_d8);
      if ((cVar6 != '\0') && (cVar6 = FUN_1800b2660(param_1,0x94,local_res20), cVar6 != '\0')) {
        FUN_1800b2670();
        fVar3 = local_res20[0];
        lVar8 = DAT_1803fa608;
        fVar15 = DAT_180380988;
        if (DAT_1803fa608 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(DAT_1803fa608 + 0x20);
        }
        if (iVar10 != DAT_1803e8110) {
          if ((-1 < DAT_1803e8110) &&
             (DAT_180409a00 = DAT_180409a00 + 1, DAT_180409a28 < DAT_180409a50)) {
            DAT_180409a28 = DAT_180409a50;
          }
          DAT_180409a50 = 0;
          DAT_1803e8110 = iVar10;
        }
        DAT_1804099e8 = DAT_1804099e8 + 1;
        iVar7 = DAT_180409a50 + 1;
        if (param_1 != DAT_1804099e0) {
          DAT_180409a48 = '\0';
          DAT_1804099e0 = param_1;
        }
        fVar4 = (float)local_e8;
        DAT_180409a50 = iVar7;
        if (cVar5 == '\0') {
          fVar15 = 0.0;
          local_res20[0] = DAT_180409a30;
        }
        else {
          _DAT_1804099f0 = (float)local_e8;
          if (DAT_180409a48 == '\0') {
            local_e0 = 1;
            DAT_1804099fa = local_c6;
            DAT_1804099f9 = 0;
            DAT_180409a48 = '\x01';
            _DAT_1804099f8 = 1;
          }
          else {
            local_e0 = DAT_1804099f8;
          }
          local_d0 = (float)local_e8;
          local_e8 = (double)CONCAT44(fVar19,(float)local_e8);
          fVar14 = DAT_180380988;
          if (DAT_1803fa608 != 0) {
            fVar14 = (float)*(double *)(DAT_1803fa608 + 0x28);
          }
          _DAT_1804099f4 = fVar19;
          local_df = DAT_1804099f9;
          local_de = DAT_1804099fa;
          local_cc = fVar19;
          local_c8 = local_e0;
          local_c7 = DAT_1804099f9;
          local_c6 = DAT_1804099fa;
          FUN_1800b1de0(&local_d0,param_2,0,fVar14);
          if (lVar8 != 0) {
            fVar15 = (float)*(double *)(lVar8 + 0x28);
          }
          FUN_1800b1de0(&local_e8,param_2,DAT_1803811c4,fVar15);
          fVar17 = local_cc;
          uVar12 = FUN_1800b1d70(local_cc - fVar3);
          fVar14 = local_e8._4_4_;
          fVar18 = (float)(uVar12 & _DAT_1803817c0);
          local_res20[0] = local_e8._4_4_;
          uVar12 = FUN_1800b1d70(local_e8._4_4_ - fVar3);
          DAT_180409a18 = (float)(uVar12 & _DAT_1803817c0);
          fVar15 = fVar18;
          if (DAT_180409a18 <= fVar18) {
            fVar15 = DAT_180409a18;
          }
          if (DAT_180409a20 < fVar15) {
            DAT_180409a20 = fVar15;
          }
          DAT_180409a44 = fVar17;
          DAT_180409a30 = fVar14;
          DAT_180409a40 = fVar18;
        }
        fVar2 = DAT_180409a44;
        fVar18 = DAT_180409a40;
        fVar17 = DAT_180409a24;
        cVar6 = DAT_180409a1c;
        fVar14 = DAT_180409a18;
        if (1 < iVar7) {
          DAT_180409a60 = DAT_180409a60 + 1;
        }
        if (DAT_180409a1c == '\0') {
          fVar16 = 0.0;
        }
        else {
          uVar12 = FUN_1800b1d70(DAT_180409a24 - fVar3);
          fVar16 = (float)(uVar12 & _DAT_1803817c0);
          if (_DAT_180409a68 < fVar16) {
            _DAT_180409a68 = fVar16;
          }
        }
        iVar1 = DAT_180409a28;
        iVar9 = DAT_1804261ac + 1;
        bVar11 = DAT_1804261ac == (DAT_1804261ac / 0x21) * 0x21;
        DAT_1804261ac = iVar9;
        if (bVar11) {
          fVar13 = (float)FUN_1800b1d70((float)param_2 - fVar3);
          local_e8 = (double)fVar13;
          if (cVar6 == '\0') {
            fVar17 = 0.0;
          }
          FUN_180014410("[ANIMPROBE] tick=%d call#%d/tick eye=%.2f | before(goal=%.2f cur=%.2f ok=%d) -> engine(goal=%.2f cur=%.2f) | predict stand=%.2f move=%.2f | dStand=%.3f dMove=%.3f drift=%.3f | aaMirror=%.2f lag=%.2f | twist=%.2f maxCalls/tick=%d\n"
                        ,iVar10,iVar7,(double)(float)param_2,(double)fVar4,(double)fVar19,cVar5,
                        (double)local_d8[0],(double)fVar3,(double)fVar2,(double)local_res20[0],
                        (double)fVar18,(double)fVar14,(double)fVar15,(double)fVar17,(double)fVar16,
                        local_e8,iVar1);
          lVar8 = DAT_1803fa608;
        }
        if ((lVar8 != 0) && (DAT_180380d38 < *(double *)(lVar8 + 0x10) - _DAT_180409a08)) {
          _DAT_180409a08 = *(double *)(lVar8 + 0x10);
          FUN_1800b25c0("running");
        }
      }
    }
  }
  return;
}


