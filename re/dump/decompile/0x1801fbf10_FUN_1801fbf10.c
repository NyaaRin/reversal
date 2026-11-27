// 0x1801fbf10  FUN_1801fbf10
// size=262 thunk=false
// signature: undefined FUN_1801fbf10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

facet * FUN_1801fbf10(locale *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  _Locimp *p_Var3;
  __uint64 _Var4;
  facet *pfVar5;
  undefined1 auStack_68 [32];
  facet *local_48;
  facet *local_40;
  _Lockit local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  std::_Lockit::_Lockit(local_38,0);
  local_40 = DAT_180425ae0;
  uVar2 = FUN_1802106d0(id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (uVar2 < *(ulonglong *)(lVar1 + 0x18)) {
    pfVar5 = *(facet **)(uVar2 * 8 + *(longlong *)(lVar1 + 0x10));
    if (pfVar5 != (facet *)0x0) goto LAB_1801fbfed;
  }
  else {
    pfVar5 = (facet *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_1801fbf91:
    if (pfVar5 != (facet *)0x0) goto LAB_1801fbfed;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (uVar2 < *(ulonglong *)(p_Var3 + 0x18)) {
      pfVar5 = *(facet **)(uVar2 * 8 + *(longlong *)(p_Var3 + 0x10));
      goto LAB_1801fbf91;
    }
  }
  pfVar5 = local_40;
  if (local_40 == (facet *)0x0) {
    _Var4 = std::ctype<char>::_Getcat(&local_40,param_1);
    pfVar5 = local_40;
    if (_Var4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180013970();
    }
    local_48 = local_40;
    FUN_1802d81e8(local_40);
    (**(code **)(*(longlong *)pfVar5 + 8))(pfVar5);
    DAT_180425ae0 = local_40;
    local_48 = (facet *)0x0;
    pfVar5 = local_40;
  }
LAB_1801fbfed:
  std::_Lockit::~_Lockit(local_38);
  return pfVar5;
}


