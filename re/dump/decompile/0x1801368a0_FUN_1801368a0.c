// 0x1801368a0  FUN_1801368a0
// size=522 thunk=false
// signature: undefined FUN_1801368a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801368a0(char *param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  char *_Str1;
  char *_Str2;
  char *pcVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  char *local_90;
  char local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  lVar5 = 0;
  if ((int)param_2 != 0) {
    lVar5 = param_2;
  }
  local_98 = &DAT_1803e86b0;
  iVar3 = _Mtx_lock(&DAT_1803e86b0);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e86fc == 0x7fffffff) {
    DAT_1803e86fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  pcVar1 = DAT_1803eb7c0;
  pcVar4 = DAT_1803eb7b8;
  if (DAT_1803eb7b8 != DAT_1803eb7c0) {
    do {
      _Str2 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        _Str2 = *(char **)param_1;
      }
      _Str1 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        _Str1 = *(char **)pcVar4;
      }
      iVar3 = _stricmp(_Str1,_Str2);
    } while ((iVar3 != 0) && (pcVar4 = pcVar4 + 0x48, pcVar4 != pcVar1));
    if (pcVar4 != DAT_1803eb7c0) {
      if (lVar5 != 0) {
        *(longlong *)(pcVar4 + 0x20) = lVar5;
      }
      goto LAB_180136a75;
    }
  }
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_78 = _DAT_1803814b0;
  uStack_70 = _UNK_1803814b8;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_68 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_60 = 0;
  if (local_88 != param_1) {
    pcVar1 = param_1 + 0x10;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(char **)param_1;
    }
    FUN_180212700(local_88,param_1,*(undefined8 *)pcVar1);
  }
  pcVar1 = DAT_1803eb7c0;
  local_68 = lVar5;
  if (DAT_1803eb7c0 == DAT_1803eb7c8) {
    FUN_180224fe0(&DAT_1803eb7b8,DAT_1803eb7c0,local_88);
  }
  else {
    local_90 = DAT_1803eb7c0;
    FUN_18016d4c0(DAT_1803eb7c0,local_88);
    *(longlong *)(pcVar1 + 0x20) = local_68;
    FUN_18016d4c0(pcVar1 + 0x28,&local_60);
    DAT_1803eb7c0 = DAT_1803eb7c0 + 0x48;
  }
  FUN_18020e450(&local_60);
  FUN_18020e450(local_88);
LAB_180136a75:
  _Mtx_unlock(&DAT_1803e86b0);
  FUN_1801365b0();
  return;
}


