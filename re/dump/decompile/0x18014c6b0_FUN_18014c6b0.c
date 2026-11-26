// 0x18014c6b0  FUN_18014c6b0
// size=1027 thunk=false
// signature: undefined FUN_18014c6b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_18014c6b0(undefined1 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined1 *local_168;
  undefined8 *local_158;
  int *piStack_150;
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  ulonglong *local_130;
  undefined8 *puStack_128;
  undefined **local_118;
  undefined8 *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulonglong *local_100;
  undefined8 *puStack_f8;
  undefined ***local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined ***local_a0;
  int local_98 [2];
  ulonglong local_90;
  longlong *local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  param_1[0x58] = 0;
  local_178 = 1;
  local_88 = (longlong *)0x0;
  lStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_168 = param_1;
  cVar1 = FUN_18014be40(param_2,&local_88,param_1 + 8);
  if (cVar1 == '\0') goto LAB_18014ca6b;
  if ((*local_88 == s_SQLite_format_3_180338d00._0_8_) &&
     (local_88[1] == s_SQLite_format_3_180338d00._8_8_)) {
    uVar3 = CONCAT11((char)local_88[2],*(undefined1 *)((longlong)local_88 + 0x11));
    if (uVar3 == 1) {
      uVar4 = 0x10000;
      uStack_70 = 0x10000;
    }
    else {
      uVar4 = (ulonglong)uVar3;
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uVar3);
      if ((uVar3 < 0x200) || ((uVar3 & uVar3 - 1) != 0)) {
        uVar7 = 0xd;
        pcVar6 = "bad page size";
        goto LAB_18014ca62;
      }
    }
    uVar5 = (int)uVar4 - (uint)*(byte *)((longlong)local_88 + 0x14);
    uStack_70 = CONCAT44(uVar5,(undefined4)uStack_70);
    if (uVar5 < 0x1e0) {
      uVar7 = 0x11;
      pcVar6 = "bad reserved size";
    }
    else {
      iVar2 = (int)((ulonglong)(lStack_80 - (longlong)local_88) / uVar4);
      local_68 = CONCAT44(local_68._4_4_,iVar2);
      if (iVar2 != 0) {
        local_90 = 0;
        uStack_40 = 0;
        local_38 = 0;
        local_30 = 0xf;
        local_48 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_140 = &local_60;
        local_130 = &local_90;
        puStack_128 = &local_48;
        local_118 = 
        vftable_std_8_std_E_EV__allocator_X_JAEBV__vector_Z_std_filesystem_AEBVpath_34_YA_AUDatabase_Features_Sqlite__2__Read_V_lambda_1_____Func_impl_no_alloc
        ;
        uStack_138._0_4_ = SUB84(param_1,0);
        uStack_138._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_108 = (undefined4)uStack_138;
        uStack_104 = uStack_138._4_4_;
        local_e0 = &local_118;
        uStack_138 = param_1;
        local_110 = local_140;
        local_100 = local_130;
        puStack_f8 = puStack_128;
        FUN_18014bff0(&local_88,1,&local_118);
        if (local_e0 != (undefined ***)0x0) {
          (*(code *)(*local_e0)[4])
                    (local_e0,CONCAT71((int7)((ulonglong)&local_118 >> 8),local_e0 != &local_118));
          local_e0 = (undefined ***)0x0;
        }
        *param_1 = 1;
        if (0 < (longlong)local_90) {
          iVar2 = FUN_18014bc10(&local_48);
          local_98[0] = 0;
          if (-1 < iVar2) {
            local_98[0] = iVar2;
          }
          local_158 = &local_60;
          piStack_150 = local_98;
          local_d8 = 
          vftable_std_8_std_E_EV__allocator_X_JAEBV__vector_Z_std_filesystem_AEBVpath_34_YA_AUDatabase_Features_Sqlite__7__Read_V_lambda_2_____Func_impl_no_alloc
          ;
          local_a0 = &local_d8;
          local_148 = param_1;
          local_c0 = param_1;
          local_d0 = local_158;
          uStack_c8 = piStack_150;
          FUN_18014bff0(&local_88,local_90 & 0xffffffff,&local_d8);
          if (local_a0 != (undefined ***)0x0) {
            (*(code *)(*local_a0)[4])
                      (local_a0,CONCAT71((int7)((ulonglong)&local_d8 >> 8),local_a0 != &local_d8));
            local_a0 = (undefined ***)0x0;
          }
        }
        FUN_18020abf0(&local_60);
        FUN_18020e450(&local_48);
        FUN_18006e960(&local_88);
        return param_1;
      }
      uVar7 = 9;
      pcVar6 = "truncated";
    }
  }
  else {
    uVar7 = 0xe;
    pcVar6 = "not a database";
  }
LAB_18014ca62:
  FUN_180212700(param_1 + 8,pcVar6,uVar7);
LAB_18014ca6b:
  local_178 = 0;
  FUN_18006e960(&local_88);
  return param_1;
}


