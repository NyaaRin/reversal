// 0x18008fdd0  FUN_18008fdd0
// size=2019 thunk=false
// signature: undefined FUN_18008fdd0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018008fea8) */

ulonglong FUN_18008fdd0(longlong param_1,int param_2,double param_3,double *param_4,double *param_5)

{
  bool bVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  longlong *plVar5;
  double *pdVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 *puVar11;
  float *pfVar12;
  double dVar13;
  ulonglong uVar14;
  float *pfVar15;
  byte bVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  longlong local_1b0;
  undefined4 local_1a7;
  undefined2 local_1a3;
  undefined1 local_1a1;
  float local_19c;
  longlong *local_198;
  undefined8 uStack_190;
  longlong local_188;
  float local_180 [3];
  int local_174;
  int local_170;
  int local_168;
  double local_160;
  double *local_158;
  undefined4 local_14f;
  undefined2 local_14b;
  undefined1 local_149;
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  char local_100;
  longlong local_f8;
  double *local_f0;
  char *local_e8;
  
  local_120 = param_5;
  puVar11 = (undefined1 *)register0x00000020;
  if (DAT_1803fa678 != 0) {
    local_198 = (longlong *)0x0;
    uStack_190 = 0;
    local_188 = 0;
    local_168 = param_2;
    local_158 = param_4;
    local_f8 = param_1;
    local_f0 = param_4;
    puVar11 = (undefined1 *)FUN_18001bcd0(param_1,&local_198);
    fVar17 = DAT_180381120;
    if (local_198 != (longlong *)0x0) {
      fVar21 = DAT_180380bb0;
      if (DAT_180380bb0 <= *(float *)(param_1 + 0x28)) {
        fVar21 = *(float *)(param_1 + 0x28);
      }
      fVar21 = fVar21 * (float)*(int *)(param_1 + 0x20);
      if (0.0 < *(float *)(param_1 + 0x24)) {
        local_19c = 0.0;
        puVar11 = (undefined1 *)FUN_180090d50(local_198,&DAT_180348bdc,0,DAT_180381120,&local_19c);
        if ((char)puVar11 == '\0') {
          if (local_198 != (longlong *)0x0) {
            (**(code **)*local_198)();
            DAT_1803fa338 = local_188 != 0;
            DAT_1803fa330 = local_188;
            if (!(bool)DAT_1803fa338) {
              DAT_1803fa330 = local_1b0;
            }
            DAT_1803fa339 = local_1a7;
            DAT_1803fa33d = local_1a3;
            puVar11 = (undefined1 *)0x0;
            DAT_1803fa33f = local_1a1;
          }
          goto LAB_18008ff76;
        }
        if (local_19c <= *(float *)(param_1 + 0x24) * fVar17) {
          fVar21 = fVar21 + fVar21;
        }
      }
      plVar5 = local_198;
      local_180[2] = 8.96831e-44;
      local_180[0] = 1.4013e-45;
      fVar17 = floorf(fVar21);
      local_180[1] = (float)(int)fVar17;
      pfVar15 = local_180;
      if (0 < (int)local_180[1]) {
        pfVar15 = local_180 + 1;
      }
      pfVar12 = local_180 + 2;
      if ((int)local_180[1] < 0x41) {
        pfVar12 = pfVar15;
      }
      fVar17 = *pfVar12;
      local_e8 = (char *)(param_1 + 0x58);
      local_19c = fVar17;
      if ((((*local_e8 != '\0') && (*(int *)(param_1 + 0x34) == param_2)) &&
          (*(float *)(param_1 + 0x38) == fVar17)) && (*(double *)(param_1 + 0x40) == param_3)) {
        *param_4 = *(double *)(param_1 + 0x48);
        dVar13 = *(double *)(param_1 + 0x50);
        *param_5 = dVar13;
        if (local_198 != (longlong *)0x0) {
          (**(code **)*local_198)();
          DAT_1803fa338 = local_188 != 0;
          DAT_1803fa330 = local_1b0;
          if ((bool)DAT_1803fa338) {
            DAT_1803fa330 = local_188;
          }
          DAT_1803fa339 = local_1a7;
          DAT_1803fa33d = local_1a3;
          dVar13 = 0.0;
          DAT_1803fa33f = local_1a1;
        }
        return CONCAT71((int7)((ulonglong)dVar13 >> 8),1);
      }
      iVar8 = (**(code **)*plVar5)(plVar5);
      dVar13 = 0.0;
      local_130 = 0.0;
      dVar2 = 0.0;
      local_128 = 0.0;
      local_170 = iVar8;
      FUN_18002dc30(&local_118,local_198[1]);
      FUN_180023e60(local_198,0);
      FUN_18002db10(local_198[1],0xffffffff,&DAT_180341c48);
      uVar14 = (**(code **)(*local_198 + 0x138))(local_198,0xffffffff,5);
      plVar5 = local_198;
      if ((char)uVar14 == '\0') {
        if (local_198 != (longlong *)0x0) {
          uVar14 = (**(code **)*local_198)(local_198);
          if (iVar8 < (int)uVar14) {
            uVar14 = (**(code **)(*plVar5 + 0x10))(plVar5,(int)uVar14 - iVar8);
          }
        }
        if ((local_100 != '\0') && (uVar14 = 0, DAT_1803faf78 != (code *)0x0)) {
          uVar14 = (*DAT_1803faf78)(local_118,local_110,local_108,local_104);
        }
        if (local_198 != (longlong *)0x0) {
          (**(code **)*local_198)();
          if (local_188 == 0) {
            DAT_1803fa330 = local_1b0;
            DAT_1803fa339 = local_1a7;
            DAT_1803fa33d = local_1a3;
            local_149 = local_1a1;
          }
          else {
            DAT_1803fa330 = local_188;
            DAT_1803fa339 = local_14f;
            DAT_1803fa33d = local_14b;
          }
          DAT_1803fa338 = local_188 != 0;
          uVar14 = 0;
          DAT_1803fa33f = local_149;
        }
        return uVar14 & 0xffffffffffffff00;
      }
      uVar9 = (**(code **)*local_198)();
      dVar4 = DAT_180380cc8;
      dVar19 = DAT_180380c68;
      uVar3 = DAT_180380be8;
      bVar1 = DAT_180380e9c <= fVar21;
      if (bVar1) {
        uVar22 = (undefined4)DAT_180380b90;
        uVar23 = (undefined4)((ulonglong)DAT_180380b90 >> 0x20);
      }
      else {
        uVar22 = (undefined4)DAT_180380b80;
        uVar23 = (undefined4)((ulonglong)DAT_180380b80 >> 0x20);
      }
      bVar16 = 1;
      local_174 = 0;
      do {
        iVar10 = local_174;
        if ((int)fVar17 <= local_174) {
LAB_1800902d0:
          pdVar6 = local_158;
          plVar5 = local_198;
          if ((local_198 != (longlong *)0x0) &&
             (iVar10 = (**(code **)*local_198)(local_198), iVar8 < iVar10)) {
            (**(code **)(*plVar5 + 0x10))(plVar5,iVar10 - iVar8);
          }
          if (bVar16 != 0) {
            dVar19 = DAT_180380d08 / (double)(int)fVar17;
            *pdVar6 = dVar19 * dVar13;
            *local_120 = dVar19 * dVar2;
            *(int *)(param_1 + 0x34) = param_2;
            *(float *)(param_1 + 0x38) = fVar17;
            *(double *)(param_1 + 0x40) = param_3;
            *(double *)(param_1 + 0x48) = *pdVar6;
            *(double *)(param_1 + 0x50) = *local_120;
            *local_e8 = '\x01';
          }
          if ((local_100 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
            (*DAT_1803faf78)(local_118,local_110,local_108,local_104);
          }
          if (local_198 != (longlong *)0x0) {
            (**(code **)*local_198)();
            if (local_188 != 0) {
              DAT_1803fa330 = local_188;
              DAT_1803fa338 = 1;
              DAT_1803fa339 = local_1a7;
              DAT_1803fa33d = local_1a3;
              DAT_1803fa33f = local_1a1;
              return (ulonglong)bVar16;
            }
            DAT_1803fa330 = local_1b0;
            DAT_1803fa338 = 0;
            DAT_1803fa339 = local_1a7;
            DAT_1803fa33d = local_1a3;
            DAT_1803fa33f = local_1a1;
          }
          return (ulonglong)bVar16;
        }
        cVar7 = FUN_18008fbf0(local_198,uVar9,param_2 + local_174);
        if (cVar7 == '\0') {
          bVar16 = 0;
          goto LAB_1800902d0;
        }
        dVar20 = dVar4;
        if (bVar1) {
          dVar20 = dVar4 / ((double)iVar10 * dVar19 + dVar4);
        }
        local_140 = 0;
        local_148 = 0;
        local_160 = 0.0;
        local_138 = 0.0;
        cVar7 = FUN_18008fca0(local_198,uVar9,0,dVar20 * (double)CONCAT44(uVar23,uVar22),&local_140)
        ;
        if (((cVar7 == '\0') ||
            (cVar7 = FUN_18008fca0(local_198,uVar9,CONCAT44(uVar23,uVar22),uVar3,&local_148),
            cVar7 == '\0')) ||
           ((cVar7 = FUN_18008fca0(local_198,uVar9,local_140,local_148,&local_160), cVar7 == '\0' ||
            ((cVar7 = FUN_18008fca0(local_198,uVar9,DAT_1803813c8,DAT_180380e90,&local_138),
             cVar7 == '\0' || (local_160 < 0.0)))))) {
          bVar16 = 0;
        }
        else {
          bVar16 = 1;
        }
        if (bVar16 == 0) goto LAB_1800902d0;
        dVar20 = local_160 * param_3;
        dVar18 = cos(local_138);
        dVar13 = dVar13 + dVar18 * dVar20 * (double)*(float *)(param_1 + 0x18);
        local_130 = dVar13;
        dVar18 = sin(local_138);
        dVar2 = dVar2 + dVar18 * dVar20 * (double)*(float *)(param_1 + 0x1c);
        local_174 = iVar10 + 1;
        local_128 = dVar2;
      } while( true );
    }
  }
LAB_18008ff76:
  return (ulonglong)puVar11 & 0xffffffffffffff00;
}


