// 0x180233fb0  FUN_180233fb0
// size=405 thunk=false
// signature: undefined FUN_180233fb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

facet * FUN_180233fb0(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  ulonglong uVar4;
  _Locimp *p_Var5;
  facet *this;
  char *pcVar6;
  _Locinfo *this_00;
  _Collvec *p_Var7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  facet *local_e0;
  _Collvec local_d8;
  undefined1 local_c8 [32];
  _Locinfo local_a8 [104];
  _Lockit local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  std::_Lockit::_Lockit(local_40,0);
  plVar3 = DAT_180425ad8;
  uVar4 = FUN_1802106d0(id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (uVar4 < *(ulonglong *)(lVar1 + 0x18)) {
    this = *(facet **)(uVar4 * 8 + *(longlong *)(lVar1 + 0x10));
    if (this != (facet *)0x0) goto LAB_180234022;
  }
  else {
    this = (facet *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_18023406c:
    if (this != (facet *)0x0) goto LAB_180234022;
  }
  else {
    p_Var5 = std::locale::_Getgloballocale();
    if (uVar4 < *(ulonglong *)(p_Var5 + 0x18)) {
      this = *(facet **)(uVar4 * 8 + *(longlong *)(p_Var5 + 0x10));
      goto LAB_18023406c;
    }
  }
  this = (facet *)plVar3;
  if (plVar3 == (longlong *)0x0) {
    this = (facet *)FUN_1802d8350(0x20);
    local_e0 = this;
    pcVar6 = (char *)FUN_180013a20(param_1,local_c8);
    local_e8 = 1;
    if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
      pcVar6 = *(char **)pcVar6;
    }
    this_00 = (_Locinfo *)std::_Locinfo::_Locinfo(local_a8,pcVar6);
    local_e8 = 3;
    std::locale::facet::facet(this,0);
    *(undefined ***)this = vftable_std_D___collate;
    p_Var7 = std::_Locinfo::_Getcoll(this_00,&local_d8);
    pwVar2 = p_Var7->_LocaleName;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)p_Var7;
    *(wchar_t **)(this + 0x18) = pwVar2;
    local_e8 = 1;
    std::_Locinfo::~_Locinfo(local_a8);
    local_e8 = 0;
    FUN_18020e450(local_c8);
    local_e0 = this;
    FUN_1802d81e8(this);
    (**(code **)(*(longlong *)this + 8))(this);
    local_e0 = (facet *)0x0;
    DAT_180425ad8 = (longlong *)this;
  }
LAB_180234022:
  std::_Lockit::~_Lockit(local_40);
  return this;
}


