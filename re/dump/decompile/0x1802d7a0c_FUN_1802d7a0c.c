// 0x1802d7a0c  FUN_1802d7a0c
// size=818 thunk=false
// signature: undefined FUN_1802d7a0c()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD FUN_1802d7a0c(LPCWSTR param_1,ulonglong *param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  uint local_2b0 [2];
  ulonglong local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  DWORD DStack_298;
  DWORD local_294;
  uint local_290;
  _WIN32_FIND_DATAW local_288;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_2d8;
  uVar4 = param_3 & 0xfffffffe;
  if (((param_3 & 1) != 0) && ((param_3 & 4) != 0)) {
    return 0x57;
  }
  if ((((param_3 & 2) != 0) && (param_4 != 0xffffffff)) &&
     (((param_4 & 0x400) == 0 || ((param_3 & 1) == 0)))) {
    uVar4 = param_3 & 0xfffffffc;
    *(uint *)(param_2 + 2) = param_4;
  }
  if (uVar4 != 0) {
    if (((uVar4 & 0x2a) != 0) &&
       (((param_4 == 0xffffffff || ((param_4 & 0x400) == 0)) || ((param_3 & 1) == 0)))) {
      BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2b0);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (DVar2 != 0x20) {
          return DVar2;
        }
        pvVar3 = FindFirstFileW(param_1,&local_288);
        if (pvVar3 == (HANDLE)0xffffffffffffffff) {
          DVar2 = GetLastError();
          return DVar2;
        }
        FindClose(pvVar3);
        local_29c = local_288.ftLastWriteTime.dwLowDateTime;
        DStack_298 = local_288.ftLastWriteTime.dwHighDateTime;
      }
      else {
        local_288.ftLastWriteTime.dwHighDateTime = DStack_298;
        local_288.ftLastWriteTime.dwLowDateTime = local_29c;
        local_288.dwFileAttributes = local_2b0[0];
        local_288.nFileSizeLow = local_290;
        local_288.nFileSizeHigh = local_294;
      }
      if (((param_3 & 1) == 0) || ((local_288.dwFileAttributes & 0x400) == 0)) {
        *(DWORD *)(param_2 + 2) = local_288.dwFileAttributes;
        param_2[1] = CONCAT44(local_288.nFileSizeHigh,local_288.nFileSizeLow);
        *param_2 = (ulonglong)local_288.ftLastWriteTime & 0xffffffff00000000 | (ulonglong)local_29c;
        uVar5 = uVar4 & 0xffffffd5;
        if (((local_288.dwFileAttributes & 0x400) == 0) && ((uVar4 & 4) != 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          uVar5 = uVar4 & 0xffffffd1;
        }
        uVar4 = uVar5;
        if (uVar4 == 0) {
          return 0;
        }
      }
    }
    DVar2 = __std_fs_open_handle
                      (&local_2b8,param_1,0x80,(((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
    if (DVar2 == 0) {
      pvVar3 = (HANDLE)CONCAT44(uStack_2b4,local_2b8);
      uVar5 = uVar4;
      if ((uVar4 & 0x26) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar3,FileBasicInfo,local_2b0,0x28);
        if (BVar1 == 0) {
          DVar2 = GetLastError();
          if (pvVar3 == (HANDLE)0xffffffffffffffff) {
            return DVar2;
          }
          BVar1 = CloseHandle(pvVar3);
          if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          return DVar2;
        }
        uVar5 = uVar4 & 0xffffffdd;
        *(uint *)(param_2 + 2) = local_290;
        *param_2 = CONCAT44(local_29c,local_2a0);
        if ((uVar4 & 4) != 0) {
          if ((local_290 & 0x400) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          }
          else {
            BVar1 = GetFileInformationByHandleEx(pvVar3,FileAttributeTagInfo,&local_2b8,8);
            if (BVar1 == 0) {
              DVar2 = GetLastError();
              if (pvVar3 == (HANDLE)0xffffffffffffffff) {
                return DVar2;
              }
              BVar1 = CloseHandle(pvVar3);
              if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              return DVar2;
            }
            *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2b4;
          }
          uVar5 = uVar4 & 0xffffffd9;
        }
      }
      if ((uVar5 & 0x18) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar3,FileStandardInfo,local_2b0,0x18);
        if (BVar1 == 0) {
          DVar2 = GetLastError();
          if (pvVar3 == (HANDLE)0xffffffffffffffff) {
            return DVar2;
          }
          BVar1 = CloseHandle(pvVar3);
          if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          return DVar2;
        }
        uVar5 = uVar5 & 0xffffffe7;
        param_2[1] = local_2a8;
        *(undefined4 *)(param_2 + 3) = local_2a0;
      }
      if (uVar5 == 0) {
        if (pvVar3 == (HANDLE)0xffffffffffffffff) {
          return 0;
        }
        BVar1 = CloseHandle(pvVar3);
        if (BVar1 != 0) {
          return 0;
        }
      }
      else if ((pvVar3 == (HANDLE)0xffffffffffffffff) || (BVar1 = CloseHandle(pvVar3), BVar1 != 0))
      {
        return 0x32;
      }
    }
    else {
      if ((HANDLE)CONCAT44(uStack_2b4,local_2b8) == (HANDLE)0xffffffffffffffff) {
        return DVar2;
      }
      BVar1 = CloseHandle((HANDLE)CONCAT44(uStack_2b4,local_2b8));
      if (BVar1 != 0) {
        return DVar2;
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return 0;
}


