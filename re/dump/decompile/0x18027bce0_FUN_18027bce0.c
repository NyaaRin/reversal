// 0x18027bce0  FUN_18027bce0
// size=226 thunk=false
// signature: undefined FUN_18027bce0()
// status: ok


bool FUN_18027bce0(int param_1,ulonglong param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar4 + 0xec0);
  if ((*(char *)((longlong)param_1 + 0x108 + lVar4) != '\0') &&
     (fVar1 = *(float *)(lVar4 + 0xb8c + (longlong)param_1 * 4), 0.0 <= fVar1)) {
    if (fVar1 == 0.0) goto LAB_18027bda7;
    if ((((param_2 & 1) != 0) && (fVar2 = *(float *)(lVar4 + 0x94), fVar2 < fVar1)) &&
       (fVar7 = fVar1 - *(float *)(lVar4 + 0x40), fVar7 < fVar1)) {
      fVar3 = *(float *)(lVar4 + 0x98);
      if (0.0 < fVar3) {
        if (fVar2 <= fVar7) {
          iVar6 = (int)((fVar7 - fVar2) / fVar3);
        }
        else {
          iVar6 = -1;
        }
        if (0 < (int)((fVar1 - fVar2) / fVar3) - iVar6) goto LAB_18027bda7;
      }
      else if (fVar7 < fVar2) {
LAB_18027bda7:
        cVar5 = FUN_18027deb0(param_1 + 0x290,param_3);
        return cVar5 != '\0';
      }
    }
  }
  return false;
}


