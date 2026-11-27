// 0x18014f450  FUN_18014f450
// size=806 thunk=false
// signature: undefined FUN_18014f450()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014f450(undefined8 param_1)

{
  undefined8 *puVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  size_t sVar5;
  uint *puVar6;
  undefined8 uVar7;
  short *psVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  wchar_t **ppwVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_268 [32];
  int local_248;
  undefined8 ***local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  wchar_t *local_1f0 [3];
  wchar_t *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [32];
  undefined8 ***local_178;
  undefined8 uStack_170;
  longlong local_168;
  ulonglong local_160;
  undefined8 ***local_158 [2];
  longlong local_148;
  ulonglong local_140;
  char local_138 [224];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_268;
  iVar13 = 0;
  local_238 = 0;
  local_1f0[0] = L"sv.db";
  local_1f0[1] = L"cl.db";
  local_1f0[2] = L"mn.db";
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0xf;
  local_178 = (undefined8 ****)0x0;
  ppwVar11 = local_1f0;
  iVar14 = iVar13;
  do {
    local_1b8 = &local_230;
    sVar5 = wcslen(*ppwVar11);
    local_230 = 0;
    uStack_228 = 0;
    local_220 = 0;
    local_218 = 0;
    FUN_180211510(&local_230,*ppwVar11,sVar5);
    local_238 = 0;
    FUN_180066720(local_158,param_1,&local_230);
    FUN_18021e290(&local_230);
    puVar6 = (uint *)FUN_180067c80(local_1a8,local_158);
    if (*puVar6 < 2) {
      iVar14 = iVar14 + 1;
    }
    else {
      ppppuVar10 = local_158;
      if (7 < local_140) {
        ppppuVar10 = (undefined8 ****)local_158[0];
      }
      uVar7 = FUN_1802d7d9c(ppppuVar10);
      if (((char)uVar7 == '\0') || ((int)((ulonglong)uVar7 >> 0x20) != 0)) {
        if (local_168 != 0) {
          FUN_18021aef0(&local_178,&DAT_18033f56c,1);
        }
        ppppuVar10 = local_158;
        if (7 < local_140) {
          ppppuVar10 = (undefined8 ****)local_158[0];
        }
        psVar2 = (short *)((longlong)ppppuVar10 + local_148 * 2);
        psVar12 = psVar2;
        psVar8 = (short *)FUN_180065240(ppppuVar10,psVar2);
        if (psVar8 != psVar2) {
          do {
            psVar4 = psVar12;
            psVar3 = psVar2;
            if ((*psVar8 != 0x5c) && (*psVar8 != 0x2f)) break;
            psVar8 = psVar8 + 1;
          } while (psVar8 != psVar2);
          do {
            psVar12 = psVar4;
            if (psVar8 == psVar3) break;
            psVar3 = psVar12 + -1;
            if ((*psVar3 == 0x5c) || (psVar4 = psVar3, *psVar3 == 0x2f)) break;
          } while( true );
        }
        local_1b0 = &local_210;
        local_210 = 0;
        uStack_208 = 0;
        local_200 = 0;
        local_1f8 = 0;
        FUN_180211510(&local_210,psVar12,(longlong)psVar2 - (longlong)psVar12 >> 1);
        local_238 = 4;
        puVar9 = (undefined8 *)FUN_180065810(&local_210,local_198);
        puVar1 = puVar9 + 2;
        if (0xf < (ulonglong)puVar9[3]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        FUN_18021aef0(&local_178,puVar9,*puVar1);
        FUN_18020e450(local_198);
        local_238 = 0;
        FUN_18021e290(&local_210);
      }
      else {
        iVar13 = iVar13 + 1;
      }
    }
    FUN_18021e290(local_158);
    ppwVar11 = ppwVar11 + 1;
    if (ppwVar11 == &local_1d8) {
      local_248 = iVar14;
      if (local_168 == 0) {
        FUN_180012ac0(local_138,0xe0,"*.db files: %d deleted, %d absent",iVar13);
      }
      else {
        local_240 = &local_178;
        if (0xf < local_160) {
          local_240 = local_178;
        }
        FUN_180012ac0(local_138,0xe0,
                      "*.db files: %d deleted, %d absent; %s held open by the game - emptied via sql, the file needs the game closed"
                      ,iVar13);
      }
      local_1d8 = (wchar_t *)0x0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      sVar5 = strlen(local_138);
      FUN_18001d080(&local_1d8,local_138,sVar5);
      FUN_18014de20(&local_1d8);
      FUN_18020e450(&local_1d8);
      FUN_18020e450(&local_178);
      return;
    }
  } while( true );
}


