// 0x1801365b0  FUN_1801365b0
// size=541 thunk=false
// signature: undefined FUN_1801365b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801365b0(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_1d8 [48];
  basic_ios<char,std::char_traits<char>_> *local_1a8;
  undefined **local_1a0;
  undefined *local_198;
  undefined1 local_190 [36];
  int iStack_16c;
  longlong local_168;
  undefined1 local_160 [8];
  basic_ostream<char,std::char_traits<char>_> local_158 [152];
  basic_ios<char,std::char_traits<char>_> local_c0 [104];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  FUN_180135860(local_58);
  local_1a8 = (basic_ios<char,std::char_traits<char>_> *)0x0;
  local_1a0 = &PTR_vftable_std__System_error_category_1803e9500;
  uVar6 = FUN_180065cd0(local_58,local_190);
  FUN_180067d80(uVar6);
  FUN_18021e290(local_190);
  memset(&local_168,0,0x108);
  FUN_1802022a0(&local_168,local_58,0x10);
  if (*(int *)(local_158 + *(int *)(local_168 + 4)) == 0) {
    FUN_1801fc280(&local_168,"# mayrrX64 saved Steam accounts - account<TAB>steamid64<TAB>label\n");
    FUN_1801fc280(&local_168,
                  "# passwords are NEVER stored here; passwordless switching uses Steam\'s own credential cache\n"
                 );
    local_198 = &DAT_1803e86b0;
    iVar5 = _Mtx_lock(&DAT_1803e86b0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar2 = DAT_1803eb7b8;
    puVar3 = DAT_1803eb7c0;
    if (DAT_1803e86fc == 0x7fffffff) {
      DAT_1803e86fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      puVar2 = DAT_1803eb7b8;
      puVar3 = DAT_1803eb7c0;
    }
    for (; puVar4 = DAT_1803eb7c0, puVar2 != DAT_1803eb7c0; puVar2 = puVar2 + 9) {
      puVar8 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar8 = (undefined8 *)*puVar2;
      }
      DAT_1803eb7c0 = puVar3;
      uVar6 = FUN_180210c60(&local_168,puVar8,puVar2[2]);
      this = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc450(uVar6,9);
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,puVar2[4]);
      uVar6 = FUN_1801fc450(pbVar7,9);
      plVar9 = puVar2 + 5;
      if (0xf < (ulonglong)puVar2[8]) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar6 = FUN_180210c60(uVar6,plVar9,puVar2[7]);
      FUN_1801fc450(uVar6,10);
      puVar3 = DAT_1803eb7c0;
      DAT_1803eb7c0 = puVar4;
    }
    DAT_1803eb7c0 = puVar3;
    _Mtx_unlock(&DAT_1803e86b0);
  }
  local_1a8 = local_c0;
  *(undefined ***)(local_160 + (longlong)*(int *)(local_168 + 4) + -8) =
       vftable_std_std_D_DU__char_traits___basic_ofstream;
  *(int *)((longlong)&iStack_16c + (longlong)*(int *)(local_168 + 4)) =
       *(int *)(local_168 + 4) + -0xa8;
  FUN_18020f850(local_160);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_158);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_c0);
  FUN_18021e290(local_58);
  return;
}


