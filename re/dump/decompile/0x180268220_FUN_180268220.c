// 0x180268220  FUN_180268220
// size=305 thunk=false
// signature: undefined FUN_180268220()
// status: ok


void FUN_180268220(longlong param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  void *_Dst;
  longlong lVar8;
  int iVar9;
  
  if ((*(char *)(param_1 + 0xba5) != '\0') && ((param_2 != 0.0 || (param_3 != 0.0)))) {
    lVar5 = *(longlong *)(param_1 + 0xd0);
    iVar2 = *(int *)(lVar5 + 0x14bc);
    *(int *)(lVar5 + 0x14bc) = iVar2 + 1;
    iVar3 = *(int *)(lVar5 + 0x149c);
    uVar4 = *(uint *)(lVar5 + 0x14b8);
    if (*(int *)(lVar5 + 0x1498) == iVar3) {
      iVar9 = *(int *)(lVar5 + 0x1498) + 1;
      if (iVar3 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = iVar3 / 2 + iVar3;
      }
      if (iVar9 < iVar7) {
        iVar9 = iVar7;
      }
      if (iVar3 < iVar9) {
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
    *puVar1 = 0x100000002;
    puVar1[1] = CONCAT44(param_2,iVar2);
    puVar1 = (undefined8 *)(lVar8 + 0xc + lVar6);
    *puVar1 = CONCAT44(param_3,param_2);
    puVar1[1] = (ulonglong)uVar4;
    *(int *)(lVar5 + 0x1498) = *(int *)(lVar5 + 0x1498) + 1;
  }
  return;
}


