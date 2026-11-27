// 0x18007a3f0  vfunc_shared_18007a3f0
// size=814 thunk=false
// signature: undefined vfunc_shared_18007a3f0()
// status: ok


void vfunc_shared_18007a3f0(longlong *param_1)

{
  float *pfVar1;
  code *pcVar2;
  longlong *plVar3;
  float *pfVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 **ppuVar9;
  longlong lVar10;
  float *pfVar11;
  bool bVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  undefined4 local_9f;
  undefined2 local_9b;
  undefined1 local_99;
  undefined8 *local_68;
  undefined4 uStack_60;
  float *local_58;
  undefined8 *local_50 [2];
  float *local_40;
  
  if ((char)param_1[0xd] != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    pfVar11 = (float *)(param_1 + 0xc);
    if (DAT_180380980 < *pfVar11 || DAT_180380980 == *pfVar11) {
      bVar12 = DAT_1803fa678 == 0;
      if (bVar12) {
        local_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        local_58 = (float *)0x0;
        ppuVar9 = &local_68;
      }
      else {
        ppuVar9 = (undefined8 **)FUN_18001bcd0(DAT_180380980,local_50);
      }
      pfVar4 = local_58;
      plVar3 = *ppuVar9;
      pfVar1 = (float *)ppuVar9[2];
      if ((bVar12) && (local_68 != (undefined8 *)0x0)) {
        (**(code **)*local_68)();
        DAT_1803fa338 = pfVar4 != (float *)0x0;
        DAT_1803fa330 = pfVar11;
        if ((bool)DAT_1803fa338) {
          DAT_1803fa330 = pfVar4;
        }
        DAT_1803fa339 = local_9f;
        DAT_1803fa33d = local_9b;
        DAT_1803fa33f = local_99;
      }
      if ((!bVar12) && (local_50[0] != (undefined8 *)0x0)) {
        (**(code **)*local_50[0])();
        DAT_1803fa338 = local_40 != (float *)0x0;
        DAT_1803fa330 = pfVar11;
        if ((bool)DAT_1803fa338) {
          DAT_1803fa330 = local_40;
        }
        DAT_1803fa339 = local_9f;
        DAT_1803fa33d = local_9b;
        DAT_1803fa33f = local_99;
      }
      fVar15 = DAT_180381384;
      if (plVar3 != (longlong *)0x0) {
        iVar6 = (**(code **)*plVar3)(plVar3);
        pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar10 = (*pcVar2)(DAT_1803fa360,uVar7);
        if ((lVar10 != 0) && (cVar5 = FUN_18001e2b0(lVar10,plVar3), cVar5 != '\0')) {
          FUN_18002d9c0(plVar3[1],0xffffffff,"ViewAff");
          cVar5 = (**(code **)(*plVar3 + 0x138))(plVar3,0xffffffff,3);
          if (cVar5 != '\0') {
            dVar14 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,0xffffffff);
            fVar15 = (float)dVar14;
          }
          (**(code **)(*plVar3 + 0x10))(plVar3,1);
        }
        while (iVar8 = (**(code **)*plVar3)(plVar3), iVar6 < iVar8) {
          (**(code **)(*plVar3 + 0x10))(plVar3,1);
        }
        if (((0.0 <= fVar15) &&
            (fVar13 = (float)(**(code **)(*param_1 + 0x110))(param_1), 0.0 < fVar13)) &&
           (fVar15 = (fVar15 - *(float *)((longlong)param_1 + 100)) / fVar13 +
                     *(float *)((longlong)param_1 + 100), 0.0 < fVar15)) {
          fVar15 = fVar15 / *pfVar11;
          fVar13 = DAT_180380a1c;
          if (DAT_180380a1c <= fVar15) {
            fVar13 = fVar15;
          }
          fVar15 = DAT_180380c50;
          if (fVar13 <= DAT_180380c50) {
            fVar15 = fVar13;
          }
          *(float *)((longlong)param_1 + 0x5c) =
               (fVar15 - *(float *)((longlong)param_1 + 0x5c)) * DAT_180380a1c +
               *(float *)((longlong)param_1 + 0x5c);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)*plVar3)(plVar3);
          DAT_1803fa338 = pfVar1 != (float *)0x0;
          if ((bool)DAT_1803fa338) {
            pfVar11 = pfVar1;
          }
          DAT_1803fa339 = local_9f;
          DAT_1803fa33d = local_9b;
          DAT_1803fa33f = local_99;
          DAT_1803fa330 = pfVar11;
        }
      }
    }
  }
  return;
}


