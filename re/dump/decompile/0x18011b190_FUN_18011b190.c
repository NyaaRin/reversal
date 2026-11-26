// 0x18011b190  FUN_18011b190
// size=771 thunk=false
// signature: undefined FUN_18011b190()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18011b190(byte *param_1)

{
  ulonglong *puVar1;
  DWORD DVar2;
  BOOL BVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  size_t sVar6;
  HANDLE hFile;
  byte *pbVar7;
  LPCSTR ******pppppppCVar8;
  byte *pbVar9;
  undefined8 *******pppppppuVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined1 auStackY_158 [32];
  undefined8 ******local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  DWORD local_d0 [2];
  LPCSTR *****local_c8 [3];
  ulonglong local_b0;
  char local_a8 [40];
  char local_80 [40];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStackY_158;
  uVar4 = FUN_18011aae0();
  uVar5 = uVar4;
  if (*(longlong *)(uVar4 + 0x10) == 0) {
LAB_18011b471:
    return uVar5 & 0xffffffffffffff00;
  }
  puVar1 = (ulonglong *)(param_1 + 0x10);
  uVar5 = *puVar1 - 1;
  if (0x7ffff < uVar5) goto LAB_18011b471;
  uVar5 = 0x14650fb0739d0383;
  uVar12 = 0x14650fb0739d0383;
  pbVar7 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pbVar7 = *(byte **)param_1;
  }
  pbVar9 = pbVar7 + *puVar1;
  for (; pbVar7 != pbVar9; pbVar7 = pbVar7 + 1) {
    uVar12 = (uVar12 ^ *pbVar7) * 0x100000001b3;
  }
  FUN_180012ac0(local_a8,0x28,"loading_%016llx.html",uVar12);
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  sVar6 = strlen(local_a8);
  FUN_18001d080(&local_f0,local_a8,sVar6);
  FUN_1801fc780(local_c8,uVar4,&local_f0);
  FUN_18020e450(&local_f0);
  if (DAT_180423708 != 0) {
    pppppppCVar8 = local_c8;
    if (0xf < local_b0) {
      pppppppCVar8 = (LPCSTR ******)local_c8[0];
    }
    DVar2 = GetFileAttributesA((LPCSTR)pppppppCVar8);
    if (DVar2 != 0xffffffff) {
      DAT_180423700 = GetTickCount64();
      bVar11 = 1;
      goto LAB_18011b462;
    }
  }
  FUN_18011afa0();
  pppppppCVar8 = local_c8;
  if (0xf < local_b0) {
    pppppppCVar8 = (LPCSTR ******)local_c8[0];
  }
  hFile = CreateFileA((LPCSTR)pppppppCVar8,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    DVar2 = GetLastError();
    FUN_180014410("[LOADURL] could not write the page (%lu)\n",DVar2);
    bVar11 = 0;
  }
  else {
    local_d0[0] = 0;
    pbVar7 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pbVar7 = *(byte **)param_1;
    }
    BVar3 = WriteFile(hFile,pbVar7,(DWORD)*puVar1,local_d0,(LPOVERLAPPED)0x0);
    if ((BVar3 == 0) || ((ulonglong)local_d0[0] != *puVar1)) {
      bVar11 = 0;
    }
    else {
      bVar11 = 1;
    }
    CloseHandle(hFile);
    DAT_180423700 = GetTickCount64();
    uVar4 = *puVar1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(byte **)param_1;
    }
    pbVar7 = param_1 + *puVar1;
    for (; param_1 != pbVar7; param_1 = param_1 + 1) {
      uVar5 = (uVar5 ^ *param_1) * 0x100000001b3;
    }
    DAT_180423708 = bVar11;
    FUN_180012ac0(local_80,0x28,"loading_%016llx.html",uVar5);
    local_110 = (undefined8 *******)0x0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    sVar6 = strlen(local_80);
    FUN_18001d080(&local_110,local_80,sVar6);
    pppppppuVar10 = &local_110;
    if (0xf < uStack_f8) {
      pppppppuVar10 = (undefined8 *******)local_110;
    }
    FUN_180014410("[LOADURL] page file written: %s (%zu bytes)\n",pppppppuVar10,uVar4);
    FUN_18020e450(&local_110);
  }
LAB_18011b462:
  FUN_18020e450(local_c8);
  return (ulonglong)bVar11;
}


