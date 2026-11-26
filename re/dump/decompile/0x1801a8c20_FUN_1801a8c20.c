// 0x1801a8c20  FUN_1801a8c20
// size=404 thunk=false
// signature: undefined FUN_1801a8c20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a8c20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_188 [48];
  basic_ios<char,std::char_traits<char>_> *local_158;
  undefined **local_150;
  undefined1 local_148 [28];
  int iStack_12c;
  longlong local_128;
  undefined1 local_120 [8];
  int aiStack_118 [38];
  basic_ios<char,std::char_traits<char>_> local_80 [104];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  local_158 = (basic_ios<char,std::char_traits<char>_> *)0x0;
  local_150 = &PTR_vftable_std__System_error_category_1803e9500;
  uVar2 = FUN_1801a8740(local_148);
  FUN_180067d80(uVar2);
  FUN_18021e290(local_148);
  if ((int)local_158 == 0) {
    memset(&local_128,0,0x108);
    uVar2 = FUN_1801a8b60(local_148);
    FUN_1802022a0(&local_128,uVar2,0x10);
    FUN_18021e290(local_148);
    if (*(int *)((longlong)aiStack_118 + (longlong)*(int *)(local_128 + 4)) == 0) {
      puVar3 = &DAT_180347810;
      if (DAT_1803db385 != '\0') {
        puVar3 = &DAT_18034124c;
      }
      uVar2 = FUN_1801fc280(&local_128,puVar3);
      FUN_1801fc280(uVar2,&DAT_18033e92c);
      puVar1 = param_1 + 2;
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (undefined8 *)*param_1;
      }
      uVar2 = FUN_180210c60(&local_128,param_1,*puVar1);
      FUN_1801fc280(uVar2,&DAT_18033e92c);
    }
    local_158 = local_80;
    *(undefined ***)(local_120 + (longlong)*(int *)(local_128 + 4) + -8) =
         vftable_std_std_D_DU__char_traits___basic_ofstream;
    *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128 + 4)) =
         *(int *)(local_128 + 4) + -0xa8;
    FUN_18020f850(local_120);
    *(code **)(local_120 + (longlong)*(int *)(local_128 + 4) + -8) = _vftable__exref;
    *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128 + 4)) =
         *(int *)(local_128 + 4) + -0x10;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_80)
    ;
  }
  return;
}


