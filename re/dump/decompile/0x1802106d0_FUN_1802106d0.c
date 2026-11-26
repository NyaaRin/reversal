// 0x1802106d0  FUN_1802106d0
// size=120 thunk=false
// signature: undefined FUN_1802106d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1802106d0(longlong *param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [32];
  _Lockit local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (*param_1 == 0) {
    std::_Lockit::_Lockit(local_18,0);
    pcVar1 = _Id_cnt_exref;
    if (*param_1 == 0) {
      *(int *)_Id_cnt_exref = *(int *)_Id_cnt_exref + 1;
      *param_1 = (longlong)*(int *)pcVar1;
    }
    std::_Lockit::~_Lockit(local_18);
    return *param_1;
  }
  return *param_1;
}


