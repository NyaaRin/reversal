// 0x180170f70  FUN_180170f70
// size=154 thunk=false
// signature: undefined FUN_180170f70()
// status: ok


void FUN_180170f70(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar2 = DAT_1803fb108;
  plVar4 = DAT_1803fb100;
  if (DAT_1803fb100 != DAT_1803fb108) {
    do {
      puVar1 = (undefined8 *)*plVar4;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
    DAT_1803fb108 = DAT_1803fb100;
  }
  DAT_1803fa5f8 = 0;
  FUN_1802074f0();
  lVar3 = FUN_180207580();
  *(undefined4 *)(lVar3 + 200) = 0;
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 0x10) = 0x3f800000;
  lVar3 = FUN_180207610();
  *(undefined4 *)(lVar3 + 8) = 2;
  lVar3 = FUN_180207580();
  *(undefined4 *)(lVar3 + 200) = 5;
  *(undefined4 *)(lVar3 + 8) = 1;
  return;
}


