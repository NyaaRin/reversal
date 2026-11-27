// 0x18013cfb0  FUN_18013cfb0
// size=1046 thunk=false
// signature: undefined FUN_18013cfb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018013d2c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18013cfb0(char *param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uintptr_t uVar6;
  char ****ppppcVar7;
  char *pcVar8;
  undefined1 auStackY_128 [32];
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  char **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 *local_78;
  longlong local_70;
  undefined8 *local_68;
  char *local_60;
  char ***local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStackY_128;
  local_70 = param_2;
  local_60 = param_1;
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
LAB_18013d2ef:
    local_58 = (char ***)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_18001d080(&local_58,"username and password are required",0x22);
    local_78 = (undefined8 *)&DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppcVar7 = &local_58;
    if (0xf < local_40) {
      ppppcVar7 = (char ****)local_58;
    }
    FUN_180212700(&DAT_1803e9e20,ppppcVar7,local_48);
    _Mtx_unlock(&DAT_1803e85c0);
LAB_18013d383:
    ppppcVar7 = &local_58;
  }
  else {
    FUN_180138610(&local_58);
    if ((local_48 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
LAB_18013d050:
      bVar2 = false;
    }
    else {
      pcVar8 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar8 = *(char **)param_1;
      }
      ppppcVar7 = &local_58;
      if (0xf < local_40) {
        ppppcVar7 = (char ****)local_58;
      }
      iVar5 = _stricmp((char *)ppppcVar7,pcVar8);
      if (iVar5 != 0) goto LAB_18013d050;
      bVar2 = true;
    }
    FUN_18020e450(&local_58);
    if (bVar2) {
      local_58 = (char ***)0x0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_18001d080(&local_58,
                    "Steam is already signed in as this account - a second session would sign the first one out (that is the \"please start Steam\" error)"
                    ,0x83);
      local_d0 = (undefined8 *)&DAT_1803e85c0;
      iVar5 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar5 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppcVar7 = &local_58;
      if (0xf < local_40) {
        ppppcVar7 = (char ****)local_58;
      }
      FUN_180212700(&DAT_1803e9e20,ppppcVar7,local_48);
      _Mtx_unlock(&DAT_1803e85c0);
      goto LAB_18013d383;
    }
    cVar4 = FUN_18013cf00();
    if (cVar4 == '\0') goto LAB_18013d38d;
    local_d0 = (undefined8 *)&DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if (param_1 != (char *)&DAT_1803eb340) {
      pcVar8 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar8 = *(char **)param_1;
      }
      FUN_180212700(&DAT_1803eb340,pcVar8,*(undefined8 *)(param_1 + 0x10));
    }
    FUN_180212700(&DAT_1803e9e20,"connecting to the Steam client...",0x21);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18016d4c0(&local_c8,param_1);
    FUN_18016d4c0(&local_a8);
    local_d8 = (undefined8 *)0x0;
    local_88 = param_3;
    local_87 = param_4;
    local_d8 = (undefined8 *)FUN_1802d8350(0x48);
    *local_d8 = 0;
    local_d8[1] = 0;
    *local_d8 = CONCAT71(local_c8._1_7_,local_c8._0_1_);
    local_d8[1] = local_c0;
    local_d8[2] = local_b8;
    local_d8[3] = local_b0;
    local_b8 = 0;
    local_b0 = 0xf;
    local_c8._0_1_ = 0;
    local_d8[4] = CONCAT71(uStack_a7,local_a8);
    local_d8[5] = local_a0;
    local_d8[6] = local_98;
    local_d8[7] = local_90;
    local_98 = 0;
    local_90 = 0xf;
    local_a8 = 0;
    *(undefined1 *)(local_d8 + 8) = param_3;
    *(undefined1 *)((longlong)local_d8 + 0x41) = param_4;
    local_d0 = local_d8;
    local_78 = local_d8;
    local_68 = local_d8;
    uVar6 = _beginthreadex((void *)0x0,0,FUN_180220fe0,local_d8,0,(uint *)&uStack_e0);
    uVar3 = uStack_e0._4_4_;
    if (uVar6 == 0) {
      uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
      std::_Throw_Cpp_error(6);
      goto LAB_18013d2ef;
    }
    local_d8 = (undefined8 *)0x0;
    if (DAT_18056de98 != 0) {
                    /* WARNING: Subroutine does not return */
      terminate();
    }
    DAT_18056de98 = (uint)uStack_e0;
    uStack_e0 = 0;
    _DAT_18056de9c = uVar3;
    _DAT_18056de90 = uVar6;
    FUN_18020e450(&local_a8);
    ppppcVar7 = (char ****)&local_c8;
  }
  FUN_18020e450(ppppcVar7);
LAB_18013d38d:
  FUN_18020e450(param_1);
  FUN_18020e450(param_2);
  return;
}


