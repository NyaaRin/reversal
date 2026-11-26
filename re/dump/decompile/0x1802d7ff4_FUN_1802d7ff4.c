// 0x1802d7ff4  FUN_1802d7ff4
// size=205 thunk=false
// signature: undefined FUN_1802d7ff4()
// status: ok


void FUN_1802d7ff4(DWORD param_1,longlong *param_2)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  int iVar4;
  DWORD local_res18 [2];
  
  DVar2 = 0;
  local_res18[0] = 0;
  iVar4 = 0;
  do {
    if (DVar2 != 0) break;
    if (iVar4 == 0) {
      local_res18[0] = 0x409;
LAB_1802d805b:
      DVar2 = FormatMessageA(0x1300,(LPCVOID)0x0,param_1,local_res18[0],(LPSTR)param_2,0,
                             (va_list *)0x0);
    }
    else {
      if (iVar4 != 1) {
        local_res18[0] = 0;
        goto LAB_1802d805b;
      }
      iVar1 = GetLocaleInfoEx(L"!x-sys-default-locale",0x20000001,(LPWSTR)local_res18,2);
      if (iVar1 != 0) goto LAB_1802d805b;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  uVar3 = (ulonglong)DVar2;
  if (DVar2 != 0) {
    do {
      if ((&DAT_18030faa0)[*(byte *)(*param_2 + -1 + uVar3)] == '\0') {
        return;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


