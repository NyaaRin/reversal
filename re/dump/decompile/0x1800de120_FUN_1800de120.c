// 0x1800de120  FUN_1800de120
// size=835 thunk=false
// signature: undefined FUN_1800de120()
// status: ok


void FUN_1800de120(void)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58;
  
  if ((DAT_1803feaf0 < 8) && (DAT_1803fa678 != 0)) {
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    local_78 = 0;
    FUN_18001bcd0(0,&local_88);
    if ((local_88 != (longlong *)0x0) && (lVar7 = local_88[1], lVar7 != 0)) {
      FUN_18002dc30(&local_70,lVar7);
      uVar12 = 0;
      local_98 = 0;
      iVar10 = 0;
      local_90 = 0;
      iVar11 = 0;
      bVar2 = false;
      iVar4 = (**(code **)*local_88)();
      FUN_18002db10(lVar7,0xffffd8ee,&DAT_180341c48);
      cVar3 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,5);
      iVar9 = 0;
      if (cVar3 != '\0') {
        FUN_18002db10(lVar7,0xffffffff,"randgen");
        cVar3 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,5);
        iVar9 = 0;
        if (cVar3 != '\0') {
          FUN_18002db10(lVar7,0xffffffff,&DAT_18034e198);
          cVar3 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,5);
          if (cVar3 != '\0') {
            bVar2 = true;
            iVar9 = 0;
            do {
              if ((DAT_1803faf88 == (code *)0x0) || (DAT_1803fb088 == (code *)0x0)) {
                bVar2 = false;
                break;
              }
              uVar5 = (*DAT_1803fb088)(lVar7);
              iVar10 = iVar9 + 1;
              (*DAT_1803faf88)(lVar7,uVar5,iVar10);
              cVar3 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,3);
              if (cVar3 == '\0') {
                bVar2 = false;
              }
              else {
                dVar1 = (double)(**(code **)(*local_88 + 0xc0))(local_88,0xffffffff);
                *(int *)((longlong)&local_98 + (longlong)iVar9 * 4) = (int)(longlong)dVar1;
              }
              (**(code **)(*local_88 + 0x10))(local_88,1);
              iVar9 = iVar10;
            } while (iVar10 < 4);
            uVar12 = local_98 & 0xffffffff;
            iVar9 = local_98._4_4_;
            iVar10 = (int)local_90;
            iVar11 = local_90._4_4_;
          }
        }
      }
      iVar6 = (**(code **)*local_88)();
      while (iVar4 < iVar6) {
        (**(code **)(*local_88 + 0x10))(local_88,1);
        iVar6 = (**(code **)*local_88)();
      }
      if (bVar2) {
        DAT_1803feaf0 = DAT_1803feaf0 + 1;
        iVar4 = -1;
        if (0 < DAT_18040a554) {
          iVar6 = 0;
          do {
            lVar7 = (longlong)iVar6;
            if (((((int)uVar12 == (&DAT_18040a570)[lVar7 * 4]) &&
                 (iVar9 == (&DAT_18040a574)[lVar7 * 4])) && (iVar10 == (&DAT_18040a578)[lVar7 * 4]))
               && (iVar4 = iVar6, iVar11 == (&DAT_18040a57c)[lVar7 * 4])) break;
            iVar6 = iVar6 + 1;
            iVar4 = -1;
          } while (iVar6 < DAT_18040a554);
        }
        iVar6 = DAT_18040a5d4 + 5;
        lVar7 = (longlong)
                (iVar6 + (iVar6 / 6 + (iVar6 >> 0x1f) +
                         (int)(((longlong)iVar6 / 6 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -6);
        pcVar8 = "differ";
        if (-1 < iVar4) {
          pcVar8 = "MATCH";
        }
        FUN_180014410("[LEYHITREG] rng self-check %s live=%08X %08X %08X %08X newest=%08X %08X %08X %08X (ring=%d)\n"
                      ,pcVar8,uVar12,iVar9,iVar10,iVar11,(&DAT_18040a570)[lVar7 * 4],
                      (&DAT_18040a574)[lVar7 * 4],(&DAT_18040a578)[lVar7 * 4],
                      (&DAT_18040a57c)[lVar7 * 4],DAT_18040a554);
      }
      if ((local_58 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
        (*DAT_1803faf78)(local_70,local_68,local_60,local_5c);
      }
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)*local_88)();
      DAT_1803fa338 = local_78 != 0;
      DAT_1803fa330 = local_98;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_78;
      }
      DAT_1803fa339 = local_90._1_4_;
      DAT_1803fa33d = local_90._5_2_;
      DAT_1803fa33f = local_90._7_1_;
    }
  }
  return;
}


