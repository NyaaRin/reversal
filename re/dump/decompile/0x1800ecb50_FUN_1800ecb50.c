// 0x1800ecb50  FUN_1800ecb50
// size=1872 thunk=false
// signature: undefined FUN_1800ecb50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800ecb50(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  HMODULE pHVar8;
  ulonglong uVar9;
  INT_PTR IVar10;
  char *pcVar11;
  undefined8 ****ppppuVar12;
  undefined4 *puVar13;
  undefined8 ****ppppuVar14;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 ***local_288;
  undefined2 local_280;
  undefined4 local_27e;
  undefined2 local_27a;
  undefined8 **local_278;
  undefined1 local_270;
  undefined1 local_26f;
  undefined4 local_26e;
  undefined2 local_26a;
  longlong *local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [40];
  longlong local_1d8 [2];
  byte abStack_1c8 [56];
  longlong alStack_190 [25];
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 ***local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined4 local_7e;
  undefined2 local_7a;
  ulonglong local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  if (param_2 != 0) {
    local_48 = 0;
    local_44 = 2;
    puVar13 = &local_48;
    do {
      plVar3 = (longlong *)FUN_1800ebf80(*puVar13);
      local_268 = plVar3;
      if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
        pcVar4 = (char *)(**(code **)(*plVar3 + 0x158))(plVar3,1);
        if (pcVar4 == (char *)0x0) {
          (**(code **)(*plVar3 + 0xf8))(plVar3,0);
          (**(code **)(*plVar3 + 0xe8))(plVar3,"no name given",0);
          return 2;
        }
        local_288 = &local_c8;
        local_c8 = (undefined8 ***)0x0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        sVar5 = strlen(pcVar4);
        FUN_18001d080(&local_c8,pcVar4,sVar5);
        FUN_1800eabc0(local_68);
        if (local_58 != 0) {
          uStack_a0 = 0;
          local_98 = _DAT_1803814b0;
          uStack_90 = _UNK_1803814b8;
          local_a8 = (undefined8 ****)0x0;
          memset(local_1d8,0,0x110);
          puVar6 = (undefined8 *)FUN_1800ea4d0(local_200,local_68);
          local_260 = *puVar6;
          uStack_258 = puVar6[1];
          local_250 = puVar6[2];
          uStack_248 = puVar6[3];
          puVar6[2] = 0;
          puVar6[3] = 7;
          *(undefined2 *)puVar6 = 0;
          uVar7 = FUN_1800eab00(local_220);
          uVar7 = FUN_180066720(local_240,uVar7,&local_260);
          FUN_180202040(local_1d8,uVar7,0x20);
          FUN_18021e290(local_240);
          FUN_18021e290(local_220);
          FUN_18021e290(&local_260);
          FUN_18021e290(local_200);
          uVar7 = uStack_c0;
          if ((abStack_1c8[*(int *)(local_1d8[0] + 4)] & 6) != 0) {
            (**(code **)(*plVar3 + 0xf8))(plVar3,0);
            (**(code **)(*plVar3 + 0xe8))(plVar3,"file not found",0);
            FUN_18006afc0(local_1d8);
            FUN_18020e450(&local_a8);
            FUN_18020e450(local_68);
            return 2;
          }
          local_88 = (undefined8 ****)0x0;
          local_80 = 1;
          local_7f = 0;
          local_278 = *(undefined8 ***)
                       ((longlong)alStack_190 + (longlong)*(int *)(local_1d8[0] + 4));
          local_270 = (undefined8 ***)local_278 == (undefined8 ***)0x0;
          uStack_c0._0_2_ = (ushort)(byte)local_270;
          uVar1 = uStack_c0;
          local_288 = (undefined8 ***)0x0;
          local_280 = 1;
          local_27e = local_7e;
          local_27a = local_7a;
          local_26f = 0;
          uStack_c0._2_4_ = SUB84(uVar7,2);
          local_26e = uStack_c0._2_4_;
          uStack_c0._6_2_ = SUB82(uVar7,6);
          local_26a = uStack_c0._6_2_;
          local_c8 = (undefined8 ***)local_278;
          uStack_c0 = uVar1;
          FUN_180203bb0(&local_a8,&local_278,&local_288);
          FUN_18006afc0(local_1d8);
          FUN_180025df0(&local_88);
          if (DAT_1803fcfa0 == (FARPROC)0x0) {
            pHVar8 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fcfa0 = GetProcAddress(pHVar8,"lua_gettop");
          }
          uVar9 = (*DAT_1803fcfa0)(param_2);
          uVar7 = local_98;
          ppppuVar12 = &local_88;
          if (0xf < local_70) {
            ppppuVar12 = (undefined8 ****)local_88;
          }
          ppppuVar14 = &local_a8;
          if (0xf < uStack_90) {
            ppppuVar14 = (undefined8 ****)local_a8;
          }
          if (DAT_1803feb68 == (FARPROC)0x0) {
            pHVar8 = GetModuleHandleA("lua_shared.dll");
            DAT_1803feb68 = GetProcAddress(pHVar8,"luaL_loadbufferx");
          }
          local_298 = 0;
          IVar10 = (*DAT_1803feb68)(param_2,ppppuVar14,uVar7,ppppuVar12);
          if ((int)IVar10 == 0) {
            FUN_180026890(param_2);
            DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
            iVar2 = FUN_180023180(param_2,0,0);
            if (0 < DAT_1803ff8e8) {
              DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
            }
            if (iVar2 == 0) {
              if (DAT_180425540 == (FARPROC)0x0) {
                pHVar8 = GetModuleHandleA("lua_shared.dll");
                DAT_180425540 = GetProcAddress(pHVar8,"lua_settop");
              }
              (*DAT_180425540)(param_2,uVar9 & 0xffffffff);
              FUN_18020e450(&local_88);
              (**(code **)(*plVar3 + 0xf8))(plVar3,1);
              FUN_18020e450(&local_a8);
              FUN_18020e450(local_68);
              return 1;
            }
            if (DAT_180425fe8 == (FARPROC)0x0) {
              pHVar8 = GetModuleHandleA("lua_shared.dll");
              DAT_180425fe8 = GetProcAddress(pHVar8,"luaL_checklstring");
            }
            pcVar11 = (char *)(*DAT_180425fe8)(param_2,0xffffffff,0);
            pcVar4 = "runtime error";
            if (pcVar11 != (char *)0x0) {
              pcVar4 = pcVar11;
            }
            local_c8 = (undefined8 ****)0x0;
            uStack_c0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            sVar5 = strlen(pcVar4);
            FUN_18001d080(&local_c8,pcVar4,sVar5);
            if (DAT_180425540 == (FARPROC)0x0) {
              pHVar8 = GetModuleHandleA("lua_shared.dll");
              DAT_180425540 = GetProcAddress(pHVar8,"lua_settop");
            }
            (*DAT_180425540)(param_2,uVar9 & 0xffffffff);
            (**(code **)(*plVar3 + 0xf8))(plVar3,0);
            ppppuVar12 = &local_c8;
            if (0xf < uStack_b0) {
              ppppuVar12 = (undefined8 ****)local_c8;
            }
            (**(code **)(*plVar3 + 0xe8))(plVar3,ppppuVar12,0);
          }
          else {
            if (DAT_180425fe8 == (FARPROC)0x0) {
              pHVar8 = GetModuleHandleA("lua_shared.dll");
              DAT_180425fe8 = GetProcAddress(pHVar8,"luaL_checklstring");
            }
            pcVar11 = (char *)(*DAT_180425fe8)(param_2,0xffffffff,0);
            pcVar4 = "compile error";
            if (pcVar11 != (char *)0x0) {
              pcVar4 = pcVar11;
            }
            local_c8 = (undefined8 ****)0x0;
            uStack_c0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            sVar5 = strlen(pcVar4);
            FUN_18001d080(&local_c8,pcVar4,sVar5);
            if (DAT_180425540 == (FARPROC)0x0) {
              pHVar8 = GetModuleHandleA("lua_shared.dll");
              DAT_180425540 = GetProcAddress(pHVar8,"lua_settop");
            }
            (*DAT_180425540)(param_2,uVar9 & 0xffffffff);
            (**(code **)(*plVar3 + 0xf8))(plVar3,0);
            ppppuVar12 = &local_c8;
            if (0xf < uStack_b0) {
              ppppuVar12 = (undefined8 ****)local_c8;
            }
            (**(code **)(*plVar3 + 0xe8))(plVar3,ppppuVar12,0);
          }
          FUN_18020e450(&local_c8);
          FUN_18020e450(&local_88);
          FUN_18020e450(&local_a8);
          FUN_18020e450(local_68);
          return 2;
        }
        (**(code **)(*plVar3 + 0xf8))(plVar3,0);
        (**(code **)(*plVar3 + 0xe8))(plVar3,"bad name",0);
        FUN_18020e450(local_68);
        return 2;
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != local_40);
  }
  return 0;
}


