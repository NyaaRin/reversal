// 0x1802a81b0  FUN_1802a81b0
// size=1700 thunk=false
// signature: undefined FUN_1802a81b0()
// status: ok


void FUN_1802a81b0(longlong param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  char *pcVar15;
  byte *pbVar16;
  longlong lVar17;
  char *pcVar18;
  byte bVar19;
  int iVar20;
  undefined1 uVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar5 + 0xec0);
  if (*(char *)(*(longlong *)(lVar6 + 0x1520) + 0xd1) != '\0') {
    return;
  }
  sVar3 = *(short *)(param_1 + 0x226);
  lVar14 = (longlong)sVar3;
  bVar7 = false;
  if ((sVar3 < 0) || (*(int *)(param_1 + 0x6c) <= (int)sVar3)) {
    lVar14 = 0xffffffff;
  }
  else if (sVar3 != -1) {
    pbVar16 = (byte *)(lVar14 * 0x74 + *(longlong *)(param_1 + 0x18));
    goto LAB_1802a8251;
  }
  pbVar16 = (byte *)0x0;
LAB_1802a8251:
  if ((param_2 & 1) != 0) {
    if (pbVar16 != (byte *)0x0) {
      if (((*pbVar16 & 0x20) == 0) && (pbVar16[0x66] != 0)) {
        uVar21 = 1;
      }
      else {
        uVar21 = 0;
      }
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pcVar18 = *(char **)(*(longlong *)(lVar5 + 0xec0) + 0x2810);
      pcVar15 = "*Missing Text*";
      if (pcVar18 != (char *)0x0) {
        pcVar15 = pcVar18;
      }
      cVar10 = FUN_1802c42f0(pcVar15,pcVar18,0,0,uVar21);
      if (cVar10 != '\0') {
        lVar17 = (longlong)(int)lVar14 * 0x74;
        if (*(char *)(lVar17 + 0x66 + *(longlong *)(param_1 + 0x18)) != '\0') {
          *(undefined1 *)(lVar17 + 0x70 + *(longlong *)(param_1 + 0x18)) = 1;
          *(short *)(param_1 + 0x210) = (short)lVar14;
        }
      }
    }
    if ((*(short *)(param_1 + 0x204) == *(short *)(param_1 + 0x202)) &&
       ((*(uint *)(param_1 + 4) & 0xe000) != 0x4000)) {
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pcVar18 = *(char **)(*(longlong *)(lVar5 + 0xec0) + 0x2818);
      pcVar15 = "*Missing Text*";
      if (pcVar18 != (char *)0x0) {
        pcVar15 = pcVar18;
      }
    }
    else {
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pcVar18 = *(char **)(*(longlong *)(lVar5 + 0xec0) + 0x2820);
      pcVar15 = "*Missing Text*";
      if (pcVar18 != (char *)0x0) {
        pcVar15 = pcVar18;
      }
    }
    cVar10 = FUN_1802c42f0(pcVar15);
    if ((cVar10 != '\0') && (iVar20 = 0, 0 < *(int *)(param_1 + 0x6c))) {
      do {
        lVar17 = (longlong)iVar20 * 0x74;
        lVar14 = *(longlong *)(param_1 + 0x18);
        if ((*(char *)(lVar17 + 0x66 + lVar14) != '\0') || ((*(byte *)(lVar17 + lVar14) & 8) != 0))
        {
          *(undefined2 *)(lVar17 + 0x6f + lVar14) = 0x102;
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < *(int *)(param_1 + 0x6c));
    }
    bVar7 = true;
  }
  if ((param_2 & 2) != 0) {
    cVar10 = *(char *)(param_1 + 0x242);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pcVar18 = *(char **)(*(longlong *)(lVar5 + 0xec0) + 0x2828);
    pcVar15 = "*Missing Text*";
    if (pcVar18 != (char *)0x0) {
      pcVar15 = pcVar18;
    }
    cVar10 = FUN_1802c42f0(pcVar15,pcVar18,0,0,cVar10 == '\0');
    if (cVar10 != '\0') {
      *(undefined1 *)(param_1 + 0x244) = 1;
    }
    bVar7 = true;
  }
  if ((param_2 & 4) != 0) {
    if (bVar7) {
      FUN_1802afb40();
    }
    if ((((*(int *)(lVar6 + 0x1594) == 0) ||
         (*(longlong *)(lVar6 + 0x15b8) != *(longlong *)(lVar6 + 0x1520))) ||
        (*(short *)(param_1 + 0x21a) == -1)) || (*(char *)(lVar6 + 0x15a4) == '\0')) {
      bVar7 = false;
      iVar20 = 0;
      iVar11 = *(int *)(param_1 + 0x6c) + -1;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x6c) + -1;
      bVar7 = true;
      iVar23 = (int)*(short *)((longlong)*(short *)(param_1 + 0x21a) * 0x74 + 0x56 +
                              *(longlong *)(param_1 + 0x18));
      iVar20 = 0;
      if (iVar11 < 0) {
        iVar20 = iVar11;
      }
      if (iVar23 != iVar20) {
        iVar12 = (int)*(short *)(param_1 + 0x22c);
        iVar11 = iVar20;
        if (0 < *(short *)(param_1 + 0x22c)) {
          if (iVar23 < iVar12) {
            iVar11 = iVar12 + -1;
            if (iVar20 < iVar12 + -1) {
              iVar11 = iVar20;
            }
          }
          else {
            iVar11 = iVar12;
            if (iVar12 <= iVar20) {
              iVar11 = iVar20;
            }
          }
        }
        iVar12 = iVar23;
        iVar13 = -1;
        if (iVar23 < iVar11) {
          iVar13 = 1;
        }
        while( true ) {
          if (((iVar11 <= iVar23) || (iVar11 < iVar12)) &&
             ((iVar20 = iVar11, iVar23 <= iVar11 || (iVar12 < iVar11)))) goto LAB_1802a84ee;
          if ((*(byte *)((longlong)*(short *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar12 * 2)
                         * 0x74 + *(longlong *)(param_1 + 0x18)) & 0x40) != 0) break;
          iVar12 = iVar12 + iVar13;
        }
        iVar20 = iVar12 - iVar13;
        if (iVar12 == iVar23) {
          iVar20 = iVar23;
        }
      }
LAB_1802a84ee:
      iVar12 = *(int *)(param_1 + 0x6c) + -1;
      iVar11 = 0;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      if (iVar23 != iVar11) {
        iVar13 = (int)*(short *)(param_1 + 0x22c);
        iVar12 = iVar11;
        if (0 < *(short *)(param_1 + 0x22c)) {
          if (iVar23 < iVar13) {
            iVar12 = iVar13 + -1;
            if (iVar11 < iVar13 + -1) {
              iVar12 = iVar11;
            }
          }
          else {
            iVar12 = iVar13;
            if (iVar13 <= iVar11) {
              iVar12 = iVar11;
            }
          }
        }
        bVar7 = true;
        iVar24 = -1;
        iVar13 = iVar23;
        if (iVar23 < iVar12) {
          iVar24 = 1;
        }
        while( true ) {
          if (((iVar12 <= iVar23) || (iVar12 < iVar13)) &&
             ((iVar11 = iVar12, iVar23 <= iVar12 || (iVar13 < iVar12)))) goto LAB_1802a85ca;
          if ((*(byte *)((longlong)*(short *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar13 * 2)
                         * 0x74 + *(longlong *)(param_1 + 0x18)) & 0x40) != 0) break;
          iVar13 = iVar13 + iVar24;
        }
        iVar11 = iVar13 - iVar24;
        if (iVar13 == iVar23) {
          iVar11 = iVar23;
        }
      }
    }
LAB_1802a85ca:
    FUN_180279080(0x10,0);
    uVar9 = DAT_180381384;
    fVar8 = DAT_180380ac0;
    iVar23 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      do {
        lVar14 = *(longlong *)(param_1 + 0x18);
        sVar3 = *(short *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar23 * 2);
        lVar17 = (longlong)sVar3 * 0x74;
        if ((*(uint *)(lVar17 + lVar14) & 1) == 0) {
          if ((*(char *)(param_1 + 0x239) == '\0') && (*(short *)(param_1 + 0x206) <= sVar3)) {
            pcVar18 = "";
LAB_1802a865d:
            if (*pcVar18 == '\0') goto LAB_1802a8662;
          }
          else {
            sVar4 = *(short *)(lVar17 + 0x54 + lVar14);
            if (sVar4 == -1) {
              pcVar18 = "";
              goto LAB_1802a865d;
            }
            pcVar18 = (char *)((longlong)sVar4 + *(longlong *)(param_1 + 0x198));
            if (pcVar18 != (char *)0x0) goto LAB_1802a865d;
LAB_1802a8662:
            pcVar18 = "<Unknown>";
          }
          cVar10 = *(char *)(lVar17 + 0x67 + lVar14);
          bVar19 = ~(byte)(*(uint *)(lVar17 + lVar14) >> 7) & 1;
          bVar22 = bVar19;
          if ((cVar10 != '\0') && (bVar22 = 0, 1 < *(short *)(param_1 + 0x202))) {
            bVar22 = bVar19;
          }
          if ((bVar7) &&
             ((iVar12 = (int)*(short *)(lVar17 + 0x56 + lVar14), iVar12 < iVar20 ||
              (iVar11 < iVar12)))) {
            bVar22 = 0;
          }
          cVar10 = FUN_1802a7f10(pcVar18,cVar10,bVar22);
          if (cVar10 != '\0') {
            *(bool *)(lVar17 + 0x68 + lVar14) = *(char *)(lVar17 + 0x67 + lVar14) == '\0';
          }
          if (*(char *)(lVar5 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          iVar12 = *(int *)(*(longlong *)(lVar5 + 0xec0) + 0x1594);
          if ((((iVar12 != 0) && (iVar12 == *(int *)(*(longlong *)(lVar5 + 0xec0) + 0x1ef8))) &&
              (cVar10 = FUN_18027bec0(0,uVar9), cVar10 != '\0')) &&
             ((*(int *)(lVar6 + 0x15b4) == 1 && ((*(byte *)(param_1 + 4) & 2) != 0)))) {
            *(undefined1 *)(lVar6 + 0x15a4) = 1;
            *(short *)(param_1 + 0x21a) = sVar3;
            cVar10 = FUN_18026ee60(0);
            if (cVar10 == '\0') {
              fVar1 = *(float *)(lVar6 + 0x1f10);
              fVar2 = *(float *)(lVar6 + 0x1f08);
              fVar25 = *(float *)(lVar6 + 0x104);
              iVar12 = 1;
              if (fVar25 < (fVar1 + fVar2) * fVar8) {
                iVar12 = -1;
              }
              if (iVar12 < 0) {
                fVar25 = fVar2 - fVar25;
              }
              else {
                fVar25 = fVar25 - fVar1;
              }
              ceilf(fVar25 / (fVar1 - fVar2));
              FUN_1802a21d0(param_1,(longlong)sVar3 & 0xffffffff);
            }
          }
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 < *(int *)(param_1 + 0x6c));
    }
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar5 + 0xec0);
    iVar20 = *(int *)(lVar5 + 0x2008);
    if (iVar20 < 2) {
      FUN_18027e9c0("Calling PopItemFlag() too many times!");
    }
    else {
      *(int *)(lVar5 + 0x2008) = iVar20 + -1;
      *(undefined4 *)(lVar5 + 0x1eb8) =
           *(undefined4 *)(*(longlong *)(lVar5 + 0x2010) + -8 + (longlong)iVar20 * 4);
    }
  }
  return;
}


