// 0x180198440  FUN_180198440
// size=1237 thunk=false
// signature: undefined FUN_180198440()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180198440(LPCWSTR param_1,char *param_2)

{
  __int64 *p_Var1;
  DWORD DVar2;
  BOOL BVar3;
  undefined8 uVar4;
  longlong lVar5;
  int extraout_var;
  int extraout_var_00;
  LPCWSTR ***ppppWVar6;
  undefined1 auStack_298 [48];
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 *local_240;
  undefined **ppuStack_238;
  undefined8 ***local_218;
  undefined8 local_210;
  undefined8 ***local_1f8;
  undefined8 local_1f0;
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  longlong local_178;
  undefined1 local_170 [8];
  int aiStack_168 [64];
  LPCWSTR **local_68 [3];
  ulonglong local_50;
  undefined8 ***local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_298;
  local_268 = 0;
  uVar4 = FUN_180065cd0(param_1,&local_260);
  local_240 = (undefined8 *)0x0;
  ppuStack_238 = &PTR_vftable_std__System_error_category_1803e9500;
  FUN_180067d80(uVar4,&local_240);
  if ((int)local_240 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1800670f0("create_directories",&local_240,uVar4);
  }
  FUN_18021e290(&local_260);
  DVar2 = GetTickCount();
  FUN_1801fc020(&local_240,DVar2);
  local_268 = 1;
  DVar2 = GetCurrentThreadId();
  FUN_1801fc020(&local_218,DVar2);
  local_268 = 3;
  uVar4 = FUN_180065de0(param_1,local_1d8);
  FUN_18020e540(&local_1f8,uVar4);
  local_268 = 7;
  FUN_180204f70(local_198,&local_1f8,L".tmp_");
  FUN_18021e300(&local_260);
  local_268 = 0xf;
  uVar4 = FUN_180204f70(local_1b8,&local_260,&DAT_180363a74);
  FUN_180205360(local_48,uVar4,&local_240);
  FUN_18021e290(local_1b8);
  local_268 = 7;
  FUN_18021e290(&local_260);
  FUN_18021e290(local_198);
  local_268 = 3;
  FUN_18021e290(&local_1f8);
  FUN_18021e290(local_1d8);
  local_268 = 1;
  FUN_18021e290(&local_218);
  local_268 = 0;
  FUN_18021e290(&local_240);
  local_240 = &local_260;
  local_218 = local_48;
  if (7 < local_30) {
    local_218 = local_48[0];
  }
  local_1f0 = local_38;
  local_210 = local_38;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_1f8 = local_218;
  FUN_180211510(&local_260,local_218,local_38);
  local_268 = 0;
  uVar4 = FUN_180065cd0(param_1,local_1d8);
  FUN_180066720(local_68,uVar4,&local_260);
  FUN_18021e290(local_1d8);
  FUN_18021e290(&local_260);
  memset(&local_178,0,0x108);
  FUN_1802022a0(&local_178,local_68,0x30);
  if (*(int *)((longlong)aiStack_168 + (longlong)*(int *)(local_178 + 4)) == 0) {
    p_Var1 = (__int64 *)(param_2 + 0x10);
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    std::basic_ostream<char,std::char_traits<char>_>::write
              ((basic_ostream<char,std::char_traits<char>_> *)&local_178,param_2,*p_Var1);
    lVar5 = FUN_18021ea30(local_170);
    if (lVar5 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 (local_170 + (longlong)*(int *)(local_178 + 4) + -8),2,false);
    }
    if (*(int *)((longlong)aiStack_168 + (longlong)*(int *)(local_178 + 4)) == 0) {
      FUN_18006b050(&local_178);
      if (7 < *(ulonglong *)(param_1 + 0xc)) {
        param_1 = *(LPCWSTR *)param_1;
      }
      ppppWVar6 = local_68;
      if (7 < local_50) {
        ppppWVar6 = (LPCWSTR ***)local_68[0];
      }
      BVar3 = MoveFileExW((LPCWSTR)ppppWVar6,param_1,9);
      if (BVar3 == 0) {
        ppppWVar6 = local_68;
        if (7 < local_50) {
          ppppWVar6 = (LPCWSTR ***)local_68[0];
        }
        FUN_1802d7d9c(ppppWVar6);
        if (extraout_var_00 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180067040("remove",extraout_var_00,local_68);
        }
        FUN_18021e290(local_68);
        FUN_18021e290(local_48);
        uVar4 = 0;
      }
      else {
        FUN_18021e290(local_68);
        FUN_18021e290(local_48);
        uVar4 = 1;
      }
    }
    else {
      ppppWVar6 = local_68;
      if (7 < local_50) {
        ppppWVar6 = (LPCWSTR ***)local_68[0];
      }
      FUN_1802d7d9c(ppppWVar6);
      if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180067040("remove",extraout_var,local_68);
      }
      FUN_18006b050(&local_178);
      FUN_18021e290(local_68);
      FUN_18021e290(local_48);
      uVar4 = 0;
    }
  }
  else {
    FUN_18006b050(&local_178);
    FUN_18021e290(local_68);
    FUN_18021e290(local_48);
    uVar4 = 0;
  }
  return uVar4;
}


