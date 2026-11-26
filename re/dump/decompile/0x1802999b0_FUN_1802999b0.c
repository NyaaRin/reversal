// 0x1802999b0  FUN_1802999b0
// size=1090 thunk=false
// signature: undefined FUN_1802999b0()
// status: ok


void FUN_1802999b0(uint *param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  uint uVar50;
  undefined4 uVar51;
  ushort *puVar52;
  longlong lVar53;
  undefined2 *puVar54;
  undefined8 *puVar55;
  char *pcVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  char *pcVar60;
  longlong lVar61;
  int iVar62;
  char *pcVar63;
  uint uVar64;
  uint uVar65;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar51 = 2;
  if ((*param_1 & 2) == 0) {
    uVar51 = 0xf5;
  }
  iVar57 = 0x1b;
  lVar1 = *(longlong *)(param_1 + 0xac);
  local_60 = 0;
  uStack_58 = 0;
  iVar59 = 0x1b;
  iVar58 = 2;
  if ((*param_1 & 2) == 0) {
    iVar58 = iVar59;
  }
  puVar52 = (ushort *)FUN_18029c780(param_1,*(undefined4 *)(lVar1 + 0xec));
  if (puVar52 == (ushort *)0x0) {
    if (*(longlong *)(param_1 + 0xac) == 0) {
      FUN_18029bdd0(param_1);
    }
    uVar50 = FUN_18029c320(param_1,uVar51,iVar58,0);
    if ((uVar50 != 0xffffffff) &&
       (FUN_1802990c0(param_1,uVar50,&local_60), *(byte *)((longlong)param_1 + 0x51) != 0)) {
      lVar61 = *(longlong *)(*(longlong *)(param_1 + 0xac) + 0x68);
      lVar53 = (longlong)
               (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xac) + 0x78) +
                        (ulonglong)(uVar50 & 0x7ffff) * 4) << 0xc) >> 0xc;
      FUN_1802981f0(*(undefined8 *)(param_1 + 0xe),*(undefined2 *)(lVar61 + lVar53 * 8),
                    *(undefined2 *)(lVar61 + 2 + lVar53 * 8),
                    *(undefined2 *)(lVar61 + 4 + lVar53 * 8),
                    *(undefined2 *)(lVar61 + 6 + lVar53 * 8));
      *(byte *)((longlong)param_1 + 0x52) = 0;
    }
    uVar64 = (uint)local_60._2_2_;
    uVar65 = (uint)(ushort)local_60;
    *(uint *)(lVar1 + 0xec) = uVar50;
    cVar48 = s__________________1803815b0[0xf];
    cVar47 = s__________________1803815b0[0xe];
    cVar46 = s__________________1803815b0[0xd];
    cVar45 = s__________________1803815b0[0xc];
    cVar44 = s__________________1803815b0[0xb];
    cVar43 = s__________________1803815b0[10];
    cVar42 = s__________________1803815b0[9];
    cVar41 = s__________________1803815b0[8];
    cVar40 = s__________________1803815b0[7];
    cVar39 = s__________________1803815b0[6];
    cVar38 = s__________________1803815b0[5];
    cVar37 = s__________________1803815b0[4];
    cVar36 = s__________________1803815b0[3];
    cVar35 = s__________________1803815b0[2];
    cVar34 = s__________________1803815b0[1];
    cVar33 = s__________________1803815b0[0];
    lVar1 = *(longlong *)(param_1 + 0xe);
    iVar58 = *(int *)(lVar1 + 0x18);
    if ((*param_1 & 2) == 0) {
      pcVar56 = 
      "..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...." /* TRUNCATED STRING LITERAL */
      ;
      pcVar60 = 
      "..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...." /* TRUNCATED STRING LITERAL */
      ;
      if (iVar58 == 0) {
        lVar61 = (longlong)
                 (int)((uVar64 * *(int *)(lVar1 + 0x1c) + uVar65) * *(int *)(lVar1 + 0x24)) +
                 *(longlong *)(lVar1 + 0x28);
        do {
          lVar53 = 0;
          do {
            uVar51 = 0;
            if (pcVar60[lVar53] == '.') {
              uVar51 = 0xffffffff;
            }
            *(undefined4 *)(lVar61 + lVar53 * 4) = uVar51;
            uVar51 = 0;
            if (pcVar60[lVar53 + 1] == '.') {
              uVar51 = 0xffffffff;
            }
            *(undefined4 *)(lVar61 + 4 + lVar53 * 4) = uVar51;
            lVar53 = lVar53 + 2;
          } while (lVar53 != 0x7a);
          pcVar60 = pcVar60 + 0x7a;
          lVar61 = lVar61 + (longlong)*(int *)(lVar1 + 0x1c) * 4;
          iVar59 = iVar59 + -1;
        } while (iVar59 != 0);
      }
      else if (iVar58 == 1) {
        iVar58 = 0x1b;
        pcVar63 = (char *)((longlong)
                           (int)(((uint)local_60._2_2_ * *(int *)(lVar1 + 0x1c) + uVar65) *
                                *(int *)(lVar1 + 0x24)) + *(longlong *)(lVar1 + 0x28));
        do {
          if ((pcVar60 + 0x79 < pcVar63) || (iVar59 = 0, pcVar63 + 0x79 < pcVar60)) {
            cVar49 = pcVar60[1];
            cVar2 = pcVar60[2];
            cVar3 = pcVar60[3];
            cVar4 = pcVar60[4];
            cVar5 = pcVar60[5];
            cVar6 = pcVar60[6];
            cVar7 = pcVar60[7];
            cVar8 = pcVar60[8];
            cVar9 = pcVar60[9];
            cVar10 = pcVar60[10];
            cVar11 = pcVar60[0xb];
            cVar12 = pcVar60[0xc];
            cVar13 = pcVar60[0xd];
            cVar14 = pcVar60[0xe];
            cVar15 = pcVar60[0xf];
            cVar16 = pcVar60[0x10];
            cVar17 = pcVar60[0x11];
            cVar18 = pcVar60[0x12];
            cVar19 = pcVar60[0x13];
            cVar20 = pcVar60[0x14];
            cVar21 = pcVar60[0x15];
            cVar22 = pcVar60[0x16];
            cVar23 = pcVar60[0x17];
            cVar24 = pcVar60[0x18];
            cVar25 = pcVar60[0x19];
            cVar26 = pcVar60[0x1a];
            cVar27 = pcVar60[0x1b];
            cVar28 = pcVar60[0x1c];
            cVar29 = pcVar60[0x1d];
            cVar30 = pcVar60[0x1e];
            cVar31 = pcVar60[0x1f];
            *pcVar63 = -(cVar33 == *pcVar60);
            pcVar63[1] = -(cVar34 == cVar49);
            pcVar63[2] = -(cVar35 == cVar2);
            pcVar63[3] = -(cVar36 == cVar3);
            pcVar63[4] = -(cVar37 == cVar4);
            pcVar63[5] = -(cVar38 == cVar5);
            pcVar63[6] = -(cVar39 == cVar6);
            pcVar63[7] = -(cVar40 == cVar7);
            pcVar63[8] = -(cVar41 == cVar8);
            pcVar63[9] = -(cVar42 == cVar9);
            pcVar63[10] = -(cVar43 == cVar10);
            pcVar63[0xb] = -(cVar44 == cVar11);
            pcVar63[0xc] = -(cVar45 == cVar12);
            pcVar63[0xd] = -(cVar46 == cVar13);
            pcVar63[0xe] = -(cVar47 == cVar14);
            pcVar63[0xf] = -(cVar48 == cVar15);
            cVar49 = pcVar60[0x20];
            cVar2 = pcVar60[0x21];
            cVar3 = pcVar60[0x22];
            cVar4 = pcVar60[0x23];
            cVar5 = pcVar60[0x24];
            cVar6 = pcVar60[0x25];
            cVar7 = pcVar60[0x26];
            cVar8 = pcVar60[0x27];
            cVar9 = pcVar60[0x28];
            cVar10 = pcVar60[0x29];
            cVar11 = pcVar60[0x2a];
            cVar12 = pcVar60[0x2b];
            cVar13 = pcVar60[0x2c];
            cVar14 = pcVar60[0x2d];
            cVar15 = pcVar60[0x2e];
            cVar32 = pcVar60[0x2f];
            pcVar63[0x10] = -(cVar16 == cVar33);
            pcVar63[0x11] = -(cVar17 == cVar34);
            pcVar63[0x12] = -(cVar18 == cVar35);
            pcVar63[0x13] = -(cVar19 == cVar36);
            pcVar63[0x14] = -(cVar20 == cVar37);
            pcVar63[0x15] = -(cVar21 == cVar38);
            pcVar63[0x16] = -(cVar22 == cVar39);
            pcVar63[0x17] = -(cVar23 == cVar40);
            pcVar63[0x18] = -(cVar24 == cVar41);
            pcVar63[0x19] = -(cVar25 == cVar42);
            pcVar63[0x1a] = -(cVar26 == cVar43);
            pcVar63[0x1b] = -(cVar27 == cVar44);
            pcVar63[0x1c] = -(cVar28 == cVar45);
            pcVar63[0x1d] = -(cVar29 == cVar46);
            pcVar63[0x1e] = -(cVar30 == cVar47);
            pcVar63[0x1f] = -(cVar31 == cVar48);
            cVar16 = pcVar60[0x30];
            cVar17 = pcVar60[0x31];
            cVar18 = pcVar60[0x32];
            cVar19 = pcVar60[0x33];
            cVar20 = pcVar60[0x34];
            cVar21 = pcVar60[0x35];
            cVar22 = pcVar60[0x36];
            cVar23 = pcVar60[0x37];
            cVar24 = pcVar60[0x38];
            cVar25 = pcVar60[0x39];
            cVar26 = pcVar60[0x3a];
            cVar27 = pcVar60[0x3b];
            cVar28 = pcVar60[0x3c];
            cVar29 = pcVar60[0x3d];
            cVar30 = pcVar60[0x3e];
            cVar31 = pcVar60[0x3f];
            pcVar63[0x20] = -(cVar49 == cVar33);
            pcVar63[0x21] = -(cVar2 == cVar34);
            pcVar63[0x22] = -(cVar3 == cVar35);
            pcVar63[0x23] = -(cVar4 == cVar36);
            pcVar63[0x24] = -(cVar5 == cVar37);
            pcVar63[0x25] = -(cVar6 == cVar38);
            pcVar63[0x26] = -(cVar7 == cVar39);
            pcVar63[0x27] = -(cVar8 == cVar40);
            pcVar63[0x28] = -(cVar9 == cVar41);
            pcVar63[0x29] = -(cVar10 == cVar42);
            pcVar63[0x2a] = -(cVar11 == cVar43);
            pcVar63[0x2b] = -(cVar12 == cVar44);
            pcVar63[0x2c] = -(cVar13 == cVar45);
            pcVar63[0x2d] = -(cVar14 == cVar46);
            pcVar63[0x2e] = -(cVar15 == cVar47);
            pcVar63[0x2f] = -(cVar32 == cVar48);
            pcVar63[0x30] = -(cVar16 == cVar33);
            pcVar63[0x31] = -(cVar17 == cVar34);
            pcVar63[0x32] = -(cVar18 == cVar35);
            pcVar63[0x33] = -(cVar19 == cVar36);
            pcVar63[0x34] = -(cVar20 == cVar37);
            pcVar63[0x35] = -(cVar21 == cVar38);
            pcVar63[0x36] = -(cVar22 == cVar39);
            pcVar63[0x37] = -(cVar23 == cVar40);
            pcVar63[0x38] = -(cVar24 == cVar41);
            pcVar63[0x39] = -(cVar25 == cVar42);
            pcVar63[0x3a] = -(cVar26 == cVar43);
            pcVar63[0x3b] = -(cVar27 == cVar44);
            pcVar63[0x3c] = -(cVar28 == cVar45);
            pcVar63[0x3d] = -(cVar29 == cVar46);
            pcVar63[0x3e] = -(cVar30 == cVar47);
            pcVar63[0x3f] = -(cVar31 == cVar48);
            iVar59 = 0x40;
          }
          do {
            cVar49 = '\0';
            if (pcVar60[iVar59] == '.') {
              cVar49 = -1;
            }
            iVar62 = iVar59 + 1;
            pcVar63[iVar59] = cVar49;
            iVar59 = iVar62;
          } while (iVar62 < 0x7a);
          pcVar60 = pcVar60 + 0x7a;
          pcVar63 = pcVar63 + *(int *)(lVar1 + 0x1c);
          iVar58 = iVar58 + -1;
        } while (iVar58 != 0);
      }
      cVar48 = UNK_1803817bf;
      cVar47 = UNK_1803817be;
      cVar46 = UNK_1803817bd;
      cVar45 = UNK_1803817bc;
      cVar44 = UNK_1803817bb;
      cVar43 = UNK_1803817ba;
      cVar42 = UNK_1803817b9;
      cVar41 = UNK_1803817b8;
      cVar40 = UNK_1803817b7;
      cVar39 = UNK_1803817b6;
      cVar38 = UNK_1803817b5;
      cVar37 = UNK_1803817b4;
      cVar36 = UNK_1803817b3;
      cVar35 = UNK_1803817b2;
      cVar34 = UNK_1803817b1;
      cVar33 = DAT_1803817b0;
      lVar1 = *(longlong *)(param_1 + 0xe);
      if (*(int *)(lVar1 + 0x18) == 0) {
        lVar61 = (longlong)
                 (int)((uVar64 * *(int *)(lVar1 + 0x1c) + (ushort)local_60 + 0x7b) *
                      *(int *)(lVar1 + 0x24)) + *(longlong *)(lVar1 + 0x28);
        do {
          lVar53 = 0;
          do {
            uVar51 = 0;
            if (pcVar56[lVar53] == 'X') {
              uVar51 = 0xffffffff;
            }
            *(undefined4 *)(lVar61 + lVar53 * 4) = uVar51;
            uVar51 = 0;
            if (pcVar56[lVar53 + 1] == 'X') {
              uVar51 = 0xffffffff;
            }
            *(undefined4 *)(lVar61 + 4 + lVar53 * 4) = uVar51;
            lVar53 = lVar53 + 2;
          } while (lVar53 != 0x7a);
          pcVar56 = pcVar56 + 0x7a;
          lVar61 = lVar61 + (longlong)*(int *)(lVar1 + 0x1c) * 4;
          iVar57 = iVar57 + -1;
        } while (iVar57 != 0);
      }
      else if (*(int *)(lVar1 + 0x18) == 1) {
        pcVar60 = (char *)((longlong)
                           (int)((uVar64 * *(int *)(lVar1 + 0x1c) + (ushort)local_60 + 0x7b) *
                                *(int *)(lVar1 + 0x24)) + *(longlong *)(lVar1 + 0x28));
        do {
          if ((pcVar56 + 0x79 < pcVar60) || (iVar58 = 0, pcVar60 + 0x79 < pcVar56)) {
            cVar49 = pcVar56[1];
            cVar2 = pcVar56[2];
            cVar3 = pcVar56[3];
            cVar4 = pcVar56[4];
            cVar5 = pcVar56[5];
            cVar6 = pcVar56[6];
            cVar7 = pcVar56[7];
            cVar8 = pcVar56[8];
            cVar9 = pcVar56[9];
            cVar10 = pcVar56[10];
            cVar11 = pcVar56[0xb];
            cVar12 = pcVar56[0xc];
            cVar13 = pcVar56[0xd];
            cVar14 = pcVar56[0xe];
            cVar15 = pcVar56[0xf];
            cVar16 = pcVar56[0x10];
            cVar17 = pcVar56[0x11];
            cVar18 = pcVar56[0x12];
            cVar19 = pcVar56[0x13];
            cVar20 = pcVar56[0x14];
            cVar21 = pcVar56[0x15];
            cVar22 = pcVar56[0x16];
            cVar23 = pcVar56[0x17];
            cVar24 = pcVar56[0x18];
            cVar25 = pcVar56[0x19];
            cVar26 = pcVar56[0x1a];
            cVar27 = pcVar56[0x1b];
            cVar28 = pcVar56[0x1c];
            cVar29 = pcVar56[0x1d];
            cVar30 = pcVar56[0x1e];
            cVar31 = pcVar56[0x1f];
            *pcVar60 = -(cVar33 == *pcVar56);
            pcVar60[1] = -(cVar34 == cVar49);
            pcVar60[2] = -(cVar35 == cVar2);
            pcVar60[3] = -(cVar36 == cVar3);
            pcVar60[4] = -(cVar37 == cVar4);
            pcVar60[5] = -(cVar38 == cVar5);
            pcVar60[6] = -(cVar39 == cVar6);
            pcVar60[7] = -(cVar40 == cVar7);
            pcVar60[8] = -(cVar41 == cVar8);
            pcVar60[9] = -(cVar42 == cVar9);
            pcVar60[10] = -(cVar43 == cVar10);
            pcVar60[0xb] = -(cVar44 == cVar11);
            pcVar60[0xc] = -(cVar45 == cVar12);
            pcVar60[0xd] = -(cVar46 == cVar13);
            pcVar60[0xe] = -(cVar47 == cVar14);
            pcVar60[0xf] = -(cVar48 == cVar15);
            cVar49 = pcVar56[0x20];
            cVar2 = pcVar56[0x21];
            cVar3 = pcVar56[0x22];
            cVar4 = pcVar56[0x23];
            cVar5 = pcVar56[0x24];
            cVar6 = pcVar56[0x25];
            cVar7 = pcVar56[0x26];
            cVar8 = pcVar56[0x27];
            cVar9 = pcVar56[0x28];
            cVar10 = pcVar56[0x29];
            cVar11 = pcVar56[0x2a];
            cVar12 = pcVar56[0x2b];
            cVar13 = pcVar56[0x2c];
            cVar14 = pcVar56[0x2d];
            cVar15 = pcVar56[0x2e];
            cVar32 = pcVar56[0x2f];
            pcVar60[0x10] = -(cVar16 == cVar33);
            pcVar60[0x11] = -(cVar17 == cVar34);
            pcVar60[0x12] = -(cVar18 == cVar35);
            pcVar60[0x13] = -(cVar19 == cVar36);
            pcVar60[0x14] = -(cVar20 == cVar37);
            pcVar60[0x15] = -(cVar21 == cVar38);
            pcVar60[0x16] = -(cVar22 == cVar39);
            pcVar60[0x17] = -(cVar23 == cVar40);
            pcVar60[0x18] = -(cVar24 == cVar41);
            pcVar60[0x19] = -(cVar25 == cVar42);
            pcVar60[0x1a] = -(cVar26 == cVar43);
            pcVar60[0x1b] = -(cVar27 == cVar44);
            pcVar60[0x1c] = -(cVar28 == cVar45);
            pcVar60[0x1d] = -(cVar29 == cVar46);
            pcVar60[0x1e] = -(cVar30 == cVar47);
            pcVar60[0x1f] = -(cVar31 == cVar48);
            cVar16 = pcVar56[0x30];
            cVar17 = pcVar56[0x31];
            cVar18 = pcVar56[0x32];
            cVar19 = pcVar56[0x33];
            cVar20 = pcVar56[0x34];
            cVar21 = pcVar56[0x35];
            cVar22 = pcVar56[0x36];
            cVar23 = pcVar56[0x37];
            cVar24 = pcVar56[0x38];
            cVar25 = pcVar56[0x39];
            cVar26 = pcVar56[0x3a];
            cVar27 = pcVar56[0x3b];
            cVar28 = pcVar56[0x3c];
            cVar29 = pcVar56[0x3d];
            cVar30 = pcVar56[0x3e];
            cVar31 = pcVar56[0x3f];
            pcVar60[0x20] = -(cVar49 == cVar33);
            pcVar60[0x21] = -(cVar2 == cVar34);
            pcVar60[0x22] = -(cVar3 == cVar35);
            pcVar60[0x23] = -(cVar4 == cVar36);
            pcVar60[0x24] = -(cVar5 == cVar37);
            pcVar60[0x25] = -(cVar6 == cVar38);
            pcVar60[0x26] = -(cVar7 == cVar39);
            pcVar60[0x27] = -(cVar8 == cVar40);
            pcVar60[0x28] = -(cVar9 == cVar41);
            pcVar60[0x29] = -(cVar10 == cVar42);
            pcVar60[0x2a] = -(cVar11 == cVar43);
            pcVar60[0x2b] = -(cVar12 == cVar44);
            pcVar60[0x2c] = -(cVar13 == cVar45);
            pcVar60[0x2d] = -(cVar14 == cVar46);
            pcVar60[0x2e] = -(cVar15 == cVar47);
            pcVar60[0x2f] = -(cVar32 == cVar48);
            pcVar60[0x30] = -(cVar16 == cVar33);
            pcVar60[0x31] = -(cVar17 == cVar34);
            pcVar60[0x32] = -(cVar18 == cVar35);
            pcVar60[0x33] = -(cVar19 == cVar36);
            pcVar60[0x34] = -(cVar20 == cVar37);
            pcVar60[0x35] = -(cVar21 == cVar38);
            pcVar60[0x36] = -(cVar22 == cVar39);
            pcVar60[0x37] = -(cVar23 == cVar40);
            pcVar60[0x38] = -(cVar24 == cVar41);
            pcVar60[0x39] = -(cVar25 == cVar42);
            pcVar60[0x3a] = -(cVar26 == cVar43);
            pcVar60[0x3b] = -(cVar27 == cVar44);
            pcVar60[0x3c] = -(cVar28 == cVar45);
            pcVar60[0x3d] = -(cVar29 == cVar46);
            pcVar60[0x3e] = -(cVar30 == cVar47);
            pcVar60[0x3f] = -(cVar31 == cVar48);
            iVar58 = 0x40;
          }
          do {
            cVar49 = '\0';
            if (pcVar56[iVar58] == 'X') {
              cVar49 = -1;
            }
            iVar59 = iVar58 + 1;
            pcVar60[iVar58] = cVar49;
            iVar58 = iVar59;
          } while (iVar59 < 0x7a);
          pcVar56 = pcVar56 + 0x7a;
          pcVar60 = pcVar60 + *(int *)(lVar1 + 0x1c);
          iVar57 = iVar57 + -1;
        } while (iVar57 != 0);
      }
    }
    else if (iVar58 == 0) {
      puVar55 = (undefined8 *)
                ((longlong)
                 (int)((uVar64 * *(int *)(lVar1 + 0x1c) + uVar65) * *(int *)(lVar1 + 0x24)) +
                *(longlong *)(lVar1 + 0x28));
      *puVar55 = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar55 + (longlong)*(int *)(lVar1 + 0x1c) * 4) = 0xffffffffffffffff
      ;
    }
    else if (iVar58 == 1) {
      puVar54 = (undefined2 *)
                ((longlong)
                 (int)((uVar64 * *(int *)(lVar1 + 0x1c) + uVar65) * *(int *)(lVar1 + 0x24)) +
                *(longlong *)(lVar1 + 0x28));
      *puVar54 = 0xffff;
      *(undefined2 *)((longlong)*(int *)(lVar1 + 0x1c) + (longlong)puVar54) = 0xffff;
    }
  }
  else {
    uVar65 = (uint)*puVar52;
    uVar64 = (uint)puVar52[1];
  }
  param_1[0x17] = (uint)(((float)uVar65 + DAT_180380ac0) * (float)param_1[0x15]);
  param_1[0x18] = (uint)(((float)uVar64 + DAT_180380ac0) * (float)param_1[0x16]);
  return;
}


