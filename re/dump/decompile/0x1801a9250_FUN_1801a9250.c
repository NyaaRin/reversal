// 0x1801a9250  FUN_1801a9250
// size=339 thunk=false
// signature: undefined FUN_1801a9250()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1801a9250(undefined8 *param_1,LPCSTR param_2)

{
  int cchWideChar;
  LPWSTR **lpWideCharStr;
  LPCSTR lpMultiByteStr;
  undefined1 auStackY_88 [32];
  LPWSTR *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStackY_88;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    lpMultiByteStr = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      lpMultiByteStr = *(LPCSTR *)param_2;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,lpMultiByteStr,-1,(LPWSTR)0x0,0);
    if (cchWideChar < 1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 7;
      *(undefined2 *)param_1 = 0;
    }
    else {
      local_48 = (LPWSTR *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      FUN_18021a940(&local_48,0,(longlong)(cchWideChar + -1));
      lpWideCharStr = &local_48;
      if (7 < uStack_30) {
        lpWideCharStr = (LPWSTR **)local_48;
      }
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        param_2 = *(LPCSTR *)param_2;
      }
      MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)lpWideCharStr,cchWideChar);
      *param_1 = local_48;
      param_1[1] = uStack_40;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
      local_38 = _DAT_1803814a0;
      uStack_30 = _UNK_1803814a8;
      local_48 = (LPWSTR *)((ulonglong)local_48 & 0xffffffffffff0000);
      FUN_18021e290(&local_48);
    }
  }
  return param_1;
}


