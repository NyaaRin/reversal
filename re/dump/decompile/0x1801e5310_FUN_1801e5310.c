// 0x1801e5310  FUN_1801e5310
// size=503 thunk=false
// signature: undefined FUN_1801e5310()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e5310(void)

{
  int Y;
  tagPOINT tVar1;
  char cVar2;
  SHORT SVar3;
  BOOL BVar4;
  tagPOINT *ptVar5;
  tagPOINT *ptVar6;
  HCURSOR hCursor;
  tagPOINT *ptVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [32];
  tagPOINT local_38;
  tagPOINT local_30;
  tagPOINT local_28;
  tagRECT local_20;
  ulonglong local_10;
  int X;
  
  tVar1 = DAT_1803fe400;
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  cVar2 = DAT_1803fa545;
  if ((DAT_1803fa545 != '\0') || (DAT_1804258d5 == '\0')) goto LAB_1801e542e;
  local_38 = DAT_1803fe400;
  local_20.left = 0;
  local_20.top = 0;
  local_20.right = 0;
  local_20.bottom = 0;
  if ((DAT_1803fa618 == (HWND)0x0) || (BVar4 = GetClientRect(DAT_1803fa618,&local_20), BVar4 == 0))
  {
LAB_1801e5417:
    Y = local_38.y;
    X = local_38.x;
  }
  else {
    local_28.x = local_20.left;
    local_28.y = local_20.top;
    local_30.x = local_20.right;
    local_30.y = local_20.bottom;
    ClientToScreen(DAT_1803fa618,&local_28);
    ClientToScreen(DAT_1803fa618,&local_30);
    if ((local_30.x <= local_28.x) || (local_30.y <= local_28.y)) goto LAB_1801e5417;
    local_30.x = local_30.x + -1;
    ptVar7 = &local_28;
    if (local_28.x <= tVar1.x) {
      ptVar7 = &local_38;
    }
    ptVar5 = &local_30;
    if (tVar1.x <= local_30.x) {
      ptVar5 = ptVar7;
    }
    ptVar7 = &local_28;
    if (local_28.y <= local_38.y) {
      ptVar7 = &local_38;
    }
    local_38.x = ptVar5->x;
    local_30.x = local_30.y + -1;
    ptVar6 = &local_30;
    if (local_38.y <= local_30.y + -1) {
      ptVar6 = (tagPOINT *)&ptVar7->y;
    }
    Y = ptVar6->x;
    X = ptVar5->x;
  }
  SetCursorPos(X,Y);
  cVar2 = DAT_1803fa545;
LAB_1801e542e:
  DAT_1803fa545 = cVar2 == '\0';
  (**(code **)(*DAT_1803fa5a8 + 0x58))(DAT_1803fa5a8,cVar2 != '\0');
  if (DAT_1803fa545 == '\0') {
    FUN_180024860();
  }
  else {
    uVar9 = 1;
    do {
      SVar3 = GetAsyncKeyState((int)uVar9);
      uVar8 = (int)uVar9 + 1;
      (&DAT_180425430)[uVar9] = (byte)((ushort)SVar3 >> 0xf);
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < 0xff);
  }
  if (DAT_1803fa545 != '\0') {
    hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    SetCursor(hCursor);
    if (DAT_1803fa545 != '\0') {
      return;
    }
  }
  BVar4 = GetCursorPos(&DAT_1803fe400);
  DAT_1804258d5 = BVar4 != 0;
  (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_28,&local_30);
  SetCursorPos(local_28.x >> 1,local_30.x >> 1);
  return;
}


