// 0x180040ea0  FUN_180040ea0
// size=1286 thunk=false
// signature: undefined FUN_180040ea0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180040ea0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  HMODULE pHVar11;
  INT_PTR IVar12;
  uint uVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  uint local_98;
  undefined8 ***local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 ***local_70 [3];
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  plVar9 = (longlong *)FUN_180039770();
  if ((plVar9 == (longlong *)0x0) || (plVar9[1] != param_2)) {
    return 0;
  }
  uVar15 = 1;
  dVar4 = (double)(**(code **)(*plVar9 + 0x160))(plVar9,1);
  uVar13 = (uint)dVar4;
  if ((((((int)uVar13 < 1) || (uVar10 = (ulonglong)(uVar13 & 0xf), 7 < (uVar13 & 0xf))) ||
       ((&DAT_1803e75c0)[uVar10 * 0x30] == '\0')) ||
      ((*(uint *)(&DAT_1803e75c4 + uVar10 * 0x30) != uVar13 >> 4 ||
       ((&DAT_1803e75d0)[uVar10 * 6] == 0)))) || ((&DAT_1803e75d8)[uVar10 * 6] == 0)) {
LAB_180041371:
    (**(code **)(*plVar9 + 0xf8))(plVar9,0);
    return 1;
  }
  (**(code **)(*plVar9 + 0x98))(plVar9,2,6);
  if ((((&DAT_1803e75d8)[uVar10 * 6] == 0) || (DAT_1803fb038 == (code *)0x0)) ||
     (iVar6 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar10 * 6],6), iVar6 == 0)) goto LAB_180041371;
  lVar1 = *plVar9;
  if (*(int *)(&DAT_1803e75c8 + uVar10 * 0x30) == 0) {
    (**(code **)(lVar1 + 0xf8))(plVar9,0);
    (**(code **)(*plVar9 + 0xe8))
              (plVar9,"cross-state callbacks are not allowed on the client state",0);
    return 2;
  }
  if (0x3f < (ulonglong)(((longlong)DAT_1803eb3e8 - DAT_1803eb3e0 >> 3) * -0x5555555555555555)) {
    (**(code **)(lVar1 + 0xf8))(plVar9,0);
    (**(code **)(*plVar9 + 0xe8))(plVar9,"too many cross-state callbacks -- call RevokeCallbacks",0)
    ;
    return 2;
  }
  (**(code **)(lVar1 + 8))(plVar9,2);
  iVar6 = FUN_18002d7a0(plVar9);
  if (iVar6 == -1) {
    (**(code **)(*plVar9 + 0xf8))(plVar9,0);
    (**(code **)(*plVar9 + 0xe8))(plVar9,"could not hold the callback",0);
    return 2;
  }
  plVar2 = (longlong *)(&DAT_1803e75d0)[uVar10 * 6];
  uVar3 = (&DAT_1803e75d8)[uVar10 * 6];
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar11 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar11,"lua_gettop");
  }
  IVar12 = (*DAT_1803fcfa0)(uVar3);
  local_98 = (uint)IVar12;
  (**(code **)(*plVar2 + 0x30))(plVar2);
  (**(code **)(*plVar2 + 0xf8))(plVar2,1);
  (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,&DAT_180342144);
  (**(code **)(*plVar2 + 0xf0))(plVar2,(double)iVar6);
  (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,&DAT_180342150);
  (**(code **)(*plVar2 + 0x100))(plVar2,FUN_18003b4b0);
  (**(code **)(*plVar2 + 0x28))(plVar2,0xfffffffe,&DAT_18034214c);
  uVar7 = (**(code **)(*plVar2 + 0x118))(plVar2);
  FUN_180025df0(local_70);
  local_90 = local_70;
  if (0xf < local_58) {
    local_90 = local_70[0];
  }
  if (DAT_1803feb68 == (FARPROC)0x0) {
    pHVar11 = GetModuleHandleA("lua_shared.dll");
    DAT_1803feb68 = GetProcAddress(pHVar11,"luaL_loadbufferx");
  }
  local_a8 = &DAT_18033f58c;
  IVar12 = (*DAT_1803feb68)(uVar3,
                            "local t = ...\nreturn function(...)\n\tif not t.live then return end\n\treturn t.fn(t.ref, ...)\nend\n"
                            ,0x5f,local_90);
  iVar8 = (int)IVar12;
  if (iVar8 == 0) {
    (**(code **)(*plVar2 + 0x128))(plVar2,uVar7);
    iVar8 = FUN_180023180(uVar3,1,1);
  }
  if (iVar8 == 0) {
    if (DAT_1803fe490 == (FARPROC)0x0) {
      pHVar11 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fe490 = GetProcAddress(pHVar11,"lua_type");
    }
    IVar12 = (*DAT_1803fe490)(uVar3,0xffffffff);
    puVar5 = DAT_1803eb3e8;
    if ((int)IVar12 == 6) {
      local_88 = *(undefined4 *)(&DAT_1803e75c8 + uVar10 * 0x30);
      uStack_84 = uVar7;
      iStack_80 = iVar6;
      local_78 = param_2;
      if (DAT_1803eb3e8 == DAT_1803eb3f0) {
        FUN_180227cf0();
      }
      else {
        *DAT_1803eb3e8 = local_88;
        puVar5[1] = uVar7;
        puVar5[2] = iVar6;
        puVar5[3] = uStack_7c;
        *(longlong *)(puVar5 + 4) = param_2;
        DAT_1803eb3e8 = DAT_1803eb3e8 + 6;
      }
      iVar6 = *(int *)(&DAT_1803e75c8 + uVar10 * 0x30);
      if (iVar6 == 0) {
        pcVar14 = "client";
      }
      else if (iVar6 == 1) {
        pcVar14 = "server";
      }
      else if (iVar6 == 2) {
        pcVar14 = "menu";
      }
      else {
        pcVar14 = "?";
      }
      FUN_180014410("[LUABRIDGE] cross-state callback planted in %s (%d live)\n",pcVar14,
                    ((longlong)DAT_1803eb3e8 - DAT_1803eb3e0 >> 3) * -0x5555555555555555);
      (**(code **)(*plVar9 + 0xf8))(plVar9,1);
      goto LAB_180041363;
    }
  }
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar11 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar11,"lua_settop");
  }
  (*DAT_180425540)(uVar3,(ulonglong)local_98);
  (**(code **)(*plVar2 + 0x120))(plVar2,uVar7);
  FUN_18002d8c0(plVar9,iVar6);
  (**(code **)(*plVar9 + 0xf8))(plVar9,0);
  (**(code **)(*plVar9 + 0xe8))(plVar9,"could not build the cross-state closure",0);
  uVar15 = 2;
LAB_180041363:
  FUN_18020e450(local_70);
  return uVar15;
}


