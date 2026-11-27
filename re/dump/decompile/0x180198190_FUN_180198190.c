// 0x180198190  FUN_180198190
// size=679 thunk=false
// signature: undefined FUN_180198190()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180198190(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  size_t _Size;
  undefined1 auStack_21c8 [48];
  int local_2198;
  undefined4 local_2194;
  undefined **local_2190;
  int local_2188;
  int iStack_2184;
  int local_2178;
  int iStack_2174;
  ulonglong local_2168;
  undefined8 local_2160;
  undefined8 local_2158;
  undefined8 local_2150;
  longlong local_2148;
  size_t local_2140;
  int aiStack_2138 [64];
  int local_2038;
  undefined4 local_2034;
  undefined **local_2030;
  char local_2018 [8192];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x1801981a5;
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_21c8;
  local_2198 = 0;
  local_2190 = &PTR_vftable_std__System_error_category_1803e9500;
  piVar3 = (int *)FUN_180067c80(&local_2178,param_1);
  local_2188 = *piVar3;
  iStack_2184 = piVar3[1];
  local_2160 = *(undefined8 *)piVar3;
  local_2038 = piVar3[2];
  local_2030 = &PTR_vftable_std__System_error_category_1803e9500;
  local_2194 = local_2034;
  local_2190 = &PTR_vftable_std__System_error_category_1803e9500;
  if (local_2188 == 0) {
    if (local_2038 != 0) {
      local_2198 = local_2038;
                    /* WARNING: Subroutine does not return */
      FUN_1800670f0("exists",&local_2198,param_1);
    }
  }
  else {
    local_2198 = 0;
    local_2190 = &PTR_vftable_std__System_error_category_1803e9500;
    if (local_2188 != 1) {
      piVar3 = (int *)FUN_180067c80(&local_2188,param_1);
      local_2178 = *piVar3;
      iStack_2174 = piVar3[1];
      local_2158 = *(undefined8 *)piVar3;
      if ((piVar3[2] != 0) && ((local_2178 - 1U & 0xfffffff7) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_180067040("status",piVar3[2],param_1);
      }
      if (local_2178 != 3) {
        puVar5 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar5 = (undefined8 *)*param_1;
        }
        local_2150 = local_2158;
        iVar2 = FUN_1802d7a0c(puVar5,&local_2038,9,0xffffffff);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180067040("file_size",iVar2,param_1);
        }
        if (local_2030 != (undefined **)param_2[2]) {
          return 0;
        }
        memset(&local_2148,0,0x110);
        FUN_180202040(&local_2148,param_1,0x20);
        if (*(int *)((longlong)aiStack_2138 + (longlong)*(int *)(local_2148 + 4)) != 0) {
          FUN_18006afc0(&local_2148);
          return 0;
        }
        local_2168 = 0;
        while( true ) {
          uVar1 = local_2168;
          if ((ulonglong)param_2[2] <= local_2168) {
            FUN_18006afc0(&local_2148);
            return 1;
          }
          uVar4 = param_2[2] - local_2168;
          _Size = 0x2000;
          if (uVar4 < 0x2000) {
            _Size = uVar4;
          }
          std::basic_istream<char,std::char_traits<char>_>::read
                    ((basic_istream<char,std::char_traits<char>_> *)&local_2148,local_2018,_Size);
          if (local_2140 != _Size) break;
          puVar5 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar5 = (undefined8 *)*param_2;
          }
          iVar2 = memcmp(local_2018,(void *)((longlong)puVar5 + uVar1),_Size);
          if (iVar2 != 0) {
            FUN_18006afc0(&local_2148);
            return 0;
          }
          local_2168 = uVar1 + _Size;
        }
        FUN_18006afc0(&local_2148);
        return 0;
      }
    }
  }
  return 0;
}


