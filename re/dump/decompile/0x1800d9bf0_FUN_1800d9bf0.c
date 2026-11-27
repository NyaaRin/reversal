// 0x1800d9bf0  FUN_1800d9bf0
// size=503 thunk=false
// signature: undefined FUN_1800d9bf0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800d9bf0(longlong param_1,longlong param_2,char *param_3)

{
  short sVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined **ppuVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  
  ppuVar7 = &PTR_s_weapon_octo_grenade_18033d7a0;
  do {
    sVar3 = strlen(*ppuVar7);
    iVar2 = strncmp(param_3,*ppuVar7,sVar3 & 0xffffffff);
    if (iVar2 == 0) goto LAB_1800d9dc9;
    ppuVar7 = ppuVar7 + 1;
  } while (ppuVar7 != &Features::OctoCompat::OctoCompatFeature::vftable_meta_ptr);
  uVar4 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar4 = FUN_180241610(uVar4,0xba33a12acf3fe1c3);
  pcVar5 = (char *)FUN_1801fcfc0(uVar4);
  if (*pcVar5 == '\0') {
    *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
    *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  }
  else {
    uVar4 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
    uVar4 = FUN_180241610(uVar4,0xc94e595f119c0d27);
    piVar6 = (int *)FUN_1802029c0(uVar4);
    iVar2 = *piVar6;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (iVar2 < 3) {
      if (iVar2 == 1) {
LAB_1800d9dc9:
        *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
        *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
        return;
      }
    }
    else {
      iVar2 = 2;
    }
    if (DAT_1803fa608 == 0) {
      dVar9 = 0.0;
    }
    else {
      dVar9 = *(double *)(DAT_1803fa608 + 0x10);
    }
    bVar8 = iVar2 == 2;
    if (!bVar8) {
      if (((DAT_1803db45d == '\0') && (DAT_1803db438 == '\0')) &&
         ((*(byte *)(param_2 + 0x20) & 1) == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      dVar9 = (double)(float)dVar9;
      sVar1 = _dclass(dVar9);
      if (sVar1 < 1) {
        if (*(double *)(param_1 + 0x10) <= dVar9) {
          dVar10 = *(double *)(param_1 + 8);
        }
        else {
          *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
          dVar10 = DAT_1803813b0;
        }
        *(double *)(param_1 + 0x10) = dVar9;
        if (bVar8) {
          dVar10 = dVar9 + _DAT_180380ce0;
          *(double *)(param_1 + 8) = dVar10;
        }
        bVar8 = dVar9 < dVar10;
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
        *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
        bVar8 = false;
      }
    }
    if (bVar8) {
      *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x800;
      DAT_1803db5f1 = 1;
    }
  }
  return;
}


