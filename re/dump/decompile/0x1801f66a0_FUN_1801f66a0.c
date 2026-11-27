// 0x1801f66a0  FUN_1801f66a0
// size=390 thunk=false
// signature: undefined FUN_1801f66a0()
// status: ok


void FUN_1801f66a0(void)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  iVar1 = DAT_1803ff708;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    (&DAT_1803eb8e4)[(longlong)iVar5 * 0x58] = 0;
  }
  DAT_1803e7538 = 0xbf800000;
  for (puVar4 = (undefined8 *)&DAT_1803ff300; puVar4 != &DAT_1803ff700;
      puVar4 = (undefined8 *)((longlong)puVar4 + 4)) {
    *(undefined4 *)puVar4 = 0;
  }
  DAT_1804235d1 = 0;
  DAT_180423574 = 0;
  DAT_1803e90c0 = 0xffffffff;
  puVar4 = (undefined8 *)*DAT_1803fa7f0;
  do {
    while( true ) {
      while( true ) {
        puVar2 = DAT_1803fcc70;
        puVar6 = DAT_1803fcc68;
        if (puVar4 == DAT_1803fa7f0) {
          for (; puVar6 != puVar2; puVar6 = puVar6 + 1) {
            (**(code **)(*(longlong *)*puVar6 + 0x80))();
          }
          return;
        }
        cVar3 = FUN_1800234d0(puVar4[5] & 0x7fffffffffff);
        if (cVar3 != '\0') break;
        puVar4 = (undefined8 *)FUN_18021db70();
      }
      puVar2 = (undefined8 *)puVar4[2];
      puVar6 = puVar4;
      if (*(char *)((longlong)puVar4[2] + 0x19) != '\0') break;
      do {
        puVar4 = puVar2;
        puVar2 = (undefined8 *)*puVar4;
      } while (*(char *)((longlong)*puVar4 + 0x19) == '\0');
    }
    do {
      puVar4 = (undefined8 *)puVar6[1];
      if (*(char *)((longlong)puVar4 + 0x19) != '\0') break;
      bVar7 = puVar6 == (undefined8 *)puVar4[2];
      puVar6 = puVar4;
    } while (bVar7);
  } while( true );
}


