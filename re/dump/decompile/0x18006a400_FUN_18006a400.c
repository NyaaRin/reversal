// 0x18006a400  FUN_18006a400
// size=634 thunk=false
// signature: undefined FUN_18006a400()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18006a400(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char *_Str;
  size_t sVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 auStack_1d8 [48];
  undefined8 local_1a8;
  undefined **ppuStack_1a0;
  longlong *local_198;
  undefined1 local_190 [40];
  longlong local_168 [2];
  byte abStack_158 [256];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_2)) {
    uVar4 = 0;
  }
  else {
    local_198 = plVar2;
    puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0x158))(plVar2,1);
    uStack_50 = 0;
    local_48 = _DAT_1803814a0;
    uStack_40 = _UNK_1803814a8;
    local_58 = 0;
    cVar1 = FUN_1800694e0(puVar3,&local_58);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      FUN_18021e290(&local_58);
      uVar4 = 1;
    }
    else {
      cVar1 = FUN_180069350(&local_58);
      if (cVar1 == '\0') {
        puVar6 = &DAT_18033e9cc;
        if (puVar3 != (undefined1 *)0x0) {
          puVar6 = puVar3;
        }
        FUN_180014410("[LUAFILE] refused write to \'%s\': extension not allowed\n",puVar6);
        (**(code **)(*plVar2 + 0xf8))(plVar2,0);
        FUN_18021e290(&local_58);
        uVar4 = 1;
      }
      else {
        _Str = (char *)(**(code **)(*plVar2 + 0x158))(plVar2,2);
        if (_Str == (char *)0x0) {
          sVar5 = 0;
        }
        else {
          sVar5 = strlen(_Str);
        }
        uVar4 = FUN_180065cd0(&local_58,local_190);
        local_1a8 = 0;
        ppuStack_1a0 = &PTR_vftable_std__System_error_category_1803e9500;
        FUN_180067d80(uVar4);
        if ((int)local_1a8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1800670f0("create_directories",&local_1a8,uVar4);
        }
        FUN_18021e290(local_190);
        memset(local_168,0,0x108);
        FUN_1802022a0(local_168,&local_58,0x30);
        if ((abStack_158[*(int *)(local_168[0] + 4)] & 6) == 0) {
          pcVar7 = "";
          if (_Str != (char *)0x0) {
            pcVar7 = _Str;
          }
          std::basic_ostream<char,std::char_traits<char>_>::write
                    ((basic_ostream<char,std::char_traits<char>_> *)local_168,pcVar7,
                     sVar5 & 0xffffffff);
          (**(code **)(*plVar2 + 0xf8))(plVar2,1);
          FUN_18006b050(local_168);
          FUN_18021e290(&local_58);
          uVar4 = 1;
        }
        else {
          (**(code **)(*plVar2 + 0xf8))(plVar2,0);
          FUN_18006b050(local_168);
          FUN_18021e290(&local_58);
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}


