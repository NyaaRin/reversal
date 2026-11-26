// 0x180155880  FUN_180155880
// size=1167 thunk=false
// signature: undefined FUN_180155880()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180155880(longlong *param_1,undefined8 param_2,undefined4 param_3,char param_4,
                       char param_5)

{
  code *pcVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_818 [32];
  undefined *local_7f8;
  ulonglong local_7f0;
  ulonglong local_7e8;
  char local_7e0 [56];
  undefined1 local_7a8 [608];
  char local_548 [639];
  undefined1 auStack_2c9 [641];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_818;
  if (*param_1 == 0) {
    return 0;
  }
  if (((DAT_180409f60 == '\0') || (DAT_180423571 != '\0')) ||
     (cVar4 = FUN_180155560(), cVar4 == '\0')) goto LAB_180155c90;
  local_7a8[0] = 0;
  iVar5 = (*DAT_180409f10)(param_2,1);
  if (iVar5 != 4) goto LAB_180155c90;
  local_7f0 = 0;
  pvVar7 = (void *)(*DAT_180409e58)(param_2,1,&local_7f0);
  if (pvVar7 == (void *)0x0) goto LAB_180155c90;
  if (599 < local_7f0) {
    local_7f0 = 599;
  }
  uVar9 = local_7f0;
  memcpy(local_7a8,pvVar7,local_7f0);
  local_7a8[uVar9] = 0;
  local_7e0[0x11] = '\0';
  local_7e0[0x12] = '\0';
  local_7e0[0x13] = '\0';
  local_7e0[0x14] = '\0';
  local_7e0[0x15] = '\0';
  local_7e0[0x16] = '\0';
  local_7e0[0x17] = '\0';
  local_7e0[0x18] = '\0';
  local_7e0[0x19] = '\0';
  local_7e0[0x1a] = '\0';
  local_7e0[0x1b] = '\0';
  local_7e0[0x1c] = '\0';
  local_7e0[0x1d] = '\0';
  local_7e0[0x1e] = '\0';
  local_7e0[0x1f] = '\0';
  local_7e0[0x20] = 0;
  local_7e0[0x21] = '\0';
  local_7e0[0x22] = '\0';
  local_7e0[0x23] = '\0';
  local_7e0[0x24] = '\0';
  local_7e0[0x25] = '\0';
  local_7e0[0x26] = '\0';
  local_7e0[0x27] = '\0';
  local_7e0[0x28] = '\0';
  local_7e0[0x29] = '\0';
  local_7e0[0x2a] = '\0';
  local_7e0[0x2b] = '\0';
  local_7e0[0x2c] = '\0';
  local_7e0[0x2d] = '\0';
  local_7e0[0x2e] = '\0';
  local_7e0[0x2f] = '\0';
  local_7e0[0x10] = 0;
  iVar5 = (*DAT_180409f10)(param_2,param_3);
  if (iVar5 == 4) {
    local_7e8 = 0;
    pvVar7 = (void *)(*DAT_180409e58)(param_2,param_3,&local_7e8);
    if (pvVar7 != (void *)0x0) {
      if (0x1f < local_7e8) {
        local_7e8 = 0x1f;
      }
      uVar9 = local_7e8;
      memcpy(local_7e0 + 0x10,pvVar7,local_7e8);
      local_7e0[uVar9 + 0x10] = '\0';
    }
  }
  if (param_5 != '\0') {
    local_7e0[1] = '\0';
    local_7e0[2] = '\0';
    local_7e0[3] = '\0';
    local_7e0[4] = '\0';
    local_7e0[5] = '\0';
    local_7e0[6] = '\0';
    local_7e0[7] = '\0';
    local_7e0[8] = '\0';
    local_7e0[9] = '\0';
    local_7e0[10] = '\0';
    local_7e0[0xb] = '\0';
    local_7e0[0xc] = '\0';
    local_7e0[0xd] = '\0';
    local_7e0[0xe] = '\0';
    local_7e0[0xf] = 0;
    local_7e0[0] = '\0';
    iVar5 = (*DAT_180409f10)(param_2,2);
    if (iVar5 == 4) {
      local_7f8 = (undefined *)0x0;
      pvVar7 = (void *)(*DAT_180409e58)(param_2,2,&local_7f8);
      if (pvVar7 != (void *)0x0) {
        if ((undefined *)0xf < local_7f8) {
          local_7f8 = (undefined *)0xf;
        }
        puVar2 = local_7f8;
        memcpy(local_7e0,pvVar7,(size_t)local_7f8);
        local_7e0[(longlong)puVar2] = '\0';
      }
    }
    pcVar8 = strpbrk(local_7e0,"waWA+");
    if (pcVar8 != (char *)0x0) goto LAB_180155c90;
  }
  uVar9 = FUN_180154f20(local_7a8,local_7e0 + 0x10,local_548,0x280);
  if (param_4 == '\0') {
    local_7f8 = &DAT_1803e8780;
    iVar5 = _Mtx_lock(&DAT_1803e8780);
    if (iVar5 != 0) goto LAB_180155d03;
    if (DAT_1803e87cc != 0x7fffffff) {
      uVar13 = 0;
      if (DAT_1803e9df0 == DAT_1803e9df8) {
        _Mtx_unlock(&DAT_1803e8780);
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_180155310(local_548,uVar9);
        _Mtx_unlock(&DAT_1803e8780);
      }
      bVar14 = iVar5 == 1;
      goto LAB_180155c16;
    }
LAB_180155c49:
    DAT_1803e87cc = DAT_1803e87cc + -1;
    std::_Throw_Cpp_error(6);
  }
  else {
    uVar11 = 0;
    uVar13 = uVar9;
    if (uVar9 == 0) {
LAB_180155ad5:
      uVar11 = 0;
      bVar14 = false;
      uVar10 = 0;
      bVar3 = false;
      if (uVar13 != 0) goto LAB_180155ae0;
    }
    else {
      do {
        uVar13 = uVar11;
        if ((local_548[uVar11] == '*') || (local_548[uVar11] == '?')) goto LAB_180155ad5;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar9);
      uVar11 = 0;
      uVar10 = 0;
      uVar13 = uVar9;
      bVar3 = false;
LAB_180155ae0:
      do {
        bVar14 = bVar3;
        if (local_548[uVar10] == '/') {
          bVar14 = true;
          uVar11 = uVar10;
        }
        uVar10 = uVar10 + 1;
        bVar3 = bVar14;
      } while (uVar10 < uVar13);
    }
    uVar13 = 0;
    if (bVar14) {
      uVar13 = uVar11;
    }
    if (0x280 < uVar13 + 1) {
      uVar13 = 0x27f;
    }
    memcpy(auStack_2c9 + 1,local_548,uVar13);
    auStack_2c9[uVar13 + 1] = 0;
    local_7f8 = &DAT_1803e8780;
    iVar5 = _Mtx_lock(&DAT_1803e8780);
    if (iVar5 != 0) goto LAB_180155d03;
    if (DAT_1803e87cc == 0x7fffffff) goto LAB_180155c49;
    if (DAT_1803e9df0 == DAT_1803e9df8) {
      _Mtx_unlock(&DAT_1803e8780);
      bVar14 = false;
    }
    else {
      iVar5 = FUN_180155310(auStack_2c9 + 1,uVar13);
      _Mtx_unlock(&DAT_1803e8780);
      bVar14 = iVar5 != 0;
    }
LAB_180155c16:
    if (!bVar14) {
      uVar9 = (*(code *)*param_1)(param_2);
      if (param_4 == '\0') {
        return uVar9;
      }
      iVar5 = (int)uVar9;
      if (iVar5 < 1) {
        return uVar9;
      }
      iVar6 = (*DAT_180409e50)(param_2);
      iVar12 = 0;
      do {
        FUN_1801555e0(param_2,((iVar6 + 1) - iVar5) + iVar12,auStack_2c9 + 1,uVar13);
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar5);
      return uVar9 & 0xffffffff;
    }
    LOCK();
    DAT_180409d30 = DAT_180409d30 + 1;
    UNLOCK();
    local_7f8 = &DAT_1803e8780;
    iVar5 = _Mtx_lock(&DAT_1803e8780);
    if (iVar5 != 0) {
LAB_180155d03:
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
    if (DAT_1803e87cc == 0x7fffffff) goto LAB_180155c49;
  }
  FUN_180012ac0(&DAT_180409e70,0xa0,&DAT_1803431ac,local_7a8);
  _Mtx_unlock(&DAT_1803e8780);
  FUN_180155480(param_2,param_4);
LAB_180155c90:
  uVar9 = (*(code *)*param_1)(param_2);
  return uVar9;
}


