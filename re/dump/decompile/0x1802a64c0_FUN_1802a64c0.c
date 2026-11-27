// 0x1802a64c0  FUN_1802a64c0
// size=1414 thunk=false
// signature: undefined FUN_1802a64c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802a64c0(longlong param_1)

{
  int *piVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  
  lVar5 = *(longlong *)(param_1 + 0x180);
  if ((((*(float *)(param_1 + 0xf4) <= *(float *)(lVar5 + 0x274) &&
         *(float *)(lVar5 + 0x274) != *(float *)(param_1 + 0xf4)) &&
       (*(float *)(lVar5 + 0x26c) <= *(float *)(param_1 + 0xfc) &&
        *(float *)(param_1 + 0xfc) != *(float *)(lVar5 + 0x26c))) &&
      (*(float *)(param_1 + 0xf0) <= *(float *)(lVar5 + 0x270) &&
       *(float *)(lVar5 + 0x270) != *(float *)(param_1 + 0xf0))) &&
     (*(float *)(lVar5 + 0x268) <= *(float *)(param_1 + 0xf8) &&
      *(float *)(param_1 + 0xf8) != *(float *)(lVar5 + 0x268))) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x2c8);
    FUN_180297210(*(undefined8 *)(param_1 + 0x1a0),lVar5,0);
    FUN_180292550(lVar5,param_1 + 0x140,param_1 + 0x148,0);
    fVar9 = DAT_180380bb0;
    if (*(short *)(param_1 + 0x78) == 0) {
      lVar15 = param_1 + 0x1a8;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0x1c8) + (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18;
    }
    fVar19 = DAT_180380bb0;
    if ((*(uint *)(param_1 + 4) >> 8 & 1) == 0) {
      fVar19 = 0.0;
    }
    pfVar16 = (float *)(param_1 + 0x104);
    if (*(short *)(param_1 + 0x22a) < 1) {
      pfVar16 = (float *)(param_1 + 0x114);
    }
    fVar18 = *(float *)(param_1 + 0x104);
    fVar2 = *(float *)(param_1 + 0x10c);
    fVar17 = *(float *)(param_1 + 0xe8) + *pfVar16;
    fVar20 = fVar18;
    if (fVar18 <= fVar17) {
      fVar20 = fVar17;
    }
    fVar20 = fVar20 + fVar19;
    fVar19 = fVar20;
    if (*(char *)(param_1 + 0x23d) != '\0') {
      if (*(short *)(param_1 + 0x22a) < 1) {
        fVar18 = *(float *)(param_1 + 0x114);
      }
      fVar18 = fVar18 + *(float *)(lVar15 + 8);
      fVar19 = fVar2;
      if (fVar18 <= fVar2) {
        fVar19 = fVar18;
      }
    }
    if (((*(uint *)(param_1 + 4) >> 9 & 1) != 0) && (uVar14 = 0, 0 < *(int *)(param_1 + 0x6c))) {
      do {
        if ((*(uint *)(*(longlong *)(param_1 + 0x48) + ((longlong)(int)uVar14 >> 5) * 4) >>
             (uVar14 & 0x1f) & 1) != 0) {
          lVar15 = *(longlong *)(param_1 + 0x18);
          sVar3 = *(short *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar14 * 2);
          lVar13 = (longlong)sVar3 * 0x74;
          if ((*(short *)(param_1 + 0x212) == sVar3) &&
             (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x78))) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          fVar18 = *(float *)(lVar15 + 0xc + lVar13);
          if (((fVar18 < *(float *)(param_1 + 0x128) || fVar18 == *(float *)(param_1 + 0x128)) ||
              (bVar8)) &&
             ((((*(short *)(lVar15 + 0x5c + lVar13) != -1 ||
                ((*(uint *)(lVar15 + lVar13) & 0x40000020) == 0)) ||
               (((*(uint *)(param_1 + 4) & 0xe000) == 0x4000 &&
                ((*(uint *)(param_1 + 4) >> 0x10 & 1) == 0)))) &&
              (*(float *)(lVar15 + 0x24 + lVar13) < fVar18)))) {
            fVar18 = fVar2;
            if (((int)*(short *)(param_1 + 0x22e) != uVar14 + 1) &&
               ((((*(uint *)(param_1 + 4) >> 0xc & 1) == 0 ||
                 ((*(short *)(param_1 + 0x20c) != sVar3 && (!bVar8)))) &&
                (fVar18 = fVar19, (*(uint *)(param_1 + 4) & 0x1800) == 0)))) {
              fVar18 = fVar2;
            }
            if (fVar20 < fVar18) {
              if ((*(short *)(param_1 + 0x212) == sVar3) &&
                 (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x78))) {
                iVar12 = 1;
LAB_1802a6783:
                uVar10 = FUN_18026a6a0(iVar12 + 0x1d,fVar9);
              }
              else {
                iVar12 = 0;
                if (*(short *)(param_1 + 0x20c) == sVar3) goto LAB_1802a6783;
                if (((int)*(short *)(param_1 + 0x22e) == uVar14 + 1) ||
                   ((*(uint *)(param_1 + 4) & 0x1800) != 0)) {
                  uVar10 = *(undefined4 *)(param_1 + 0xa4);
                }
                else {
                  uVar10 = *(undefined4 *)(param_1 + 0xa8);
                }
              }
              FUN_180294e30(lVar5,*(undefined4 *)(lVar15 + 0xc + lVar13),fVar20,fVar18,uVar10,fVar9)
              ;
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < *(int *)(param_1 + 0x6c));
    }
    uVar14 = *(uint *)(param_1 + 4);
    if ((uVar14 & 0x500) != 0) {
      fVar19 = *(float *)(param_1 + 0xf0);
      fVar18 = *(float *)(param_1 + 0xf4);
      fVar2 = *(float *)(param_1 + 0xf8);
      fVar20 = *(float *)(param_1 + 0xfc);
      uVar4 = *(uint *)(param_1 + 0xa4);
      if ((uVar14 & 0x500) == 0x500) {
        if ((uVar4 & 0xff000000) != 0) {
          local_res10 = fVar19 + DAT_180380ac0;
          local_res14 = fVar18 + DAT_180380ac0;
          local_res8 = _DAT_180380abc;
          if ((*(byte *)(lVar5 + 0x30) & 1) != 0) {
            local_res8 = DAT_180380ac0;
          }
          local_resc = fVar20 - local_res8;
          local_res8 = fVar2 - local_res8;
          FUN_180294990(lVar5,&local_res10,&local_res8,0,0);
          FUN_1802929d0(lVar5,*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x50),uVar4,
                        fVar9,0x200);
          *(undefined4 *)(lVar5 + 0x50) = 0;
        }
      }
      else if ((uVar14 >> 10 & 1) == 0) {
        if ((uVar14 >> 8 & 1) != 0) {
          FUN_180294d60(lVar5,fVar19,fVar2,fVar18,uVar4,fVar9);
          FUN_180294d60(lVar5,fVar19,fVar2,fVar20,uVar4,fVar9);
        }
      }
      else {
        FUN_180294e30(lVar5,fVar19,fVar18,fVar20,uVar4,fVar9);
        FUN_180294e30(lVar5,fVar2,fVar18,fVar20,uVar4,fVar9);
      }
    }
    if (((((*(byte *)(param_1 + 4) & 0x80) != 0) &&
         (fVar19 = *(float *)(param_1 + 0x80), fVar19 < *(float *)(param_1 + 0xfc))) &&
        (*(float *)(param_1 + 0x134) <= fVar19)) && (fVar19 < *(float *)(param_1 + 0x13c))) {
      FUN_180294d60(lVar5,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),fVar19,
                    *(undefined4 *)(param_1 + 0xa8),fVar9);
    }
    piVar1 = (int *)(lVar5 + 0xa0);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      puVar11 = (undefined4 *)(*(longlong *)(lVar5 + 0x38) + 0x38);
    }
    else {
      puVar11 = (undefined4 *)
                ((longlong)(*(int *)(lVar5 + 0xa0) + -1) * 0x10 + *(longlong *)(lVar5 + 0xa8));
    }
    uVar10 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    *(undefined4 *)(lVar5 + 0x60) = *puVar11;
    *(undefined4 *)(lVar5 + 100) = uVar10;
    *(undefined4 *)(lVar5 + 0x68) = uVar6;
    *(undefined4 *)(lVar5 + 0x6c) = uVar7;
    FUN_180292360(lVar5);
  }
  return;
}


