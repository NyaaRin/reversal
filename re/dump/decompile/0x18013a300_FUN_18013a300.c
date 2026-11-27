// 0x18013a300  FUN_18013a300
// size=594 thunk=false
// signature: undefined FUN_18013a300()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18013a300(void)

{
  code *pcVar1;
  int iVar2;
  LPCSTR ***ppppCVar3;
  LPCSTR ***ppppCVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined *local_78;
  LPCSTR **local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong local_58;
  int local_50;
  int iStack_4c;
  LPCSTR *local_48;
  LPCSTR *local_40;
  CHAR local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0xf;
  local_70 = (LPCSTR **)0x0;
  local_50 = -1;
  iStack_4c = -1;
  local_48 = (LPCSTR *)0x0;
  local_40 = (LPCSTR *)0x0;
  local_78 = &DAT_1803e8610;
  iVar2 = _Mtx_lock(&DAT_1803e8610);
  if (iVar2 == 0) {
    if (DAT_1803e865c == 0x7fffffff) {
      DAT_1803e865c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppCVar4 = DAT_1803e9e48;
    if (DAT_1803e9e48 == DAT_1803e9e50) {
      SetEnvironmentVariableA("MAYRR_AS_USER",(LPCSTR)0x0);
      SetEnvironmentVariableA("MAYRR_AS_PIPE",(LPCSTR)0x0);
      SetEnvironmentVariableA("MAYRR_AS_ACCOUNT",(LPCSTR)0x0);
      _Mtx_unlock(&DAT_1803e8610);
    }
    else {
      if (&local_70 != DAT_1803e9e48) {
        ppppCVar3 = DAT_1803e9e48;
        if ((LPCSTR **)0xf < DAT_1803e9e48[3]) {
          ppppCVar3 = (LPCSTR ***)*DAT_1803e9e48;
        }
        FUN_180212700(&local_70,ppppCVar3,DAT_1803e9e48[2]);
      }
      local_50 = *(int *)(ppppCVar4 + 4);
      iStack_4c = *(int *)((longlong)ppppCVar4 + 0x24);
      local_48 = (LPCSTR *)ppppCVar4[5];
      local_40 = (LPCSTR *)ppppCVar4[6];
      _Mtx_unlock(&DAT_1803e8610);
      if ((local_50 == -1) || (iStack_4c == -1)) {
        SetEnvironmentVariableA("MAYRR_AS_USER",(LPCSTR)0x0);
        SetEnvironmentVariableA("MAYRR_AS_PIPE",(LPCSTR)0x0);
        SetEnvironmentVariableA("MAYRR_AS_ACCOUNT",(LPCSTR)0x0);
      }
      else {
        local_88 = local_50;
        FUN_180012b20(local_38,0x20,0xffffffffffffffff,&DAT_18033f570);
        SetEnvironmentVariableA("MAYRR_AS_USER",local_38);
        local_88 = iStack_4c;
        FUN_180012b20(local_38,0x20,0xffffffffffffffff,&DAT_18033f570);
        SetEnvironmentVariableA("MAYRR_AS_PIPE",local_38);
        ppppCVar4 = &local_70;
        if (0xf < local_58) {
          ppppCVar4 = (LPCSTR ***)local_70;
        }
        SetEnvironmentVariableA("MAYRR_AS_ACCOUNT",(LPCSTR)ppppCVar4);
        if (local_60 == 0) {
          ppppCVar4 = (LPCSTR ***)&DAT_18033e9cc;
        }
        else {
          ppppCVar4 = &local_70;
          if (0xf < local_58) {
            ppppCVar4 = (LPCSTR ***)local_70;
          }
        }
        FUN_180014410("[AS] unload: leaving local user %d (pipe %d, \'%s\') SIGNED IN for the next load - a replacement would be this process\'s second user and Steam will not authorise one\n"
                      ,local_50,iStack_4c,ppppCVar4);
      }
    }
    FUN_18020e450(&local_70);
    return;
  }
  std::_Throw_Cpp_error(5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


