// 0x18027d7d0  FUN_18027d7d0
// size=1751 thunk=false
// signature: undefined FUN_18027d7d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027d7d0(char param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  ulonglong uVar7;
  char cVar8;
  char *pcVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  char cVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_78 [32];
  char local_58;
  char local_57;
  char local_56;
  char local_55;
  char local_54;
  char local_53;
  uint local_50;
  uint local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  uVar7 = (ulonglong)_tls_index;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8);
  local_56 = param_1;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if ((param_1 == '\0') || (*(int *)(lVar2 + 0x2ae4) != 1)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  uVar20 = 0;
  cVar8 = '\0';
  cVar17 = '\0';
  local_58 = '\0';
  local_55 = '\0';
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_53 = '\0';
  cVar18 = '\0';
  local_50 = (uint)uVar7;
  local_57 = '\0';
  uVar19 = 0;
  local_48[4] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_54 = cVar4;
  uVar12 = uVar20;
  if (0 < *(int *)(lVar2 + 0x1498)) {
    do {
      uVar19 = uVar12;
      lVar3 = *(longlong *)(lVar2 + 0x14a0);
      lVar15 = (longlong)(int)uVar19 * 0x1c;
      iVar14 = *(int *)(lVar15 + lVar3);
      if (iVar14 == 1) {
        if (*(char *)(lVar2 + 0xd3) == '\0') {
          if ((param_1 != '\0') &&
             ((((uVar20 != 0 || (cVar17 != '\0')) || (local_53 != '\0')) || (cVar18 != '\0'))))
          break;
          uVar1 = *(undefined4 *)(lVar15 + 0xc + lVar3);
          *(undefined4 *)(lVar2 + 0x104) = *(undefined4 *)(lVar15 + 0x10 + lVar3);
          *(undefined4 *)(lVar2 + 0x100) = uVar1;
          *(undefined4 *)(lVar2 + 0x118) = *(undefined4 *)(lVar15 + 0x14 + lVar3);
          local_58 = '\x01';
          cVar8 = '\x01';
        }
      }
      else if (iVar14 == 3) {
        uVar12 = *(uint *)(lVar15 + 0xc + lVar3);
        if ((param_1 != '\0') &&
           ((((uVar20 >> (uVar12 & 0x1f) & 1) != 0 || (cVar17 != '\0')) ||
            ((*(int *)(lVar15 + 0x14 + lVar3) == 1 && (cVar8 != '\0')))))) break;
        uVar20 = uVar20 | 1 << (uVar12 & 0x1f);
        *(undefined1 *)((longlong)(int)uVar12 + 0x108 + lVar2) =
             *(undefined1 *)(lVar15 + 0x10 + lVar3);
        *(undefined4 *)(lVar2 + 0x118) = *(undefined4 *)(lVar15 + 0x14 + lVar3);
LAB_18027dab0:
        uVar7 = (ulonglong)local_50;
        cVar8 = local_58;
      }
      else if (iVar14 == 2) {
        if ((param_1 != '\0') && ((cVar8 != '\0' || (uVar20 != 0)))) break;
        cVar17 = '\x01';
        local_55 = '\x01';
        *(float *)(lVar2 + 0x114) = *(float *)(lVar15 + 0xc + lVar3) + *(float *)(lVar2 + 0x114);
        *(float *)(lVar2 + 0x110) = *(float *)(lVar15 + 0x10 + lVar3) + *(float *)(lVar2 + 0x110);
        *(undefined4 *)(lVar2 + 0x118) = *(undefined4 *)(lVar15 + 0x14 + lVar3);
      }
      else if (iVar14 == 4) {
        if ((*(byte *)(lVar2 + 0x28) & 0x40) == 0) {
          uVar12 = *(uint *)(lVar15 + 0xc + lVar3);
          pcVar9 = (char *)FUN_180267330(uVar12);
          uVar11 = (uint)((longlong)(pcVar9 + (-0x124 - lVar2)) >> 4);
          if (((local_56 == '\0') || (*pcVar9 == *(char *)(lVar15 + 0x10 + lVar3))) ||
             (((local_48[(longlong)(int)uVar11 >> 5] >> (uVar11 & 0x1f) & 1) == 0 && (uVar20 == 0)))
             ) {
            uVar5 = FUN_18027bf60();
            cVar4 = FUN_18027b760(uVar5 | uVar12);
            if (((local_54 == '\0') || (local_57 == '\0')) || (cVar4 != '\0')) {
              cVar8 = *(char *)(lVar15 + 0x10 + lVar3);
              if (*pcVar9 != cVar8) {
                local_53 = '\x01';
                local_48[(longlong)(int)uVar11 >> 5] =
                     local_48[(longlong)(int)uVar11 >> 5] | 1 << (uVar11 & 0x1f);
                if ((local_54 != '\0') && (local_50 = local_50 & 0xff, cVar4 == '\0')) {
                  local_50 = 1;
                }
              }
              *pcVar9 = cVar8;
              *(undefined4 *)(pcVar9 + 0xc) = *(undefined4 *)(lVar15 + 0x14 + lVar3);
              param_1 = local_56;
              cVar4 = local_54;
              cVar17 = local_55;
              cVar18 = local_57;
              goto LAB_18027dab0;
            }
          }
          break;
        }
      }
      else if (iVar14 == 5) {
        if ((*(byte *)(lVar2 + 0x28) & 0x40) == 0) {
          if (((param_1 == '\0') || (((uVar20 == 0 && (cVar8 == '\0')) && (cVar17 == '\0')))) &&
             ((cVar4 == '\0' || ((char)uVar7 == '\0')))) {
            uVar12 = *(uint *)(lVar15 + 0xc + lVar3);
            iVar14 = *(int *)(lVar2 + 0xbd4);
            uVar10 = 0xfffd;
            if (uVar12 < 0x10000) {
              uVar10 = (short)uVar12;
            }
            if (*(int *)(lVar2 + 0xbd0) == iVar14) {
              iVar13 = *(int *)(lVar2 + 0xbd0) + 1;
              if (iVar14 == 0) {
                iVar6 = 8;
              }
              else {
                iVar6 = iVar14 / 2 + iVar14;
              }
              if (iVar13 < iVar6) {
                iVar13 = iVar6;
              }
              if (iVar14 < iVar13) {
                _Dst = (void *)FUN_18026f580((longlong)iVar13 * 2);
                if (*(void **)(lVar2 + 0xbd8) != (void *)0x0) {
                  memcpy(_Dst,*(void **)(lVar2 + 0xbd8),(longlong)*(int *)(lVar2 + 0xbd0) * 2);
                  FUN_18026f680(*(undefined8 *)(lVar2 + 0xbd8));
                }
                *(void **)(lVar2 + 0xbd8) = _Dst;
                *(int *)(lVar2 + 0xbd4) = iVar13;
                cVar17 = local_55;
                cVar18 = local_57;
              }
            }
            *(undefined2 *)(*(longlong *)(lVar2 + 0xbd8) + (longlong)*(int *)(lVar2 + 0xbd0) * 2) =
                 uVar10;
            *(int *)(lVar2 + 0xbd0) = *(int *)(lVar2 + 0xbd0) + 1;
            param_1 = local_56;
            if (cVar4 != '\0') {
              cVar18 = '\x01';
              local_57 = '\x01';
            }
            goto LAB_18027dab0;
          }
          break;
        }
      }
      else if (iVar14 == 6) {
        *(bool *)(lVar2 + 0xbcc) = *(char *)(lVar15 + 0xc + lVar3) == '\0';
      }
      uVar19 = uVar19 + 1;
      uVar12 = uVar19;
    } while ((int)uVar19 < *(int *)(lVar2 + 0x1498));
  }
  uVar16 = 0;
  uVar7 = uVar16;
  if ((int)uVar19 < 1) {
    if (uVar19 == 0) goto LAB_18027dc7b;
  }
  else {
    do {
      FUN_18028a430(lVar2 + 0x14a8,uVar7 * 0x1c + *(longlong *)(lVar2 + 0x14a0));
      uVar12 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar19);
  }
  if (((*(byte *)(lVar2 + 0x28e4) & 0x80) != 0) && (0 < *(int *)(lVar2 + 0x1498))) {
    do {
      iVar14 = (int)uVar16;
      pcVar9 = "Remaining";
      if (iVar14 < (int)uVar19) {
        pcVar9 = "Processed";
      }
      FUN_18027d4f0(pcVar9,(longlong)iVar14 * 0x1c + *(longlong *)(lVar2 + 0x14a0));
      uVar16 = (ulonglong)(iVar14 + 1U);
    } while ((int)(iVar14 + 1U) < *(int *)(lVar2 + 0x1498));
  }
LAB_18027dc7b:
  if (uVar19 == *(uint *)(lVar2 + 0x1498)) {
    FUN_18028a4e0(lVar2 + 0x1498);
  }
  else {
    memmove(*(void **)(lVar2 + 0x14a0),
            (void *)((longlong)(int)uVar19 * 0x1c + (longlong)*(void **)(lVar2 + 0x14a0)),
            ((longlong)(int)*(uint *)(lVar2 + 0x1498) - (longlong)(int)uVar19) * 0x1c);
    *(int *)(lVar2 + 0x1498) = *(int *)(lVar2 + 0x1498) - uVar19;
  }
  if (*(char *)(lVar2 + 0xbcc) != '\0') {
    lVar3 = *(longlong *)(lVar2 + 0xf8);
    uVar12 = 0x200;
    do {
      if (6 < uVar12 - 0x290) {
        uVar7 = (ulonglong)uVar12;
        *(undefined1 *)(lVar3 + -0x1edc + uVar7 * 0x10) = 0;
        *(undefined4 *)(lVar3 + -0x1ed8 + uVar7 * 0x10) = 0xbf800000;
        *(undefined4 *)(lVar3 + -0x1ed4 + uVar7 * 0x10) = 0xbf800000;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x29b);
    *(undefined8 *)(lVar2 + 0x11c) = 0;
    FUN_180260a20(lVar2 + 0xbd0,0);
    *(undefined1 *)(lVar2 + 0xa24) = 0;
    *(undefined4 *)(lVar2 + 0xa28) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xa2c) = 0xbf800000;
    *(undefined1 *)(lVar2 + 0xa34) = 0;
    *(undefined4 *)(lVar2 + 0xa38) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xa3c) = 0xbf800000;
    *(undefined1 *)(lVar2 + 0xa44) = 0;
    *(undefined4 *)(lVar2 + 0xa48) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xa4c) = 0xbf800000;
    *(undefined1 *)(lVar2 + 0xa54) = 0;
    *(undefined4 *)(lVar2 + 0xa58) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xa5c) = 0xbf800000;
    *(undefined1 *)(lVar2 + 0xa64) = 0;
    *(undefined4 *)(lVar2 + 0xa68) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xa6c) = 0xbf800000;
    *(undefined1 *)(lVar2 + 0xa74) = 0;
    *(undefined4 *)(lVar2 + 0xa78) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xa7c) = 0xbf800000;
    *(undefined1 *)(lVar2 + 0xa84) = 0;
    *(undefined4 *)(lVar2 + 0xa88) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xa8c) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0x100) = 0xff7fffff;
    *(undefined4 *)(lVar2 + 0x104) = 0xff7fffff;
    *(undefined4 *)(lVar2 + 0x108) = 0;
    *(undefined4 *)(lVar2 + 0xba0) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xb8c) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xba4) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xb90) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xba8) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xb94) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xbac) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xb98) = 0xbf800000;
    *(undefined1 *)(lVar2 + 0x10c) = 0;
    *(undefined4 *)(lVar2 + 0xbb0) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xb9c) = 0xbf800000;
    *(undefined8 *)(lVar2 + 0x110) = 0;
  }
  return;
}


