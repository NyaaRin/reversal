// 0x180203bb0  FUN_180203bb0
// size=434 thunk=false
// signature: undefined FUN_180203bb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180203bb0(longlong *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  basic_streambuf<char,std::char_traits<char>_> *this;
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  basic_streambuf<char,std::char_traits<char>_> *local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined4 local_9e;
  undefined2 local_9a;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  auVar1 = *param_2;
  auVar2 = *param_3;
  this_00 = auVar2._0_8_;
  uVar10 = *(undefined8 *)(*param_3 + 8);
  uVar8 = (undefined1)((ulonglong)uVar10 >> 8);
  this = auVar1._0_8_;
  uVar11 = *(undefined8 *)(*param_2 + 8);
  uVar9 = (undefined1)((ulonglong)uVar11 >> 8);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_b8 = auVar2;
  local_98 = auVar1;
  if ((char)uVar11 == '\0') {
    if (this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
LAB_180203c4a:
      this = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
    else {
      iVar6 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(this);
      if (iVar6 == -1) goto LAB_180203c4a;
      uVar9 = (undefined1)iVar6;
    }
    uVar11 = 1;
  }
  if ((char)uVar10 == '\0') {
    if (this_00 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
LAB_180203c6d:
      this_00 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
    else {
      iVar6 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(this_00);
      if (iVar6 == -1) goto LAB_180203c6d;
      uVar8 = (undefined1)iVar6;
    }
    uVar10 = 1;
  }
  if (this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    if (this_00 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
LAB_180203cf3:
      local_78 = 0;
      uStack_70 = 0xf;
      local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffffffffff00);
      goto LAB_180203cc4;
    }
  }
  else if (this_00 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) goto LAB_180203cf3;
  local_a0 = (undefined1)uVar10;
  local_9e = local_b8._10_4_;
  local_9a = auVar2._14_2_;
  local_b8[8] = (char)uVar11;
  local_b8._0_8_ = this;
  local_b8[9] = uVar9;
  local_b8._10_4_ = local_98._10_4_;
  local_b8._14_2_ = auVar1._14_2_;
  local_a8 = this_00;
  local_9f = uVar8;
  FUN_1802117c0(&local_88,local_b8,&local_a8);
LAB_180203cc4:
  if ((ulonglong)param_1[3] < uStack_70) {
    puVar7 = (undefined8 *)*param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[2];
    uVar5 = param_1[3];
    *(undefined4 *)param_1 = (undefined4)local_88;
    *(undefined4 *)((longlong)param_1 + 4) = local_88._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_80._4_4_;
    param_1[2] = local_78;
    param_1[3] = uStack_70;
    local_88 = puVar7;
    uStack_80 = lVar3;
    local_78 = lVar4;
    uStack_70 = uVar5;
  }
  else {
    puVar7 = &local_88;
    if (0xf < uStack_70) {
      puVar7 = local_88;
    }
    param_1 = (longlong *)FUN_180212700(param_1,puVar7,local_78);
  }
  FUN_18020e450(&local_88);
  return param_1;
}


