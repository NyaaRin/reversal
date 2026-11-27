// 0x18011a3c0  FUN_18011a3c0
// size=427 thunk=false
// signature: undefined FUN_18011a3c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18011a3c0(longlong param_1)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  if ((param_1 == 0) || (lVar3 = FUN_1800b4450(), lVar3 == 0)) {
    return -1;
  }
  if (lVar3 != DAT_1803ffce8) {
    DAT_1803e7480 = -1;
    local_28[0] = 0;
    local_38 = 0;
    DAT_1803ffce8 = lVar3;
    FUN_1800b44d0(lVar3,0,&DAT_1805bb710,local_28);
    iVar5 = local_28[0];
    iVar4 = 0;
    if (0 < local_28[0]) {
      do {
        if ((*(char **)(&DAT_1805bb720 + (longlong)iVar4 * 0x18) != (char *)0x0) &&
           (iVar1 = strcmp(*(char **)(&DAT_1805bb720 + (longlong)iVar4 * 0x18),"m_bInReload"),
           iVar1 == 0)) {
          DAT_1803e7480 = *(int *)(&DAT_1805bb710 + (longlong)iVar4 * 0x18);
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    if (DAT_1803e7480 < 0) {
      FUN_180014410(&DAT_180351580,iVar5);
      iVar1 = 0;
      iVar4 = 0;
      iVar5 = local_28[0];
      if (0 < local_28[0]) {
        do {
          if (0xf < iVar1) {
            return DAT_1803e7480;
          }
          _Str1 = *(char **)(&DAT_1805bb720 + (longlong)iVar4 * 0x18);
          if ((_Str1 != (char *)0x0) && (iVar2 = strncmp(_Str1,"m_b",3), iVar2 == 0)) {
            FUN_180014410("[AutoReload]   +0x%X %s\n",
                          *(undefined4 *)(&DAT_1805bb710 + (longlong)iVar4 * 0x18),_Str1);
            iVar1 = iVar1 + 1;
            iVar5 = local_28[0];
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
    }
    else {
      FUN_180014410("[AutoReload] m_bInReload = +0x%X (weapon prediction datamap, %d fields)\n",
                    DAT_1803e7480,iVar5);
    }
  }
  return DAT_1803e7480;
}


