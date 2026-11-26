// 0x1801ed360  FUN_1801ed360
// size=427 thunk=false
// signature: undefined FUN_1801ed360()
// status: ok


void FUN_1801ed360(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  char cVar2;
  SHORT SVar3;
  DWORD DVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  
  if (DAT_1803ff7c8 == 1) {
    FUN_1800592b0();
  }
  if (DAT_1803ff270 == '\0') goto LAB_1801ed4ec;
  cVar2 = FUN_18003a090("Key_Change");
  if ((((cVar2 != '\0') || (cVar2 = FUN_18003a090("KeyPressed"), cVar2 != '\0')) ||
      (cVar2 = FUN_18003a090("KeyReleased"), cVar2 != '\0')) &&
     (((cVar2 = FUN_180024540(), cVar2 != '\0' && (DAT_1803faed8 != 0)) &&
      ((DAT_1803faf68 != 0 && (DAT_1803fccf0 == '\0')))))) {
    if (DAT_1803fa608 == 0) {
      DVar4 = GetTickCount();
      iVar1 = DAT_1803e7238;
      if (DVar4 != DAT_1804258d0) goto LAB_1801ed445;
    }
    else {
      iVar1 = *(int *)(DAT_1803fa608 + 4);
      DVar4 = DAT_1804258d0;
      if (*(int *)(DAT_1803fa608 + 4) != DAT_1803e7238) {
LAB_1801ed445:
        DAT_1804258d0 = DVar4;
        DAT_1803e7238 = iVar1;
        uVar7 = 1;
        DAT_1803fccf0 = 1;
        do {
          SVar3 = GetAsyncKeyState((int)uVar7);
          bVar8 = (byte)((ushort)SVar3 >> 0xf);
          if (bVar8 != (&DAT_1803fede0)[uVar7]) {
            (&DAT_1803fede0)[uVar7] = bVar8;
            FUN_1801fdeb0();
            pcVar5 = "KeyReleased";
            if (SVar3 < 0) {
              pcVar5 = "KeyPressed";
            }
            FUN_1801fe480(pcVar5);
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < 0xff);
        DAT_1803fccf0 = '\0';
      }
    }
  }
  FUN_1800689f0();
  FUN_18003ac20();
  cVar2 = FUN_18011c8f0(param_2);
  if (cVar2 != '\0') {
    return;
  }
LAB_1801ed4ec:
  (*DAT_1803fa508)(param_1,param_2,param_3,param_4);
  return;
}


