// 0x1801151c0  FUN_1801151c0
// size=293 thunk=false
// signature: undefined FUN_1801151c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801151c0(char param_1)

{
  longlong lVar1;
  ULONGLONG UVar2;
  longlong *plVar3;
  char *pcVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  lVar1 = DAT_18040a260;
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if ((((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xfc4) == '\0') && (param_1 != '\0')) && (DAT_18040a389 != '\0')) &&
     ((DAT_18040a378 != 0 && (DAT_18040a260 != 0)))) {
    UVar2 = GetTickCount64();
    if (UVar2 - lVar1 < 0x1f5) {
      if (DAT_1803fa608 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(DAT_1803fa608 + 4);
      }
      if (DAT_1803e8848 != iVar5) {
        local_28 = 0x93fd561a96ab0c67;
        local_20 = 0xb900ad038caed4bd;
        plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
        plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_38,&local_20);
        pcVar4 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
        if (*pcVar4 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


