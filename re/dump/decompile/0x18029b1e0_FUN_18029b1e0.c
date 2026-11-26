// 0x18029b1e0  FUN_18029b1e0
// size=469 thunk=false
// signature: undefined FUN_18029b1e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_18029b1e0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  int local_74;
  int *local_70;
  undefined1 *local_68;
  int *local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x38);
  local_74 = param_2;
  local_70 = (int *)FUN_18026f580(0x58);
  local_68 = local_78;
  iVar7 = 1;
  piVar5 = (int *)0x0;
  if (local_70 != (int *)0x0) {
    local_70[0x10] = 0;
    local_70[0x11] = 0;
    local_70[0x12] = 0;
    local_70[0x13] = 0;
    local_70[0] = 0;
    local_70[1] = 0;
    local_70[2] = 0;
    local_70[3] = 0;
    local_70[4] = 0;
    local_70[5] = 0;
    local_70[6] = 0;
    local_70[7] = 0;
    local_70[8] = 0;
    local_70[9] = 0;
    local_70[10] = 0;
    local_70[0xb] = 0;
    local_70[0xc] = 0;
    local_70[0xd] = 0;
    local_70[0xe] = 0;
    local_70[0xf] = 0;
    local_70[0x10] = 0;
    local_70[0x11] = 0;
    local_70[0x12] = 0;
    local_70[0x13] = 0;
    local_70[0x14] = 0;
    local_70[0x15] = 0;
    local_70[1] = 1;
    local_70[4] = 0;
    local_70[5] = 0;
    piVar5 = local_70;
  }
  iVar1 = *(int *)(param_1 + 0x298);
  *(int *)(param_1 + 0x298) = iVar1 + 1;
  *piVar5 = iVar1;
  iVar1 = *(int *)(param_1 + 0x44);
  local_60 = local_70;
  if (*(int *)(param_1 + 0x40) == iVar1) {
    iVar6 = *(int *)(param_1 + 0x40) + 1;
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar1 / 2 + iVar1;
    }
    if (iVar6 < iVar3) {
      iVar6 = iVar3;
    }
    if (iVar1 < iVar6) {
      pvVar4 = (void *)FUN_18026f580((longlong)iVar6 << 3);
      if (*(void **)(param_1 + 0x48) != (void *)0x0) {
        memcpy(pvVar4,*(void **)(param_1 + 0x48),(longlong)*(int *)(param_1 + 0x40) << 3);
        FUN_18026f680(*(undefined8 *)(param_1 + 0x48));
      }
      *(void **)(param_1 + 0x48) = pvVar4;
      *(int *)(param_1 + 0x44) = iVar6;
      param_2 = local_74;
    }
  }
  *(int **)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 8) = piVar5;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x57) = 1;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(longlong *)(piVar5 + 10) != 0) {
    FUN_18026f680();
  }
  piVar5[10] = 0;
  piVar5[0xb] = 0;
  piVar5[6] = iVar1;
  piVar5[1] = 2;
  piVar5[7] = param_2;
  piVar5[8] = param_3;
  if (iVar1 == 0) {
    iVar7 = 4;
  }
  else if (iVar1 != 1) {
    iVar7 = 0;
  }
  piVar5[9] = iVar7;
  *(undefined1 *)((longlong)piVar5 + 0x56) = 0;
  pvVar4 = (void *)FUN_18026f580((longlong)(iVar7 * param_2 * param_3));
  *(void **)(piVar5 + 10) = pvVar4;
  memset(pvVar4,0,(longlong)(piVar5[9] * piVar5[7] * piVar5[8]));
  piVar5[0xc] = 0;
  piVar5[0xd] = 0;
  piVar5[0xe] = -1;
  piVar5[0xf] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  FUN_18029b070(param_1,piVar5);
  return piVar5;
}


