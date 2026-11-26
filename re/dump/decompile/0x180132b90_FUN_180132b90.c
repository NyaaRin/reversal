// 0x180132b90  FUN_180132b90
// size=499 thunk=false
// signature: undefined FUN_180132b90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180132b90(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_198 [48];
  undefined4 local_168;
  longlong local_158;
  undefined1 local_150;
  undefined1 local_14f;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined8 local_148;
  undefined2 local_140;
  undefined4 local_13e;
  undefined2 local_13a;
  basic_ios<char,std::char_traits<char>_> *local_138;
  undefined8 local_130;
  longlong local_128 [2];
  int local_118 [2];
  basic_istream<char,std::char_traits<char>_> local_110 [48];
  longlong alStack_e0 [13];
  basic_ios<char,std::char_traits<char>_> local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  local_168 = 0;
  local_130 = param_1;
  memset(local_128,0,0x110);
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_18021e730(local_128,param_2);
  *(undefined ***)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) =
       vftable_std_std_D_DU__char_traits___basic_ifstream;
  *(int *)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4) + -4) =
       *(int *)(local_128[0] + 4) + -0xb0;
  if (*(int *)((longlong)local_118 + (longlong)*(int *)(local_128[0] + 4)) == 0) {
    local_158 = *(longlong *)((longlong)alStack_e0 + (longlong)*(int *)(local_128[0] + 4));
    local_148 = 0;
    local_140 = 1;
    local_13e = local_14e;
    local_13a = local_14a;
    local_150 = local_158 == 0;
    local_14f = 0;
    FUN_180202170(param_1,&local_158,&local_148);
    local_168 = 1;
    local_138 = local_78;
    *(undefined ***)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) =
         vftable_std_std_D_DU__char_traits___basic_ifstream;
    *(int *)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4) + -4) =
         *(int *)(local_128[0] + 4) + -0xb0;
    FUN_18020f850(local_118);
    *(code **)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) = _vftable__exref;
    *(int *)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4) + -4) =
         *(int *)(local_128[0] + 4) + -0x18;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    local_168 = 1;
    local_138 = local_78;
    *(undefined ***)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) =
         vftable_std_std_D_DU__char_traits___basic_ifstream;
    *(int *)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4) + -4) =
         *(int *)(local_128[0] + 4) + -0xb0;
    FUN_18020f850(local_118);
    std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
              (local_110);
  }
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_78);
  return param_1;
}


