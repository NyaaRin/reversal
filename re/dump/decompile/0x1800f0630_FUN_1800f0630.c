// 0x1800f0630  FUN_1800f0630
// size=1147 thunk=false
// signature: undefined FUN_1800f0630()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800f0630(int param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  HMODULE pHVar6;
  INT_PTR IVar7;
  undefined8 *puVar8;
  char *pcVar9;
  size_t sVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined8 ****ppppuVar13;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined2 local_f6;
  undefined4 local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  undefined4 local_e4;
  longlong local_e0;
  undefined4 local_d7;
  undefined2 local_d3;
  undefined1 local_d1;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [24];
  undefined8 ***local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  local_f4 = 0;
  lVar5 = FUN_1800ebf80();
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 8), lVar5 == 0)) {
    if (param_1 == 0) {
      pcVar9 = "Client/shared";
    }
    else if (param_1 == 1) {
      pcVar9 = "Server";
    }
    else if (param_1 == 2) {
      pcVar9 = "Menu";
    }
    else {
      pcVar9 = "Unknown";
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    sVar10 = strlen(pcVar9);
    FUN_18001d080(&local_a0,pcVar9,sVar10);
    puVar11 = (undefined4 *)FUN_18021aef0(&local_a0," Lua state is not ready",0x17);
    local_c0 = *puVar11;
    uStack_bc = puVar11[1];
    uStack_b8 = puVar11[2];
    uStack_b4 = puVar11[3];
    local_b0 = *(undefined8 *)(puVar11 + 4);
    uStack_a8 = *(undefined8 *)(puVar11 + 6);
    *(undefined1 *)puVar11 = 0;
    *(undefined8 *)(puVar11 + 4) = 0;
    *(undefined8 *)(puVar11 + 6) = 0xf;
    local_f4 = 1;
    FUN_18020e8a0(param_3,&local_c0);
    local_f4 = 0;
    FUN_18020e450(&local_c0);
    uVar12 = FUN_18020e450(&local_a0);
    uVar12 = uVar12 & 0xffffffffffffff00;
  }
  else {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
    }
    IVar7 = (*DAT_1803fcfa0)(lVar5);
    local_e8 = (uint)IVar7;
    local_e0 = DAT_1803fa330;
    local_f8 = DAT_1803fa338;
    local_e4 = DAT_1803fa339;
    local_f6 = DAT_1803fa33d;
    local_f7 = DAT_1803fa33f;
    DAT_1803fa338 = 1;
    DAT_1803fa339 = local_d7;
    DAT_1803fa33d = local_d3;
    DAT_1803fa33f = local_d1;
    DAT_1803fa330 = lVar5;
    puVar8 = (undefined8 *)FUN_1800efbb0(local_80,lVar5);
    uVar2 = *puVar8;
    local_ec = *(uint *)(puVar8 + 1);
    local_f0 = *(uint *)((longlong)puVar8 + 0xc);
    cVar1 = *(char *)(puVar8 + 2);
    local_d0 = 0;
    uStack_c8 = 0;
    FUN_180025890(&local_d0,lVar5);
    FUN_180025df0(local_68);
    ppppuVar13 = local_68;
    if (0xf < local_50) {
      ppppuVar13 = (undefined8 ****)local_68[0];
    }
    uVar3 = param_2[2];
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    if (DAT_1803feb68 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_1803feb68 = GetProcAddress(pHVar6,"luaL_loadbufferx");
    }
    local_108 = 0;
    IVar7 = (*DAT_1803feb68)(lVar5,param_2,uVar3,ppppuVar13);
    if (((int)IVar7 == 0) && (iVar4 = FUN_180023180(lVar5,0,1), iVar4 == 0)) {
      uVar12 = 1;
      if (DAT_1803fe490 == (FARPROC)0x0) {
        pHVar6 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(pHVar6,"lua_type");
      }
      IVar7 = (*DAT_1803fe490)(lVar5,0xffffffff);
      if ((int)IVar7 == 4) {
        if (DAT_180425fe8 == (FARPROC)0x0) {
          pHVar6 = GetModuleHandleA("lua_shared.dll");
          DAT_180425fe8 = GetProcAddress(pHVar6,"luaL_checklstring");
        }
        pcVar9 = (char *)(*DAT_180425fe8)(lVar5,0xffffffff,0);
        sVar10 = strlen(pcVar9);
        FUN_180212700(param_3,pcVar9,sVar10);
      }
    }
    else {
      if (DAT_180425fe8 == (FARPROC)0x0) {
        pHVar6 = GetModuleHandleA("lua_shared.dll");
        DAT_180425fe8 = GetProcAddress(pHVar6,"luaL_checklstring");
      }
      pcVar9 = (char *)(*DAT_180425fe8)(lVar5,0xffffffff,0);
      sVar10 = strlen(pcVar9);
      FUN_180212700(param_3,pcVar9,sVar10);
      uVar12 = 0;
    }
    if (cVar1 != '\0') {
      if ((DAT_1805c3910 & 1) == 0) {
        DAT_1805c3910 = DAT_1805c3910 | 1;
        pHVar6 = GetModuleHandleA("lua_shared.dll");
        DAT_180427608 = GetProcAddress(pHVar6,"lua_sethook");
      }
      if (DAT_180427608 != (FARPROC)0x0) {
        (*DAT_180427608)(lVar5,uVar2,(ulonglong)local_ec,(ulonglong)local_f0);
      }
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar6,"lua_settop");
    }
    (*DAT_180425540)(lVar5,(ulonglong)local_e8);
    DAT_1803fa330 = local_e0;
    DAT_1803fa338 = local_f8;
    DAT_1803fa339 = local_e4;
    DAT_1803fa33d = local_f6;
    DAT_1803fa33f = local_f7;
    FUN_18020e450(local_68);
    FUN_180025a90(&local_d0);
  }
  return uVar12;
}


