// 0x1801754a0  FUN_1801754a0
// size=748 thunk=false
// signature: undefined FUN_1801754a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1801754a0(undefined4 *param_1,longlong *param_2,byte *param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  basic_ios<char,std::char_traits<char>_> *local_160;
  undefined2 local_158;
  undefined4 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined *local_128 [2];
  undefined **local_118;
  basic_istream<char,std::char_traits<char>_> local_110 [120];
  basic_ios<char,std::char_traits<char>_> local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  local_168 = 0;
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(byte **)param_3;
  }
  uVar6 = 0x14650fb0739d0383;
  for (; (param_3 != (byte *)0x0 && (*param_3 != 0)); param_3 = param_3 + 1) {
    uVar6 = (uVar6 ^ *param_3) * 0x100000001b3;
  }
  param_2 = (longlong *)*param_2;
  plVar5 = (longlong *)param_2[1];
  cVar1 = *(char *)((longlong)plVar5 + 0x19);
  plVar2 = param_2;
  while (cVar1 == '\0') {
    plVar7 = plVar5;
    if ((ulonglong)plVar5[4] < uVar6) {
      plVar5 = plVar5 + 2;
      plVar7 = plVar2;
    }
    plVar5 = (longlong *)*plVar5;
    plVar2 = plVar7;
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
  }
  local_150 = param_1;
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((ulonglong)plVar2[4] <= uVar6)) &&
     (plVar2 != param_2)) {
    memset(local_128,0,0xf0);
    local_128[0] = &DAT_18033dc58;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_98);
    local_168 = 2;
    std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
              ((basic_istream<char,std::char_traits<char>_> *)local_128,
               (basic_streambuf<char,std::char_traits<char>_> *)&local_118,false);
    *(undefined ***)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) =
         vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_istringstream;
    *(int *)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4) + -4) =
         *(int *)(local_128[0] + 4) + -0x90;
    local_160 = (basic_ios<char,std::char_traits<char>_> *)&local_118;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)&local_118);
    local_118 = vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf;
    if ((ulonglong)plVar2[8] < 0x10) {
      plVar5 = plVar2 + 5;
    }
    else {
      plVar5 = (longlong *)plVar2[5];
    }
    FUN_18022ed80(&local_118,plVar5,plVar2[7],2);
    uVar4 = _UNK_1803814b8;
    uVar3 = _DAT_1803814b0;
    uStack_140 = 0;
    local_138 = _DAT_1803814b0;
    uStack_130 = _UNK_1803814b8;
    local_148 = 0;
    local_160 = (basic_ios<char,std::char_traits<char>_> *)&local_148;
    local_158 = 0x5c22;
    plVar5 = (longlong *)FUN_180209b00(local_128,&local_160);
    if ((*(byte *)((longlong)*(int *)(*plVar5 + 4) + 0x10 + (longlong)plVar5) & 6) == 0) {
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      *param_1 = (undefined4)local_148;
      param_1[1] = local_148._4_4_;
      param_1[2] = (undefined4)uStack_140;
      param_1[3] = uStack_140._4_4_;
      param_1[4] = (undefined4)local_138;
      param_1[5] = local_138._4_4_;
      param_1[6] = (undefined4)uStack_130;
      param_1[7] = uStack_130._4_4_;
      local_138 = uVar3;
      uStack_130 = uVar4;
      local_148 = local_148 & 0xffffffffffffff00;
      local_168 = 3;
      FUN_18020e450(&local_148);
      local_160 = local_98;
      *(undefined ***)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) =
           vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_istringstream;
      *(int *)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4) + -4) =
           *(int *)(local_128[0] + 4) + -0x90;
      FUN_18020ffc0(&local_118);
    }
    else {
      FUN_18016d4c0(param_1,plVar2 + 5);
      local_168 = 3;
      FUN_18020e450(&local_148);
      local_160 = local_98;
      *(undefined ***)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) =
           vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_istringstream;
      *(int *)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4) + -4) =
           *(int *)(local_128[0] + 4) + -0x90;
      FUN_18020ffc0(&local_118);
    }
    std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
              (local_110);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_98)
    ;
  }
  else {
    FUN_18016d4c0(param_1,param_4);
  }
  return param_1;
}


