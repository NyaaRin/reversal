// 0x1800ec770  FUN_1800ec770
// size=961 thunk=false
// signature: undefined FUN_1800ec770()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ec770(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  HMODULE pHVar5;
  ulonglong uVar6;
  INT_PTR IVar7;
  char *pcVar8;
  size_t sVar9;
  char *pcVar10;
  undefined8 ****ppppuVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  uint local_88 [2];
  undefined8 ***local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong uStack_68;
  undefined8 ***local_60 [3];
  ulonglong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    local_40 = 0;
    uVar13 = 2;
    local_3c = 2;
    puVar12 = &local_40;
    do {
      plVar3 = (longlong *)FUN_1800ebf80(*puVar12);
      if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
        local_88[0] = 0;
        lVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,1,local_88);
        if ((lVar4 != 0) && (local_88[0] != 0)) {
          FUN_180025df0(local_60);
          if (DAT_1803fcfa0 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
          }
          uVar6 = (*DAT_1803fcfa0)(param_2);
          ppppuVar11 = local_60;
          if (0xf < local_48) {
            ppppuVar11 = (undefined8 ****)local_60[0];
          }
          uVar14 = (ulonglong)local_88[0];
          if (DAT_1803feb68 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_1803feb68 = GetProcAddress(pHVar5,"luaL_loadbufferx");
          }
          local_98 = 0;
          IVar7 = (*DAT_1803feb68)(param_2,lVar4,uVar14,ppppuVar11);
          if ((int)IVar7 == 0) {
            cVar1 = FUN_180026890(param_2);
            if (cVar1 == '\0') {
              FUN_180014410("[LUAEDITOR] RunScript: sandbox not applied\n");
            }
            DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
            iVar2 = FUN_180023180(param_2,0,0);
            if (0 < DAT_1803ff8e8) {
              DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
            }
            if (iVar2 == 0) {
              if (DAT_180425540 == (FARPROC)0x0) {
                pHVar5 = GetModuleHandleA("lua_shared.dll");
                DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
              }
              (*DAT_180425540)(param_2,uVar6 & 0xffffffff);
              (**(code **)(*plVar3 + 0xf8))(plVar3,1);
              uVar13 = 1;
            }
            else {
              if (DAT_180425fe8 == (FARPROC)0x0) {
                pHVar5 = GetModuleHandleA("lua_shared.dll");
                DAT_180425fe8 = GetProcAddress(pHVar5,"luaL_checklstring");
              }
              pcVar8 = (char *)(*DAT_180425fe8)(param_2,0xffffffff,0);
              pcVar10 = "runtime error";
              if (pcVar8 != (char *)0x0) {
                pcVar10 = pcVar8;
              }
              local_80 = (undefined8 ****)0x0;
              uStack_78 = 0;
              local_70 = 0;
              uStack_68 = 0;
              sVar9 = strlen(pcVar10);
              FUN_18001d080(&local_80,pcVar10,sVar9);
              if (DAT_180425540 == (FARPROC)0x0) {
                pHVar5 = GetModuleHandleA("lua_shared.dll");
                DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
              }
              (*DAT_180425540)(param_2,uVar6 & 0xffffffff);
              (**(code **)(*plVar3 + 0xf8))(plVar3,0);
              ppppuVar11 = &local_80;
              if (0xf < uStack_68) {
                ppppuVar11 = (undefined8 ****)local_80;
              }
              (**(code **)(*plVar3 + 0xe8))(plVar3,ppppuVar11,0);
              FUN_18020e450(&local_80);
            }
          }
          else {
            if (DAT_180425fe8 == (FARPROC)0x0) {
              pHVar5 = GetModuleHandleA("lua_shared.dll");
              DAT_180425fe8 = GetProcAddress(pHVar5,"luaL_checklstring");
            }
            pcVar8 = (char *)(*DAT_180425fe8)(param_2,0xffffffff,0);
            (**(code **)(*plVar3 + 0xf8))(plVar3,0);
            pcVar10 = "compile error";
            if (pcVar8 != (char *)0x0) {
              pcVar10 = pcVar8;
            }
            (**(code **)(*plVar3 + 0xe8))(plVar3,pcVar10,0);
            if (DAT_1803faee0 != (code *)0x0) {
              (*DAT_1803faee0)(param_2,(int)uVar6 + 1);
            }
          }
          FUN_18020e450(local_60);
          return uVar13;
        }
        (**(code **)(*plVar3 + 0xf8))(plVar3,0);
        (**(code **)(*plVar3 + 0xe8))(plVar3,"empty code",0);
        return 2;
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != local_38);
  }
  return 0;
}


