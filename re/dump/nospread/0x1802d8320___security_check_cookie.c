// 1802d8320  __security_check_cookie
// signature: void __cdecl __security_check_cookie(uintptr_t _StackCookie)
// status: ok


/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  code *pcVar1;
  
  if ((_StackCookie == DAT_1803da4c0) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}


