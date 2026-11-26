// 0x18006db90  FUN_18006db90
// size=803 thunk=false
// signature: undefined FUN_18006db90()
// status: ok


void FUN_18006db90(void)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined **ppuVar13;
  char *pcVar14;
  float fVar15;
  int local_50;
  
  cVar5 = DAT_1803fa46f;
  lVar4 = DAT_1803fa320;
  if ((DAT_1803fa320 != 0) && (0 < DAT_1803ff708)) {
    if (DAT_1803fa320 != DAT_1803ff700) {
      iVar10 = 0;
      if (0 < DAT_1803ff708) {
        do {
          (&DAT_1803eb8e4)[(longlong)iVar10 * 0x58] = 0;
          iVar10 = iVar10 + 1;
        } while (iVar10 < DAT_1803ff708);
      }
      DAT_1803ff700 = lVar4;
      DAT_1803e7538 = -1.0;
    }
    bVar2 = false;
    iVar10 = 0;
    while ((iVar10 < DAT_1803ff708 && (!bVar2))) {
      lVar9 = (longlong)iVar10;
      if (((((&DAT_1803eb898)[lVar9 * 0xb] == 0) || ((int)(&DAT_1803eb8e0)[lVar9 * 0x16] < 1)) ||
          ((&DAT_1803eb8e4)[lVar9 * 0x58] != '\0')) || (cVar5 != '\0')) {
        iVar10 = iVar10 + 1;
      }
      else {
        iVar11 = 0;
        while (iVar11 < (int)(&DAT_1803eb8e0)[lVar9 * 0x16]) {
          if ((&DAT_1803eb8a0)[lVar9 * 0xb + (longlong)iVar11 * 2] == 0) {
            iVar11 = iVar11 + 1;
          }
          else {
            if ((*(code **)(&DAT_1803eb8a8 + (longlong)iVar11 * 0x10 + lVar9 * 0x58) == (code *)0x0)
               || (cVar6 = (**(code **)(&DAT_1803eb8a8 + (longlong)iVar11 * 0x10 + lVar9 * 0x58))(),
                  cVar6 != '\0')) {
              bVar2 = true;
              goto LAB_18006dc94;
            }
            iVar11 = iVar11 + 1;
          }
        }
        bVar2 = false;
LAB_18006dc94:
        iVar10 = iVar10 + 1;
      }
    }
    if (DAT_1803fa608 == (float *)0x0) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = *DAT_1803fa608;
    }
    if ((((bVar2) || (fVar15 <= 0.0)) || (DAT_1803e7538 <= 0.0)) ||
       ((fVar15 < DAT_1803e7538 - DAT_180380f00 || (DAT_1803e7538 <= fVar15)))) {
      DAT_1803e7538 = fVar15 + DAT_180380ac0;
      iVar10 = FUN_18006dac0(lVar4);
      bVar2 = 0 < iVar10;
      if (iVar10 < 0) {
        if ((DAT_1803fa668 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      iVar11 = 0;
      while (iVar11 < DAT_1803ff708) {
        lVar9 = (longlong)iVar11;
        lVar12 = lVar9 * 0x58;
        ppuVar13 = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + lVar9 * 0xb;
        plVar1 = &DAT_1803eb898 + lVar9 * 0xb;
        if ((*plVar1 == 0) || ((int)(&DAT_1803eb8e0)[lVar9 * 0x16] < 1)) {
LAB_18006def3:
          iVar11 = iVar11 + 1;
        }
        else {
          bVar3 = false;
          if (cVar5 == '\0') {
            local_50 = 0;
            while (local_50 < (int)(&DAT_1803eb8e0)[lVar9 * 0x16]) {
              if ((&DAT_1803eb8a0)[lVar9 * 0xb + (longlong)local_50 * 2] == 0) {
                local_50 = local_50 + 1;
              }
              else {
                if ((*(code **)(&DAT_1803eb8a8 + (longlong)local_50 * 0x10 + lVar12) == (code *)0x0)
                   || (cVar6 = (**(code **)(&DAT_1803eb8a8 + (longlong)local_50 * 0x10 + lVar12))(),
                      cVar6 != '\0')) {
                  bVar3 = true;
                  goto LAB_18006de2a;
                }
                local_50 = local_50 + 1;
              }
            }
            bVar3 = false;
          }
LAB_18006de2a:
          cVar6 = FUN_18006d9f0(lVar4,ppuVar13,*plVar1);
          if ((bVar3) && (bVar2)) {
            if (cVar6 == '\0') {
              uVar7 = FUN_18006d9c0(lVar4,ppuVar13,*plVar1);
              (&DAT_1803eb8e4)[lVar12] = uVar7;
              if ((DAT_1803fa668 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0')) {
                uVar8 = 0;
              }
              else {
                uVar8 = 1;
              }
              pcVar14 = "REFUSED";
              if ((&DAT_1803eb8e4)[lVar12] != '\0') {
                pcVar14 = "armed";
              }
              FUN_180014410("[GAMEEVENT] \'%s\' listener %s (%d descriptors, in-game=%d)\n",*plVar1,
                            pcVar14,iVar10,uVar8);
              iVar11 = iVar11 + 1;
            }
            else {
              (&DAT_1803eb8e4)[lVar12] = 1;
              iVar11 = iVar11 + 1;
            }
          }
          else {
            if (cVar6 == '\0') {
              (&DAT_1803eb8e4)[lVar12] = 0;
              goto LAB_18006def3;
            }
            FUN_18006da20(lVar4,ppuVar13);
            (&DAT_1803eb8e4)[lVar12] = 0;
            FUN_180014410("[GAMEEVENT] \'%s\' listener released\n",*plVar1);
            iVar11 = iVar11 + 1;
          }
        }
      }
    }
  }
  return;
}


