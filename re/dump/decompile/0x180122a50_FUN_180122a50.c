// 0x180122a50  FUN_180122a50
// size=406 thunk=false
// signature: undefined FUN_180122a50()
// status: ok


void FUN_180122a50(void)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  
  lVar5 = DAT_1803edd50;
  lVar6 = DAT_1803edd48;
  if (DAT_1803edd48 != DAT_1803edd50) {
    do {
      FUN_18020e450(lVar6);
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != lVar5);
    DAT_1803edd50 = DAT_1803edd48;
  }
  uVar2 = DAT_1805c7b20;
  if ((ulonglong)(DAT_1803edd58 - DAT_1803edd48 >> 5) < DAT_1805c7b20) {
    if (0x7ffffffffffffff < DAT_1805c7b20) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    lVar5 = DAT_1803edd50 - DAT_1803edd48;
    uVar3 = FUN_18020dbc0();
    puVar8 = &DAT_1803edd48;
    FUN_180229ca0(DAT_1803edd48,DAT_1803edd50,uVar3,&DAT_1803edd48,&DAT_1803edd48,uVar3,uVar2);
    FUN_18022e9d0(&DAT_1803edd48,uVar3,lVar5 >> 5,uVar2,puVar8,0);
  }
  puVar1 = DAT_1805c7b18;
  puVar8 = (undefined8 *)*DAT_1805c7b18;
  do {
    if (puVar8 == puVar1) {
      FUN_180220450(DAT_1803edd48,DAT_1803edd50,DAT_1803edd50 - DAT_1803edd48 >> 5,0);
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      return;
    }
    pbVar4 = (byte *)(puVar8 + 2);
    if (0xf < (ulonglong)puVar8[5]) {
      pbVar4 = *(byte **)pbVar4;
    }
    pbVar7 = pbVar4 + puVar8[4];
    for (; pbVar4 != pbVar7; pbVar4 = pbVar4 + 1) {
      if ((0x20 < *pbVar4) && (*pbVar4 != 0x7f)) {
        FUN_18020d6f0(&DAT_1803edd48);
        break;
      }
    }
    puVar8 = (undefined8 *)*puVar8;
  } while( true );
}


