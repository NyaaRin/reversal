// 0x1802c2df0  FUN_1802c2df0
// size=305 thunk=false
// signature: undefined FUN_1802c2df0()
// status: ok


void FUN_1802c2df0(int param_1,char *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar6 = *param_2;
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar2 = *(longlong *)(lVar1 + 0x24a8);
  if (*(char *)(lVar2 + 0x52) != '\0') {
    if (*(char *)(lVar2 + 0x50) != -1) {
      cVar6 = *(char *)(lVar2 + 0x50) == '\x01';
    }
    if (*(char *)(lVar2 + 0x53) != '\0') {
      lVar3 = *(longlong *)(lVar2 + 0x28);
      lVar4 = *(longlong *)(lVar1 + 0x1ed0);
      if ((*(char *)(lVar2 + 0x56) == '\0') && (*(int *)(lVar1 + 0x223c) == param_1)) {
        bVar5 = true;
        *(undefined1 *)(lVar2 + 0x56) = 1;
        if (*(longlong *)(lVar3 + 0x18) == -1) {
          *(longlong *)(lVar3 + 0x18) = lVar4;
          *(bool *)(lVar3 + 0x14) = cVar6 != '\0';
        }
      }
      else {
        bVar5 = false;
      }
      if (((*(longlong *)(lVar3 + 0x18) == lVar4) || (bVar5)) ||
         (*(char *)(lVar2 + 0x55) != *(char *)(lVar2 + 0x56))) {
        cVar6 = *(char *)(lVar3 + 0x14) != '\0';
      }
      else if (((*(uint *)(lVar2 + 0x4c) & 0x1000) == 0) && ((*(byte *)(lVar2 + 0x34) & 0x10) == 0))
      {
        cVar6 = '\0';
      }
    }
    *param_2 = cVar6;
  }
  if (param_3 != (uint *)0x0) {
    if (((*(uint *)(lVar2 + 0x34) >> 0xe & 1) == 0) &&
       (((*(uint *)(lVar2 + 0x34) >> 0xf & 1) != 0 ||
        ((cVar6 != '\0' &&
         ((*(int *)(lVar1 + 0x1594) != param_1 || (*(char *)(lVar1 + 0x15a3) == '\0')))))))) {
      *param_3 = *param_3 & 0xffffffcf | 0x80020;
      return;
    }
    *param_3 = *param_3 & 0xffffffcf | 0x80010;
  }
  return;
}


