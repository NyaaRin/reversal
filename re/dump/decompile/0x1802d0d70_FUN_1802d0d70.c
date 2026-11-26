// 0x1802d0d70  FUN_1802d0d70
// size=377 thunk=false
// signature: undefined FUN_1802d0d70()
// status: ok


undefined8 FUN_1802d0d70(byte *param_1,int param_2)

{
  HCURSOR pHVar1;
  LPCWSTR lpCursorName;
  
  if ((*param_1 & 0x20) != 0) {
    return 0;
  }
  if ((param_2 != -1) && (param_1[0x50] == 0)) {
    lpCursorName = (LPCWSTR)0x7f00;
    switch(param_2) {
    case 1:
      pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f01);
      SetCursor(pHVar1);
      return 1;
    case 2:
      pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f86);
      SetCursor(pHVar1);
      return 1;
    case 3:
      pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f85);
      SetCursor(pHVar1);
      return 1;
    case 4:
      pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f84);
      SetCursor(pHVar1);
      return 1;
    case 5:
      pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f83);
      SetCursor(pHVar1);
      return 1;
    case 6:
      pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f82);
      SetCursor(pHVar1);
      return 1;
    case 7:
      pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f89);
      SetCursor(pHVar1);
      return 1;
    case 8:
      pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f02);
      SetCursor(pHVar1);
      return 1;
    case 9:
      pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f8a);
      SetCursor(pHVar1);
      return 1;
    case 10:
      lpCursorName = (LPCWSTR)0x7f88;
    }
    pHVar1 = LoadCursorW((HINSTANCE)0x0,lpCursorName);
    SetCursor(pHVar1);
    return 1;
  }
  SetCursor((HCURSOR)0x0);
  return 1;
}


