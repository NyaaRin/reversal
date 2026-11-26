// 0x1802d2b60  FUN_1802d2b60
// size=1074 thunk=false
// signature: undefined FUN_1802d2b60()
// status: ok


char * FUN_1802d2b60(int param_1)

{
  longlong lVar1;
  char *pcVar2;
  
  switch(param_1) {
  case 0:
    return "None";
  case 1:
    return "Mouse1";
  case 2:
    return "Mouse2";
  case 4:
    return "Mouse3";
  case 5:
    return "Mouse4";
  case 6:
    return "Mouse5";
  case 8:
    return "Backspace";
  case 9:
    return "Tab";
  case 0xc:
    return "Num5";
  case 0xd:
    return "Enter";
  case 0x10:
    return "Shift";
  case 0x11:
    return "Ctrl";
  case 0x12:
    return "Alt";
  case 0x13:
    return "Pause";
  case 0x14:
    return "Caps";
  case 0x1b:
    return "Esc";
  case 0x20:
    return "Space";
  case 0x21:
    return "PgUp";
  case 0x22:
    return "PgDn";
  case 0x23:
    return "End";
  case 0x24:
    return "Home";
  case 0x25:
    return "Left";
  case 0x26:
    return "Up";
  case 0x27:
    return "Right";
  case 0x28:
    return "Down";
  case 0x2c:
    return "PrtScr";
  case 0x2d:
    return "Ins";
  case 0x2e:
    return "Del";
  case 0x5b:
    return "LWin";
  case 0x5c:
    return "RWin";
  case 0x5d:
    return "Menu";
  case 0x5f:
    return "Sleep";
  case 0x6a:
    return "Num*";
  case 0x6b:
    return "Num+";
  case 0x6c:
    return "Num,";
  case 0x6d:
    return "Num-";
  case 0x6e:
    return "Num.";
  case 0x6f:
    return "Num/";
  case 0x90:
    return "NumLock";
  case 0x91:
    return "ScrLock";
  case 0xa0:
    return "LShift";
  case 0xa1:
    return "RShift";
  case 0xa2:
    return "LCtrl";
  case 0xa3:
    return "RCtrl";
  case 0xa4:
    return "LAlt";
  case 0xa5:
    return "RAlt";
  case 0xa6:
    return "Back";
  case 0xa7:
    return "Forward";
  case 0xa8:
    return "Refresh";
  case 0xac:
    return "WWW";
  case 0xad:
    return "Mute";
  case 0xae:
    return "Vol-";
  case 0xaf:
    return "Vol+";
  case 0xb0:
    return "Next";
  case 0xb1:
    return "Prev";
  case 0xb2:
    return "Stop";
  case 0xb3:
    return "Play";
  case 0xba:
    return ";";
  case 0xbb:
    return "=";
  case 0xbc:
    return ",";
  case 0xbd:
    return "-";
  case 0xbe:
    return ".";
  case 0xbf:
    return "/";
  case 0xc0:
    return "`";
  case 0xdb:
    return "[";
  case 0xdc:
    return "\\";
  case 0xdd:
    return "]";
  case 0xde:
    return "\'";
  case 0xdf:
    return "OEM8";
  case 0xe2:
    return "<>";
  }
  if ((0x19 < param_1 - 0x41U) && (9 < param_1 - 0x30U)) {
    if (param_1 - 0x70U < 0x18) {
      param_1 = param_1 + -0x6f;
      pcVar2 = "F%d";
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    }
    else {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (param_1 - 0x60U < 10) {
        param_1 = param_1 + -0x60;
        pcVar2 = "Num%d";
      }
      else {
        pcVar2 = "0x%02X";
      }
    }
    FUN_180012ac0((char *)(lVar1 + 0x3a88),0x20,pcVar2,param_1);
    return (char *)(lVar1 + 0x3a88);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar2 = (char *)(lVar1 + 0x3a88);
  *pcVar2 = (char)param_1;
  *(undefined1 *)(lVar1 + 0x3a89) = 0;
  return pcVar2;
}


