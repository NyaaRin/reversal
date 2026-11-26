// 1802899e0  FUN_1802899e0
// signature: undefined FUN_1802899e0()
// status: ok


void FUN_1802899e0(char *param_1,int param_2,char *param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  longlong local_res20;
  undefined8 local_28 [2];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res20 = param_4;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if (*(char *)(lVar2 + 0x2964) == '\0') {
    return;
  }
  cVar1 = *(char *)(lVar2 + 0x2966);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  if (cVar1 == -1) {
    *(undefined1 *)(lVar2 + 0x2966) = 0;
    iVar9 = *(int *)(lVar3 + 0x108) + 1;
    local_28[0] = 0xff000000000000;
    iVar5 = *(int *)(lVar2 + 0x296c);
    if (iVar5 < iVar9) {
      if (iVar5 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar5 / 2 + iVar5;
      }
      iVar4 = iVar9;
      if (iVar9 < iVar5) {
        iVar4 = iVar5;
      }
      FUN_18028ac40(lVar2 + 0x2968,iVar4);
    }
    for (iVar5 = *(int *)(lVar2 + 0x2968); iVar5 < iVar9; iVar5 = iVar5 + 1) {
      lVar7 = *(longlong *)(lVar2 + 0x2970);
      *(undefined8 *)(lVar7 + (longlong)iVar5 * 0xc) = local_28[0];
      *(undefined4 *)(lVar7 + 8 + (longlong)iVar5 * 0xc) = 0xffffffff;
    }
    *(int *)(lVar2 + 0x2968) = iVar9;
    iVar5 = *(int *)(lVar3 + 0x108);
    if (iVar5 + 1 < 1) {
      return;
    }
    iVar9 = 0;
    do {
      lVar7 = (longlong)iVar9;
      uVar8 = (int)param_1;
      if (iVar9 < iVar5) {
        uVar8 = *(undefined4 *)(*(longlong *)(lVar3 + 0x110) + lVar7 * 4);
      }
      iVar9 = iVar9 + 1;
      *(undefined4 *)(*(longlong *)(lVar2 + 0x2970) + lVar7 * 0xc) = uVar8;
      iVar5 = *(int *)(lVar3 + 0x108);
    } while (iVar9 < iVar5 + 1);
    return;
  }
  if ((int)cVar1 != *(int *)(lVar3 + 0x108)) {
    return;
  }
  lVar3 = *(longlong *)(lVar2 + 0x2970) + (longlong)cVar1 * 0xc;
  if (*(int *)(*(longlong *)(lVar2 + 0x2970) + 8 + (longlong)cVar1 * 0xc) != -1) goto LAB_180289c0e;
  local_28[0] = 0;
  local_res20 = 0;
  if (param_2 == 4) {
    pcVar10 = "%d";
LAB_180289bd9:
    FUN_1802687d0(local_28,&local_res20,pcVar10,(ulonglong)param_3 & 0xffffffff);
  }
  else if (param_2 == 0xb) {
    sVar6 = strlen(param_3);
    FUN_1802687d0(local_28,&local_res20,&DAT_18037f6fc,sVar6 & 0xffffffff,param_3);
  }
  else if (param_2 == 0xc) {
    FUN_1802687d0(local_28,&local_res20,"(void*)0x%p",param_3);
  }
  else if (param_2 == 0xd) {
    pcVar10 = "0x%08X [override]";
    param_3 = param_1;
    goto LAB_180289bd9;
  }
  iVar9 = *(int *)(lVar2 + 0x2978);
  iVar5 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar5 = 0;
  }
  *(int *)(lVar3 + 8) = iVar5;
  FUN_1802694a0((int *)(lVar2 + 0x2978),local_28[0],local_res20 + 1);
LAB_180289c0e:
  *(undefined1 *)(lVar3 + 5) = 1;
  if (*(char *)(lVar3 + 6) == -1) {
    *(char *)(lVar3 + 6) = (char)param_2;
  }
  return;
}


