// 0x180194260  FUN_180194260
// size=253 thunk=false
// signature: undefined FUN_180194260()
// status: ok


undefined8 * FUN_180194260(undefined8 param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  puVar2 = DAT_1803eb380;
  puVar8 = DAT_1803eb378;
  puVar7 = DAT_1803fcf90;
  do {
    DAT_1803fcf90 = puVar7;
    puVar1 = DAT_1803fcf88;
    if (puVar8 == puVar2) {
      while( true ) {
        if (puVar1 == puVar7) {
          return (undefined8 *)0x0;
        }
        puVar8 = (undefined8 *)*puVar1;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        uStack_30 = 0;
        sVar6 = strlen(param_2);
        FUN_18001d080(&local_48,param_2,sVar6);
        cVar3 = FUN_180121f30(puVar8,&local_48);
        FUN_18020e450(&local_48);
        if (cVar3 != '\0') break;
        puVar1 = puVar1 + 1;
      }
      return puVar8;
    }
    if (*(char *)(puVar8 + 4) != '\0') {
      sVar5 = strlen(param_2);
      sVar6 = puVar8[2];
      puVar7 = puVar8;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar7 = (undefined8 *)*puVar8;
      }
      if ((sVar6 == sVar5) && ((sVar6 == 0 || (iVar4 = memcmp(puVar7,param_2,sVar6), iVar4 == 0))))
      {
        return puVar8;
      }
    }
    puVar8 = puVar8 + 0xe;
    puVar7 = DAT_1803fcf90;
  } while( true );
}


