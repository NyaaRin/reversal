// 0x18011cb30  FUN_18011cb30
// size=1035 thunk=false
// signature: undefined FUN_18011cb30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18011cb30(longlong param_1,undefined8 *param_2,char param_3,int param_4,undefined8 param_5,
             undefined8 param_6,undefined8 *******param_7)

{
  bool bVar1;
  bool bVar2;
  BOOL BVar3;
  undefined8 *******pppppppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  LPCWSTR lpFileName;
  HANDLE hFile;
  longlong lVar8;
  undefined1 auStackY_128 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  DWORD local_98 [2];
  undefined8 ******local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  LARGE_INTEGER local_70;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStackY_128;
  bVar2 = false;
  param_7[2] = (undefined8 ******)0x0;
  pppppppuVar4 = param_7;
  if ((undefined8 ******)0xf < param_7[3]) {
    pppppppuVar4 = (undefined8 *******)*param_7;
  }
  *(undefined1 *)pppppppuVar4 = 0;
  *(undefined2 *)(param_1 + 0x91) = 0;
  if (param_3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2,&DAT_18033e5ea,0);
    return param_2;
  }
  if (param_4 == 2) {
    local_70.QuadPart = (LONGLONG)local_b8;
    uVar5 = FUN_18016d4c0(local_b8,param_5);
    FUN_18011a5c0(param_2,uVar5);
    if (param_2[2] == 0) {
      return param_2;
    }
    if (0x200 < (ulonglong)param_2[2]) {
      param_2[2] = 0x200;
      puVar6 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar6 = (undefined8 *)*param_2;
      }
      *(undefined1 *)(puVar6 + 0x40) = 0;
    }
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    if (((2 < (ulonglong)param_2[2]) &&
        (lVar8 = param_2[2] + (longlong)puVar6,
        lVar7 = thunk_FUN_1802d6b60(puVar6,lVar8,&DAT_180351614,3), lVar7 != lVar8)) &&
       (lVar7 - (longlong)puVar6 != -1)) {
      return param_2;
    }
    if (7 < 0x7fffffffffffffff - param_2[2]) {
      FUN_18020e930(local_68);
      FUN_18020e8a0(param_2,local_68);
      FUN_18020e450(local_68);
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0xf;
  local_90 = (undefined8 *******)0x0;
  if (param_4 == 1) {
    local_70.QuadPart = (LONGLONG)local_d8;
    uVar5 = FUN_18016d4c0(local_d8,param_6);
    FUN_18011a5c0(local_68,uVar5);
    if (local_58 == 0) {
LAB_18011ce2d:
      bVar1 = true;
    }
    else {
      lpFileName = (LPCWSTR)FUN_18011a910(local_d8,local_68);
      bVar2 = true;
      if (7 < *(ulonglong *)(lpFileName + 0xc)) {
        lpFileName = *(LPCWSTR *)lpFileName;
      }
      hFile = CreateFileW(lpFileName,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (hFile == (HANDLE)0xffffffffffffffff) goto LAB_18011ce2d;
      local_70.QuadPart = 0;
      BVar3 = GetFileSizeEx(hFile,&local_70);
      if ((BVar3 == 0) || ((undefined1 *)0x1ffffff < (undefined1 *)(local_70.QuadPart - 1U))) {
        CloseHandle(hFile);
        goto LAB_18011ce2d;
      }
      FUN_18020e770(&local_90);
      local_98[0] = 0;
      pppppppuVar4 = &local_90;
      if (0xf < local_78) {
        pppppppuVar4 = (undefined8 *******)local_90;
      }
      BVar3 = ReadFile(hFile,pppppppuVar4,(DWORD)local_80,local_98,(LPOVERLAPPED)0x0);
      if ((BVar3 == 0) || (local_98[0] != local_80)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      CloseHandle(hFile);
      if (!bVar1) goto LAB_18011ce2d;
      bVar1 = false;
    }
    if (bVar2) {
      FUN_18021e290(local_d8);
    }
    if (bVar1) {
      FUN_180212700(&local_90,&DAT_180351640,0x584f);
    }
    FUN_18020e450(local_68);
  }
  else {
    FUN_180212700(&local_90,&DAT_180351640,0x584f);
  }
  if (local_80 < 0x80001) {
    lVar8 = FUN_18011aae0();
    if (*(longlong *)(lVar8 + 0x10) != 0) {
      if (param_7 != &local_90) {
        pppppppuVar4 = &local_90;
        if (0xf < local_78) {
          pppppppuVar4 = (undefined8 *******)local_90;
        }
        FUN_180212700(param_7,pppppppuVar4,local_80);
      }
      FUN_18011ae40(param_2,&local_90);
      goto LAB_18011cefc;
    }
    *(undefined1 *)(param_1 + 0x92) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x91) = 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_18001d080(param_2,&DAT_18033e5ea,0);
LAB_18011cefc:
  FUN_18020e450(&local_90);
  return param_2;
}


