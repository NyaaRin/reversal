// 0x1802d7790  FUN_1802d7790
// size=218 thunk=false
// signature: undefined FUN_1802d7790()
// status: ok


undefined8 FUN_1802d7790(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_18 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = 0;
  }
  if (uStack_14 == 0x3ec) {
    local_18 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_18 == 0) {
      uStack_14 = GetLastError();
    }
    else {
      uStack_14 = 0;
    }
  }
  return CONCAT44(uStack_14,local_18);
}


