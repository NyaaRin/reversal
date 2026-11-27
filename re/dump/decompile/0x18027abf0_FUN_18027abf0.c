// 0x18027abf0  FUN_18027abf0
// size=270 thunk=false
// signature: undefined FUN_18027abf0()
// status: ok


void FUN_18027abf0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
  _Dst = (void *)plVar3[0x22];
  iVar4 = FUN_180268980(param_1,0,
                        *(undefined4 *)((longlong)_Dst + (longlong)(int)plVar3[0x21] * 4 + -4));
  if (*(int *)(*plVar3 + 0x1578) == iVar4) {
    FUN_1802899e0(iVar4,0xb,param_1);
    _Dst = (void *)plVar3[0x22];
  }
  iVar1 = *(int *)((longlong)plVar3 + 0x10c);
  if ((int)plVar3[0x21] == iVar1) {
    iVar6 = (int)plVar3[0x21] + 1;
    if (iVar1 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar1 / 2 + iVar1;
    }
    if (iVar6 < iVar5) {
      iVar6 = iVar5;
    }
    if (iVar1 < iVar6) {
      _Dst = (void *)FUN_18026f580((longlong)iVar6 << 2);
      if ((void *)plVar3[0x22] != (void *)0x0) {
        memcpy(_Dst,(void *)plVar3[0x22],(longlong)(int)plVar3[0x21] << 2);
        FUN_18026f680(plVar3[0x22]);
      }
      plVar3[0x22] = (longlong)_Dst;
      *(int *)((longlong)plVar3 + 0x10c) = iVar6;
    }
  }
  *(int *)((longlong)_Dst + (longlong)(int)plVar3[0x21] * 4) = iVar4;
  *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + 1;
  return;
}


