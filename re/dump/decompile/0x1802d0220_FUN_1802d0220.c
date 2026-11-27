// 0x1802d0220  FUN_1802d0220
// size=313 thunk=false
// signature: undefined FUN_1802d0220()
// status: ok


void FUN_1802d0220(char param_1,longlong param_2,int param_3,longlong param_4,int param_5,
                  int param_6,int param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  uint *_Dst;
  int iVar5;
  uint *_Src;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar4 + 0xec0) == 0) {
    lVar4 = 0;
  }
  else {
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0xc0);
  }
  if ((*(char *)(lVar4 + 0x20) == '\0') && (param_1 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar5 = 0;
  if (0 < param_7) {
    do {
      _Src = (uint *)(iVar5 * param_3 + param_2);
      _Dst = (uint *)(iVar5 * param_5 + param_4);
      iVar3 = param_6;
      if (bVar2) {
        for (; 0 < iVar3; iVar3 = iVar3 + -1) {
          uVar1 = *_Src;
          _Src = _Src + 1;
          *_Dst = uVar1 >> 0x10 & 0xff | (uVar1 & 0xff) << 0x10 | uVar1 & 0xff00ff00;
          _Dst = _Dst + 1;
        }
      }
      else {
        memcpy(_Dst,_Src,(longlong)(param_6 * 4));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_7);
  }
  return;
}


