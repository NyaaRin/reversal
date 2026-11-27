// 0x1800ea630  FUN_1800ea630
// size=354 thunk=false
// signature: undefined FUN_1800ea630()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800ea630(undefined8 *param_1,LPCWSTR param_2)

{
  int cbMultiByte;
  LPSTR lpMultiByteStr;
  LPCWSTR lpWideCharStr;
  undefined1 auStackY_98 [32];
  CHAR local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStackY_98;
  if (*(longlong *)(param_2 + 8) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    lpWideCharStr = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      lpWideCharStr = *(LPCWSTR *)param_2;
    }
    cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                     );
    if (cbMultiByte < 1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_18020ea80(&local_48,(longlong)(cbMultiByte + -1),0);
      lpMultiByteStr = &local_48;
      if (0xf < uStack_30) {
        lpMultiByteStr = (LPSTR)CONCAT71(uStack_47,local_48);
      }
      if (7 < *(ulonglong *)(param_2 + 0xc)) {
        param_2 = *(LPCWSTR *)param_2;
      }
      WideCharToMultiByte(0xfde9,0,param_2,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      *param_1 = CONCAT71(uStack_47,local_48);
      param_1[1] = uStack_40;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
      local_38 = _DAT_1803814b0;
      uStack_30 = _UNK_1803814b8;
      local_48 = '\0';
      FUN_18020e450(&local_48);
    }
  }
  return param_1;
}


