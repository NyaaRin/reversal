// 0x1800583a0  FUN_1800583a0
// size=1194 thunk=false
// signature: undefined FUN_1800583a0()
// status: ok


undefined8 FUN_1800583a0(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  char *_Str;
  char *_Str_00;
  size_t sVar6;
  char cVar7;
  undefined4 extraout_XMM0_Da;
  char *local_res10;
  char *local_res20;
  
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar4 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar4,"lua_gettop");
  }
  uVar5 = (*DAT_1803fcfa0)(param_1);
  if (param_2 == (longlong *)0x0) {
    FUN_18002db10(param_1,0xffffffff,&DAT_1803445e0);
LAB_1800587fc:
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
    }
    (*DAT_180425540)(param_1,uVar5 & 0xffffffff);
    return 0;
  }
  if ((DAT_1803faf38 == (code *)0x0) || (param_2[1] == 0)) {
    FUN_180023e60(param_2,0);
  }
  else {
    (*DAT_1803faf38)(param_2[1],0xffffd8ee);
  }
  FUN_18002db10(param_1,0xffffffff,&DAT_1803445e0);
  if ((DAT_1803faff8 == (code *)0x0) || (lVar1 = param_2[1], lVar1 == 0)) {
    cVar7 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,5);
  }
  else {
    iVar3 = (*DAT_1803faff8)(lVar1,0xffffffff);
    cVar7 = iVar3 == 5;
  }
  if (cVar7 == '\0') goto LAB_1800587fc;
  FUN_18002db10(param_1,0xffffffff,&DAT_1803445e8);
  if ((DAT_1803faff8 == (code *)0x0) || (lVar1 = param_2[1], lVar1 == 0)) {
    cVar7 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,6);
  }
  else {
    iVar3 = (*DAT_1803faff8)(lVar1,0xffffffff);
    cVar7 = iVar3 == 6;
  }
  if (cVar7 == '\0') goto LAB_1800587fc;
  if (DAT_180423ad0 == (FARPROC)0x0) {
    pHVar4 = GetModuleHandleA("lua_shared.dll");
    DAT_180423ad0 = GetProcAddress(pHVar4,"lua_pushvalue");
  }
  (*DAT_180423ad0)(param_1,1);
  if (DAT_180423ad0 == (FARPROC)0x0) {
    pHVar4 = GetModuleHandleA("lua_shared.dll");
    DAT_180423ad0 = GetProcAddress(pHVar4,"lua_pushvalue");
  }
  (*DAT_180423ad0)(param_1,2);
  if (param_3 != '\0') {
    if (DAT_1803ff2a8 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803ff2a8 = GetProcAddress(pHVar4,"lua_pushnil");
    }
    (*DAT_1803ff2a8)(param_1);
    if (DAT_1803ff2a8 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803ff2a8 = GetProcAddress(pHVar4,"lua_pushnil");
    }
    (*DAT_1803ff2a8)(param_1);
    if (DAT_180423ad0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180423ad0 = GetProcAddress(pHVar4,"lua_pushvalue");
    }
    (*DAT_180423ad0)(param_1,3);
    if (DAT_180423ad0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180423ad0 = GetProcAddress(pHVar4,"lua_pushvalue");
    }
    (*DAT_180423ad0)(param_1,2);
    if (DAT_1803faf58 != (code *)0x0) {
      (*DAT_1803faf58)(param_1,FUN_180057ff0,4);
      goto LAB_18005868c;
    }
  }
  if (DAT_180423ad0 == (FARPROC)0x0) {
    pHVar4 = GetModuleHandleA("lua_shared.dll");
    DAT_180423ad0 = GetProcAddress(pHVar4,"lua_pushvalue");
  }
  (*DAT_180423ad0)(param_1,3);
LAB_18005868c:
  FUN_180023180(param_1,3,0);
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar4 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
  }
  (*DAT_180425540)(param_1,uVar5 & 0xffffffff);
  if (param_3 == '\0') {
    return 0;
  }
  cVar7 = (**(code **)(*param_2 + 0x138))(param_2,1,4);
  if (cVar7 == '\0') {
    return 0;
  }
  cVar7 = (**(code **)(*param_2 + 0x138))(param_2,2,4);
  if (cVar7 == '\0') {
    return 0;
  }
  _Str = (char *)(**(code **)(*param_2 + 0xb8))(param_2,1,0);
  local_res20 = _Str;
  _Str_00 = (char *)(**(code **)(*param_2 + 0xb8))(param_2,2,0);
  pcVar2 = DAT_1803eb7d8;
  if (_Str == (char *)0x0) {
    return 0;
  }
  if (_Str_00 == (char *)0x0) {
    return 0;
  }
  if (DAT_1803eb7d8 != DAT_1803eb7e0) {
    local_res10 = DAT_1803eb7d8;
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar2[8] = '\0';
    pcVar2[9] = '\0';
    pcVar2[10] = '\0';
    pcVar2[0xb] = '\0';
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
    pcVar2[0x10] = '\0';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    pcVar2[0x18] = '\0';
    pcVar2[0x19] = '\0';
    pcVar2[0x1a] = '\0';
    pcVar2[0x1b] = '\0';
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    sVar6 = strlen(_Str);
    FUN_18001d080(pcVar2,_Str,sVar6);
    pcVar2[0x20] = '\0';
    pcVar2[0x21] = '\0';
    pcVar2[0x22] = '\0';
    pcVar2[0x23] = '\0';
    pcVar2[0x24] = '\0';
    pcVar2[0x25] = '\0';
    pcVar2[0x26] = '\0';
    pcVar2[0x27] = '\0';
    pcVar2[0x28] = '\0';
    pcVar2[0x29] = '\0';
    pcVar2[0x2a] = '\0';
    pcVar2[0x2b] = '\0';
    pcVar2[0x2c] = '\0';
    pcVar2[0x2d] = '\0';
    pcVar2[0x2e] = '\0';
    pcVar2[0x2f] = '\0';
    pcVar2[0x30] = '\0';
    pcVar2[0x31] = '\0';
    pcVar2[0x32] = '\0';
    pcVar2[0x33] = '\0';
    pcVar2[0x34] = '\0';
    pcVar2[0x35] = '\0';
    pcVar2[0x36] = '\0';
    pcVar2[0x37] = '\0';
    pcVar2[0x38] = '\0';
    pcVar2[0x39] = '\0';
    pcVar2[0x3a] = '\0';
    pcVar2[0x3b] = '\0';
    pcVar2[0x3c] = '\0';
    pcVar2[0x3d] = '\0';
    pcVar2[0x3e] = '\0';
    pcVar2[0x3f] = '\0';
    sVar6 = strlen(_Str_00);
    FUN_18001d080(pcVar2 + 0x20,_Str_00,sVar6);
    DAT_1803eb7d8 = DAT_1803eb7d8 + 0x40;
    return 0;
  }
  local_res10 = _Str_00;
  FUN_18021f750(extraout_XMM0_Da,DAT_1803eb7d8,&local_res20,&local_res10);
  return 0;
}


