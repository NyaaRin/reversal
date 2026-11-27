// 0x1802d7654  FUN_1802d7654
// size=313 thunk=false
// signature: undefined FUN_1802d7654()
// status: ok


undefined8 FUN_1802d7654(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  BOOL local_res8 [2];
  int local_28;
  DWORD DStack_24;
  
  if ((param_1 == 0xfde9) || (param_1 == 0xd698)) {
    local_28 = WideCharToMultiByte(param_1,0x80,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
  }
  else {
    local_res8[0] = 0;
    local_28 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   local_res8);
    if (local_res8[0] != 0) {
      local_28 = 0;
      DStack_24 = 0x459;
      goto LAB_1802d7772;
    }
  }
  if (local_28 == 0) {
    DStack_24 = GetLastError();
  }
  else {
    DStack_24 = 0;
  }
  if (DStack_24 == 0x3ec) {
    local_28 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_28 == 0) {
      DStack_24 = GetLastError();
    }
    else {
      DStack_24 = 0;
    }
  }
LAB_1802d7772:
  return CONCAT44(DStack_24,local_28);
}


