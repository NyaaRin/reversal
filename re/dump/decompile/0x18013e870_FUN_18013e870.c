// 0x18013e870  FUN_18013e870
// size=1198 thunk=false
// signature: undefined FUN_18013e870()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018013ecfe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18013e870(undefined8 *param_1,undefined1 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uintptr_t uVar4;
  undefined8 ****ppppuVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStackY_f8 [32];
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  uintptr_t local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStackY_f8;
  local_a8 = 0;
  local_48 = param_1;
  if (1 < DAT_180409c24 - 2U) goto LAB_18013e95f;
  if (param_1[2] == 0) {
    local_c8 = (undefined8 ****)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"enter the code first",0x14);
    local_a0 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar5 = &local_c8;
    if (0xf < local_b0) {
      ppppuVar5 = (undefined8 ****)local_c8;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar5,local_b8);
    _Mtx_unlock(&DAT_1803e85c0);
LAB_18013e955:
    ppppuVar5 = &local_c8;
  }
  else {
    if (DAT_180409c80 == 0) {
      local_c8 = (undefined8 ****)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_18001d080(&local_c8,"session is gone - log in again",0x1e);
      local_a0 = (undefined8 *)&DAT_1803e85c0;
      iVar3 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar3 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppuVar5 = &local_c8;
      if (0xf < local_b0) {
        ppppuVar5 = (undefined8 ****)local_c8;
      }
      FUN_180212700(&DAT_1803e9e20,ppppuVar5,local_b8);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_c8);
      LOCK();
      DAT_180409c24 = 5;
      UNLOCK();
      goto LAB_18013e95f;
    }
    if (DAT_180409c59 != '\0') {
      local_a0 = (undefined8 *)&DAT_1803e8660;
      iVar3 = _Mtx_lock(&DAT_1803e8660);
      if (iVar3 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e86ac == 0x7fffffff) {
        DAT_1803e86ac = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      if (param_1 != (undefined8 *)&DAT_1803e9e60) {
        puVar6 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar6 = (undefined8 *)*param_1;
        }
        FUN_180212700(&DAT_1803e9e60,puVar6,param_1[2]);
      }
      _Mtx_unlock(&DAT_1803e8660);
      LOCK();
      DAT_180409c28 = 1;
      UNLOCK();
      local_c8 = (undefined8 ****)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_18001d080(&local_c8,"submitting code...",0x12);
      local_a0 = (undefined8 *)&DAT_1803e85c0;
      iVar3 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar3 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppuVar5 = &local_c8;
      if (0xf < local_b0) {
        ppppuVar5 = (undefined8 ****)local_c8;
      }
      FUN_180212700(&DAT_1803e9e20,ppppuVar5,local_b8);
      _Mtx_unlock(&DAT_1803e85c0);
      goto LAB_18013e955;
    }
    bVar7 = DAT_180409c24 == 2;
    cVar2 = FUN_18013cf00();
    if (cVar2 == '\0') goto LAB_18013e95f;
    local_c8 = (undefined8 ****)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"submitting code...",0x12);
    local_a0 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar5 = &local_c8;
    if (0xf < local_b0) {
      ppppuVar5 = (undefined8 ****)local_c8;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar5,local_b8);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_c8);
    FUN_18016d4c0(&local_80);
    local_88 = (undefined8 *)0x0;
    local_60 = bVar7;
    local_5f = param_2;
    local_a0 = (undefined8 *)FUN_1802d8350(0x28);
    *local_a0 = 0;
    local_a0[1] = 0;
    *local_a0 = CONCAT71(local_80._1_7_,local_80._0_1_);
    local_a0[1] = local_78;
    local_a0[2] = local_70;
    local_a0[3] = local_68;
    local_70 = 0;
    local_68 = 0xf;
    local_80._0_1_ = 0;
    *(bool *)(local_a0 + 4) = bVar7;
    *(undefined1 *)((longlong)local_a0 + 0x21) = param_2;
    local_a8 = 1;
    local_88 = local_a0;
    local_58 = local_a0;
    local_50 = local_a0;
    uVar4 = _beginthreadex((void *)0x0,0,FUN_1802210a0,local_a0,0,(uint *)&uStack_90);
    local_98 = uVar4;
    if (uVar4 == 0) {
      uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
      std::_Throw_Cpp_error(6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_88 = (undefined8 *)0x0;
    local_a8 = 0;
    if (DAT_18056de98 != 0) {
                    /* WARNING: Subroutine does not return */
      terminate();
    }
    DAT_18056de98 = (uint)uStack_90;
    _DAT_18056de9c = uStack_90._4_4_;
    local_98 = 0;
    uStack_90 = 0;
    ppppuVar5 = (undefined8 ****)&local_80;
    _DAT_18056de90 = uVar4;
  }
  FUN_18020e450(ppppuVar5);
LAB_18013e95f:
  FUN_18020e450(param_1);
  return;
}


