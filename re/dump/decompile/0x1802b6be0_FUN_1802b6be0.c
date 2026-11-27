// 0x1802b6be0  FUN_1802b6be0
// size=763 thunk=false
// signature: undefined FUN_1802b6be0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool FUN_1802b6be0(longlong param_1,longlong param_2,uint *param_3,code *param_4,undefined8 param_5,
                  char param_6)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  int local_90;
  undefined4 local_8c;
  ushort local_88;
  ulonglong local_86;
  undefined8 local_7e;
  undefined6 local_76;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined2 local_66;
  undefined2 uStack_64;
  undefined2 local_62;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  uVar2 = *(uint *)(param_2 + 0x10);
  bVar5 = false;
  uVar8 = *param_3;
  uVar9 = (ulonglong)uVar8;
  bVar10 = true;
  if (0x1f < uVar8) goto LAB_1802b6c7a;
  uVar6 = uVar2 & 0x4000000;
  if ((uVar8 == 10) && (uVar6 != 0)) {
    bVar5 = true;
LAB_1802b6c56:
    if (param_6 == '\0') {
      if (uVar6 == 0) goto LAB_1802b6e97;
    }
    else if (uVar6 == 0) {
      uVar9 = 0x20;
      *param_3 = 0x20;
    }
    bVar5 = true;
LAB_1802b6c6d:
    bVar10 = false;
  }
  else {
    if (uVar8 == 10) goto LAB_1802b6c56;
LAB_1802b6e97:
    if ((uVar8 != 9) || ((uVar2 & 0x20) == 0)) goto LAB_1802b6c6d;
    bVar10 = true;
  }
  if (!bVar5 && !bVar10) {
    return false;
  }
  bVar10 = false;
LAB_1802b6c7a:
  uVar8 = (uint)uVar9;
  if (param_6 == '\0') {
    if (uVar8 == 0x7f) {
      return false;
    }
    if (uVar8 - 0xe000 < 0x1900) {
      return false;
    }
  }
  if (0xffff < uVar8) {
    return false;
  }
  if ((bVar10) && ((uVar2 & 0x1000001f) != 0)) {
    uVar1 = *(ushort *)(param_1 + 0xc38);
    if (((uVar2 & 0x10000005) != 0) && ((uVar8 - 0x2c & 0xfffffffd) == 0)) {
      uVar9 = (ulonglong)uVar1;
    }
    if (((uVar2 & 7) != 0) && ((int)uVar9 - 0xff01U < 0x5e)) {
      uVar9 = (ulonglong)((int)uVar9 - 0xfee0);
    }
    uVar8 = (uint)uVar9;
    if ((((uVar2 & 1) != 0) && (9 < uVar8 - 0x30)) && (uVar8 != uVar1)) {
      if (0x2f < uVar8) {
        return false;
      }
      if ((0xac0000000000U >> (uVar9 & 0x3f) & 1) == 0) {
        return false;
      }
    }
    if ((((uVar2 & 4) != 0) && (9 < uVar8 - 0x30)) && (uVar8 != uVar1)) {
      if (0x3b < uVar8 - 0x2a) {
        return false;
      }
      if ((0x80000000800002bU >> ((ulonglong)(uVar8 - 0x2a) & 0x3f) & 1) == 0) {
        return false;
      }
    }
    if ((uVar2 & 2) != 0) {
      if (0x36 < uVar8 - 0x30) {
        return false;
      }
      if ((0x7e0000007e03ffU >> ((ulonglong)(uVar8 - 0x30) & 0x3f) & 1) == 0) {
        return false;
      }
    }
    if (((uVar2 & 8) != 0) && (uVar8 - 0x61 < 0x1a)) {
      uVar9 = (ulonglong)(uVar8 - 0x20);
    }
    uVar8 = (uint)uVar9;
    if ((uVar2 & 0x10) != 0) {
      if (uVar8 == 0x20) {
        return false;
      }
      if (uVar8 == 9) {
        return false;
      }
      if (uVar8 == 0x3000) {
        return false;
      }
    }
    *param_3 = uVar8;
  }
  if ((uVar2 >> 0x15 & 1) == 0) {
    return true;
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_90 = *(int *)(param_2 + 0x14);
  local_8c = 0;
  local_86 = 0;
  local_a8 = *(longlong *)(lVar3 + 0xec0);
  local_7e = 0;
  local_76 = 0;
  uStack_64 = 0;
  local_62 = 0;
  local_a0 = 0x200000;
  local_88 = (ushort)uVar9;
  if (*(int *)(local_a8 + 0x1594) == local_90) {
    local_86 = (ulonglong)(*(char *)(local_a8 + 0x15a0) != '\0');
  }
  puVar4 = *(undefined4 **)(param_2 + 8);
  uStack_70 = (undefined2)*puVar4;
  uStack_6e = (undefined2)((uint)*puVar4 >> 0x10);
  uStack_6c = puVar4[1];
  uStack_68 = (undefined2)puVar4[2];
  local_66 = (undefined2)((uint)puVar4[2] >> 0x10);
  local_98 = param_5;
  local_9c = uVar2;
  iVar7 = (*param_4)(&local_a8);
  if (iVar7 != 0) {
    return false;
  }
  *param_3 = (uint)local_88;
  return local_88 != 0;
}


