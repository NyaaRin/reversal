// 0x18011aae0  FUN_18011aae0
// size=856 thunk=false
// signature: undefined FUN_18011aae0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_18011aae0(void)

{
  char cVar1;
  DWORD DVar2;
  HMODULE hModule;
  size_t sVar3;
  ulonglong uVar4;
  byte ****ppppbVar5;
  byte *pbVar6;
  byte ****ppppbVar7;
  LPCSTR ***lpFileName;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong _Size;
  byte ****ppppbVar11;
  int iVar12;
  undefined1 auStack_318 [32];
  ulonglong local_2f8;
  char *local_2f0;
  undefined8 local_2e8;
  undefined4 local_2d8;
  LPCSTR **local_2d0 [3];
  ulonglong local_2b8;
  char local_2a8 [256];
  byte ***local_1a8;
  undefined8 uStack_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 ***local_188 [2];
  ulonglong local_178;
  ulonglong local_170;
  CHAR local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_318;
  iVar12 = 0;
  local_2d8 = 0;
  if ((DAT_180427600 & 1) == 0) {
    DAT_180427600 = DAT_180427600 | 1;
    atexit((_func_5014 *)&LAB_180309da0);
  }
  if (DAT_1803ff2d8 == '\0') {
    hModule = GetModuleHandleA("menusystem.dll");
    memset(local_168,0,0x104);
    if ((hModule != (HMODULE)0x0) &&
       (DVar2 = GetModuleFileNameA(hModule,local_168,0x104), DVar2 != 0)) {
      DAT_1803ff2d8 = '\x01';
      local_1a8 = (byte ***)0x0;
      uStack_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      sVar3 = strlen(local_168);
      FUN_18001d080(&local_1a8,local_168,sVar3);
      do {
        uVar9 = local_198;
        ppppbVar11 = (byte ****)local_1a8;
        ppppbVar7 = &local_1a8;
        if (0xf < local_190) {
          ppppbVar7 = (byte ****)local_1a8;
        }
        if (local_198 == 0) goto LAB_18011ae00;
        lVar10 = -1;
        if (local_198 - 1 != -1) {
          lVar10 = local_198 - 1;
        }
        if (lVar10 + 3U < 0x10) {
          memset(local_2a8,0,0x100);
          pbVar6 = &DAT_180356e90;
          do {
            local_2a8[*pbVar6] = '\x01';
            pbVar6 = pbVar6 + 1;
          } while (pbVar6 != &DAT_180356e92);
          ppppbVar5 = (byte ****)((longlong)ppppbVar7 + lVar10);
          cVar1 = local_2a8[*(byte *)ppppbVar5];
          while (cVar1 == '\0') {
            if (ppppbVar5 == ppppbVar7) goto LAB_18011ae00;
            ppppbVar5 = (byte ****)((longlong)ppppbVar5 + -1);
            cVar1 = local_2a8[*(byte *)ppppbVar5];
          }
          uVar4 = (longlong)ppppbVar5 - (longlong)ppppbVar7;
        }
        else {
          uVar4 = thunk_FUN_1802d4e90(ppppbVar7,lVar10 + 1,&DAT_180356e90,2);
          uVar9 = local_198;
          ppppbVar11 = (byte ****)local_1a8;
        }
        if (uVar4 == 0xffffffffffffffff) goto LAB_18011ae00;
        if (uVar9 < uVar4) {
          _Size = uVar4 - uVar9;
          if (local_190 - uVar9 < _Size) {
            local_2f8 = local_2f8 & 0xffffffffffffff00;
            FUN_18022a720(&local_1a8,_Size);
          }
          else {
            ppppbVar7 = &local_1a8;
            if (0xf < local_190) {
              ppppbVar7 = ppppbVar11;
            }
            local_198 = uVar4;
            memset((byte *)((longlong)ppppbVar7 + uVar9),0,_Size);
            ((byte *)((longlong)ppppbVar7 + uVar9))[_Size] = 0;
          }
        }
        else {
          ppppbVar7 = &local_1a8;
          if (0xf < local_190) {
            ppppbVar7 = ppppbVar11;
          }
          local_198 = uVar4;
          *(byte *)((longlong)ppppbVar7 + uVar4) = 0;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 3);
      FUN_18002cfb0(local_188,&local_1a8,"\\garrysmod\\html\\");
      if (0x7fffffffffffffff - local_178 < 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_2e8 = 0xc;
      local_2f0 = "loading.html";
      local_2f8 = local_178;
      FUN_18020e930(local_2d0);
      local_2d8 = 2;
      lpFileName = local_2d0;
      if (0xf < local_2b8) {
        lpFileName = (LPCSTR ***)local_2d0[0];
      }
      DVar2 = GetFileAttributesA((LPCSTR)lpFileName);
      local_2d8 = 0;
      FUN_18020e450(local_2d0);
      if (DVar2 != 0xffffffff) {
        ppppuVar8 = local_188;
        if (0xf < local_170) {
          ppppuVar8 = (undefined8 ****)local_188[0];
        }
        FUN_180212700(&DAT_1803e97d8,ppppuVar8,local_178);
      }
      FUN_18020e450(local_188);
LAB_18011ae00:
      FUN_18020e450(&local_1a8);
    }
  }
  return &DAT_1803e97d8;
}


