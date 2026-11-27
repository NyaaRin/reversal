// 0x1802a6a50  FUN_1802a6a50
// size=443 thunk=false
// signature: undefined FUN_1802a6a50()
// status: ok


void FUN_1802a6a50(int param_1,byte param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x2368);
  cVar3 = '\0';
  if ((*(uint *)(lVar2 + 4) & 0x4000000) != 0) {
    cVar3 = param_3;
  }
  sVar5 = 0;
  if ((cVar3 != '\0') && (0 < *(int *)(lVar2 + 0x6c))) {
    uVar9 = 0;
    sVar4 = sVar5;
    do {
      sVar5 = *(short *)(uVar9 * 0x74 + 0x5e + *(longlong *)(lVar2 + 0x18));
      if (sVar5 <= sVar4) {
        sVar5 = sVar4;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      sVar4 = sVar5;
    } while ((int)uVar8 < *(int *)(lVar2 + 0x6c));
  }
  lVar10 = (longlong)param_1 * 0x74 + *(longlong *)(lVar2 + 0x18);
  *(byte *)(lVar10 + 0x71) = *(byte *)(lVar10 + 0x71) ^ (*(byte *)(lVar10 + 0x71) ^ param_2) & 3;
  if ((param_2 & 3) == 0) {
    *(undefined2 *)(lVar10 + 0x5e) = 0xffff;
  }
  else if ((*(short *)(lVar10 + 0x5e) == -1) || (cVar3 == '\0')) {
    sVar5 = sVar5 + 1;
    if (cVar3 == '\0') {
      sVar5 = 0;
    }
    *(short *)(lVar10 + 0x5e) = sVar5;
  }
  if (cVar3 == '\0') {
    iVar6 = 0;
    if (0 < *(int *)(lVar2 + 0x6c)) {
      do {
        lVar7 = (longlong)iVar6 * 0x74 + *(longlong *)(lVar2 + 0x18);
        if (lVar7 != lVar10) {
          *(undefined2 *)(lVar7 + 0x5e) = 0xffff;
        }
        if ((*(short *)(lVar7 + 0x5e) != -1) &&
           (bVar1 = *(byte *)(lVar7 + 0x71), ((bVar1 >> 4) >> (bVar1 & 3) & 1) == 0)) {
          *(byte *)(lVar7 + 0x71) = (bVar1 ^ *(byte *)(lVar7 + 0x72)) & 3 ^ bVar1;
          *(undefined1 *)(lVar2 + 0x23c) = 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0x6c));
    }
  }
  else {
    iVar6 = 0;
    if (0 < *(int *)(lVar2 + 0x6c)) {
      do {
        lVar10 = (longlong)iVar6 * 0x74 + *(longlong *)(lVar2 + 0x18);
        if ((*(short *)(lVar10 + 0x5e) != -1) &&
           (bVar1 = *(byte *)(lVar10 + 0x71), ((bVar1 >> 4) >> (bVar1 & 3) & 1) == 0)) {
          *(byte *)(lVar10 + 0x71) = (bVar1 ^ *(byte *)(lVar10 + 0x72)) & 3 ^ bVar1;
          *(undefined1 *)(lVar2 + 0x23c) = 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0x6c));
    }
  }
  *(undefined1 *)(lVar2 + 0x23c) = 1;
  *(undefined1 *)(lVar2 + 0x241) = 1;
  return;
}


