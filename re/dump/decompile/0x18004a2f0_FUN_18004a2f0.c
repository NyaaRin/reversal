// 0x18004a2f0  FUN_18004a2f0
// size=521 thunk=false
// signature: undefined FUN_18004a2f0()
// status: ok


void FUN_18004a2f0(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  char cVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined8 local_30;
  undefined6 uStack_28;
  undefined2 uStack_22;
  undefined6 uStack_20;
  
  cVar5 = FUN_18003a090("DrawMenu");
  if (cVar5 != '\0') {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar8 = (char *)(lVar4 + 0x10);
    if (*pcVar8 == '\0') {
      __dyn_tls_on_demand_init();
    }
    plVar7 = (longlong *)(lVar4 + 0xec0);
    if (*plVar7 != 0) {
      if (DAT_1803edc38 != DAT_1803edc40) {
        DAT_1803edc40 = DAT_1803edc38;
      }
      DAT_1803ff7a8 = 0;
      DAT_1803ff7b4 = 0;
      DAT_1803ff7ac = 0;
      DAT_1803ff7a0 = 0;
      DAT_1803ff8f0 = 0;
      if (*pcVar8 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *plVar7;
      puVar1 = (undefined1 *)(lVar4 + 0x9d);
      uVar2 = *puVar1;
      puVar6 = (undefined1 *)(lVar4 + 0x9f);
      uVar3 = *puVar6;
      *puVar1 = 0;
      *puVar6 = 0;
      local_30 = 0;
      uStack_28 = 0;
      uStack_22 = 0;
      uStack_20 = 0;
      FUN_18027e480(&local_30);
      DAT_1803ff8ec = 1;
      FUN_1801fd250("DrawMenu");
      DAT_1803ff8ec = 0;
      while (DAT_1803edc38 != DAT_1803edc40) {
        DAT_1803edc40 = DAT_1803edc40 + -1;
        switch(*DAT_1803edc40) {
        case 1:
          FUN_180278d40();
          break;
        case 2:
          FUN_180273410();
          break;
        case 3:
          FUN_18027fda0();
          break;
        case 4:
          FUN_1802c4d20();
          break;
        case 5:
          FUN_1802c6750();
          break;
        case 6:
          FUN_1802b1130();
          break;
        case 7:
          FUN_180278d40();
          break;
        case 8:
          FUN_1802c1650();
          break;
        case 9:
          FUN_1802c3b90();
          break;
        case 10:
          FUN_1802a3b20();
          break;
        case 0xb:
          FUN_180279200();
        }
      }
      DAT_1803ff7a8 = 0;
      DAT_1803ff7b4 = 0;
      DAT_1803ff7ac = 0;
      DAT_1803ff7a0 = 0;
      DAT_1803ff8f0 = 0;
      FUN_18027e550(&local_30);
      *puVar1 = uVar2;
      *puVar6 = uVar3;
      DAT_1803ff7a4 = *(undefined1 *)(lVar4 + 0xd0);
      DAT_1803ff7b0 = *(undefined1 *)(lVar4 + 0xd1);
    }
    return;
  }
  DAT_1803ff7a4 = cVar5;
  DAT_1803ff7b0 = cVar5;
  return;
}


