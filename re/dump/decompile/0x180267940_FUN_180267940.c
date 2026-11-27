// 0x180267940  FUN_180267940
// size=277 thunk=false
// signature: undefined FUN_180267940()
// status: ok


void FUN_180267940(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  void *_Dst;
  longlong lVar8;
  int iVar9;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0xba5) != '\0')) {
    lVar5 = *(longlong *)(param_1 + 0xd0);
    iVar3 = *(int *)(lVar5 + 0x14bc);
    *(int *)(lVar5 + 0x14bc) = iVar3 + 1;
    iVar4 = *(int *)(lVar5 + 0x149c);
    if (*(int *)(lVar5 + 0x1498) == iVar4) {
      iVar9 = *(int *)(lVar5 + 0x1498) + 1;
      if (iVar4 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = iVar4 / 2 + iVar4;
      }
      if (iVar9 < iVar7) {
        iVar9 = iVar7;
      }
      if (iVar4 < iVar9) {
        _Dst = (void *)FUN_18026f580((longlong)iVar9 * 0x1c);
        if (*(void **)(lVar5 + 0x14a0) != (void *)0x0) {
          memcpy(_Dst,*(void **)(lVar5 + 0x14a0),(longlong)*(int *)(lVar5 + 0x1498) * 0x1c);
          FUN_18026f680(*(undefined8 *)(lVar5 + 0x14a0));
        }
        *(void **)(lVar5 + 0x14a0) = _Dst;
        *(int *)(lVar5 + 0x149c) = iVar9;
      }
    }
    lVar8 = (longlong)*(int *)(lVar5 + 0x1498) * 0x1c;
    lVar6 = *(longlong *)(lVar5 + 0x14a0);
    puVar1 = (undefined8 *)(lVar8 + lVar6);
    *puVar1 = 0x200000005;
    puVar1[1] = CONCAT44(param_2,iVar3);
    puVar2 = (ulonglong *)(lVar8 + 0xc + lVar6);
    *puVar2 = (ulonglong)param_2;
    puVar2[1] = 0;
    *(int *)(lVar5 + 0x1498) = *(int *)(lVar5 + 0x1498) + 1;
  }
  return;
}


