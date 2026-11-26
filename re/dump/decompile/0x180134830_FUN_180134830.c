// 0x180134830  FUN_180134830
// size=458 thunk=false
// signature: undefined FUN_180134830()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180134830(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_1a8 [48];
  basic_ios<char,std::char_traits<char>_> *local_178;
  undefined **local_170;
  undefined1 local_168 [28];
  int iStack_14c;
  longlong local_148;
  undefined1 local_140 [8];
  basic_ostream<char,std::char_traits<char>_> local_138 [152];
  basic_ios<char,std::char_traits<char>_> local_a0 [104];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_1a8;
  FUN_180133bf0(local_38);
  local_178 = (basic_ios<char,std::char_traits<char>_> *)0x0;
  local_170 = &PTR_vftable_std__System_error_category_1803e9500;
  uVar2 = FUN_180065cd0(local_38,local_168);
  FUN_180067d80(uVar2);
  FUN_18021e290(local_168);
  memset(&local_148,0,0x108);
  FUN_1802022a0(&local_148,local_38,0x10);
  if (*(int *)(local_138 + *(int *)(local_148 + 4)) == 0) {
    FUN_1801fc280(&local_148,
                  "# mayrrX64 Steam refresh tokens - account<TAB>steamid64<TAB>DPAPI blob (hex)\n");
    FUN_1801fc280(&local_148,
                  "# encrypted for THIS Windows user on THIS machine; worthless if copied elsewhere\n"
                 );
    puVar1 = (undefined8 *)param_1[1];
    for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 9) {
      puVar4 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
      }
      uVar2 = FUN_180210c60(&local_148,puVar4,param_1[2]);
      this = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc450(uVar2,9);
      pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,param_1[4]);
      uVar2 = FUN_1801fc450(pbVar3,9);
      plVar5 = param_1 + 5;
      if (0xf < (ulonglong)param_1[8]) {
        plVar5 = (longlong *)*plVar5;
      }
      uVar2 = FUN_180210c60(uVar2,plVar5,param_1[7]);
      FUN_1801fc450(uVar2,10);
    }
  }
  local_178 = local_a0;
  *(undefined ***)(local_140 + (longlong)*(int *)(local_148 + 4) + -8) =
       vftable_std_std_D_DU__char_traits___basic_ofstream;
  *(int *)((longlong)&iStack_14c + (longlong)*(int *)(local_148 + 4)) =
       *(int *)(local_148 + 4) + -0xa8;
  FUN_18020f850(local_140);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_138);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_a0);
  FUN_18021e290(local_38);
  return;
}


