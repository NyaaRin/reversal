// 0x1800b5640  FUN_1800b5640
// size=394 thunk=false
// signature: undefined FUN_1800b5640()
// status: ok


void FUN_1800b5640(void)

{
  double *pdVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  
  if (DAT_18040a630 != '\0') {
    cVar3 = FUN_1800b5000();
    if (((cVar3 != '\0') && (DAT_18040a608 != (code *)0x0)) && (DAT_1803fa668 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))();
      if (cVar3 != '\0') {
        pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar5 = (*pcVar2)(DAT_1803fa360,uVar4);
        if ((lVar5 != 0) && (DAT_1803fa608 != 0)) {
          if (DAT_18040a610 != (code *)0x0) {
            (*DAT_18040a610)();
          }
          if (DAT_18040a620 != (code *)0x0) {
            (*DAT_18040a620)();
          }
          lVar5 = DAT_1803fa608;
          uVar4 = *(undefined4 *)(DAT_1803fa608 + 0x18);
          pdVar1 = (double *)(DAT_1803fa608 + 0x28);
          *(float *)(DAT_1803fa608 + 0x18) = (float)*pdVar1;
          if ((DAT_18040a5f8 != 0) && (DAT_18040a5f0 != 0)) {
            FUN_1800b50c0(*(double *)(lVar5 + 0x10) - *pdVar1);
          }
          DAT_18040a628 = 1;
          (*DAT_18040a608)();
          lVar5 = DAT_1803fa608;
          DAT_18040a628 = 0;
          *(undefined4 *)(DAT_1803fa608 + 0x18) = uVar4;
          DAT_18040a62c = (float)*(double *)(lVar5 + 0x10);
          DAT_18040a618 = DAT_18040a618 + 1;
          if (DAT_18040a618 == 1) {
            if ((DAT_18040a5f8 == 0) || (pcVar6 = "ON", DAT_18040a5f0 == 0)) {
              pcVar6 = "OFF -- advance is NOT quantised";
            }
            FUN_180014410("[TICKANIM] tick pump live (%.4f per tick, anim-time pin %s)\n",
                          *(undefined8 *)(lVar5 + 0x28),pcVar6);
            return;
          }
        }
      }
    }
  }
  return;
}


