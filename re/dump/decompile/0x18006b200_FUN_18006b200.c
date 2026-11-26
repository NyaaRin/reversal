// 0x18006b200  FUN_18006b200
// size=1039 thunk=false
// signature: undefined FUN_18006b200()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006b200(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  int local_d4;
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined4 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  if ((DAT_18042586c == '\0') && (DAT_18042586b == '\0')) {
    return;
  }
  if (param_1 == 0) {
    bVar8 = DAT_1803e95f2 == '\0';
  }
  else if (param_1 == 1) {
    bVar8 = DAT_1803e9650 == '\0';
  }
  else {
    if (param_1 != 2) goto LAB_18006b276;
    bVar8 = DAT_180425868 == '\0';
  }
  if (bVar8) {
    return;
  }
LAB_18006b276:
  if (DAT_1803fa608 == (undefined4 *)0x0) {
    local_d8 = 0;
  }
  else {
    local_d8 = *DAT_1803fa608;
  }
  local_d4 = param_1;
  FUN_18016d4c0(local_d0);
  FUN_18016d4c0(local_b0,param_3);
  local_90 = param_4;
  FUN_18016d4c0(local_88,param_5);
  FUN_18016d4c0(local_68,param_6);
  local_48 = param_7;
  local_44 = param_8;
  local_e0 = &DAT_1803e9600;
  iVar4 = _Mtx_lock(&DAT_1803e9600);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (DAT_1803e964c == 0x7fffffff) {
    DAT_1803e964c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_18042586c != '\0') {
    if (DAT_18042cd20 <= DAT_18042cd30 + 1) {
      FUN_18022da30(&DAT_18042cd10);
    }
    DAT_18042cd28 = DAT_18042cd20 - 1 & DAT_18042cd28;
    uVar1 = DAT_18042cd28 + DAT_18042cd30;
    uVar6 = DAT_18042cd20 - 1 & uVar1;
    if (*(longlong *)(DAT_18042cd18 + uVar6 * 8) == 0) {
      uVar5 = FUN_1802d8350(0x98);
      *(undefined8 *)(DAT_18042cd18 + uVar6 * 8) = uVar5;
    }
    FUN_18023a180(*(undefined8 *)(DAT_18042cd18 + (DAT_18042cd20 - 1 & uVar1) * 8),&local_d8);
    DAT_18042cd30 = DAT_18042cd30 + 1;
    while (500 < DAT_18042cd30) {
      lVar2 = *(longlong *)(DAT_18042cd18 + (DAT_18042cd20 - 1 & DAT_18042cd28) * 8);
      local_e8 = lVar2;
      FUN_18020e450(lVar2 + 0x70);
      FUN_18020e450(lVar2 + 0x50);
      FUN_18020e450(lVar2 + 0x28);
      FUN_18020e450(lVar2 + 8);
      DAT_18042cd30 = DAT_18042cd30 - 1;
      if (DAT_18042cd30 == 0) {
        DAT_18042cd28 = 0;
        break;
      }
      DAT_18042cd28 = DAT_18042cd28 + 1;
    }
  }
  if (DAT_18042586b != '\0') {
    if (DAT_18042cd48 <= DAT_18042cd58 + 1) {
      FUN_18022da30(&DAT_18042cd38);
    }
    DAT_18042cd50 = DAT_18042cd48 - 1 & DAT_18042cd50;
    uVar1 = DAT_18042cd50 + DAT_18042cd58;
    uVar7 = DAT_18042cd48 - 1 & uVar1;
    uVar6 = DAT_18042cd58;
    if (*(longlong *)(DAT_18042cd40 + uVar7 * 8) == 0) {
      uVar5 = FUN_1802d8350(0x98);
      uVar6 = DAT_18042cd40;
      *(undefined8 *)(DAT_18042cd40 + uVar7 * 8) = uVar5;
    }
    FUN_180227870(uVar6,*(undefined8 *)(DAT_18042cd40 + (DAT_18042cd48 - 1 & uVar1) * 8),&local_d8);
    DAT_18042cd58 = DAT_18042cd58 + 1;
    while (0x40 < DAT_18042cd58) {
      lVar2 = *(longlong *)(DAT_18042cd40 + (DAT_18042cd48 - 1 & DAT_18042cd50) * 8);
      local_e8 = lVar2;
      FUN_18020e450(lVar2 + 0x70);
      FUN_18020e450(lVar2 + 0x50);
      FUN_18020e450(lVar2 + 0x28);
      FUN_18020e450(lVar2 + 8);
      DAT_18042cd58 = DAT_18042cd58 - 1;
      if (DAT_18042cd58 == 0) {
        DAT_18042cd50 = 0;
        break;
      }
      DAT_18042cd50 = DAT_18042cd50 + 1;
    }
  }
  _Mtx_unlock(&DAT_1803e9600);
  FUN_18020e450(local_68);
  FUN_18020e450(local_88);
  FUN_18020e450(local_b0);
  FUN_18020e450(local_d0);
  return;
}


