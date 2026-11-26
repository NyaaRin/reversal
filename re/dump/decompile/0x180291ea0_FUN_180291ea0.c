// 0x180291ea0  FUN_180291ea0
// size=246 thunk=false
// signature: undefined FUN_180291ea0()
// status: ok


void FUN_180291ea0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  longlong *plVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x60);
    plVar1 = plVar4 + *(int *)(lVar3 + 0x58);
    for (plVar7 = plVar4; plVar7 < plVar1; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_1) {
        if (plVar7 < plVar1 + -1) {
          plVar4[(longlong)plVar7 - (longlong)plVar4 >> 3] = plVar1[-1];
        }
        *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x58) + -1;
        break;
      }
    }
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x5c);
    if (*(int *)(param_2 + 0x58) == iVar2) {
      iVar6 = *(int *)(param_2 + 0x58) + 1;
      if (iVar2 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar2 / 2 + iVar2;
      }
      if (iVar6 < iVar5) {
        iVar6 = iVar5;
      }
      if (iVar2 < iVar6) {
        _Dst = (void *)FUN_18026f580((longlong)iVar6 << 3);
        if (*(void **)(param_2 + 0x60) != (void *)0x0) {
          memcpy(_Dst,*(void **)(param_2 + 0x60),(longlong)*(int *)(param_2 + 0x58) << 3);
          FUN_18026f680(*(undefined8 *)(param_2 + 0x60));
        }
        *(void **)(param_2 + 0x60) = _Dst;
        *(int *)(param_2 + 0x5c) = iVar6;
      }
    }
    *(longlong *)(*(longlong *)(param_2 + 0x60) + (longlong)*(int *)(param_2 + 0x58) * 8) = param_1;
    *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + 1;
  }
  return;
}


