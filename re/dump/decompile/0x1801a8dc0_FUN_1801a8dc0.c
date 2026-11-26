// 0x1801a8dc0  FUN_1801a8dc0
// size=788 thunk=false
// signature: undefined FUN_1801a8dc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_1801a8dc0(ulonglong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char ****ppppcVar4;
  undefined1 auStack_1d8 [48];
  undefined4 local_1a8;
  basic_ios<char,std::char_traits<char>_> *local_1a0;
  ulonglong *local_198;
  undefined1 local_190 [36];
  int iStack_16c;
  longlong local_168 [2];
  int local_158 [2];
  basic_istream<char,std::char_traits<char>_> local_150 [152];
  basic_ios<char,std::char_traits<char>_> local_b8 [96];
  char ***local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  local_1a8 = 0;
  local_198 = param_1;
  memset(local_168,0,0x110);
  uVar2 = FUN_1801a8b60(local_190);
  FUN_180202040(local_168,uVar2,1);
  FUN_18021e290(local_190);
  if (*(int *)((longlong)local_158 + (longlong)*(int *)(local_168[0] + 4)) == 0) {
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xf;
    local_58 = (char ***)0x0;
    uStack_30 = 0;
    local_28 = _DAT_1803814b0;
    uStack_20 = _UNK_1803814b8;
    local_38 = 0;
    cVar1 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)),'\n');
    plVar3 = (longlong *)FUN_180210550(local_168,&local_58,cVar1);
    if ((*(byte *)((longlong)*(int *)(*plVar3 + 4) + 0x10 + (longlong)plVar3) & 6) == 0) {
      ppppcVar4 = &local_58;
      if (0xf < local_40) {
        ppppcVar4 = (char ****)local_58;
      }
      if (local_48 == 1) {
        DAT_1803db385 = *(char *)ppppcVar4 == '1';
      }
      else {
        DAT_1803db385 = 0;
      }
    }
    cVar1 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)),'\n');
    plVar3 = (longlong *)FUN_180210550(local_168,&local_38,cVar1);
    local_1a8 = 1;
    if ((*(byte *)((longlong)*(int *)(*plVar3 + 4) + 0x10 + (longlong)plVar3) & 6) == 0) {
      *param_1 = local_38;
      param_1[1] = uStack_30;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_28._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_20._4_4_;
      local_28 = _DAT_1803814b0;
      uStack_20 = _UNK_1803814b8;
      local_38 = local_38 & 0xffffffffffffff00;
      FUN_18020e450(&local_38);
      FUN_18020e450(&local_58);
      local_1a0 = local_b8;
      *(undefined ***)((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)) =
           vftable_std_std_D_DU__char_traits___basic_ifstream;
      *(int *)((longlong)&iStack_16c + (longlong)*(int *)(local_168[0] + 4)) =
           *(int *)(local_168[0] + 4) + -0xb0;
      FUN_18020f850(local_158);
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      FUN_18020e450(&local_38);
      FUN_18020e450(&local_58);
      local_1a0 = local_b8;
      *(undefined ***)((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)) =
           vftable_std_std_D_DU__char_traits___basic_ifstream;
      *(int *)((longlong)&iStack_16c + (longlong)*(int *)(local_168[0] + 4)) =
           *(int *)(local_168[0] + 4) + -0xb0;
      FUN_18020f850(local_158);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    local_1a8 = 1;
    local_1a0 = local_b8;
    *(undefined ***)((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)) =
         vftable_std_std_D_DU__char_traits___basic_ifstream;
    *(int *)((longlong)&iStack_16c + (longlong)*(int *)(local_168[0] + 4)) =
         *(int *)(local_168[0] + 4) + -0xb0;
    FUN_18020f850(local_158);
  }
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            (local_150);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_b8);
  return param_1;
}


