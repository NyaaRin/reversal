// 0x1800ef850  FUN_1800ef850
// size=855 thunk=false
// signature: undefined FUN_1800ef850()
// status: ok


undefined8 FUN_1800ef850(int param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  HMODULE pHVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  plVar4 = (longlong *)FUN_1800ebf80();
  if ((plVar4 == (longlong *)0x0) || (lVar1 = plVar4[1], lVar1 == 0)) {
    return 0;
  }
  if (DAT_1803fa5e8 == lVar1) {
    return 1;
  }
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar5 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
  }
  uVar6 = (*DAT_1803fcfa0)(lVar1);
  cVar3 = FUN_180023720(plVar4);
  if (cVar3 == '\0') {
    lVar1 = plVar4[1];
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar6 & 0xffffffff);
    return 0;
  }
  FUN_1800ebff0(plVar4);
  FUN_180047bf0(plVar4);
  FUN_180058b00(plVar4);
  FUN_1800594e0(plVar4);
  FUN_18005e350(plVar4);
  FUN_18003bb10(plVar4);
  FUN_180041dc0(plVar4);
  FUN_180069950(plVar4);
  FUN_180054350(plVar4);
  FUN_1800e3750(plVar4);
  FUN_18004a530(plVar4);
  FUN_1800525b0(plVar4);
  lVar1 = plVar4[1];
  if (lVar1 != 0) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
    }
    uVar7 = (*DAT_1803fcfa0)(lVar1);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUAHOOKS] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*plVar4 + 0x100))(plVar4,FUN_180057f20);
      (*pcVar2)(lVar1,0xfffffffe,"DrawModelExecute");
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar7 & 0xffffffff);
      FUN_180014410("[LUAHOOKS] DrawModelExecute registered\n");
      goto LAB_1800efaaa;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar7 & 0xffffffff);
  }
LAB_1800efaaa:
  FUN_1800e8340(plVar4);
  lVar1 = plVar4[1];
  DAT_1803ff978 = FUN_1800f0fa0;
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar5 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
  }
  (*DAT_180425540)(lVar1,uVar6 & 0xffffffff);
  DAT_1803fa5e8 = plVar4[1];
  if (param_1 == 0) {
    FUN_180014410("[LUAEDITOR] %s Lua state ready\n","Client/shared");
    return 1;
  }
  if (param_1 == 1) {
    FUN_180014410("[LUAEDITOR] %s Lua state ready\n","Server");
    return 1;
  }
  if (param_1 == 2) {
    FUN_180014410("[LUAEDITOR] %s Lua state ready\n",&DAT_18034f378);
    return 1;
  }
  FUN_180014410("[LUAEDITOR] %s Lua state ready\n","Unknown");
  return 1;
}


