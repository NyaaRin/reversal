// 0x1800eb7c0  FUN_1800eb7c0
// size=1218 thunk=false
// signature: undefined FUN_1800eb7c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800eb7c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char ****ppppcVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  char ***local_2c0;
  size_t local_2b8;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 *local_280;
  undefined **local_278;
  basic_ios<char,std::char_traits<char>_> *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [28];
  int iStack_1ac;
  longlong local_1a8;
  undefined1 local_1a0 [8];
  basic_ostream<char,std::char_traits<char>_> local_198 [152];
  basic_ios<char,std::char_traits<char>_> local_100 [104];
  char ***local_98 [2];
  size_t local_88;
  ulonglong local_80;
  char ***local_78 [2];
  __int64 local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_2e8;
  iVar7 = 0;
  local_2a8 = 0;
  local_280 = &local_2a0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  local_288 = 0;
  sVar3 = strlen((char *)(param_1 + 0x9f4));
  FUN_18001d080(&local_2a0,param_1 + 0x9f4,sVar3);
  FUN_1800eabc0(local_98,&local_2a0);
  local_280 = (undefined8 *)0x0;
  local_278 = &PTR_vftable_std__System_error_category_1803e9500;
  local_270 = (basic_ios<char,std::char_traits<char>_> *)&local_2a0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  local_288 = 0;
  FUN_180211510(&local_2a0,L"scripts",7);
  local_2a8 = 0;
  uVar4 = FUN_1800ea7a0(local_228);
  FUN_180066720(local_248,uVar4,&local_2a0);
  local_2a8 = 1;
  FUN_18021e290(local_228);
  FUN_18021e290(&local_2a0);
  FUN_180067d80(local_248);
  local_2a8 = 0;
  FUN_18021e290(local_248);
  if ((int)local_280 == 0) {
    memset(&local_1a8,0,0x108);
    puVar5 = (undefined8 *)FUN_1800ea4d0(local_1c8,local_98);
    local_268 = *puVar5;
    uStack_260 = puVar5[1];
    local_258 = puVar5[2];
    uStack_250 = puVar5[3];
    *(undefined2 *)puVar5 = 0;
    puVar5[2] = 0;
    puVar5[3] = 7;
    local_270 = (basic_ios<char,std::char_traits<char>_> *)&local_2a0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_290 = 0;
    local_288 = 0;
    FUN_180211510(&local_2a0,L"scripts",7);
    local_2a8 = 0;
    uVar4 = FUN_1800ea7a0(local_228);
    FUN_180066720(local_208,uVar4,&local_2a0);
    local_2a8 = 8;
    FUN_18021e290(local_228);
    FUN_18021e290(&local_2a0);
    uVar4 = FUN_180066720(local_1e8,local_208,&local_268);
    FUN_1802022a0(&local_1a8,uVar4,0x30);
    FUN_18021e290(local_1e8);
    local_2a8 = 0;
    FUN_18021e290(local_208);
    FUN_18021e290(&local_268);
    FUN_18021e290(local_1c8);
    if (*(int *)(local_198 + *(int *)(local_1a8 + 4)) == 0) {
      FUN_180015170(param_1 + 8,local_78);
      ppppcVar6 = local_78;
      if (0xf < local_60) {
        ppppcVar6 = (char ****)local_78[0];
      }
      std::basic_ostream<char,std::char_traits<char>_>::write
                ((basic_ostream<char,std::char_traits<char>_> *)&local_1a8,(char *)ppppcVar6,
                 local_68);
      if (0x7fffffffffffffff - local_88 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_2c0 = (char ***)local_98;
      if (0xf < local_80) {
        local_2c0 = local_98[0];
      }
      local_2b8 = local_88;
      local_2c8 = 7;
      FUN_18020e930(local_248);
      local_2a8 = 0x80;
      FUN_18020e8a0(param_1 + 0xa58,local_248);
      local_2a8 = 0;
      FUN_18020e450(local_248);
      ppppcVar6 = local_98;
      if (0xf < local_80) {
        ppppcVar6 = (char ****)local_98[0];
      }
      strncpy_s((char *)(param_1 + 0x9f4),0x60,(char *)ppppcVar6,0xffffffffffffffff);
      FUN_1800eae40(param_1);
      lVar1 = *(longlong *)(param_1 + 0x9d8);
      iVar8 = (int)(*(longlong *)(param_1 + 0x9e0) - lVar1 >> 5);
      if (0 < iVar8) {
        do {
          puVar5 = (undefined8 *)((longlong)iVar7 * 0x20 + lVar1);
          ppppcVar6 = local_98;
          if (0xf < local_80) {
            ppppcVar6 = (char ****)local_98[0];
          }
          sVar3 = puVar5[2];
          if (0xf < (ulonglong)puVar5[3]) {
            puVar5 = (undefined8 *)*puVar5;
          }
          if ((sVar3 == local_88) &&
             ((sVar3 == 0 || (iVar2 = memcmp(puVar5,ppppcVar6,sVar3), iVar2 == 0)))) {
            *(int *)(param_1 + 0x9f0) = iVar7;
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar8);
      }
      uVar4 = 1;
      FUN_18020e450(local_78);
    }
    else {
      FUN_180212700(param_1 + 0xa58,"Failed to save script.",0x16);
      uVar4 = 0;
    }
    local_270 = local_100;
    *(undefined ***)(local_1a0 + (longlong)*(int *)(local_1a8 + 4) + -8) =
         vftable_std_std_D_DU__char_traits___basic_ofstream;
    *(int *)((longlong)&iStack_1ac + (longlong)*(int *)(local_1a8 + 4)) =
         *(int *)(local_1a8 + 4) + -0xa8;
    FUN_18020f850(local_1a0);
    std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
              (local_198);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (local_100);
  }
  else {
    FUN_180212700(param_1 + 0xa58,"Failed to create scripts folder.",0x20);
    uVar4 = 0;
  }
  FUN_18020e450(local_98);
  return uVar4;
}


