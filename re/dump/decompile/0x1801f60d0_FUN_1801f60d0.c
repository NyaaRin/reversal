// 0x1801f60d0  FUN_1801f60d0
// size=451 thunk=false
// signature: undefined FUN_1801f60d0()
// status: ok


void FUN_1801f60d0(int param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  if ((((DAT_1803fa590 != 0) && (0 < param_1)) && (0 < param_2)) && (DAT_1803fa46f == '\0')) {
    if ((DAT_1803ff79c == '\0') && (cVar2 = FUN_18003a090("DrawMenu"), cVar2 == '\0')) {
      return;
    }
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar5 = (char *)(lVar1 + 0x10);
    if (*pcVar5 == '\0') {
      __dyn_tls_on_demand_init();
    }
    plVar4 = (longlong *)(lVar1 + 0xec0);
    lVar1 = *plVar4;
    FUN_18026ce20(DAT_1803fa590);
    FUN_1802d0720();
    lVar3 = FUN_18026f740();
    *(float *)(lVar3 + 8) = (float)param_1;
    *(float *)(lVar3 + 0xc) = (float)param_2;
    uVar6 = FUN_1801f6010();
    lVar3 = FUN_18026f740();
    *(undefined4 *)(lVar3 + 0x18) = uVar6;
    DAT_1803ff79c = FUN_18003a090("DrawMenu");
    if (DAT_1803ff79c == '\0') {
      DAT_1803ff7a4 = 0;
      DAT_1803ff7b0 = 0;
    }
    else {
      if (*pcVar5 == '\0') {
        __dyn_tls_on_demand_init();
      }
      if ((*plVar4 != 0) && (DAT_1803fa545 == '\0')) {
        if (*pcVar5 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *plVar4 + 0x28;
        FUN_180267dd0(lVar3,DAT_180381454,DAT_180381454);
        FUN_180267fb0(lVar3,0,0);
        FUN_180267fb0(lVar3,1,0);
      }
    }
    FUN_180270230();
    FUN_18004a2f0();
    FUN_180272030();
    DAT_1803fa456 = 1;
    if (*pcVar5 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *plVar4 = lVar1;
  }
  return;
}


