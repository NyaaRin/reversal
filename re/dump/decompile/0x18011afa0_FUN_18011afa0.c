// 0x18011afa0  FUN_18011afa0
// size=491 thunk=false
// signature: undefined FUN_18011afa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011afa0(void)

{
  longlong lVar1;
  BOOL BVar2;
  longlong lVar3;
  HANDLE hFindFile;
  size_t sVar4;
  LPCSTR ****pppppCVar5;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  CHAR *local_1e0;
  size_t local_1d8;
  undefined4 local_1c8;
  LPCSTR ***local_1c0 [3];
  ulonglong local_1a8;
  LPCSTR ***local_1a0 [3];
  ulonglong local_188;
  _WIN32_FIND_DATAA local_178;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  local_1c8 = 0;
  lVar3 = FUN_18011aae0();
  if (*(longlong *)(lVar3 + 0x10) != 0) {
    memset(&local_178,0,0x140);
    local_1e8 = *(longlong *)(lVar3 + 0x10);
    if (0x7fffffffffffffffU - local_1e8 < 0xe) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_1d8 = 0xe;
    local_1e0 = "loading_*.html";
    FUN_18020e930(local_1c0);
    local_1c8 = 1;
    pppppCVar5 = local_1c0;
    if (0xf < local_1a8) {
      pppppCVar5 = (LPCSTR ****)local_1c0[0];
    }
    hFindFile = FindFirstFileA((LPCSTR)pppppCVar5,&local_178);
    local_1c8 = 0;
    FUN_18020e450(local_1c0);
    if (hFindFile != (HANDLE)0xffffffffffffffff) {
      do {
        if (((byte)local_178.dwFileAttributes & 0x10) == 0) {
          lVar1 = *(longlong *)(lVar3 + 0x10);
          sVar4 = strlen(local_178.cFileName);
          if (0x7fffffffffffffffU - lVar1 < sVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          local_1e0 = local_178.cFileName;
          local_1e8 = lVar1;
          local_1d8 = sVar4;
          FUN_18020e930(local_1a0);
          local_1c8 = 2;
          pppppCVar5 = local_1a0;
          if (0xf < local_188) {
            pppppCVar5 = (LPCSTR ****)local_1a0[0];
          }
          BVar2 = DeleteFileA((LPCSTR)pppppCVar5);
          local_1c8 = 0;
          FUN_18020e450(local_1a0);
          if (BVar2 != 0) {
            FUN_180014410("[LOADURL] page file removed: %s\n",local_178.cFileName);
          }
        }
        BVar2 = FindNextFileA(hFindFile,&local_178);
      } while (BVar2 != 0);
      FindClose(hFindFile);
    }
    DAT_180423708 = 0;
  }
  return;
}


