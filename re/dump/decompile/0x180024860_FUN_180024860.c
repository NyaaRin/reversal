// 0x180024860  FUN_180024860
// size=564 thunk=false
// signature: undefined FUN_180024860()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180024860(void)

{
  SHORT SVar1;
  UINT UVar2;
  ulonglong uVar3;
  UINT uCode;
  ulonglong lParam;
  ulonglong wParam;
  undefined1 auStack_48 [32];
  tagPOINT local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if (DAT_1803fa618 != (HWND)0x0) {
    local_28.x = 0;
    local_28.y = 0;
    GetCursorPos(&local_28);
    ScreenToClient(DAT_1803fa618,&local_28);
    uCode = 1;
    lParam = (ulonglong)CONCAT22((undefined2)local_28.y,(undefined2)local_28.x);
LAB_1800248f0:
    do {
      wParam = (ulonglong)(int)uCode;
      if ((&DAT_180425430)[wParam] != '\0') {
        if (0xff < wParam) {
                    /* WARNING: Subroutine does not return */
          FUN_1802d8348();
        }
        (&DAT_180425430)[wParam] = 0;
        SVar1 = GetAsyncKeyState(uCode);
        if (-1 < SVar1) {
          if (uCode == 1) {
            PostMessageW(DAT_1803fa618,0x202,0,lParam);
            uCode = 2;
            goto LAB_1800248f0;
          }
          if (uCode == 2) {
            PostMessageW(DAT_1803fa618,0x205,0,lParam);
            uCode = 3;
            goto LAB_1800248f0;
          }
          if (uCode == 4) {
            PostMessageW(DAT_1803fa618,0x208,0,lParam);
            uCode = 5;
            goto LAB_1800248f0;
          }
          if (uCode == 5) {
            PostMessageW(DAT_1803fa618,0x20c,0x10000,lParam);
            uCode = 6;
            goto LAB_1800248f0;
          }
          if (uCode == 6) {
            PostMessageW(DAT_1803fa618,0x20c,0x20000,lParam);
            uCode = 7;
            goto LAB_1800248f0;
          }
          UVar2 = MapVirtualKeyW(uCode,0);
          if (UVar2 != 0) {
            switch(uCode) {
            case 3:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x6f:
            case 0x90:
            case 0xa3:
            case 0xa5:
              uVar3 = 0xc1000001;
              break;
            default:
              uVar3 = 0xc0000001;
            }
            PostMessageW(DAT_1803fa618,0x101,wParam,(ulonglong)(UVar2 & 0xff) << 0x10 | uVar3);
          }
        }
      }
      uCode = uCode + 1;
    } while ((int)uCode < 0xff);
  }
  return;
}


