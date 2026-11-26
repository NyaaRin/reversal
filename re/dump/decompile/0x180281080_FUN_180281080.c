// 0x180281080  FUN_180281080
// size=663 thunk=false
// signature: undefined FUN_180281080()
// status: ok


void FUN_180281080(uint param_1,byte param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  void *_Dst;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [8];
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  lVar10 = *(longlong *)(lVar4 + 0x1520);
  iVar9 = *(int *)(lVar4 + 0x2038);
  if (((char)param_2 < '\0') && (cVar6 = FUN_180280db0(0,0x400), cVar6 != '\0')) {
    return;
  }
  uStack_34 = 0;
  uVar5 = *(undefined8 *)(lVar4 + 0x2070);
  uVar1 = *(undefined4 *)(lVar4 + 4);
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uVar2 = *(undefined4 *)
           (*(longlong *)(lVar10 + 0x110) + -4 + (longlong)*(int *)(lVar10 + 0x108) * 4);
  puVar8 = (undefined8 *)FUN_180284040(local_30,0x4000000);
  puVar11 = (undefined4 *)(lVar4 + 0x100);
  uStack_44 = (undefined4)*puVar8;
  uStack_40 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  lVar10 = lVar4;
  if (puVar11 == (undefined4 *)0x0) {
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = *(longlong *)(lVar3 + 0xec0);
  }
  if ((*(float *)(lVar10 + 0x100) < DAT_180381444) || (*(float *)(lVar10 + 0x104) < DAT_180381444))
  {
    puVar11 = &uStack_44;
  }
  uStack_3c = *puVar11;
  uStack_38 = puVar11[1];
  if ((*(byte *)(lVar4 + 0x28e4) & 8) != 0) {
    FUN_180289170("[popup] OpenPopupEx(0x%08X)\n",param_1);
  }
  iVar12 = *(int *)(lVar4 + 0x2028);
  if (iVar12 < iVar9 + 1) {
    iVar9 = *(int *)(lVar4 + 0x202c);
    if (iVar12 != iVar9) goto LAB_1802812b5;
    iVar12 = iVar12 + 1;
    if (iVar9 == 0) {
LAB_180281260:
      iVar7 = 8;
    }
    else {
      iVar7 = iVar9 / 2 + iVar9;
    }
  }
  else {
    lVar3 = *(longlong *)(lVar4 + 0x2030);
    lVar10 = (longlong)iVar9 * 0x38;
    if ((*(uint *)(lVar10 + lVar3) == param_1) &&
       ((*(int *)(lVar10 + 0x1c + lVar3) == *(int *)(lVar4 + 4) + -1 || ((param_2 & 0x20) != 0)))) {
      *(undefined4 *)(lVar10 + 0x1c + lVar3) = uVar1;
      return;
    }
    FUN_180281430(iVar9,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
    iVar9 = *(int *)(lVar4 + 0x202c);
    if (*(int *)(lVar4 + 0x2028) != iVar9) goto LAB_1802812b5;
    iVar12 = *(int *)(lVar4 + 0x2028) + 1;
    if (iVar9 == 0) goto LAB_180281260;
    iVar7 = iVar9 / 2 + iVar9;
  }
  if (iVar12 < iVar7) {
    iVar12 = iVar7;
  }
  if (iVar9 < iVar12) {
    _Dst = (void *)FUN_18026f580((longlong)iVar12 * 0x38);
    if (*(void **)(lVar4 + 0x2030) != (void *)0x0) {
      memcpy(_Dst,*(void **)(lVar4 + 0x2030),(longlong)*(int *)(lVar4 + 0x2028) * 0x38);
      FUN_18026f680(*(undefined8 *)(lVar4 + 0x2030));
    }
    *(void **)(lVar4 + 0x2030) = _Dst;
    *(int *)(lVar4 + 0x202c) = iVar12;
  }
LAB_1802812b5:
  lVar10 = (longlong)*(int *)(lVar4 + 0x2028) * 0x38;
  lVar3 = *(longlong *)(lVar4 + 0x2030);
  *(ulonglong *)(lVar10 + lVar3) = (ulonglong)param_1;
  ((ulonglong *)(lVar10 + lVar3))[1] = 0;
  puVar8 = (undefined8 *)(lVar10 + 0x10 + lVar3);
  *puVar8 = uVar5;
  puVar8[1] = CONCAT44(uVar1,0xffffffff);
  puVar8 = (undefined8 *)(lVar10 + 0x20 + lVar3);
  *puVar8 = CONCAT44(uStack_44,uVar2);
  puVar8[1] = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(lVar10 + 0x30 + lVar3) = CONCAT44(uStack_34,uStack_38);
  *(int *)(lVar4 + 0x2028) = *(int *)(lVar4 + 0x2028) + 1;
  return;
}


