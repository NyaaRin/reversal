// 18026abb0  FUN_18026abb0
// signature: undefined FUN_18026abb0()
// status: ok


void FUN_18026abb0(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  iVar3 = *(int *)(lVar1 + 0x1fd8);
  if (iVar3 < param_1) {
    FUN_18027e9c0("Calling PopStyleVar() too many times!");
    iVar3 = *(int *)(lVar1 + 0x1fd8);
    param_1 = iVar3;
  }
  for (; 3 < param_1; param_1 = param_1 + -4) {
    lVar2 = *(longlong *)(lVar1 + 0x1fe0);
    lVar4 = (longlong)iVar3;
    lVar5 = (longlong)*(int *)(lVar2 + -0xc + lVar4 * 0xc);
    if ((&DAT_180331c71)[lVar5 * 4] == '\b') {
      uVar6 = (ulonglong)*(ushort *)(&DAT_180331c72 + lVar5 * 4);
      if ((*(uint *)(&DAT_180331c70 + lVar5 * 4) & 0xff) == 1) {
        *(undefined4 *)(uVar6 + 0xc78 + lVar1) = *(undefined4 *)(lVar2 + -8 + lVar4 * 0xc);
      }
      else if ((*(uint *)(&DAT_180331c70 + lVar5 * 4) & 0xff) == 2) {
        *(undefined4 *)(uVar6 + 0xc78 + lVar1) = *(undefined4 *)(lVar2 + -8 + lVar4 * 0xc);
        *(undefined4 *)(uVar6 + 0xc7c + lVar1) = *(undefined4 *)(lVar2 + -4 + lVar4 * 0xc);
      }
    }
    iVar3 = *(int *)(lVar1 + 0x1fd8);
    *(int *)(lVar1 + 0x1fd8) = iVar3 + -1;
    lVar2 = (longlong)iVar3 + -2;
    lVar4 = *(longlong *)(lVar1 + 0x1fe0);
    lVar5 = (longlong)*(int *)(lVar4 + lVar2 * 0xc);
    if ((&DAT_180331c71)[lVar5 * 4] == '\b') {
      uVar6 = (ulonglong)*(ushort *)(&DAT_180331c72 + lVar5 * 4);
      if ((*(uint *)(&DAT_180331c70 + lVar5 * 4) & 0xff) == 1) {
        *(undefined4 *)(uVar6 + 0xc78 + lVar1) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
      }
      else if ((*(uint *)(&DAT_180331c70 + lVar5 * 4) & 0xff) == 2) {
        *(undefined4 *)(uVar6 + 0xc78 + lVar1) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
        *(undefined4 *)(uVar6 + 0xc7c + lVar1) = *(undefined4 *)(lVar4 + 8 + lVar2 * 0xc);
      }
    }
    iVar3 = *(int *)(lVar1 + 0x1fd8);
    *(int *)(lVar1 + 0x1fd8) = iVar3 + -1;
    lVar2 = (longlong)iVar3 + -2;
    lVar4 = *(longlong *)(lVar1 + 0x1fe0);
    lVar5 = (longlong)*(int *)(lVar4 + lVar2 * 0xc);
    if ((&DAT_180331c71)[lVar5 * 4] == '\b') {
      uVar6 = (ulonglong)*(ushort *)(&DAT_180331c72 + lVar5 * 4);
      if ((*(uint *)(&DAT_180331c70 + lVar5 * 4) & 0xff) == 1) {
        *(undefined4 *)(uVar6 + 0xc78 + lVar1) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
      }
      else if ((*(uint *)(&DAT_180331c70 + lVar5 * 4) & 0xff) == 2) {
        *(undefined4 *)(uVar6 + 0xc78 + lVar1) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
        *(undefined4 *)(uVar6 + 0xc7c + lVar1) = *(undefined4 *)(lVar4 + 8 + lVar2 * 0xc);
      }
    }
    iVar3 = *(int *)(lVar1 + 0x1fd8);
    *(int *)(lVar1 + 0x1fd8) = iVar3 + -1;
    lVar2 = (longlong)iVar3 + -2;
    lVar4 = *(longlong *)(lVar1 + 0x1fe0);
    lVar5 = (longlong)*(int *)(lVar4 + lVar2 * 0xc);
    if ((&DAT_180331c71)[lVar5 * 4] == '\b') {
      uVar6 = (ulonglong)*(ushort *)(&DAT_180331c72 + lVar5 * 4);
      if ((*(uint *)(&DAT_180331c70 + lVar5 * 4) & 0xff) == 1) {
        *(undefined4 *)(uVar6 + 0xc78 + lVar1) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
      }
      else if ((*(uint *)(&DAT_180331c70 + lVar5 * 4) & 0xff) == 2) {
        *(undefined4 *)(uVar6 + 0xc78 + lVar1) = *(undefined4 *)(lVar4 + 4 + lVar2 * 0xc);
        *(undefined4 *)(uVar6 + 0xc7c + lVar1) = *(undefined4 *)(lVar4 + 8 + lVar2 * 0xc);
      }
    }
    iVar3 = *(int *)(lVar1 + 0x1fd8) + -1;
    *(int *)(lVar1 + 0x1fd8) = iVar3;
  }
  for (; 0 < param_1; param_1 = param_1 + -1) {
    lVar2 = *(longlong *)(lVar1 + 0x1fe0);
    lVar4 = (longlong)iVar3;
    lVar5 = (longlong)*(int *)(lVar2 + -0xc + lVar4 * 0xc);
    if ((&DAT_180331c71)[lVar5 * 4] == '\b') {
      uVar6 = (ulonglong)*(ushort *)(&DAT_180331c72 + lVar5 * 4);
      if ((*(uint *)(&DAT_180331c70 + lVar5 * 4) & 0xff) == 1) {
        *(undefined4 *)(uVar6 + 0xc78 + lVar1) = *(undefined4 *)(lVar2 + -8 + lVar4 * 0xc);
      }
      else if ((*(uint *)(&DAT_180331c70 + lVar5 * 4) & 0xff) == 2) {
        *(undefined4 *)(uVar6 + 0xc78 + lVar1) = *(undefined4 *)(lVar2 + -8 + lVar4 * 0xc);
        *(undefined4 *)(uVar6 + 0xc7c + lVar1) = *(undefined4 *)(lVar2 + -4 + lVar4 * 0xc);
      }
    }
    iVar3 = *(int *)(lVar1 + 0x1fd8) + -1;
    *(int *)(lVar1 + 0x1fd8) = iVar3;
  }
  return;
}


