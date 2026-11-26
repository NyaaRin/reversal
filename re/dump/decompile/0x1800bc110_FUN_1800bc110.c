// 0x1800bc110  FUN_1800bc110
// size=589 thunk=false
// signature: undefined FUN_1800bc110()
// status: ok


void FUN_1800bc110(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  float fVar9;
  
  if (((param_1 != 0) && (cVar3 = FUN_1800b81b0(), cVar3 != '\0')) &&
     (DAT_1803fa668 != (longlong *)0x0)) {
    if ((DAT_1803fa608 != 0) &&
       (bVar2 = DAT_1803e8708 < DAT_180381438,
       DAT_1803e8708 = (float)*(double *)(DAT_1803fa608 + 0x10), bVar2)) {
      FUN_180014410(
                   "[RESOLVER] player_hurt DELIVERED -- switching verdicts from the health poll to the event\n"
                   );
    }
    iVar4 = FUN_18006da40(param_1,"userid",0);
    iVar5 = FUN_18006da40(param_1,"attacker",0);
    if ((0 < iVar4) && (0 < iVar5)) {
      iVar4 = (**(code **)(*DAT_1803fa668 + 0x48))(DAT_1803fa668,iVar4);
      lVar8 = (longlong)iVar4;
      iVar5 = (**(code **)(*DAT_1803fa668 + 0x48))(DAT_1803fa668,iVar5);
      if ((iVar4 - 1U < 0x80) &&
         ((iVar6 = (**(code **)(*DAT_1803fa668 + 0x60))(), iVar5 == iVar6 && (iVar5 != iVar4)))) {
        iVar5 = FUN_18006da40(param_1,"hitgroup",0xffffffff);
        for (piVar7 = DAT_1803e9e08; piVar7 != DAT_1803e9e10; piVar7 = piVar7 + 0x14) {
          if ((*piVar7 == iVar4) && ((char)piVar7[0xc] == '\0')) {
            *(undefined1 *)(piVar7 + 0xc) = 1;
            if ((-1 < iVar5) && ((-1 < piVar7[0xe] && (iVar5 != piVar7[0xe])))) {
              piVar1 = (int *)((longlong)&DAT_1805610fc + lVar8 * 0x168 + 4);
              *piVar1 = *piVar1 + 1;
              *(undefined4 *)(&DAT_1805610fc + lVar8 * 0x2d) = 0;
              FUN_180014410("[RESOLVER] idx=%d hit wrong hitbox (aimed %d, server %d) -> pose still wrong, NOT latching %+.0f\n"
                            ,iVar4,piVar7[0xe],iVar5,(double)(float)piVar7[8]);
              return;
            }
            FUN_1800bb8a0(iVar4,piVar7[8],piVar7);
            return;
          }
        }
        if (DAT_1803fa608 == 0) {
          fVar9 = 0.0;
        }
        else {
          fVar9 = (float)*(double *)(DAT_1803fa608 + 0x10);
        }
        if (fVar9 - (float)(&DAT_180561144)[lVar8 * 0x5a] < DAT_180380ac0) {
          FUN_180014410("[RESOLVER] idx=%d late player_hurt -> undo miss, latch %+.0f\n",iVar4,
                        (double)(float)(&DAT_180561140)[lVar8 * 0x5a]);
          FUN_1800bb8a0(iVar4,(&DAT_180561140)[lVar8 * 0x5a],0);
          return;
        }
      }
    }
  }
  return;
}


