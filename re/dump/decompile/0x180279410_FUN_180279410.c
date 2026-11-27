// 0x180279410  FUN_180279410
// size=390 thunk=false
// signature: undefined FUN_180279410()
// status: ok


bool FUN_180279410(uint param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if ((param_1 & 0xffffcf50) != 0) {
    FUN_18027e9c0("Invalid flags for IsWindowHovered()!");
  }
  lVar3 = *(longlong *)(lVar2 + 0x1528);
  if (lVar3 != 0) {
    if ((param_1 & 4) == 0) {
      lVar7 = *(longlong *)(lVar2 + 0x1520);
      if (((param_1 & 2) != 0) && (lVar5 = lVar7, lVar7 != 0)) {
        do {
          lVar7 = *(longlong *)(lVar5 + 0x3c0);
          if ((param_1 & 8) == 0) {
            lVar7 = *(longlong *)(lVar7 + 0x3c8);
          }
          bVar8 = lVar5 != lVar7;
          lVar5 = lVar7;
        } while (bVar8);
      }
      if ((param_1 & 1) == 0) {
        bVar8 = lVar3 == lVar7;
      }
      else {
        lVar5 = lVar3;
        if ((param_1 & 8) == 0) {
          do {
            lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x3c0) + 0x3c8);
            bVar8 = lVar5 != lVar6;
            lVar5 = lVar6;
          } while (bVar8);
        }
        else {
          do {
            lVar6 = *(longlong *)(lVar5 + 0x3c0);
            bVar8 = lVar5 != lVar6;
            lVar5 = lVar6;
          } while (bVar8);
        }
        lVar5 = lVar3;
        if (lVar6 == lVar7) {
LAB_1802794ec:
          bVar8 = true;
        }
        else {
          do {
            if (lVar5 == lVar7) goto LAB_1802794ec;
          } while ((lVar5 != lVar6) &&
                  (plVar1 = (longlong *)(lVar5 + 0x3b0), lVar5 = *plVar1, *plVar1 != 0));
          bVar8 = false;
        }
      }
      if (!bVar8) {
        return false;
      }
    }
    cVar4 = FUN_18026ed90(lVar3,param_1);
    if (cVar4 != '\0') {
      if ((((-1 < (char)param_1) && (*(int *)(lVar2 + 0x1594) != 0)) &&
          (*(char *)(lVar2 + 0x15a1) == '\0')) &&
         (*(int *)(lVar2 + 0x1594) != *(int *)(lVar3 + 0x8c))) {
        return false;
      }
      if ((param_1 >> 0xc & 1) != 0) {
        param_1 = param_1 | *(uint *)(lVar2 + 0x1208);
      }
      if ((param_1 >> 0xd & 1) != 0) {
        return *(int *)(lVar2 + 0x2504) == *(int *)(lVar3 + 0x10);
      }
      return true;
    }
  }
  return false;
}


